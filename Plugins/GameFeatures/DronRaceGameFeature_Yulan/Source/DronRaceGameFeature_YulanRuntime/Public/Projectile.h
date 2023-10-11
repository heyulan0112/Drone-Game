// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();
	struct FTimerHandle ProjectileTimerHandle;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* FireLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ExplosionLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProjectileDestoryWaitTime = 3;

	UWorld* World;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	void DestroyProjectile();

private:
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereCase;

	

};
