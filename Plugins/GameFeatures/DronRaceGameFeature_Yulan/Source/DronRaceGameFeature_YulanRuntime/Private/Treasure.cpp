// Fill out your copyright notice in the Description page of Project Settings.


#include "Treasure.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "DRDrone.h"
#include "NiagaraComponent.h"
#include "GameFramework/Actor.h"
#include "MyLyraGameMode.h"
#include "MyLyraGameState.h"

ATreasure::ATreasure()
{
	PrimaryActorTick.bCanEverTick = true;
	TreasureMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Treasure"));
	RootComponent = TreasureMesh;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(GetRootComponent());
	TreasureLight = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TreasureLight"));
	TreasureLight->SetupAttachment(GetRootComponent());
}

void ATreasure::BeginPlay()
{
	Super::BeginPlay();
}

float ATreasure::TransformedSin()
{
	return TreasureAmplitude * FMath::Sin(RunningTime * TreasureTimeConstant);
}

void ATreasure::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;
}
