/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "NativeGameplayTags.h"

/**
 * 硬编码的GameplayTags
 */
namespace CoreGameplayTags
{
	GAMECORE_API	FGameplayTag FindTagByString(const FString& TagString, bool bMatchPartialString = false);
	
	////////////////////////////////////////////////////////
	// 组件初始化
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_Spawned);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataAvailable);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataInitialized);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_GameplayReady);

	// 初始化状态链
	GAMECORE_API	extern const TArray<FGameplayTag> StateChain;
	
	////////////////////////////////////////////////////////
	// Input
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Gameplay_AbilityInputBlocked);
	
	////////////////////////////////////////////////////////
	// MovementMode
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Walking);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Falling);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Swimming);
	
	GAMECORE_API	extern const TMap<uint8, FGameplayTag> MovementModeTagMap;
	GAMECORE_API	extern const TMap<uint8, FGameplayTag> CustomMovementModeTagMap;

	////////////////////////////////////////////////////////
	// Message
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_ABILITY_SIMPLE_FAILURE_MESSAGE);
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_ABILITY_PLAY_MONTAGE_FAILURE_MESSAGE);

	////////////////////////////////////////////////////////
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Behavior_SurvivesDeath);
	
	GAMECORE_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_ActivateFail_ActivationGroup);
}
