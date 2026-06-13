/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Character/OrionCharacter.h"
#include "Character/OrionPawnControlComponent.h"
#include "Character/OrionPawnData.h"

#include "BBL_Character.generated.h"

UCLASS(MinimalAPI, meta=(DisplayName="Character Base"))
class ABBL_Character : public AOrionCharacter
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, Blueprintable, meta=(BlueprintSpawnableComponent, DisplayName="Pawn Control Component"))
class UBBL_PawnControlComponent : public UOrionPawnControlComponent
{
	GENERATED_BODY()
};

/**
 * 用于定义Pawn属性数据的不可变资产
 */
UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Pawn Data"))
class UBBL_PawnData : public UOrionPawnData
{
	GENERATED_BODY()
};
