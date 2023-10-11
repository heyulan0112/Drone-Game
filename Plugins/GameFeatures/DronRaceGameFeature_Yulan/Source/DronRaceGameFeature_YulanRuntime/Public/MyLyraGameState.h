// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameModes/LyraGameState.h"
#include "MyLyraGameState.generated.h"

/**
 * 
 */
UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API AMyLyraGameState : public ALyraGameState
{
	GENERATED_BODY()
	AMyLyraGameState();

public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	FTimerHandle GameTimerHandle;

	UFUNCTION()
	void DecreaseGameTime();
	UFUNCTION()
	void DecreaseGameTimeFaster();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	int32 DroneBlood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	int32 RemainTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	int32 KilledHallin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	int32 CollectedTreasure;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Difficulty")
	int32 Difficulty = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Difficulty")
	int32 EasyModeDecreaseTime = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Difficulty")
	int32 HardModeDecreaseTime = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Difficulty")
	int32 EasyModeDecreaseBlood = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Difficulty")
	int32 HardModeDecreaseBlood = 10;

	UWorld* World;

protected:
	virtual void BeginPlay() override;

};
