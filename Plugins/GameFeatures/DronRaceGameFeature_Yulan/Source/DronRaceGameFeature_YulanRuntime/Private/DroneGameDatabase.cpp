// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneGameDatabase.h"

DroneGameDatabase::DroneGameDatabase(FString Path, ESQLiteDatabaseOpenMode OpenMode)
{
	Database = new FSQLiteDatabase();
	if (!Database->Open(*Path, OpenMode) || !Database->IsValid()) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail to open database: %s"), *Database->GetLastError());
	}

	const TCHAR* SaveQuery = TEXT("insert into scores(score) values ($score)");
	ScoreSaveStatement.Create(*Database, SaveQuery, ESQLitePreparedStatementFlags::Persistent);
	const TCHAR* LoadQuery = TEXT("select score from scores order by score desc limit 10");
	ScoreLoadStatement.Create(*Database, LoadQuery, ESQLitePreparedStatementFlags::Persistent);
	
}

DroneGameDatabase::~DroneGameDatabase()
{
	ScoreSaveStatement.Destroy();
	ScoreLoadStatement.Destroy();
	if (!Database->Close()) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail to close database: %s"), *Database->GetLastError());
	}
	else 
	{
		delete Database;
	}
}

bool DroneGameDatabase::SavePlayerScore(int32 PlayerScore)
{
	if (Database->IsValid() && ScoreSaveStatement.IsValid()) 
	{
		ScoreSaveStatement.Reset();
		bool bSuccessBinding = true;
		bSuccessBinding = bSuccessBinding && ScoreSaveStatement.SetBindingValueByName(TEXT("$score"), PlayerScore);
		if (!bSuccessBinding || !ScoreSaveStatement.Execute())
		{
			return false;
		}
	}
	return true;
}

TArray<int32> DroneGameDatabase::LoadHistoryScores()
{
	TArray<int32> ScoreBoard;
	if (Database->IsValid() && ScoreLoadStatement.IsValid())
	{
		ScoreLoadStatement.Reset();
		if (ScoreLoadStatement.Execute())
		{
			while (ScoreLoadStatement.Step() == ESQLitePreparedStatementStepResult::Row) {
				ScoreBoard.Add(0);
				ScoreLoadStatement.GetColumnValueByName(TEXT("score"), ScoreBoard[ScoreBoard.Num()-1]);
			}
		}
	}
	return ScoreBoard;
}
