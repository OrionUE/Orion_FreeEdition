/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"

#include "OrionGameTemplateGameplayAbility_Attack.generated.h"

UCLASS(Blueprintable)
class UOrionGameTemplateGameplayAbility_Attack : public UCoreGameplayAbility
{
	GENERATED_BODY()

public:
	UOrionGameTemplateGameplayAbility_Attack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Attack", meta=(ClampMin="1.0"))
	float AttackRange = 520.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Attack", meta=(ClampMin="1.0"))
	float DamageAmount = 24.0f;
};
