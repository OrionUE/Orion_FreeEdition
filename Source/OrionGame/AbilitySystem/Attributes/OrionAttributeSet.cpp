/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionAttributeSet.h"

#include "AbilitySystem/OrionAbilitySystemComponent.h"

UOrionAttributeSet::UOrionAttributeSet()
{
}

UWorld* UOrionAttributeSet::GetWorld() const
{
	const UObject* Outer = GetOuter();
	check(Outer);

	return Outer->GetWorld();
}

UOrionAbilitySystemComponent* UOrionAttributeSet::GetOrionAbilitySystemComponent() const
{
	return Cast<UOrionAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
