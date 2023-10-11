// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "AIController.h"
#include "AI/Navigation/NavigationTypes.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "DRDrone.h"
#include "GameFramework/Character.h"
#include "NiagaraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyLyraGameMode.h"
#include "MyLyraGameState.h"
#include "Particles/ParticleSystemComponent.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensingComponent->SightRadius = 3000.f;
	PawnSensingComponent->SetPeripheralVisionAngle(55.f);
	AttackEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AttackEffect"));
	AttackEffect->SetupAttachment(GetRootComponent());
	MeshLight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
	MeshLight->SetupAttachment(GetRootComponent());
	HittedStatus = false;
	AttackStatus = false;
	ChaseStatus = false;
	ChaseTarget = NULL;
	GameState = NULL;
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &AEnemy::OnCapsuleHit);
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	EnemyController = Cast<AAIController>(GetController());
	if (PatrolTargets.Num() > 0) 
	{
		PatrolTarget = PickPatrolTarget();
	}
	MoveToTarget(PatrolTarget);
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemy::PawnSeen);
	World = GetWorld();
}

bool AEnemy::InTargetRange(AActor* target, double radius)
{
	if (target == NULL) 
	{
		return false;
	}
	const double distance = (target->GetActorLocation() - GetActorLocation()).Size();
	return distance <= radius;
}

void AEnemy::MoveToTarget(AActor* target)
{
	if (EnemyController == NULL || target == NULL) 
	{
		return;
	}
	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalActor(target);
	MoveRequest.SetAcceptanceRadius(15.f);
	EnemyController->MoveTo(MoveRequest);
}

AActor* AEnemy::PickPatrolTarget()
{
	TArray<AActor*> availableTargets;
	for (auto t : PatrolTargets) 
	{
		if (t != PatrolTarget) 
		{
			availableTargets.Add(t);
		}
	}
	const int32 numberPatrolTarget = availableTargets.Num();
	if (numberPatrolTarget > 0) 
	{
		const int32 randomIndex = FMath::RandRange(0, numberPatrolTarget - 1);
		return availableTargets[randomIndex];
	}
	return NULL;
}

void AEnemy::PawnSeen(APawn* seenPawn)
{
	if (seenPawn->ActorHasTag(FName("DroneCharacter"))) 
	{
		ChaseStatus = true;
		if (World) 
		{
			World->GetTimerManager().ClearTimer(PatrolTimerHandle);
			AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
			GameState = Cast<AMyLyraGameState>(baseState);
		}
		MoveToTarget(seenPawn);
		ChaseTarget = seenPawn;
		if (InTargetRange(ChaseTarget, AttackRadius)) 
		{
			AttackStatus = true;
			AttackEffect->Activate();
			if (GameState) 
			{
				if (GameState->Difficulty == 0) 
				{
					int DecreaseAmount = (GameState->DroneBlood < GameState->EasyModeDecreaseBlood) ? GameState->DroneBlood : GameState->EasyModeDecreaseBlood;
					GameState->DroneBlood -= DecreaseAmount;
				}
				else 
				{
					int DecreaseAmount = (GameState->DroneBlood < GameState->HardModeDecreaseBlood) ? GameState->DroneBlood : GameState->HardModeDecreaseBlood;
					GameState->DroneBlood -= DecreaseAmount;
				}
			}
		}
	}
}

// Yulan He: Patrol timer callback function
void AEnemy::OneWayPatrolFinished()
{
	MoveToTarget(PatrolTarget);
}

void AEnemy::DestroyEnemy()
{
	if (World) 
	{
		World->DestroyActor(this);
	}
}

void AEnemy::OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (World && OtherActor->ActorHasTag(FName("Projectile")))
	{
		HittedStatus = true;
		AGameStateBase* baseState = World->GetAuthGameMode()->GameState;
		if (baseState) 
		{
			GameState = Cast<AMyLyraGameState>(baseState);
			if (GameState) 
			{
				GameState->KilledHallin++;
			}
		}
		World->GetTimerManager().SetTimer(DeathTimerHandle, this, &AEnemy::DestroyEnemy, EnemyDestoryWaitTime, false);
	}
}

void AEnemy::EnemyStatusUpdateFunc()
{
	if (InTargetRange(PatrolTarget, PatrolRadius))
	{
		PatrolTarget = PickPatrolTarget();
		const float waitTime = FMath::RandRange(WaitMinTime, WaitMaxTime);
		if (World)
		{
			World->GetTimerManager().SetTimer(PatrolTimerHandle, this, &AEnemy::OneWayPatrolFinished, waitTime, false);
		}
	}
	if (ChaseTarget != NULL)
	{
		if (AttackStatus == false && InTargetRange(ChaseTarget, ChaseRadius))
		{
			ChaseStatus = true;
			MoveToTarget(ChaseTarget);
		}
		if (!InTargetRange(ChaseTarget, AttackRadius))
		{
			AttackStatus = false;
			AttackEffect->Deactivate();
		}
		if (!InTargetRange(ChaseTarget, ChaseRadius))
		{
			ChaseStatus = false;
			PatrolTarget = PickPatrolTarget();
			MoveToTarget(PatrolTarget);
			ChaseTarget = NULL;
		}
	}
	else
	{
		ChaseStatus = false;
		AttackStatus = false;
		AttackEffect->Deactivate();
	}
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	EnemyStatusUpdateFunc();
}

void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
