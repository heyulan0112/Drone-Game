// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstance.h"
#include "Enemy.h"

// Yulan He: EnemyAnimInstance class is deprecated

void UEnemyAnimInstance::NativeInitializeAnimation() {
	Super::NativeInitializeAnimation();
	Enemy = Cast<AEnemy>(TryGetPawnOwner());
}

void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaTime) {
	Super::NativeUpdateAnimation(DeltaTime);
}
