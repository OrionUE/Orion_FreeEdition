/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/CoreLocalPlayer.h"

#include "OrionLocalPlayer.generated.h"

class UOrionArchiveLevelMeta;
class UOrionSettingsWorldOption;
class UOrionSettingsLocal;
class UOrionSettingsShared;

/**
 * UOrionLocalPlayer
 *
 * @note
 * DefaultEngine.ini中配置此类的名称和路径
 * [/Script/Engine.Engine]
 * LocalPlayerClassName=/Script/OrionGame.OrionLocalPlayer
 */
UCLASS()
class ORIONGAME_API UOrionLocalPlayer : public UCoreLocalPlayer
{
	GENERATED_BODY()

public:
	UOrionLocalPlayer();

public:
	/** Gets the local settings for this player, this is read from config files at process startup and is always valid */
	UFUNCTION()
	UOrionSettingsLocal* GetLocalSettings() const;
	
	/** Gets the shared setting for this player, this is read using the save game system so may not be correct until after user login */
	UFUNCTION()
	UOrionSettingsShared* GetSharedSettings() const;

	UFUNCTION()
	/** 获取当前关卡的设置 - LevelMeta */
	UOrionArchiveLevelMeta* GetCurrentLevelMeta() const;

	/** 获取当前游戏世界的设置 - WorldOption */
	UFUNCTION()
	UOrionSettingsWorldOption* GetCurrentWorldOptionSettings() const;

	/** Starts an async request to load the shared settings, this will call OnSharedSettingsLoaded after loading or creating new ones */
	void LoadSharedSettingsFromDisk(bool bForceLoad = false);

protected:
	void OnSharedSettingsLoaded(UOrionSettingsShared* LoadedOrCreatedSettings);

private:
	UPROPERTY(Transient)
	mutable TObjectPtr<UOrionSettingsShared> SharedSettings;

	FUniqueNetIdRepl NetIdForSharedSettings;
};
