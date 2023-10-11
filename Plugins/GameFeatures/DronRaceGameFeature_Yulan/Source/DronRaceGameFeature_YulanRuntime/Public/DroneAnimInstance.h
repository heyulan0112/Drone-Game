// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DroneAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API UDroneAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class ADrone* Drone;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class UPawnMovementComponent* DroneMovementComponent;
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<class ADRDrone> DroneCharacter;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	TObjectPtr<class UDRCharacterMovementComponent> DroneCharacterMovementComp;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float GroundSpeed;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsShooting;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsRising;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsLanding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool IsForwarding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool IsOnTheGround;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float PawnHeight;
};
