/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilityTask_WaitForInteractableTargets.h"
#include "InteractionQuery.h"

#include "AbilityTask_WaitForInteractableTargets_SingleLineTrace.generated.h"

UCLASS()
class INTERACTIONSYSTEM_API UAbilityTask_WaitForInteractableTargets_SingleLineTrace : public UAbilityTask_WaitForInteractableTargets
{
	GENERATED_BODY()

public:
	/** Wait until we trace new set of interactable.  This task automatically loops. */
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", Meta=(HidePin="OwningAbility", DefaultToSelf="OwningAbility", BlueprintInternalUseOnly="TRUE"))
	static UAbilityTask_WaitForInteractableTargets_SingleLineTrace* WaitForInteractableTargets_SingleLineTrace(
		UGameplayAbility* OwningAbility,
		const FInteractionQuery& InteractionQuery,
		FCollisionProfileName TraceProfile,
		const FGameplayAbilityTargetingLocationInfo& StartLocation,
		float InteractionSingleLineScanRange = 200,
		float InteractionSingleLineScanRate = 0.100,
		bool bShowDebug = false);

protected:
	virtual void Activate() override;

private:
	virtual void OnDestroy(bool AbilityEnded) override;

	void PerformTrace();

private:
	UPROPERTY()
	FInteractionQuery InteractionQuery;

	UPROPERTY()
	FGameplayAbilityTargetingLocationInfo StartLocation;

	float InteractionSingleLineScanRange = 200;
	float InteractionSingleLineScanRate = 0.100;
	bool bShowDebug = false;

	FTimerHandle TimerHandle;
};
