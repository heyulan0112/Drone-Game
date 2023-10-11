// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineMovementActors.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
//#include "Perception/PawnSensingComponent.h"
//#include "Engine/World.h"
//#include "Components/ArrowComponent.h"

ASplineMovementActors::ASplineMovementActors()
{
	PrimaryActorTick.bCanEverTick = true;
	SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
	SplineComp->SetupAttachment(GetRootComponent());
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Component"));
	MeshComp->SetupAttachment(SplineComp);
	//PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	//PawnSensingComponent->SightRadius = 5000.f;
	//PawnSensingComponent->SetPeripheralVisionAngle(45.f);
	//AttackArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Attack Arrow"));
	TimelineLength = 5.f;
}

void ASplineMovementActors::BeginPlay()
{
	Super::BeginPlay();

	FOnTimelineFloat ProgressFunction;
	ProgressFunction.BindUFunction(this, TEXT("ProcessMovementTimeline"));
	MoveTimeLine.AddInterpFloat(MoveCurve, ProgressFunction);
	MoveTimeLine.SetTimelineLengthMode(TL_LastKeyFrame);

	float newRate = 1.f / TimelineLength;
	MoveTimeLine.SetPlayRate(newRate);
	MoveTimeLine.SetLooping(true);
	MoveTimeLine.Play();

	/*PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASplineMovementActors::PawnSeen);*/
}

void ASplineMovementActors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (MoveTimeLine.IsPlaying()) 
	{
		MoveTimeLine.TickTimeline(DeltaTime);
	}
}

void ASplineMovementActors::ProcessMovementTimeline(float value)
{
	const float splineLength = SplineComp->GetSplineLength();
	// Yulan He: value * splineLength = lerp (when b is 0) = splineLength + t(0 - splineLength)
	FVector currentSplineLocation = SplineComp->GetLocationAtDistanceAlongSpline(splineLength + value * (-splineLength), ESplineCoordinateSpace::World);
	FRotator currentSplineRotation = SplineComp->GetRotationAtDistanceAlongSpline(splineLength + value * (-splineLength), ESplineCoordinateSpace::Local);
	MeshComp->SetWorldLocationAndRotation(currentSplineLocation, currentSplineRotation);
}

//void ASplineMovementActors::PawnSeen(APawn* seenPawn)
//{
//	if (seenPawn->ActorHasTag(FName("DroneCharacter"))) {
//		UWorld* World = GetWorld();
//		if (World && ProjectileClass) {
//			UArrowComponent* spawnPos = AttackArrow;
//			const FTransform Transform = spawnPos->GetComponentTransform();
//			FVector Location = Transform.GetLocation();
//			World->SpawnActor<AProjectile>(ProjectileClass, Location, GetActorRotation());
//		}
//	}
//}

