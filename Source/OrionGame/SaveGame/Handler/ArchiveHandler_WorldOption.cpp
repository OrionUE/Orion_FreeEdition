/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ArchiveHandler_WorldOption.h"

#include "Kismet/GameplayStatics.h"
#include "Settings/Game/OrionSettingsWorldOption.h"

FArchiveHandler_WorldOption::FArchiveHandler_WorldOption(UOrionSettingsWorldOption* InWorldOption, const FString& InUserPlayerID, const FString& InWorldID)
	: FOrionArchiveHandler(InUserPlayerID, InWorldID),
	  ArchiveWorldOption(InWorldOption)
{
	// 存档保存路径为： [游戏名称]/Saved/SaveGames/[PlayerID]/[关卡房间ID]
	SlotName = FString::Printf(TEXT("%s/%s/%s"), *InUserPlayerID, *InWorldID, GAMEWORLD_SETTINGS_SLOT_NAME);

	ArchiveType = EOrionArchiveType::WorldOption;
}

void FArchiveHandler_WorldOption::AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded)
{
	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0,
		FAsyncLoadGameFromSlotDelegate::CreateLambda([this, &OnArchiveLoaded](const FString& OutSlotName, const int32 OutUserIndex, USaveGame* OutSaveGame)
		{
			if (UOrionSettingsWorldOption* WorldOption = Cast<UOrionSettingsWorldOption>(OutSaveGame))
			{
				ArchiveWorldOption.Reset(WorldOption);
				OnArchiveLoaded.ExecuteIfBound(true);
			}
			
			OnArchiveLoaded.ExecuteIfBound(false);
		}));
}

bool FArchiveHandler_WorldOption::LoadArchive()
{
	USaveGame* LoadSaveGame = UGameplayStatics::LoadGameFromSlot(SlotName, 0);
	if (UOrionSettingsWorldOption* WorldOption = Cast<UOrionSettingsWorldOption>(LoadSaveGame))
	{
		ArchiveWorldOption.Reset(WorldOption);
		return true;
	}
	return false;
}

void FArchiveHandler_WorldOption::AsyncSaveArchive()
{
	UGameplayStatics::AsyncSaveGameToSlot(ArchiveWorldOption.Get(), SlotName, 0,
		FAsyncSaveGameToSlotDelegate::CreateLambda([](const FString& OutSlotName, const int32 OutUserIndex, bool bSuccess)
		{
		}));
}

void FArchiveHandler_WorldOption::DeleteArchive()
{
	UGameplayStatics::DeleteGameInSlot(SlotName, 0);
	ArchiveWorldOption.Reset();
}

bool FArchiveHandler_WorldOption::DoesArchiveExist()
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}
