// Fill out your copyright notice in the Description page of Project Settings.


#include "TreasureBox.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "MyLyraGameState.h"

ATreasureBox::ATreasureBox()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATreasureBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATreasureBox::BeginPlay()
{
	Super::BeginPlay();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ATreasureBox::OnSphereBeginOverlap);
	World = GetWorld();
}

void ATreasureBox::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (World) 
	{
		World->DestroyActor(this);
		if (OtherActor->ActorHasTag(FName("DroneCharacter")) || OtherActor->ActorHasTag(FName("Projectile"))) 
		{
			AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
			GameState = Cast<AMyLyraGameState>(baseState);
			GameState->CollectedTreasure++;
		}
	}
}
