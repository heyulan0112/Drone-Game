// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Projectile.h"
#include "DRDrone.generated.h"

struct FInputActionValue;

UCLASS()
class DRONRACEGAMEFEATURE_YULANRUNTIME_API ADRDrone : public ACharacter
{
	GENERATED_BODY()

public:
	ADRDrone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void Tick(float DeltaTime) override;
	bool ShootingState = false;
	bool RisingState = false;
	bool LandingState = false;
	bool ForwardState = false;
	class AMyLyraGameState* GameState;

	bool GetIsOnTheGround();
	bool CheckRotation();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float RoationParam = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float MoveForwardScaleModifier = 1000.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float UpDownScaleModifier = 100.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float HorizontalShiftScaleModifier = 100.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	int32 LookAroundScaleModifier = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float MoveForwardPitchScale = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float HorizontalShiftRollScale = 6.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Move)
	float ShootingPitchScale = 5.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attribute)
	int32 Blood = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attribute)
	int32 KillEnemyNum = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attribute)
	int32 CollectTreasureNum = 0;
	UWorld* World;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TObjectPtr<class UInputMappingContext> DroneMappingContext;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	class ULyraPawnExtensionComponent* DroneExtComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* LeftMoveLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraComponent* RightMoveLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraComponent* AttackLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraComponent* IdleLight;

	void MoveForward(const FInputActionValue& value);
	void AfterMoveForward();
	void TurnAround(const FInputActionValue& value);
	void LookAround(const FInputActionValue& value);
	void UpAndDown(const FInputActionValue& value);
	void ShiftLeftAndRight(const FInputActionValue& value);
	void AfterShift();
	void Spin(const FInputActionValue& value);
	void IsShooting(const FInputActionValue& value);
	void AfterShooting();

	UFUNCTION()
	void OnCapsuleHit(class UPrimitiveComponent* HitComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ProjectileClass;

};
