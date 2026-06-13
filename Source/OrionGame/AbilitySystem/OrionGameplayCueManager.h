/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/CoreGameplayCueManager.h"
#include "OrionGameplayCueManager.generated.h"

/**
 * UOrionGameplayCueManager
 * Game-specific manager for gameplay cues
 * 针对游戏玩法的游戏特定管理器
 * 
 * @note
 * DefaultGame.ini中配置类的名称和路径
 * [/Script/GameplayAbilities.AbilitySystemGlobals]
 * GlobalGameplayCueManagerClass=/Script/OrionGame.OrionGameplayCueManager
 */
UCLASS()
class ORIONGAME_API UOrionGameplayCueManager : public UCoreGameplayCueManager
{
	GENERATED_BODY()

public:
	UOrionGameplayCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	static UOrionGameplayCueManager* Get();
};
