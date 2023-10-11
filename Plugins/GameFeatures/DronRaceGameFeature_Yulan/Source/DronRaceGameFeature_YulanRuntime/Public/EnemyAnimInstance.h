// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

 // Yulan He: EnemyAnimInstance class is deprecated

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class AEnemy* Enemy;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsHitted = false;
};
