/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "IndicatorManagerComponent.h"

#include "IndicatorDescriptor.h"
#include "InteractableTargetInterface.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(IndicatorManagerComponent)

UIndicatorManagerComponent::UIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bAutoRegister = true;
	bAutoActivate = true;
}

UIndicatorManagerComponent* UIndicatorManagerComponent::GetComponent(const AController* Controller)
{
	if (Controller)
	{
		return Controller->FindComponentByClass<UIndicatorManagerComponent>();
	}

	return nullptr;
}

void UIndicatorManagerComponent::AddIndicator(UIndicatorDescriptor* IndicatorDescriptor)
{
	IndicatorDescriptor->SetIndicatorManagerComponent(this);
	OnIndicatorAdded.Broadcast(IndicatorDescriptor);
	Indicators.Add(IndicatorDescriptor);
}

void UIndicatorManagerComponent::RemoveIndicator(UIndicatorDescriptor* IndicatorDescriptor)
{
	if (IndicatorDescriptor)
	{
		ensure(IndicatorDescriptor->GetIndicatorManagerComponent() == this);

		OnIndicatorRemoved.Broadcast(IndicatorDescriptor);
		Indicators.Remove(IndicatorDescriptor);
	}
}

void UIndicatorManagerComponent::UpdateNearestInteractableTarget(UIndicatorDescriptor* IndicatorDescriptor)
{
	if (CurrentNearestTarget == IndicatorDescriptor)
		return;

	if (CurrentNearestTarget && GetController<APlayerController>()->IsLocalController())
	{
		CurrentNearestTarget->GetDataInteractableTarget()->OnIsNearestInteractableTarget(false);
	}

	CurrentNearestTarget = IndicatorDescriptor;

	if (CurrentNearestTarget && GetController<APlayerController>()->IsLocalController())
	{
		CurrentNearestTarget->GetDataInteractableTarget()->OnIsNearestInteractableTarget(true);
	}
}
