// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameModes/LyraGameMode.h"
#include "MyLyraGameMode.generated.h"

class AEnemy;
class ATreasure;
class ADRDrone;

/**
 * 
 */

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API AMyLyraGameMode : public ALyraGameMode
{
	GENERATED_BODY()
public:
	AMyLyraGameMode();
	void LevelComplete();
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;

	UFUNCTION(BlueprintCallable)
	bool EndGame();

	UPROPERTY(BlueprintReadWrite, Category = "GameStatus")
	int32 GameTimeLimit = 100;
	UPROPERTY(BlueprintReadWrite, Category = "GameHistory")
	TArray<int32> ScoreBoard;

	UWorld* World;

protected:
	TArray<AEnemy*> Enemies;

	UPROPERTY(BlueprintReadOnly)
	ADRDrone* Drone;
	UPROPERTY(BlueprintReadOnly)
	class AMyLyraGameState* DroneGameState;

private:
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EEndPlayReason) override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Levels")
	TArray<FString> Levels;
	APlayerController* Controller;
	int32 CurrentLevelIndex;
	FString NextLevel;
	class DroneGameDatabase* Database;
};
