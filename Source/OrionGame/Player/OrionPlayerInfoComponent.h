/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionPlayerIDType.h"
#include "Components/ControllerComponent.h"

#include "OrionPlayerInfoComponent.generated.h"

/** 当玩家信息组件初始化完成 */
DECLARE_MULTICAST_DELEGATE(FOnPlayerInfoComponentInitialized);

/**
 * UOrionPlayerInfoComponent
 *
 * 玩家信息管理组件
 */
UCLASS()
class UOrionPlayerInfoComponent final : public UControllerComponent
{
	GENERATED_BODY()

public:
	UOrionPlayerInfoComponent(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	UFUNCTION(Server, Reliable)
	void Server_SetPlayerID(const FOrionPlayerID& InPlayerID);

	void Server_InitializePlayerInfo();
	void Client_InitializePlayerInfo();

	/**
	 * 当玩家被注册 - 仅在服务器调用
	 */
	void OnPlayerRegistered();

public:
	void CallOrRegister_OnPlayerInfoInitialized(FOnPlayerInfoComponentInitialized::FDelegate&& Delegate);

	FOrionPlayerID GetPlayerID() const { return PlayerID; }

protected:
	FOrionPlayerID PlayerID;

	FOnPlayerInfoComponentInitialized OnPlayerInfoInitialized;

	bool bInitialized = false;
};
