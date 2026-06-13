/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ArchiveHandler_Player.h"

#include "Kismet/GameplayStatics.h"
#include "Player/OrionPlayerIDType.h"
#include "SaveGame/OrionArchivePlayer.h"

FArchiveHandler_Player::FArchiveHandler_Player(UOrionArchivePlayer* InPlayer, const FString& InUserPlayerID, const FString& InWorldID, const FOrionPlayerID& InPlayerID)
	: FOrionArchiveHandler(InUserPlayerID, InWorldID),
	  ArchivePlayer(InPlayer),
	  PlayerID(InPlayerID)
{
	// 存档保存路径为： [游戏名称]/Saved/SaveGames/[PlayerID]/[关卡房间ID]/PLAYERS_SAVEGAME_SLOT_NAME
	SlotName = FString::Printf(TEXT("%s/%s/%s/%s"), *InUserPlayerID, *InWorldID, PLAYERS_SAVEGAME_SLOT_NAME, *InPlayerID.ToString());
	
	ArchiveType = EOrionArchiveType::Player;
}

void FArchiveHandler_Player::AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded)
{
	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0,
		FAsyncLoadGameFromSlotDelegate::CreateLambda([this, OnArchiveLoaded](const FString& OutSlotName, const int32 OutUserIndex, USaveGame* OutSaveGame)
		{
			if (UOrionArchivePlayer* Player = Cast<UOrionArchivePlayer>(OutSaveGame))
			{
				ArchivePlayer.Reset(Player);
				OnArchiveLoaded.ExecuteIfBound(true);
			}
			
			OnArchiveLoaded.ExecuteIfBound(false);
		}));
}

bool FArchiveHandler_Player::LoadArchive()
{
	USaveGame* LoadSaveGame = UGameplayStatics::LoadGameFromSlot(SlotName, 0);
	if (UOrionArchivePlayer* Player = Cast<UOrionArchivePlayer>(LoadSaveGame))
	{
		ArchivePlayer.Reset(Player);
		return true;
	}
	return false;
}

void FArchiveHandler_Player::AsyncSaveArchive()
{
	UGameplayStatics::AsyncSaveGameToSlot(ArchivePlayer.Get(), SlotName, 0,
		FAsyncSaveGameToSlotDelegate::CreateLambda([](const FString& OutSlotName, const int32 OutUserIndex, bool bSuccess)
		{
		}));
}

void FArchiveHandler_Player::DeleteArchive()
{
	UGameplayStatics::DeleteGameInSlot(SlotName, 0);
	ArchivePlayer.Reset();
}

bool FArchiveHandler_Player::DoesArchiveExist()
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}
