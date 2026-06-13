/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Abilities/Tasks/AbilityTask.h"

#include "AbilityTask_GrantNearbyInteraction.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnInteractableActorsChanged, const TArray<AActor*>& InteractableActors);

/**
 * UAbilityTask_GrantNearbyInteraction
 * 
 * 找寻指定范围内的可交互物品，赋予角色的能力任务
 * 
 * 指定扫描范围、扫描频率、碰撞通道
 * 在周期中，生成球形碰撞检测，找到与角色发生重叠的物品，并赋予物品指定的能力GA给角色ASC
 */
UCLASS()
class INTERACTIONSYSTEM_API UAbilityTask_GrantNearbyInteraction : public UAbilityTask
{
	GENERATED_BODY()

public:
	/**
	 * Wait until an overlap occurs. This will need to be better fleshed out, so we can specify game specific collision requirements
	 * 周期循环等待，直到重叠，执行重叠事件
	 * 
	 * @param OwningAbility					被赋予的能力
	 * @param InteractionScanRange			扫描半径
	 * @param InteractionScanRate			扫描速率
	 * @param InTraceProfile				碰撞配置
	 * @param bShowDebug					是否启用Debug
	 */
	// UFUNCTION(BlueprintCallable, Category="Ability|Tasks", Meta=(HidePin="OwningAbility", DefaultToSelf="OwningAbility", BlueprintInternalUseOnly="TRUE"))
	static UAbilityTask_GrantNearbyInteraction* GrantAbilitiesForNearbyInteraction(
		UGameplayAbility* OwningAbility,
		float InteractionScanRange,
		float InteractionScanRate,
		FCollisionProfileName InTraceProfile,
		const FOnInteractableActorsChanged& InOnInteractableActorsChanged,
		bool bShowDebug = false);

	virtual bool IsSupportedForNetworking() const override { return true; }

protected:
	virtual void Activate() override;

private:
	virtual void OnDestroy(bool AbilityEnded) override;

	/** 寻找可交互的物品，并赋予角色能力 */
	void QueryInteractable();

private:
	float InteractionScanRange = 100;
	float InteractionScanRate = 0.1f;
	FCollisionProfileName TraceProfile;
	bool bShowDebug = false;

	FTimerHandle QueryTimerHandle;
	FOnInteractableActorsChanged OnInteractableActorsChanged;
	TMap<FObjectKey, FGameplayAbilitySpecHandle> InteractionAbilityCache;
};
