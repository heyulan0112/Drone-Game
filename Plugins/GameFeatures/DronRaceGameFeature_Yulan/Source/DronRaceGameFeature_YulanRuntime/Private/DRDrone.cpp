// Fill out your copyright notice in the Description page of Project Settings.
#include "DRDrone.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Player/LyraLocalPlayer.h"
#include "Character/LyraPawnData.h"
#include "Character/LyraPawnExtensionComponent.h"
#include "Input/LyraInputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DRCharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ArrowComponent.h"
#include "NiagaraComponent.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"

ADRDrone::ADRDrone(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UDRCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = false;
	DroneExtComponent = CreateDefaultSubobject<ULyraPawnExtensionComponent>(TEXT("DroneExtComponent"));
	LeftMoveLight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Left Move Light"));
	RightMoveLight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Right Move Light"));
	AttackLight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Attack Light"));
	IdleLight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Idle Light"));
	LeftMoveLight->SetupAttachment(GetMesh());
	RightMoveLight->SetupAttachment(GetMesh());
	AttackLight->SetupAttachment(GetMesh());
	IdleLight->SetupAttachment(GetMesh());
	
	LeftMoveLight->Deactivate();
	RightMoveLight->Deactivate();
	AttackLight->Deactivate();
}

bool ADRDrone::CheckRotation()
{
	FRotator CurrentRotation = this->GetActorRotation();
	FRotator InitialRotation = FRotator(0.0, RoationParam, 0.0);
	return (CurrentRotation - InitialRotation).IsNearlyZero();
}

void ADRDrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADRDrone::BeginPlay()
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
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &ThisClass::OnCapsuleHit);
	Tags.Add(FName("DroneCharacter"));
	World = GetWorld();
}

void ADRDrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
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
				LyraIC->BindNativeAction(InputConfig, DroneLook_tag, ETriggerEvent::Triggered, this, &ThisClass::LookAround, true);
				LyraIC->BindNativeAction(InputConfig, DroneForward_tag, ETriggerEvent::Triggered, this, &ThisClass::MoveForward, true);
				LyraIC->BindNativeAction(InputConfig, DroneForward_tag, ETriggerEvent::Completed, this, &ThisClass::AfterMoveForward, true);
				LyraIC->BindNativeAction(InputConfig, DroneTurn_tag, ETriggerEvent::Triggered, this, &ThisClass::TurnAround, true);
				LyraIC->BindNativeAction(InputConfig, DroneSpin_tag, ETriggerEvent::Triggered, this, &ThisClass::Spin, true);
				LyraIC->BindNativeAction(InputConfig, DroneShiftLeftRight_tag, ETriggerEvent::Triggered, this, &ThisClass::ShiftLeftAndRight, true);
				LyraIC->BindNativeAction(InputConfig, DroneShiftLeftRight_tag, ETriggerEvent::Completed, this, &ThisClass::AfterShift, true);
				LyraIC->BindNativeAction(InputConfig, DroneUpDown_tag, ETriggerEvent::Triggered, this, &ThisClass::UpAndDown, true);
				LyraIC->BindNativeAction(InputConfig, DroneShot_tag, ETriggerEvent::Triggered, this, &ThisClass::IsShooting, true);
				LyraIC->BindNativeAction(InputConfig, DroneShot_tag, ETriggerEvent::Completed, this, &ThisClass::AfterShooting, true);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to Find LyraPawnData"));
	}
}

bool ADRDrone::GetIsOnTheGround()
{
	UDRCharacterMovementComponent* DRCharacterMovementComponent = GetCharacterMovement<UDRCharacterMovementComponent>();
	if (DRCharacterMovementComponent) 
	{
		return !DRCharacterMovementComponent->IsFlying();
	}
	return true;
}

void ADRDrone::MoveForward(const FInputActionValue& value)
{
	const float directionValue = value.Get<float>();
	if (GetController() && (directionValue != 0.f)) 
	{
		FVector forwardVector = GetActorForwardVector();
		float ScaleValue = directionValue * MoveForwardScaleModifier;
		UDRCharacterMovementComponent* DRCharacterMovementComponent = GetCharacterMovement<UDRCharacterMovementComponent>();
		if(DRCharacterMovementComponent)
		{ 
			DRCharacterMovementComponent->AddInputVector(forwardVector * ScaleValue);
			float UpDirectionMovement = FVector::DotProduct(forwardVector, FVector(0.0f, 0.0f, 1.0f));
			if (UpDirectionMovement > 0.0f)
			{
				DRCharacterMovementComponent->SetMovementMode(MOVE_Flying);
			}
		}
		ForwardState = true;
		float GroundSpeed = UKismetMathLibrary::VSizeXY(this->GetVelocity());
		LeftMoveLight->Activate();
		RightMoveLight->Activate();
		IdleLight->Deactivate();
		if (directionValue > 0 && GetMesh()->GetRelativeRotation().Pitch >= -1 * MoveForwardPitchScale)
		{
			GetMesh()->SetRelativeRotation(FRotator(-1 * MoveForwardPitchScale, RoationParam, 0.0));
		}
		if (directionValue < 0 && GetMesh()->GetRelativeRotation().Pitch <= MoveForwardPitchScale)
		{
			GetMesh()->SetRelativeRotation(FRotator(MoveForwardPitchScale, RoationParam, 0.0));
		}
	}
	else 
	{
		ForwardState = false;
	}
}

