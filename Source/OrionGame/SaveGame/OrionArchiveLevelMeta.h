/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/SaveGame.h"
#include "GameModes/OrionGameModeType.h"
#include "Handler/OrionArchiveHandler.h"

#include "OrionArchiveLevelMeta.generated.h"

class FArchiveHandler_LevelMeta;

UCLASS()
class ORIONGAME_API UOrionArchiveLevelMeta : public USaveGame
{
	GENERATED_BODY()

public:
	/** 创建新的LevelMeta */
	static TSharedRef<FArchiveHandler_LevelMeta> CreateLevelMeta(const FString& InUserID, const FString& InWorldID);

	/** 加载LevelMeta */
	static TSharedRef<FArchiveHandler_LevelMeta> LoadLevelMeta(const FString& InUserID, const FString& InWorldID);
	static TSharedRef<FArchiveHandler_LevelMeta> AsyncLoadLevelMeta(const FString& InUserID, const FString& InWorldID, const FOnArchiveLoaded& OnArchiveLoaded);

	////////////////////////////////////////////////////////
	// Last Update Time
public:
	FDateTime GetLastUpdateTime() const;
	void SetLastUpdateTime();

private:
	UPROPERTY()
	FDateTime LastUpdateTime;

	////////////////////////////////////////////////////////
	// World Name
public:
	const FString& GetWorldName() const;
	void SetWorldName(const FString& NewWorldName);

private:
	UPROPERTY()
	FString WorldName;

	////////////////////////////////////////////////////////
	// Game Mode
public:
	EOrionGameModeType GetGameModeType() const;
	void SetGameModeType(EOrionGameModeType InGameModeType);

	const FPrimaryAssetId& GetLevelMetaDefinitionAssetId() const;
	void SetLevelMetaDefinitionAssetId(const FPrimaryAssetId& InLevelMetaDefinitionAssetId);

private:
	UPROPERTY()
	EOrionGameModeType GameModeType = EOrionGameModeType::None;

	// PrimaryAssetId for UOrionExperienceLevelMetaDefinition
	UPROPERTY()
	FPrimaryAssetId LevelMetaDefinitionAssetId;
};
