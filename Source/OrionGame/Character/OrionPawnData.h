/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Character/CorePawnData.h"

#include "OrionPawnData.generated.h"

class UOrionAbilityTagRelationshipMapping;
class UAFAbilitySet;
class UInputSystemConfig;

/**
 * 用于定义Pawn属性数据的不可变资产
 */
UCLASS()
class ORIONGAME_API UOrionPawnData : public UCorePawnData
{
	GENERATED_BODY()

public:
	UOrionPawnData();
};
