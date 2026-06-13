/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/SaveGame.h"

#include "OrionSettingsWorldOption.generated.h"

class FArchiveHandler_WorldOption;

/**
 * UOrionSettingsGameWorld - 游戏关卡世界设置
 * 保存设置一个房间（游戏世界）的信息，如房间名、是否可联机、可加入玩家数量等
 *
 * 该存档名为WorldOption，保存路径为：[游戏名称]/Saved/SaveGames/[PlayerID]/[关卡房间ID]/WorldOption.sav
 */
UCLASS()
class UOrionSettingsWorldOption : public USaveGame
{
	GENERATED_BODY()

public:
	/** 创建新的WorldOption */
	static TSharedRef<FArchiveHandler_WorldOption> CreateWorldOption(const FString& InUserID, const FString& InWorldID);
	
	static TSharedRef<FArchiveHandler_WorldOption> LoadWorldOption(const FString& InUserID, const FString& InWorldID);
	
	void InitializeSaveGame();
};
