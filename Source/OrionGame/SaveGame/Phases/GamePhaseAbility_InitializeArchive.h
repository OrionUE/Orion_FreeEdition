/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/Phases/GamePhaseAbility.h"

#include "GamePhaseAbility_InitializeArchive.generated.h"

class UOrionArchiveContext;
class UOrionArchiveManagerSubsystem;

UCLASS()
class ORIONGAME_API UGamePhaseAbility_InitializeArchive : public UGamePhaseAbility
{
	GENERATED_BODY()

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	void StartAutoSave();

protected:
	TWeakObjectPtr<UOrionArchiveManagerSubsystem> ArchiveManager;
	TWeakObjectPtr<UOrionArchiveContext> CurrentArchive;
};
