// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneAnimInstance.h"
#include "Drone.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "DRDrone.h"
#include "DRCharacterMovementComponent.h"

void UDroneAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (Drone) 
	{
		DroneMovementComponent = Drone->GetMovementComponent();
	}
	if (DroneCharacter)
	{
		DroneCharacterMovementComp = DroneCharacter->GetCharacterMovement<UDRCharacterMovementComponent>();
	}
}

void UDroneAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	if (!DroneCharacter)
	{
		DroneCharacter = Cast<ADRDrone>(TryGetPawnOwner());
		return; 
	}
	if (!DroneCharacterMovementComp)
	{
		DroneCharacterMovementComp = DroneCharacter->GetCharacterMovement<UDRCharacterMovementComponent>();
		return;
	}
	GroundSpeed = UKismetMathLibrary::VSizeXY(DroneCharacter->GetVelocity());
	IsShooting = DroneCharacter->ShootingState;
	IsRising = DroneCharacter->RisingState;
	IsLanding = DroneCharacter->LandingState;
	IsForwarding = DroneCharacter->ForwardState;
	IsOnTheGround = DroneCharacter->GetIsOnTheGround();
}
