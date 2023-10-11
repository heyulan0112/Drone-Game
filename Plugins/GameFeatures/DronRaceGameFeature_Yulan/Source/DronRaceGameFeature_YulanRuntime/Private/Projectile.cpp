// Fill out your copyright notice in the Description page of Project Settings.
#include "Projectile.h"
#include "Engine/World.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	SphereCase = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SphereCase->SetupAttachment(GetRootComponent());
	FireLight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
	FireLight->SetupAttachment(SphereCase);
	ExplosionLight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Explode VFX"));
	ExplosionLight->SetupAttachment(SphereCase);
	
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	SphereCase->OnComponentHit.AddDynamic(this, &AProjectile::OnCapsuleHit);
	Tags.Add(FName("Projectile"));
	ExplosionLight->Deactivate();
	World = GetWorld();
}

void AProjectile::DestroyProjectile() 
{
	if (World) 
	{
		World->DestroyActor(this);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile DestroyProjectile %s, world is empty"), *GetName());
	}
}

void AProjectile::OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (World && !World->GetTimerManager().IsTimerActive(ProjectileTimerHandle)) 
	{
		if (! OtherActor->ActorHasTag(FName("DroneCharacter"))) 
		{
			ExplosionLight->Activate();
			FireLight->Deactivate();
		}
		World->GetTimerManager().SetTimer(ProjectileTimerHandle, this, &AProjectile::DestroyProjectile, ProjectileDestoryWaitTime, false);
	}
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}