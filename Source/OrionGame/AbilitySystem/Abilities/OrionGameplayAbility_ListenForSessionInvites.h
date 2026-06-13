/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"

#include "OrionGameplayAbility_ListenForSessionInvites.generated.h"

struct FBlueprintSessionResult;

UCLASS()
class ORIONGAME_API UOrionGameplayAbility_ListenForSessionInvites : public UCoreGameplayAbility
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void JoinSession(FBlueprintSessionResult InSessionResult);
};
