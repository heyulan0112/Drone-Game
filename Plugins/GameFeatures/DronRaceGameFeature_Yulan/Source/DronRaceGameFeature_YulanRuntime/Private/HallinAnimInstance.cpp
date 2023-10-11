// Fill out your copyright notice in the Description page of Project Settings.


#include "HallinAnimInstance.h"
#include "Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UHallinAnimInstance::NativeInitializeAnimation() {
	Super::NativeInitializeAnimation();
	if (EnemyCharacter)
	{
		EnemyCharacterMovementComp = EnemyCharacter->GetCharacterMovement<UCharacterMovementComponent>();
	}
}

void UHallinAnimInstance::NativeUpdateAnimation(float DeltaTime) {
	Super::NativeUpdateAnimation(DeltaTime);
	if (!EnemyCharacter)
	{
		EnemyCharacter = Cast<AEnemy>(TryGetPawnOwner());
		return;
	}
	if (!EnemyCharacterMovementComp)
	{
		EnemyCharacterMovementComp = EnemyCharacter->GetCharacterMovement<UCharacterMovementComponent>();
		return;
	}
	GroundSpeed = UKismetMathLibrary::VSizeXY(EnemyCharacter->GetVelocity());
	IsHitted = EnemyCharacter->HittedStatus;
	IsChasing = EnemyCharacter->ChaseStatus;
	IsAttacking = EnemyCharacter->AttackStatus;
}
