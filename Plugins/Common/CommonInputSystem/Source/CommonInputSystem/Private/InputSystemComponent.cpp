// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#include "InputSystemComponent.h"

UInputSystemComponent::UInputSystemComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UInputSystemComponent::AddInputMappings(const UInputSystemConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// TODO: Here handle any custom logic to add something from your input config if required
}

void UInputSystemComponent::RemoveInputMappings(const UInputSystemConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// TODO: Here handle any custom logic to remove input mappings that you may have added above
}

void UInputSystemComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
