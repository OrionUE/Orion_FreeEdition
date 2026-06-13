/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"
#include "Game/OrionGameTemplateTypes.h"

#include "OrionGameTemplateGameplayAbility_Collect.generated.h"

UCLASS(Blueprintable)
class UOrionGameTemplateGameplayAbility_Collect : public UCoreGameplayAbility
{
	GENERATED_BODY()

public:
	UOrionGameTemplateGameplayAbility_Collect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Collect", meta=(ClampMin="1.0"))
	float InteractionRange = 360.0f;
};
