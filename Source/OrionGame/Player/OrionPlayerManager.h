/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreWorldSubsystem.h"
#include "OrionPlayerIDType.h"

#include "OrionPlayerManager.generated.h"

class UOrionPlayerAccount;

/**
 * UOrionPlayerManager
 *
 * 游戏中玩家管理类
 */
UCLASS()
class ORIONGAME_API UOrionPlayerManager : public UCoreWorldSubsystem
{
	GENERATED_BODY()

public:
	UOrionPlayerManager();

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	void RegisterPlayer(const FOrionPlayerID& InPlayerID);
	void UnregisterPlayer(const FOrionPlayerID& InPlayerID);

protected:
	UPROPERTY(Transient)
	TMap<FOrionPlayerID, TObjectPtr<UOrionPlayerAccount>> PlayerAccountMap;

	TSubclassOf<UOrionPlayerAccount> PlayerAccountClass;
};
