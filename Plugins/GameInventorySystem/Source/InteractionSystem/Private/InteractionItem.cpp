/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "InteractionItem.h"

#include "InteractionOption.h"

AInteractionItem::AInteractionItem()
{
}

void AInteractionItem::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder)
{
	OptionBuilder.AddInteractionOption(InteractionOption);
}

void AInteractionItem::CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData)
{
	K2_CustomizeInteractionEventData(InteractionEventTag, InOutEventData);
}

void AInteractionItem::OnIsNearestInteractableTarget(bool bIsNearestTarget)
{
	K2_OnIsNearestInteractableTarget(bIsNearestTarget);
}
