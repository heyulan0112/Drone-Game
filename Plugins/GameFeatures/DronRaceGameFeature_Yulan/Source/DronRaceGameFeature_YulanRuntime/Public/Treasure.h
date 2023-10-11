// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Treasure.generated.h"

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ATreasure : public AActor
{
	GENERATED_BODY()
	
public:	
	ATreasure();
	virtual void Tick(float DeltaTime) override;
	class AMyLyraGameState* GameState;
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* Sphere;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters");
	float TreasureAmplitude = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters");
	float TreasureTimeConstant = 4;
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* TreasureLight;

	virtual void BeginPlay() override; 

	UFUNCTION(BlueprintPure)
	float TransformedSin();

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TreasureMesh;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ATreasure> TreasureClass;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float RunningTime;
};
