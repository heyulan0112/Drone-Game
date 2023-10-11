// Fill out your copyright notice in the Description page of Project Settings.

#include "Drone.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "Input/LyraInputComponent.h"
#include "Player/LyraLocalPlayer.h"
#include "Character/LyraPawnExtensionComponent.h"
#include "Character/LyraPawnData.h"
#include "Input/LyraInputConfig.h"
#include "Engine/StaticMeshActor.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

/* Yulan He: This drone pawn class is deprecated, go to DRDrone class */

// Sets default values
ADrone::ADrone()
{
	PrimaryActorTick.bCanEverTick = true;
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetCapsuleHalfHeight(43.f);
	Capsule->SetCapsuleRadius(43.f);
	RootComponent = Capsule;

	DroneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DroneMesh"));
	DroneMesh->SetupAttachment(GetRootComponent());

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 300.f;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	PawnCamera->SetupAttachment(SpringArm);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	DroneExtComponent = CreateDefaultSubobject<ULyraPawnExtensionComponent>(TEXT("DroneExtComponent"));
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* playerController = Cast<APlayerController>(GetController());
	if (playerController) 
	{
		UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer());
		if (subSystem) 
		{
			// Yulan He: Add mapping context to local player enhance input subsystem
			subSystem->AddMappingContext(DroneMappingContext, 0);
		}
	}
	Capsule->OnComponentHit.AddDynamic(this, &ADrone::OnCapsuleHit);
	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnComponentBeginOverlap);
	Capsule->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnComponentEndOverlap);
}

void ADrone::OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	OnGroundState = true;
	const FString OtherActorName = OtherActor->GetName();
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 30.f, FColor::Red, "Hello world");// OtherActorName);
	}
	
}

// Yulan He: Determine how input affect the game world
void ADrone::MoveForward(const FInputActionValue& value)
{
	const float directionValue = value.Get<float>();
	if (GetController() && (directionValue != 0.f)) 
	{
		FVector forwardVector = GetActorForwardVector();
		UFloatingPawnMovement* FloatingPawnMovement = FindComponentByClass<UFloatingPawnMovement>();
		FloatingPawnMovement->AddInputVector(forwardVector * directionValue * 1000.0);
		ForwardState = true;
	}
	else 
	{
		ForwardState = false;
	}
}

void ADrone::TurnAround(const FInputActionValue& value)
{
	// Yulan He: get the action scale
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f))
	{
		AddControllerYawInput(scaleValue);
	}
}

void ADrone::LookAround(const FInputActionValue& value)
{
	const FVector2D lookAxis = value.Get<FVector2D>();
	if (GetController())
	{
		AddControllerYawInput(lookAxis.X);
		AddControllerPitchInput(lookAxis.Y);
	}
}

void ADrone::UpAndDown(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0.f, controlRotation.Yaw, 0.f);
		const FVector turnDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Z);
		AddMovementInput(turnDirection, scaleValue * 100);
		RisingState = true;
		if (scaleValue > 0.f) 
		{
			RisingState = true;
			LandingState = false;
		}
		else
		{
			RisingState = false;
			LandingState = true;
		}
	}
	else 
	{
		RisingState = false;
		LandingState = false;
	}
}

void ADrone::ShiftLeftAndRight(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0.f, controlRotation.Yaw, 0.f);
		const FVector turnDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(turnDirection, scaleValue * 100);
		DroneMesh->AddRelativeRotation(FRotator(0.f, 0.f, scaleValue * 0.1));
	}
}

void ADrone::Spin(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f))
	{
		DroneMesh->AddRelativeRotation(FRotator(0.0, 0.0, scaleValue));
	}
}

void ADrone::IsShooting(const FInputActionValue& value)
{
	// Yulan He: Toggle the shooting state
	const bool scaleValue = value.Get<bool>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		ShootingState = true;
	}
	else 
	{
		ShootingState = false;
	}
}

void ADrone::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OnGroundState = true;
}

