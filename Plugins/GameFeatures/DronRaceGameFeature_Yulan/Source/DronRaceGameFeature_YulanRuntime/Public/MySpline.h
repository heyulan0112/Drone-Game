// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySpline.generated.h"

class USplineComponent;

/* Yulan He: MySpline class is deprecated */

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API AMySpline : public AActor
{
	GENERATED_BODY()
	
public:	
	AMySpline();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USplineComponent* Spline;

protected:
	virtual void BeginPlay() override;
};
