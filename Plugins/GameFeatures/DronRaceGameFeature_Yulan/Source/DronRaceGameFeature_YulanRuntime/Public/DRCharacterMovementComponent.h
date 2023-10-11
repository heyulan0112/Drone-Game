// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DRCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API UDRCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
protected:
	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode) override;
	virtual void PhysFlying(float deltaTime, int32 Iterations) override;

private:
	FString ConvertMovementModeToString(EMovementMode MovementModeEnum);
};
