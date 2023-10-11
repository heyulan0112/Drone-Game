// Fill out your copyright notice in the Description page of Project Settings.


#include "TrackSplineActor.h"
#include "Components/SceneComponent.h"
#include "LandscapeSplineControlPoint.h"
#include "LandscapeProxy.h"
#include "Components/SplineComponent.h"

ATrackSplineActor::ATrackSplineActor()
{
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("Path Spline"));
}

void ATrackSplineActor::GenerateSpline()
{
#if WITH_EDITOR
	if (LandscapeProxy != NULL) 
	{
		SplineComp->ClearSplinePoints(true);
		ULandscapeSplinesComponent* landscapeSpline = LandscapeProxy->GetSplinesComponent();

		if (landscapeSpline != NULL) 
		{
			TArray<ULandscapeSplineControlPoint*> landscapeSplinePoints = landscapeSpline->GetControlPoints();
			for (int i = 0; i < 32; i++) 
			{
				ULandscapeSplineControlPoint* currentPoint = landscapeSplinePoints[i];
				FVector pointWorldSpace = currentPoint->Location + LandscapeProxy->GetActorLocation();
				SplineComp->AddSplinePoint(pointWorldSpace, ESplineCoordinateSpace::World, true);
			}
			for (int i = landscapeSplinePoints.Num()-1; i > 31; i--) 
			{
				ULandscapeSplineControlPoint* currentPoint = landscapeSplinePoints[i];
				FVector pointWorldSpace = currentPoint->Location + LandscapeProxy->GetActorLocation();
				SplineComp->AddSplinePoint(pointWorldSpace, ESplineCoordinateSpace::World, true);
			}
		}
	}
#endif
}