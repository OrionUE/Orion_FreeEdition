/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Handler/OrionArchiveType.h"
#include "Player/OrionPlayerIDType.h"

#include "OrionArchiveContext.generated.h"

class UOrionArchivePlayer;
class FArchiveHandler_Player;
class UOrionSettingsWorldOption;
class UOrionArchiveLevelMeta;
class UOrionArchiveManagerSubsystem;
class FArchiveHandler_LevelMeta;
class FArchiveHandler_WorldOption;

enum class EOrionArchiveType : uint8;

UCLASS(Within=OrionArchiveManagerSubsystem)
class ORIONGAME_API UOrionArchiveContext : public UObject
{
	GENERATED_BODY()

public:
	/** 创建新的世界存档 */
	static UOrionArchiveContext* NewArchive(UOrionArchiveManagerSubsystem* InArchiveManager);

	/** 获取存档 */
	static UOrionArchiveContext* GetArchive(UOrionArchiveManagerSubsystem* InArchiveManager, const FString& InWorldID);

protected:
	/** 当创建新的世界 */
	void CreateNewWorld();

public:
	/** 加载游戏 */
	void LoadGame();

	/** 创建一个玩家存档 */
	void CreatePlayerArchive(const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass);

	/** 保存指定存档 */
	void SaveByTypes(const TArray<EOrionArchiveType>& InArchiveTypes);

	/** 删除存档 */
	void DeleteArchive();

	/**
	 * 获取关卡元数据
	 * @return 关卡元数据 USaveGame
	 */
	UOrionArchiveLevelMeta* GetLevelMetaArchive();

	/**
	 * 获取世界选项设置
	 * @return 世界选项设置 USaveGame
	 */
	UOrionSettingsWorldOption* GetWorldOptionSettings();

	/**
	 * 获取或加载指定玩家存档
	 * @param InPlayerID 玩家ID
	 * @param OnGetPlayerArchive 获取玩家存档委托，返回玩家存档；玩家存档不存在时返回空指针
	 */
	void GetOrLoadPlayerArchive(const FOrionPlayerID& InPlayerID, const FOnGetPlayerArchive& OnGetPlayerArchive);

	const FString& GetWorldID() const { return WorldID; }

	bool IsFinishedGetArchive() const { return bGetArchiveFinished; }

	/** 世界选项设置是否已存在 */
	bool IsSavedOptionSettings();

protected:
	void OnGetArchive();

protected:
	FString GetUserPlayerID();

protected:
	FString WorldID;

	TSharedPtr<FArchiveHandler_WorldOption> WorldOptionHandler;
	TSharedPtr<FArchiveHandler_LevelMeta> LevelMetaHandler;
	TMap<FOrionPlayerID, TSharedPtr<FArchiveHandler_Player>> PlayerHandlerMap;

	bool bGetArchiveFinished = false;

	FCriticalSection PlayerHandlerMapCriticalSection;
};
