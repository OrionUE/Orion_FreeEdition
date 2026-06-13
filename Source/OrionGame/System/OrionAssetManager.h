/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreAssetManager.h"

#include "OrionAssetManager.generated.h"

/**
 * UOrionAssetManager
 * 覆盖功能和存储游戏特定类型的资产管理器的游戏实现
 *
 * @note
 * DefaultGame.ini中配置属性
 * DefaultEngine.ini中配置此类的名称和路径
 * [/Script/Engine.Engine]
 * AssetManagerClassName=/Script/OrionGame.OrionAssetManager
 */
UCLASS()
class UOrionAssetManager : public UCoreAssetManager
{
	GENERATED_BODY()

public:
	UOrionAssetManager();

	static UOrionAssetManager& Get();

protected:
	//~UAssetManager interface
	virtual void StartInitialLoading() override;
#if WITH_EDITOR
	virtual void PreBeginPIE(bool bStartSimulate) override;
#endif
	//~End of UAssetManager interface
};
