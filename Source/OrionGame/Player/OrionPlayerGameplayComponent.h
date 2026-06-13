/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "LoadingProcessInterface.h"
#include "Components/ControllerComponent.h"

#include "OrionPlayerGameplayComponent.generated.h"

class UOrionPlayerInfoComponent;
class ACorePlayerController;

/**
 * UOrionPlayerGameplayComponent
 *
 * 游戏中玩家游戏状态组件
 */
UCLASS(Abstract)
class ORIONGAME_API UOrionPlayerGameplayComponent : public UControllerComponent, public ILoadingProcessInterface
{
	GENERATED_BODY()

public:
	UOrionPlayerGameplayComponent(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override;

protected:
	/**
	 * 当玩家已初始化
	 */
	virtual void OnPlayerInitialized();

	/**
	 * 当玩家已初始化 - 蓝图实现
	 */
	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnPlayerInitialized")
	void K2_OnPlayerInitialized();

	/**
	 * 当玩家退出
	 */
	virtual void OnPlayerLogout();

	/**
	 * 当玩家退出 - 蓝图实现
	 */
	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnPlayerLogout")
	void K2_OnPlayerLogout();

	UFUNCTION(BlueprintCallable)
	void SetPlayerInitializationCompleted();

	void SetPlayerInfoComponent();

protected:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<ACorePlayerController> PlayerController;

	TSoftObjectPtr<UOrionPlayerInfoComponent> PlayerInfoComponent;

	bool bPlayerInitializationCompleted;
};
