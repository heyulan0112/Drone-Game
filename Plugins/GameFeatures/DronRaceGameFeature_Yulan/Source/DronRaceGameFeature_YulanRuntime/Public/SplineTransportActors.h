// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SplineMovementActors.h"
#include "SplineTransportActors.generated.h"

/**
 * 
 */

class USplineComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ASplineTransportActors : public AActor
{
	GENERATED_BODY()

public:
	ASplineTransportActors();
	virtual void Tick(float DeltaTime) override;
	class AMyLyraGameState* GameState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	USplineComponent* SplineComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* MeshComp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spline")
	UCurveFloat* MoveCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline")
	float TimelineLength;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spline", meta = (EditCondition = "!isRestartOnEnd"))
	bool IsReverseOnEnd;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spline", meta = (EditCondition = "!isReverseOnEnd"))
	bool IsRestartOnEnd;

	UFUNCTION()
	void ProcessMovementTimeline(float value);
	UFUNCTION()
	void OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	void OnEndMovementTimeline();
	
	bool CurrentStation = false;

	FVector SplineStartLoc;
	FRotator SplineStartRotation;
	UWorld* World;

protected:
	virtual void BeginPlay() override;
	struct FTimeline* TimeLine;

private:
	APlayerController* Controller;
	FTimeline MoveTimeLine;
};
