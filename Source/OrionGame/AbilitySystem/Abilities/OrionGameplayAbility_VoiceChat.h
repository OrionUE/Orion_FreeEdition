/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"

#include "OrionGameplayAbility_VoiceChat.generated.h"

UCLASS()
class ORIONGAME_API UOrionGameplayAbility_VoiceChat : public UCoreGameplayAbility
{
	GENERATED_BODY()

protected:
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

protected:
	void InitInputDevice(const FGameplayAbilityActorInfo* ActorInfo);

protected:
	UPROPERTY(BlueprintReadOnly)
	int32 InputDeviceSampleRate = 48000;

	UPROPERTY(BlueprintReadOnly)
	int32 InputDeviceNumChannels = 1;
};
