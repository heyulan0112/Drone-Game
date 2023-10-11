// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQLiteDatabase.h"

/**
 * 
 */
class DRONRACEGAMEFEATURE_YULANRUNTIME_API DroneGameDatabase
{
public:
	DroneGameDatabase(FString Path, ESQLiteDatabaseOpenMode OpenMode);
	~DroneGameDatabase();

	bool SavePlayerScore(int32 PlayerScore);
	TArray<int32> LoadHistoryScores();

private:
	FSQLiteDatabase* Database;
	FSQLitePreparedStatement ScoreSaveStatement;
	FSQLitePreparedStatement ScoreLoadStatement;
};