void ADrone::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OnGroundState = false;
}

void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	const APlayerController* PC = GetController<APlayerController>();
	check(PC);
	const ULyraLocalPlayer* LP = Cast<ULyraLocalPlayer>(PC->GetLocalPlayer());
	check(LP);
	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);
	
	if (const ULyraPawnData* PawnData = DroneExtComponent->GetPawnData<ULyraPawnData>())
	{
		UE_LOG(LogTemp, Warning, TEXT("Find LyraPawnData"));
		if (const ULyraInputConfig* InputConfig = PawnData->InputConfig)
		{
			ULyraInputComponent* LyraIC = Cast<ULyraInputComponent>(PlayerInputComponent);
			if (ensureMsgf(LyraIC, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to ULyraInputComponent or a subclass of it.")))
			{
				LyraIC->AddInputMappings(InputConfig, Subsystem);
				FGameplayTag DroneLook_tag = FGameplayTag::RequestGameplayTag("Input.DroneLook");
				FGameplayTag DroneForward_tag = FGameplayTag::RequestGameplayTag("Input.DroneForward");
				FGameplayTag DroneTurn_tag = FGameplayTag::RequestGameplayTag("Input.DroneTurn");
				FGameplayTag DroneSpin_tag = FGameplayTag::RequestGameplayTag("Input.DroneSpin");
				FGameplayTag DroneShiftLeftRight_tag = FGameplayTag::RequestGameplayTag("Input.DroneShiftLeftRight");
				FGameplayTag DroneUpDown_tag = FGameplayTag::RequestGameplayTag("Input.DroneUpDown");
				FGameplayTag DroneShot_tag = FGameplayTag::RequestGameplayTag("Input.DroneShot");
				LyraIC->BindNativeAction(InputConfig, DroneLook_tag, ETriggerEvent::Triggered, this, &ADrone::LookAround, false);
				LyraIC->BindNativeAction(InputConfig, DroneForward_tag, ETriggerEvent::Triggered, this, &ADrone::MoveForward, false);
				LyraIC->BindNativeAction(InputConfig, DroneTurn_tag, ETriggerEvent::Triggered, this, &ADrone::TurnAround, false);
				LyraIC->BindNativeAction(InputConfig, DroneSpin_tag, ETriggerEvent::Triggered, this, &ADrone::Spin, false);
				LyraIC->BindNativeAction(InputConfig, DroneShiftLeftRight_tag, ETriggerEvent::Triggered, this, &ADrone::ShiftLeftAndRight, false);
				LyraIC->BindNativeAction(InputConfig, DroneUpDown_tag, ETriggerEvent::Triggered, this, &ADrone::UpAndDown, false);
				// Bind with a state in state machine
				LyraIC->BindNativeAction(InputConfig, DroneShot_tag, ETriggerEvent::Triggered, this, &ADrone::IsShooting, false);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to Find LyraPawnData"));
	}
	
	// ******
	// WIP - Yulan He
	/*
	If not use Lyra
	UEnhancedInputComponent* enhancedInputCompnent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhancedInputCompnent) {
		enhancedInputCompnent->BindAction(forwardAction, ETriggerEvent::Triggered, this, &ADrone::MoveForward);
		enhancedInputCompnent->BindAction(turnAction, ETriggerEvent::Triggered, this, &ADrone::TurnAround);
		enhancedInputCompnent->BindAction(lookAction, ETriggerEvent::Triggered, this, &ADrone::LookAround);
		enhancedInputCompnent->BindAction(upAction, ETriggerEvent::Triggered, this, &ADrone::UpAndDown);
		enhancedInputCompnent->BindAction(shiftLeftRightAction, ETriggerEvent::Triggered, this, &ADrone::ShiftLeftAndRight);
		enhancedInputCompnent->BindAction(spinAction, ETriggerEvent::Triggered, this, &ADrone::Spin);
		
	}
	*/
	// END WIP
	// ******
}
