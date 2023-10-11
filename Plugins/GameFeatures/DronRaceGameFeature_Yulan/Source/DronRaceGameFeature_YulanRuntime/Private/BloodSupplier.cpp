// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodSupplier.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"

ABloodSupplier::ABloodSupplier()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABloodSupplier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABloodSupplier::BeginPlay()
{
	Super::BeginPlay();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ABloodSupplier::OnSphereBeginOverlap);
}

void ABloodSupplier::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UWorld* World = GetWorld();
	if (World) 
	{
		World->DestroyActor(this);
		if (OtherActor->ActorHasTag(FName("DroneCharacter")) || OtherActor->ActorHasTag(FName("Projectile"))) 
		{
			AGameStateBase* BaseState = World->GetAuthGameMode()->GameState;
			GameState = Cast<AMyLyraGameState>(BaseState);
			if (GameState->DroneBlood >= Threshold)
			{
				GameState->DroneBlood = FullBlood;
			}
			else 
			{
				GameState->DroneBlood += BloodIncreaseAmount;
			}
		}
	}
}
