/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "InteractableTargetInterface.h"
#include "InteractionOption.h"

#include "InteractionItem.generated.h"

/**
 * AInteractionItem
 * 
 * 可交互物品基类
 * 实现了IInteractableTarget，在蓝图中配置InteractionOption交互选项
 */
UCLASS(Abstract)
class INTERACTIONSYSTEM_API AInteractionItem : public AActor, public IInteractableTarget
{
	GENERATED_BODY()

public:
	AInteractionItem();

	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) override;
	virtual void CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData) override;
	virtual void OnIsNearestInteractableTarget(bool bIsNearestTarget) override;

protected:
	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="CustomizeInteractionEventData"))
	void K2_CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData);

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnIsNearestInteractableTarget"))
	void K2_OnIsNearestInteractableTarget(bool bIsNearestTarget);

protected:
	UPROPERTY(EditAnywhere, Category="Interaction")
	FInteractionOption InteractionOption;
};
