/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameplayCueManager.h"

#include "AbilitySystemGlobals.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameplayCueManager)

UOrionGameplayCueManager::UOrionGameplayCueManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UOrionGameplayCueManager* UOrionGameplayCueManager::Get()
{
	return Cast<UOrionGameplayCueManager>(UAbilitySystemGlobals::Get().GetGameplayCueManager());
}
