/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "InteractableTargetInterface.generated.h"

class FInteractionOptionBuilder;

struct FGameplayEventData;
struct FGameplayTag;
struct FInteractionQuery;

UINTERFACE(MinimalAPI, Meta=(CannotImplementInterfaceInBlueprint))
class UInteractableTarget : public UInterface
{
	GENERATED_BODY()
};

/**
 * 可交互目标 - 接口
 *
 * 可交互物品需要实现此接口
 */
class INTERACTIONSYSTEM_API IInteractableTarget
{
	GENERATED_BODY()

public:
	/**
	 * 添加可交互选项
	 * @param InteractQuery			交互所有者信息
	 * @param OptionBuilder			选项构造器
	 */
	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) = 0;

	virtual void CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData) { }

	virtual void OnIsNearestInteractableTarget(bool bIsNearestTarget) { }
};
