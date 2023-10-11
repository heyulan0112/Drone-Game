// Fill out your copyright notice in the Description page of Project Settings.


#include "MySpline.h"
#include "Components/SplineComponent.h"

/* Yulan He: MySpline class is deprecated */

AMySpline::AMySpline()
{
	PrimaryActorTick.bCanEverTick = true;
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	RootComponent = Spline;
}

void AMySpline::BeginPlay()
{
	Super::BeginPlay();
}

void AMySpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

