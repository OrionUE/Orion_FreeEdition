/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystem/Abilities/CoreGameplayAbility.h"
#include "Game/OrionGameTemplateTypes.h"

#include "OrionGameTemplateGameplayAbility_Build.generated.h"

UCLASS(Blueprintable)
class UOrionGameTemplateGameplayAbility_Build : public UCoreGameplayAbility
{
	GENERATED_BODY()

public:
	UOrionGameTemplateGameplayAbility_Build(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Build")
	EOrionGameTemplateStructureType StructureType = EOrionGameTemplateStructureType::Campfire;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="OrionGameTemplate|Build", meta=(ClampMin="1.0"))
	float BuildRange = 520.0f;
};