void ADRDrone::AfterMoveForward()
{
	GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, 0.0));
	LeftMoveLight->Deactivate();
	RightMoveLight->Deactivate();
	IdleLight->Activate();
}

void ADRDrone::TurnAround(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		AddControllerYawInput(scaleValue);
	}
}

void ADRDrone::LookAround(const FInputActionValue& value)
{
	const FVector2D lookAxis = value.Get<FVector2D>();
	if (GetController()) 
	{
		AddControllerYawInput(lookAxis.X);
		AddControllerPitchInput(lookAxis.Y);
		GetMesh()->SetRelativeRotation(FRotator(lookAxis.Y * LookAroundScaleModifier, lookAxis.X * LookAroundScaleModifier + RoationParam, 0.0));
	}
}

void ADRDrone::UpAndDown(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0.f, controlRotation.Yaw, 0.f);
		const FVector turnDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Z);
		float ScaleValue = scaleValue * UpDownScaleModifier;
		UDRCharacterMovementComponent* DRCharacterMovementComponent = GetCharacterMovement<UDRCharacterMovementComponent>();
		if (DRCharacterMovementComponent) 
		{
			DRCharacterMovementComponent->AddInputVector(turnDirection * ScaleValue);
		}
		RisingState = true;
		if (scaleValue > 0.f) 
		{
			RisingState = true;
			LandingState = false;
			if (DRCharacterMovementComponent)
			{
				DRCharacterMovementComponent->SetMovementMode(MOVE_Flying);
			}
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

void ADRDrone::ShiftLeftAndRight(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		const FRotator controlRotation = GetControlRotation();
		const FRotator yawRotation(0.f, controlRotation.Yaw, 0.f);
		const FVector turnDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(turnDirection, scaleValue * HorizontalShiftScaleModifier);
		if (scaleValue > 0 && GetMesh()->GetRelativeRotation().Roll <= HorizontalShiftRollScale)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, HorizontalShiftRollScale));
		}
		if (scaleValue < 0 && GetMesh()->GetRelativeRotation().Roll >= -1 * HorizontalShiftRollScale)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, -1 * HorizontalShiftRollScale));
		}
	}
}

void ADRDrone::AfterShift()
{
	GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, 0.0));
}

void ADRDrone::Spin(const FInputActionValue& value)
{
	const float scaleValue = value.Get<float>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		GetMesh()->AddRelativeRotation(FRotator(0.0, 0.0, scaleValue));
	}
}

void ADRDrone::IsShooting(const FInputActionValue& value)
{
	const bool scaleValue = value.Get<bool>();
	if (GetController() && (scaleValue != 0.f)) 
	{
		// Yulan He: Then in animation instance, isShooting will get true and switch to "Shot state" in state machine
		ShootingState = true;
		// Yulan He: Spawn projectile actor
		if (World && ProjectileClass) 
		{
			UArrowComponent* spawnPos = GetArrowComponent();
			const FTransform Transform = spawnPos->GetComponentTransform();
			FVector Location = Transform.GetLocation();
			World->SpawnActor<AProjectile>(ProjectileClass, Location, GetActorRotation());
		}
		if (scaleValue && GetMesh()->GetRelativeRotation().Pitch >= -1 * ShootingPitchScale)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, -1 * ShootingPitchScale));
		}
	}
	else 
	{
		ShootingState = false;
	}
}

void ADRDrone::AfterShooting()
{
	GetMesh()->SetRelativeRotation(FRotator(0.0, RoationParam, 0.0));
}

void ADRDrone::OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (World && OtherActor->ActorHasTag(FName("Projectile")))
	{
		if (Cast<ADRDrone>(OtherActor->GetInstigator()) != this) {
			AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
			GameState = Cast<AMyLyraGameState>(baseState);
			GameState->DroneBlood -= 5;
		}
	}
	else {
		AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
		GameState = Cast<AMyLyraGameState>(baseState);
		GameState->DroneBlood--;
	}
}

