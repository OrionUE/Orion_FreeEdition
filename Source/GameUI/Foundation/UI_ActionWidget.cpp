/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ActionWidget.h"

#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "Common/UI_ActionIconVisibility.h"
#include "Styling/StyleDefaults.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ActionWidget)

FSlateBrush UUI_ActionWidget::GetIcon() const
{
	// If there is an Enhanced Input action associated with this widget, then search for any
	// keys bound to that action and display those instead of the default data table settings.
	// This covers the case of when a player has rebound a key to something else
	if (AssociatedInputAction)
	{
		const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
		if (CommonInputSubsystem && !GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, AssociatedInputAction, CommonInputSubsystem->GetLocalPlayer()))
		{
			return CommonUI::GetIconForEnhancedInputAction(CommonInputSubsystem, AssociatedInputAction);
		}

		return *FStyleDefaults::GetNoBrush();
	}

	if (const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		if (GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, EnhancedInputAction, CommonInputSubsystem->GetLocalPlayer()) ||
			GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, InputActions))
		{
			return *FStyleDefaults::GetNoBrush();
		}
	}
	
	return Super::GetIcon();
}
