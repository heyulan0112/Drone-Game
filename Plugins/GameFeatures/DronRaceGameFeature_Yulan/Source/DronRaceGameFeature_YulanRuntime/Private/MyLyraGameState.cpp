// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLyraGameState.h"
#include "DRDrone.h"
#include "Engine/World.h"
#include "TimerManager.h"

AMyLyraGameState::AMyLyraGameState() : ALyraGameState()
{
	DroneBlood = 100;
	RemainTime = 100;
	KilledHallin = 0;
	CollectedTreasure = 0;
}

void AMyLyraGameState::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;
	World = GetWorld();
	if (World) 
	{
		if (Difficulty == 0)
		{
			World->GetTimerManager().SetTimer(GameTimerHandle, this, &AMyLyraGameState::DecreaseGameTime, 1, true);
		}
		else 
		{
			World->GetTimerManager().SetTimer(GameTimerHandle, this, &AMyLyraGameState::DecreaseGameTimeFaster, 1, true);
		}
	}
}

void AMyLyraGameState::DecreaseGameTime()
{
	if (RemainTime > 0) 
	{
		RemainTime -= EasyModeDecreaseTime;
	}
}

void AMyLyraGameState::DecreaseGameTimeFaster()
{
	if (RemainTime > 1) 
	{
		RemainTime -= HardModeDecreaseTime;
	}
}

void AMyLyraGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
