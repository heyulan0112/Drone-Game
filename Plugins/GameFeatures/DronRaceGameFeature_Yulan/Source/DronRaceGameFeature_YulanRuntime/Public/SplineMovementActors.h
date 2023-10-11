// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
//#include "Projectile.h"
#include "SplineMovementActors.generated.h"

class USplineComponent;
class USkeletalMeshComponent;
class UBoxComponent;

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ASplineMovementActors : public AActor
{
	GENERATED_BODY()
	
public:	
	ASplineMovementActors();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	USplineComponent* SplineComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* MeshComp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spline")
	UCurveFloat* MoveCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline")
	float TimelineLength;

	UFUNCTION()
	void ProcessMovementTimeline(float value);

protected:
	virtual void BeginPlay() override;
	struct FTimeline* TimeLine;

private:
	FTimeline MoveTimeLine;
};
