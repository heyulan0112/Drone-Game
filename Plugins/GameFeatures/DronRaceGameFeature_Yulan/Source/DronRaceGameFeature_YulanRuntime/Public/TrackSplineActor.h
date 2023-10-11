// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrackSplineActor.generated.h"


UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ATrackSplineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATrackSplineActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USplineComponent* SplineComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Landscape")
	class ALandscapeProxy* LandscapeProxy;
	
private:
	UFUNCTION(CallInEditor, Category = "Landscape")
	void GenerateSpline();
};
