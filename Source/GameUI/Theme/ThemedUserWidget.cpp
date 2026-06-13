/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Theme/ThemedUserWidget.h"

#include "Engine/GameInstance.h"
#include "Theme/UIThemeData.h"
#include "Theme/UIThemeSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ThemedUserWidget)

void UThemedUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (UUIThemeSubsystem* ThemeSubsystem = GetThemeSubsystem())
	{
		ThemeSubsystem->OnThemeChanged.AddUniqueDynamic(this, &ThisClass::HandleThemeChanged);
		HandleThemeChanged(ThemeSubsystem->GetCurrentTheme());
	}
}

void UThemedUserWidget::NativeDestruct()
{
	if (UUIThemeSubsystem* ThemeSubsystem = GetThemeSubsystem())
	{
		ThemeSubsystem->OnThemeChanged.RemoveDynamic(this, &ThisClass::HandleThemeChanged);
	}

	Super::NativeDestruct();
}

void UThemedUserWidget::ApplyTheme_Implementation(UUIThemeData* Theme)
{
}

void UThemedUserWidget::HandleThemeChanged(UUIThemeData* NewTheme)
{
	CurrentTheme = NewTheme;
	IUIThemeInterface::Execute_ApplyTheme(this, NewTheme);
}

UUIThemeSubsystem* UThemedUserWidget::GetThemeSubsystem() const
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		return GameInstance->GetSubsystem<UUIThemeSubsystem>();
	}

	return nullptr;
}
