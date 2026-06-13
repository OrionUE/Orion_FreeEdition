/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/Phases/GamePhaseAbility.h"

#include "GamePhaseAbility_StartAutoSave.generated.h"

class UOrionArchiveManagerSubsystem;

UCLASS()
class ORIONGAME_API UGamePhaseAbility_StartAutoSave : public UGamePhaseAbility
{
	GENERATED_BODY()

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	void OnAutoSave();

protected:
	TWeakObjectPtr<UOrionArchiveManagerSubsystem> ArchiveManager;
	
	FTimerHandle AutoSaveTimerHandle;
	float AutoSaveTime = 30.f;
};
