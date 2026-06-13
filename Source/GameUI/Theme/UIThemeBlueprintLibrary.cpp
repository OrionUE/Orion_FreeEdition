/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Theme/UIThemeBlueprintLibrary.h"

#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Theme/UIThemeData.h"
#include "Theme/UIThemeSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UIThemeBlueprintLibrary)

UUIThemeSubsystem* UUIThemeBlueprintLibrary::GetUIThemeSubsystem(const UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		return nullptr;
	}

	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UUIThemeSubsystem>();
		}
	}

	return nullptr;
}

UUIThemeData* UUIThemeBlueprintLibrary::GetCurrentUITheme(const UObject* WorldContextObject)
{
	if (UUIThemeSubsystem* ThemeSubsystem = GetUIThemeSubsystem(WorldContextObject))
	{
		return ThemeSubsystem->GetCurrentTheme();
	}

	return nullptr;
}

void UUIThemeBlueprintLibrary::SetCurrentUITheme(const UObject* WorldContextObject, UUIThemeData* NewTheme)
{
	if (UUIThemeSubsystem* ThemeSubsystem = GetUIThemeSubsystem(WorldContextObject))
	{
		ThemeSubsystem->SetTheme(NewTheme);
	}
}

void UUIThemeBlueprintLibrary::BindOnUIThemeChanged(const UObject* WorldContextObject, const FUIThemeChangedDelegate& Delegate)
{
	if (!Delegate.IsBound())
	{
		return;
	}

	if (UUIThemeSubsystem* ThemeSubsystem = GetUIThemeSubsystem(WorldContextObject))
	{
		ThemeSubsystem->OnThemeChanged.AddUnique(Delegate);
	}
}
