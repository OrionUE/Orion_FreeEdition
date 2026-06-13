/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/CoreAbilitySystemComponent.h"

#include "OrionAbilitySystemComponent.generated.h"

/**
 * 游戏ASC基类
 */
UCLASS()
class ORIONGAME_API UOrionAbilitySystemComponent : public UCoreAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UOrionAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
