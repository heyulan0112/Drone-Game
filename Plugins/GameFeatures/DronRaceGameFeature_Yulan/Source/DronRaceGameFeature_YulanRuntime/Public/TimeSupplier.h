// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Treasure.h"
#include "TimeSupplier.generated.h"

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ATimeSupplier : public ATreasure
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeSupplier();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UWorld* World;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	const int32 Threshold = 95;;
	const int32 FullTime = 100;
	const int32 TimeIncreaseAmount = 5;
};
