/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayCueManager.h"
#include "CoreGameplayCueManager.generated.h"

/**
 * UCoreGameplayCueManager
 * 
 * Game-specific manager for gameplay cues
 * 针对游戏玩法的游戏特定管理器
 *
 * @note
 * 需在DefaultGame.ini添加此类的名称和路径
 * [/Script/GameplayAbilities.AbilitySystemGlobals]
 * GlobalGameplayCueManagerClass=/Script/ModuleName.GameplayCueManagerClassName
 */
UCLASS()
class GAMECORE_API UCoreGameplayCueManager : public UGameplayCueManager
{
	GENERATED_BODY()

public:
	UCoreGameplayCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	static UCoreGameplayCueManager* Get();

	/** When delay loading cues, this will load the cues that must be always loaded anyway */
	void LoadAlwaysLoadedCues();

	/** Updates the bundles for the singular gameplay cue primary asset */
	void RefreshGameplayCuePrimaryAsset();
};
