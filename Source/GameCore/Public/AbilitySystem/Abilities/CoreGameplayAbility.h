/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Abilities/GameplayAbility.h"

#include "CoreGameplayAbility.generated.h"

class ICoreAbilitySourceInterface;
class ACoreCharacter;
class ACorePlayerController;
class UCorePawnControlComponent;
class UCoreAbilityCost;

/**
 * ECoreAbilityActivationPolicy
 * 
 * Defines how an ability is meant to activate.
 * 如何去激活此能力
 */
UENUM(BlueprintType)
enum class ECoreAbilityActivationPolicy : uint8
{
	// Try to activate the ability when the input is triggered.
	// 当输入触发时，尝试激活及能力
	OnInputTriggered,

	// Continually try to activate the ability while the input is active.
	// 当输入激活时，持续地尝试激活此能力
	WhileInputActive,

	// Try to activate the ability when an avatar is assigned.
	// 当角色被分配时尝试激活此能力
	OnSpawn,

	// Try to activate the ability when the input is triggered.
	// 当输入开始按压触发时，尝试激活及能力
	OnInputStarted,
};

/**
 * ECoreAbilityActivationGroup
 *
 * Defines how an ability activates in relation to other abilities.
 * 定义一种激活能力如何与其他能力相关联。
 */
UENUM(BlueprintType)
enum class ECoreAbilityActivationGroup : uint8
{
	// Ability runs independently of all other abilities.
	// 此能力独立于其他所有能力
	Independent,

	// Ability is canceled and replaced by other exclusive abilities.
	// 此能力可被其他特殊能力取消或替换
	Exclusive_Replaceable,

	// Ability blocks all other exclusive abilities from activating.
	// 该技能阻止所有其他特殊能力的激活
	Exclusive_Blocking,

	MAX	UMETA(Hidden)
};

/**
 * 能力激活失败简单消息
 */
USTRUCT(BlueprintType)
struct FCoreAbilitySimpleFailureMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<APlayerController> PlayerController = nullptr;

	UPROPERTY(BlueprintReadWrite)
	FGameplayTagContainer FailureTags;

	UPROPERTY(BlueprintReadWrite)
	FText UserFacingReason;
};

/**
 * Failure reason that can be used to play an animation montage when a failure occurs
 * 故障原因，可用于播放动画蒙太奇时发生故障
 */
USTRUCT(BlueprintType)
struct FCoreAbilityMontageFailureMessage
{
	GENERATED_BODY()

public:
	// Player controller that failed to activate the ability, if the AbilitySystemComponent was player owned
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<APlayerController> PlayerController = nullptr;

	// Avatar actor that failed to activate the ability
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AActor> AvatarActor = nullptr;

	// All the reasons why this ability has failed
	UPROPERTY(BlueprintReadWrite)
	FGameplayTagContainer FailureTags;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAnimMontage> FailureMontage = nullptr;
};

/**
 * 游戏GA基类
 *
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/bvxbw55e64c2yysw
 */
UCLASS(Abstract, HideCategories=Input, Meta=(ShortTooltip="The base gameplay ability class used by this project."))
class GAMECORE_API UCoreGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

	friend class UCoreAbilitySystemComponent;

public:
	UCoreGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "GameCore|Ability")
	UCoreAbilitySystemComponent* GetCoreAbilitySystemComponentFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "GameCore|Ability")
	ACorePlayerController* GetCorePlayerControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "GameCore|Ability")
	AController* GetControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "GameCore|Ability")
	ACoreCharacter* GetCoreCharacterFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "GameCore|Ability")
	UCorePawnControlComponent* GetPawnControlComponentFromActorInfo() const;
	
	void TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const;

	/**
	 * Returns true if the requested activation group is a valid transition.
	 * 如果请求的能力关联组时有效的转换，则返回true
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "GameCore|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool CanChangeActivationGroup(ECoreAbilityActivationGroup NewGroup) const;

	/**
	 * Tries to change the activation group.  Returns true if it successfully changed.
	 * 尝试更改能力关联组，如果更改成功返回true
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "GameCore|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool ChangeActivationGroup(ECoreAbilityActivationGroup NewGroup);

	void OnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const
	{
		NativeOnAbilityFailedToActivate(FailedReason);
		ScriptOnAbilityFailedToActivate(FailedReason);
	}

public:
	FORCEINLINE ECoreAbilityActivationGroup GetActivationGroup() const { return ActivationGroup; }
	FORCEINLINE ECoreAbilityActivationPolicy GetActivationPolicy() const { return ActivationPolicy; }

protected:
	/**
	 * Called when the ability fails to activate
	 * 当能力无法激活
	 */
	virtual void NativeOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;

	/**
	 * Called when the ability fails to activate
	 * 当能力激活失败执行
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void ScriptOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;

	//~UGameplayAbility interface
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void SetCanBeCanceled(bool bCanBeCanceled) override;
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	/*virtual FGameplayEffectContextHandle MakeEffectContext(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo) const override;*/
	virtual void ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec& Spec, FGameplayAbilitySpec* AbilitySpec) const override;
	virtual bool DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	//~End of UGameplayAbility interface

	virtual void OnPawnAvatarSet();

	virtual void GetAbilitySource(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, float& OutSourceLevel, const ICoreAbilitySourceInterface*& OutAbilitySource, AActor*& OutEffectCauser) const;


	/** Called when this ability is granted to the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityAdded")
	void K2_OnAbilityAdded();

	/** Called when this ability is removed from the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityRemoved")
	void K2_OnAbilityRemoved();

	/** Called when the ability system is initialized with a pawn avatar. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnPawnAvatarSet")
	void K2_OnPawnAvatarSet();

protected:
	// Defines how this ability is meant to activate.
	// 定义怎样去激活这个能力
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameCore|Ability Activation")
	ECoreAbilityActivationPolicy ActivationPolicy;

	// Defines the relationship between this ability activating and other abilities activating.
	// 定义此能力激活与其他能力激活之间的关系
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameCore|Ability Activation")
	ECoreAbilityActivationGroup ActivationGroup;

	// Additional costs that must be paid to activate this ability
	// 激活此能力必须消耗的成本
	UPROPERTY(EditDefaultsOnly, Instanced, Category = Costs)
	TArray<TObjectPtr<UCoreAbilityCost>> AdditionalCosts;

	// Map of failure tags to simple error messages
	UPROPERTY(EditDefaultsOnly, Category = "Advanced")
	TMap<FGameplayTag, FText> FailureTagToUserFacingMessages;

	// Map of failure tags to anim montages that should be played with them
	UPROPERTY(EditDefaultsOnly, Category = "Advanced")
	TMap<FGameplayTag, TObjectPtr<UAnimMontage>> FailureTagToAnimMontage;

	// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.
	UPROPERTY(EditDefaultsOnly, Category = "Advanced")
	bool bLogCancelation;
};
