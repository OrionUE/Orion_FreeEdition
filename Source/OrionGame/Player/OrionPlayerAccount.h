/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionPlayerIDType.h"

#include "OrionPlayerAccount.generated.h"

class UOrionArchiveManagerSubsystem;
class UOrionArchivePlayer;

/**
 * UOrionPlayerAccount
 *
 * 游戏中一个玩家账户
 * 用于读取和保存游戏中一个玩家的数据内容
 * 一类属性内容抽象为 UOrionPlayerData
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/ggp1w9yiq63fhri8
 */
UCLASS(Abstract)
class ORIONGAME_API UOrionPlayerAccount : public UObject
{
	GENERATED_BODY()

public:
	virtual void Initialize(const FOrionPlayerID& InPlayerID);

	virtual class UWorld* GetWorld() const override;

protected:
	/** 加载玩家存档 */
	void LoadPlayerArchive();

	/**
	 * 当获取玩家存档
	 * @param OutPlayerArchive 获取的玩家存档；若该玩家尚未有存档，为空指针
	 */
	virtual void OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive);

	void CreateNewPlayer();

protected:
	// 该游戏的玩家存档类
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UOrionArchivePlayer> PlayerArchiveClass;

	FOrionPlayerID PlayerID;

	TSoftObjectPtr<UOrionArchiveManagerSubsystem> ArchiveManager;
};
