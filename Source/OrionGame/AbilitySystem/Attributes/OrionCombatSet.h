/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemComponent.h"
#include "OrionAttributeSet.h"

#include "OrionCombatSet.generated.h"

/**
 * UOrionCombatSet
 *
 * Class that defines attributes that are necessary for applying damage or healing.
 * Attribute examples include: damage, healing, attack power, and shield penetrations.
 */
UCLASS(BlueprintType)
class ORIONGAME_API UOrionCombatSet : public UOrionAttributeSet
{
	GENERATED_BODY()

public:
	UOrionCombatSet();

	ATTRIBUTE_ACCESSORS(UOrionCombatSet, BaseDamage);
	ATTRIBUTE_ACCESSORS(UOrionCombatSet, BaseHeal);

protected:
	UFUNCTION()
	void OnRep_BaseDamage(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_BaseHeal(const FGameplayAttributeData& OldValue);

private:
	// The base amount of damage to apply in the damage execution.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BaseDamage, Category="Orion|Combat", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData BaseDamage;

	// The base amount of healing to apply in the heal execution.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BaseHeal, Category="Orion|Combat", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData BaseHeal;
};
