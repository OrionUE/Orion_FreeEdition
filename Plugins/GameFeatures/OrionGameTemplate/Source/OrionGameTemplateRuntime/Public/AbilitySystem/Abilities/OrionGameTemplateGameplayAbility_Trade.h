/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"

#include "OrionGameTemplateGameplayAbility_Trade.generated.h"

UCLASS(Blueprintable)
class UOrionGameTemplateGameplayAbility_Trade : public UCoreGameplayAbility
{
	GENERATED_BODY()

public:
	UOrionGameTemplateGameplayAbility_Trade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Trade", meta=(ClampMin="1.0"))
	float InteractionRange = 420.0f;
};
