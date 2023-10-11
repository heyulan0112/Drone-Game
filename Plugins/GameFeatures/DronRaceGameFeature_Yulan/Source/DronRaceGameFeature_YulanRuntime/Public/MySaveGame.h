// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */

 /* Yulan He: This class is deprecated, go to DroneGameDatabase class */

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UMySaveGame();
	UPROPERTY()
	TArray<int32> Scores;
}; 

