// Fill out your copyright notice in the Description page of Project Settings.


#include "DRCharacterMovementComponent.h"
#include "GameFramework/PhysicsVolume.h"

void UDRCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);
}

void UDRCharacterMovementComponent::PhysFlying(float deltaTime, int32 Iterations)
{
	if (deltaTime < MIN_TICK_TIME)
	{
		return;
	}
	RestorePreAdditiveRootMotionVelocity();
	if(!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		if(bCheatFlying && Acceleration.IsZero())
		{
			Velocity = FVector::ZeroVector;
		}
		const float Friction = 0.5f * GetPhysicsVolume()->FluidFriction;
		CalcVelocity(deltaTime, Friction, true, GetMaxBrakingDeceleration());
	}
	ApplyRootMotionToVelocity(deltaTime);
	Iterations++;
	bJustTeleported = false;
	FVector OldLocation = UpdatedComponent->GetComponentLocation();
	const FVector Adjusted = Velocity * deltaTime;
	FHitResult Hit(1.f);
	SafeMoveUpdatedComponent(Adjusted, UpdatedComponent->GetComponentQuat(), true, Hit);

	if (Hit.Time < 1.f)
	{
		const FVector GravDir = FVector(0.f, 0.f, -1.f);
		const FVector VelDir = Velocity.GetSafeNormal();
		const float UpDown = GravDir | VelDir;

		bool bSteppedUp = false;
		if ((FMath::Abs(Hit.ImpactNormal.Z) < 0.2f) && (UpDown < 0.5f) && (UpDown > -0.2f) && CanStepUp(Hit))
		{
			float stepZ = UpdatedComponent->GetComponentLocation().Z;
			bSteppedUp = StepUp(GravDir, Adjusted * (1.f - Hit.Time), Hit);
			if (bSteppedUp)
			{
				OldLocation.Z = UpdatedComponent->GetComponentLocation().Z + (OldLocation.Z - stepZ);
			}
		}

		if (!bSteppedUp)
		{
			HandleImpact(Hit, deltaTime, Adjusted);
			SlideAlongSurface(Adjusted, (1.f - Hit.Time), Hit.Normal, Hit, true);
		}
		SetMovementMode(MOVE_Walking);
	}

	if( !bJustTeleported && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity() )
	{
		Velocity = (UpdatedComponent->GetComponentLocation() - OldLocation) / deltaTime;
	}
}

FString UDRCharacterMovementComponent::ConvertMovementModeToString(EMovementMode MovementModeEnum)
{
	switch (MovementModeEnum)
	{
	case MOVE_None:
		return "MOVE_None";
		break;
	case MOVE_Walking:
		return "MOVE_Walking";
		break;
	case MOVE_NavWalking:
		return "MOVE_NavWalking";
		break;
	case MOVE_Falling:
		return "MOVE_Falling";
		break;
	case MOVE_Swimming:
		return "MOVE_Swimming";
		break;
	case MOVE_Flying:
		return "MOVE_Flying";
		break;
	case MOVE_Custom:
		return "MOVE_Custom";
		break;
	case MOVE_MAX:
		return "MOVE_None";
		break;
	default:
		break;
	}
	return "MOVE_None";
}
