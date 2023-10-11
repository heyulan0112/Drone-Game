// Fill out your copyright notice in the Description page of Project Settings.
#include "RaceDrone.h"

// Yulan He: ARaceDrone class is deprecated, go to DRDrone class

ARaceDrone::ARaceDrone()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARaceDrone::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARaceDrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARaceDrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
