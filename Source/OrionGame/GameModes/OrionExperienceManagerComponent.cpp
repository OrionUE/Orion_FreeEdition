/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionExperienceManagerComponent.h"

#include "Settings/User/OrionSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionExperienceManagerComponent)

UOrionExperienceManagerComponent::UOrionExperienceManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UOrionExperienceManagerComponent::OnExperienceFullLoadCompleted()
{
	Super::OnExperienceFullLoadCompleted();

	// Apply any necessary scalability settings
#if !UE_SERVER
	UOrionSettingsLocal::Get()->OnExperienceLoaded();
#endif
}
