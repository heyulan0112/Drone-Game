// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineTransportActors.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"
#include "DRDrone.h"

ASplineTransportActors::ASplineTransportActors()
{

	PrimaryActorTick.bCanEverTick = true;
	SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
	SplineComp->SetupAttachment(GetRootComponent());
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Component"));
	MeshComp->SetupAttachment(SplineComp);
	TimelineLength = 10.f;
}

void ASplineTransportActors::BeginPlay()
{
	Super::BeginPlay();
	MeshComp->OnComponentHit.AddDynamic(this, &ASplineTransportActors::OnCapsuleHit);
	SplineStartLoc = SplineComp->GetLocationAtSplinePoint(0, ESplineCoordinateSpace::World);
	SplineStartRotation = this->GetActorRotation();
	World = GetWorld();
	if (World) 
	{
		Controller = World->GetFirstPlayerController();
	}
}

void ASplineTransportActors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (MoveTimeLine.IsPlaying()) 
	{
		MoveTimeLine.TickTimeline(DeltaTime);
	}
}

void ASplineTransportActors::OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (World) 
	{
		if (OtherActor->ActorHasTag(FName("DroneCharacter")) || OtherActor->ActorHasTag(FName("Projectile"))) 
		{
			if (APawn* bulletOwner = OtherActor->GetInstigator()) 
			{
				AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
				GameState = Cast<AMyLyraGameState>(baseState);
				if (GameState->CollectedTreasure == 0) 
				{
					return;
				}
				if (Controller)
				{
					ACharacter* drone = Controller->GetCharacter();
					ADRDrone* drone_character = Cast<ADRDrone>(drone);
					drone_character->GetMesh()->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
					drone_character->DisableInput(Controller);
				}
				GameState->CollectedTreasure--;
				FOnTimelineFloat ProgressFunction;
				ProgressFunction.BindUFunction(this, TEXT("ProcessMovementTimeline"));
				MoveTimeLine.AddInterpFloat(MoveCurve, ProgressFunction);
				FOnTimelineEvent OnTimelineEndFunction;
				OnTimelineEndFunction.BindUFunction(this, TEXT("OnEndMovementTimeline"));
				MoveTimeLine.SetTimelineFinishedFunc(OnTimelineEndFunction);
				MoveTimeLine.SetTimelineLengthMode(TL_LastKeyFrame);
				float newRate = 1.f / TimelineLength;
				MoveTimeLine.SetPlayRate(newRate);
				MoveTimeLine.Play();
			}
		}
	}
}

void ASplineTransportActors::ProcessMovementTimeline(float value)
{
	const float splineLength = SplineComp->GetSplineLength();
	// Yulan He: value * splineLength = lerp (when b is 0) = splineLength + t(0 - splineLength)
	FVector currentSplineLocation = SplineComp->GetLocationAtDistanceAlongSpline(value * splineLength, ESplineCoordinateSpace::World);
	FRotator currentSplineRotation = SplineComp->GetRotationAtDistanceAlongSpline(value * splineLength, ESplineCoordinateSpace::Local);
	currentSplineRotation.Pitch = 0.f;
	MeshComp->SetWorldLocationAndRotation(currentSplineLocation, currentSplineRotation);
}

void ASplineTransportActors::OnEndMovementTimeline()
{
	if (World) 
	{
		if (Controller) 
		{
			ACharacter* drone = Controller->GetCharacter();
			ADRDrone* drone_character = Cast<ADRDrone>(drone);
			drone_character->GetMesh()->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
			drone_character->EnableInput(Controller);
		}
		World->DestroyActor(this);
		World->SpawnActor<ASplineTransportActors>(this->GetClass(), SplineStartLoc, SplineStartRotation);
	}
}

