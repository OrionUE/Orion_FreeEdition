/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ArchiveHandler_LevelMeta.h"

#include "Kismet/GameplayStatics.h"
#include "SaveGame/OrionArchiveLevelMeta.h"

FArchiveHandler_LevelMeta::FArchiveHandler_LevelMeta(UOrionArchiveLevelMeta* InLevelMeta, const FString& InUserPlayerID, const FString& InWorldID)
	: FOrionArchiveHandler(InUserPlayerID, InWorldID),
	  ArchiveLevelMeta(InLevelMeta)
{
	// 存档保存路径为： [游戏名称]/Saved/SaveGames/[PlayerID]/[关卡房间ID]
	SlotName = FString::Printf(TEXT("%s/%s/%s"), *InUserPlayerID, *InWorldID, LEVELMETA_SETTINGS_SLOT_NAME);
	
	ArchiveType = EOrionArchiveType::LevelMeta;
}

void FArchiveHandler_LevelMeta::AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded)
{
	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0,
		FAsyncLoadGameFromSlotDelegate::CreateLambda([this, OnArchiveLoaded](const FString& OutSlotName, const int32 OutUserIndex, USaveGame* OutSaveGame)
		{
			if (UOrionArchiveLevelMeta* LevelMeta = Cast<UOrionArchiveLevelMeta>(OutSaveGame))
			{
				ArchiveLevelMeta.Reset(LevelMeta);
				OnArchiveLoaded.ExecuteIfBound(true);
			}
			else
			{
				OnArchiveLoaded.ExecuteIfBound(false);
			}
		}));
}

bool FArchiveHandler_LevelMeta::LoadArchive()
{
	USaveGame* LoadSaveGame = UGameplayStatics::LoadGameFromSlot(SlotName, 0);
	if (UOrionArchiveLevelMeta* LevelMeta = Cast<UOrionArchiveLevelMeta>(LoadSaveGame))
	{
		ArchiveLevelMeta.Reset(LevelMeta);
		return true;
	}
	return false; 
}

void FArchiveHandler_LevelMeta::AsyncSaveArchive()
{
	ArchiveLevelMeta->SetLastUpdateTime();
	
	UGameplayStatics::AsyncSaveGameToSlot(ArchiveLevelMeta.Get(), SlotName, 0,
		FAsyncSaveGameToSlotDelegate::CreateLambda([](const FString& OutSlotName, const int32 OutUserIndex, bool bSuccess)
		{
		}));
}

void FArchiveHandler_LevelMeta::DeleteArchive()
{
	UGameplayStatics::DeleteGameInSlot(SlotName, 0);
	ArchiveLevelMeta.Reset();
}

bool FArchiveHandler_LevelMeta::DoesArchiveExist()
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}
