/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemComponent.h"
#include "Abilities/CoreGameplayAbility.h"

#include "CoreAbilitySystemComponent.generated.h"

class UCoreAbilityTagRelationshipMapping;

/**
 * ASC 核心基类
 *
 * @note 需在GameState、PlayerState中创建并初始化该组件
 */
UCLASS()
class GAMECORE_API UCoreAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UCoreAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UActorComponent interface
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface

	virtual void OnHasNewPawnAvatar(AActor* InOwnerActor, AActor* InAvatarActor);
	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;

	////////////////////////////////////////////////////////
	// ActivationGroup
public:
	bool IsActivationGroupBlocked(ECoreAbilityActivationGroup Group) const;
	void AddAbilityToActivationGroup(ECoreAbilityActivationGroup Group, UCoreGameplayAbility* CoreAbility);
	void RemoveAbilityFromActivationGroup(ECoreAbilityActivationGroup Group, UCoreGameplayAbility* CoreAbility);
	void CancelActivationGroupAbilities(ECoreAbilityActivationGroup Group, UCoreGameplayAbility* IgnoreCoreAbility, bool bReplicateCancelAbility);

	////////////////////////////////////////////////////////
	// Abilities
public:
	void TryActivateAbilitiesOnSpawn();

public:
	typedef TFunctionRef<bool(const UCoreGameplayAbility* CoreAbility, FGameplayAbilitySpecHandle Handle)> TShouldCancelAbilityFunc;
	void CancelAbilitiesByFunc(const TShouldCancelAbilityFunc& ShouldCancelFunc, bool bReplicateCancelAbility);

	////////////////////////////////////////////////////////
	// GameplayTags
public:
	/** Sets the current tag relationship mapping, if null it will clear it out */
	void SetTagRelationshipMapping(UCoreAbilityTagRelationshipMapping* NewMapping);

	////////////////////////////////////////////////////////
	// Input
public:
	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);
	void AbilityInputTagStarted(const FGameplayTag& InputTag);

	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;

	void ProcessAbilityInput(float DeltaTime, bool bGamePaused);
	void ClearAbilityInput();
	void CancelInputActivatedAbilities(bool bReplicateCancelAbility);

	////////////////////////////////////////////////////////
public:
	/** Gets the ability target data associated with the given ability handle and activation info */
	void GetAbilityTargetData(const FGameplayAbilitySpecHandle AbilityHandle, const FGameplayAbilityActivationInfo& ActivationInfo, FGameplayAbilityTargetDataHandle& OutTargetDataHandle);

	/** Looks at ability tags and gathers additional required and blocking tags */
	void GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const;

protected:
	// This table is used to look up tag relationships for activate and cancel
	UPROPERTY()
	TObjectPtr<UCoreAbilityTagRelationshipMapping> TagRelationshipMapping;

	// Handles to abilities that had their input pressed this frame.
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	// Handles to abilities that had their input Started this frame.
	TArray<FGameplayAbilitySpecHandle> InputStartedSpecHandles;

	// Handles to abilities that had their input released this frame.
	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;

	// Handles to abilities that have their input held.
	TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;

	// Number of abilities running in each activation group.
	int32 ActivationGroupCounts[(uint8)ECoreAbilityActivationGroup::MAX];
};
