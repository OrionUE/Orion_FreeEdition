/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"

#include "CoreGameData.generated.h"

/**
 * UCoreGameData
 * 
 * 全局游戏数据的不可变数据资产基类
 */
UCLASS(BlueprintType, Const, Meta=(ShortTooltip="Data asset containing global game data."))
class GAMECORE_API UCoreGameData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UCoreGameData();
	
	static const UCoreGameData& Get();
};
