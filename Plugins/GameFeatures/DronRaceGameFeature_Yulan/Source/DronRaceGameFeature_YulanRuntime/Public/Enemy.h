// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemy();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	bool HittedStatus;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	bool AttackStatus;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	bool ChaseStatus;
	UPROPERTY(EditAnywhere)
	double PatrolRadius = 200.f;
	UPROPERTY(EditAnywhere)
	double ChaseRadius = 500.f;
	UPROPERTY(EditAnywhere)
	double AttackRadius = 300.f;
	UPROPERTY()
	class AAIController* EnemyController;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Navigation")
	AActor* PatrolTarget;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Navigation")
	TArray<AActor*> PatrolTargets;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Navigation")
	AActor* ChaseTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Navigation")
	float WaitMinTime = 3.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Navigation")
	float WaitMaxTime = 5.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UPawnSensingComponent* PawnSensingComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* MeshLight;
	class AMyLyraGameState* GameState;
	struct FTimerHandle DeathTimerHandle;
	FTimerHandle PatrolTimerHandle;
	UWorld* World;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* AttackEffect;

	// Yulan He: Enemy move to a patrol target
	void MoveToTarget(AActor* target);
	// Yulan He: Randomly choose a patrol target from patrol targets array
	AActor* PickPatrolTarget();

	// Yulan He: Check if there a target actor nearby
	UFUNCTION(BlueprintCallable)
	bool InTargetRange(AActor* target, double radius);
	UFUNCTION()
	void PawnSeen(APawn* seenPawn);
	UFUNCTION()
	void DestroyEnemy();
	UFUNCTION()
	void OneWayPatrolFinished();
	UFUNCTION()
	void OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemy> EnemyClass;
	void EnemyStatusUpdateFunc();
	const int32 EnemyDestoryWaitTime = 3;
};
