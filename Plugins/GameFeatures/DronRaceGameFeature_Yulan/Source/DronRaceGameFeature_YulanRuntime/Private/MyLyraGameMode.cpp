// Fill out your copyright notice in the Description page of Project Settings.

#include "MyLyraGameMode.h"
#include "Blueprint/UserWidget.h"
#include "DRDrone.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"
#include "MySaveGame.h"
#include "DroneGameDatabase.h"

AMyLyraGameMode::AMyLyraGameMode()
{
	CurrentLevelIndex = 0;
	Drone = NULL;
}

void AMyLyraGameMode::BeginPlay()
{
	Super::BeginPlay();
	World = GetWorld();
	Controller = World->GetFirstPlayerController();
	DroneGameState = Cast<AMyLyraGameState>(GameState);
	Database = new DroneGameDatabase(TEXT("D:/P4VRoot/DroneRacer/DroneRacer_52_0G/Content/Database/sqlite-tools-win32-x86-3430100/acs-1-year-2015.sqlite"), ESQLiteDatabaseOpenMode::ReadWrite);
	// ******
	// WIP - Yulan He
	/*
	METHOD 2 TO GET DRONE IN GAME MODE CLASS
	GameState = Cast<AMyLyraGameState>(GameState);
	drone = Cast<ADRDrone>(TryGetDefault ());
	drone = Cast<ADRDrone>(controller->GetPawn());
	if (drone)
	{
		UE_LOG(LogTemp, Warning, TEXT("We find the drone 2."));
	}
	METHOD 3 TO GET DRONE IN GAME MODE CLASS
	for (APlayerState* PlayerState : GameState->PlayerArray)
	{
		APawn* Pawn = PlayerState->GetPawn();

		drone = Cast<ADRDrone>(Pawn);
		if (drone)
		{
			UE_LOG(LogTemp, Warning, TEXT("We find the drone 1."));
		}
	}
	*/
	// END WIP
	// ******
}

void AMyLyraGameMode::EndPlay(const EEndPlayReason::Type EEndPlayReason)
{
	Super::EndPlay(EEndPlayReason);
	delete Database;
}

APawn* AMyLyraGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	APawn* NewDrone = Super::SpawnDefaultPawnAtTransform_Implementation(NewPlayer, SpawnTransform);
	if (NewDrone)
	{
		Drone = Cast<ADRDrone>(NewDrone);
	}
	return NewDrone;
}

bool AMyLyraGameMode::EndGame()
{
	if (World) 
	{
		if (DroneGameState && (DroneGameState->DroneBlood <= 0 || DroneGameState->RemainTime <= 0)) 
		{
			int32 Score = DroneGameState->CollectedTreasure + DroneGameState->KilledHallin;
			Database->SavePlayerScore(Score);
			if (!ScoreBoard.IsEmpty()) 
			{
				ScoreBoard.Empty();
			}
			TArray<int32> TempArray = Database->LoadHistoryScores();
			for (int i = 0; i < TempArray.Num(); i++)
			{
				ScoreBoard.Add(TempArray[i]);
			}
			return true;
		}
	}
	return false;
}

void AMyLyraGameMode::LevelComplete()
{

}