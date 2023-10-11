// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Treasure.h"
#include "BloodSupplier.generated.h"

/**
 * 
 */
UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ABloodSupplier : public ATreasure
{
	GENERATED_BODY()
public:
	ABloodSupplier();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	const int32 Threshold = 95;;
	const int32 FullBlood = 100;
	const int32 BloodIncreaseAmount = 5;
};
