// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HallinAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API UHallinAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<class AEnemy> EnemyCharacter;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsHitted;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class UCharacterMovementComponent* EnemyCharacterMovementComp;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float GroundSpeed;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsChasing;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsAttacking;
};
