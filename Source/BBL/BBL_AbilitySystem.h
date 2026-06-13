/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/OrionAbilitySystemComponent.h"
#include "AbilitySystem/OrionGameplayCueManager.h"
#include "AbilitySystem/Abilities/OrionGameplayAbility_Friend.h"
#include "AbilitySystem/Abilities/OrionGameplayAbility_ListenForSessionInvites.h"
#include "AbilitySystem/Abilities/OrionGameplayAbility_VoiceChat.h"

#include "BBL_AbilitySystem.generated.h"

/**
 * 游戏ASC基类
 */
UCLASS(MinimalAPI, meta=(DisplayName="Ability System Component Base"))
class UBBL_AbilitySystemComponent : public UOrionAbilitySystemComponent
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Gameplay Cue Manager Base"))
class UBBL_GameplayCueManager : public UOrionGameplayCueManager
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Gameplay Ability Friend"))
class UBBL_GameplayAbility_Friend : public UOrionGameplayAbility_Friend
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Gameplay Ability Voice Chat"))
class UBBL_GameplayAbility_VoiceChat : public UOrionGameplayAbility_VoiceChat
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Gameplay Ability Listen For Session Invites"))
class UBBL_GameplayAbility_ListenForSessionInvites : public UOrionGameplayAbility_ListenForSessionInvites
{
	GENERATED_BODY()
};
