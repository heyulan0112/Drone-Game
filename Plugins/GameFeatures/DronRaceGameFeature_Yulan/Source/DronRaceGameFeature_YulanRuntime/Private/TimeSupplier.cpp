// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeSupplier.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"

ATimeSupplier::ATimeSupplier()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

void ATimeSupplier::BeginPlay()
{
	Super::BeginPlay();
	World = GetWorld();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ATimeSupplier::OnSphereBeginOverlap);
}

void ATimeSupplier::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (World) 
	{
		World->DestroyActor(this);
		if (OtherActor->ActorHasTag(FName("DroneCharacter")) || OtherActor->ActorHasTag(FName("Projectile"))) 
		{
			if (APawn* bulletOwner = OtherActor->GetInstigator()) 
			{
				AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
				GameState = Cast<AMyLyraGameState>(baseState);
				if (GameState->RemainTime >= Threshold)
				{
					GameState->RemainTime = FullTime;
				}
				else 
				{
					GameState->RemainTime += TimeIncreaseAmount;
				}
			}
		}
	}
}

void ATimeSupplier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
