/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Theme/UIThemeSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UIThemeSubsystem)

void UUIThemeSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (!CurrentTheme && !DefaultTheme.IsNull())
	{
		SetTheme(DefaultTheme.LoadSynchronous());
	}
}

void UUIThemeSubsystem::SetTheme(UUIThemeData* NewTheme)
{
	if (!NewTheme)
	{
		return;
	}

	CurrentTheme = NewTheme;
	OnThemeChanged.Broadcast(NewTheme);
}
