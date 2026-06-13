/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Theme/ThemedArtBorderStyle1.h"

#include "Theme/UIThemeBlueprintLibrary.h"
#include "Theme/UIThemeData.h"
#include "Theme/UIThemeSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ThemedArtBorderStyle1)

UThemedArtBorderStyle1::UThemedArtBorderStyle1(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UThemedArtBorderStyle1::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	BindThemeChanged();
	IUIThemeInterface::Execute_ApplyTheme(this, UUIThemeBlueprintLibrary::GetCurrentUITheme(this));
}

void UThemedArtBorderStyle1::ReleaseSlateResources(bool bReleaseChildren)
{
	UnbindThemeChanged();

	Super::ReleaseSlateResources(bReleaseChildren);
}

void UThemedArtBorderStyle1::HandleThemeChanged(UUIThemeData* NewTheme)
{
	IUIThemeInterface::Execute_ApplyTheme(this, NewTheme);
}

void UThemedArtBorderStyle1::BindThemeChanged()
{
	if (bThemeChangedBound)
	{
		return;
	}

	if (!UUIThemeBlueprintLibrary::GetUIThemeSubsystem(this))
	{
		return;
	}

	FUIThemeChangedDelegate ThemeChangedDelegate;
	ThemeChangedDelegate.BindDynamic(this, &ThisClass::HandleThemeChanged);
	UUIThemeBlueprintLibrary::BindOnUIThemeChanged(this, ThemeChangedDelegate);

	bThemeChangedBound = true;
}

void UThemedArtBorderStyle1::UnbindThemeChanged()
{
	if (!bThemeChangedBound)
	{
		return;
	}

	if (UUIThemeSubsystem* ThemeSubsystem = UUIThemeBlueprintLibrary::GetUIThemeSubsystem(this))
	{
		ThemeSubsystem->OnThemeChanged.RemoveDynamic(this, &ThisClass::HandleThemeChanged);
	}

	bThemeChangedBound = false;
}

void UThemedArtBorderStyle1::ApplyTheme_Implementation(UUIThemeData* Theme)
{
	if (!Theme)
	{
		return;
	}

	FSlateBrush ThemedBrush = Background;
	ThemedBrush.OutlineSettings.Color = FSlateColor(Theme->MainThemeColor);
	SetBrush(ThemedBrush);
}
