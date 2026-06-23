/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ButtonBase.h"

#include "CommonActionWidget.h"
#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "Common/UI_ActionIconVisibility.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ButtonBase)

void UUI_ButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateButtonStyle();
	RefreshButtonText();
}

void UUI_ButtonBase::UpdateInputActionWidget()
{
	const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	const bool bHasExplicitInputAction = TriggeringEnhancedInputAction || !TriggeringInputAction.IsNull() || !TriggeredInputAction.IsNull();
	const bool bShouldSuppressKeyboardFallback = CommonInputSubsystem
		&& CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::MouseAndKeyboard
		&& !bHasExplicitInputAction
		&& bShouldUseFallbackDefaultInputAction;
	const bool bOriginalShouldUseFallbackDefaultInputAction = bShouldUseFallbackDefaultInputAction;

	if (bShouldSuppressKeyboardFallback)
	{
		bShouldUseFallbackDefaultInputAction = false;
	}

	Super::UpdateInputActionWidget();

	if (bShouldSuppressKeyboardFallback)
	{
		bShouldUseFallbackDefaultInputAction = bOriginalShouldUseFallbackDefaultInputAction;
	}

	UpdateButtonStyle();
	RefreshButtonText();
}

void UUI_ButtonBase::UpdateInputActionWidgetVisibility()
{
	Super::UpdateInputActionWidgetVisibility();

	if (InputActionWidget && ShouldHideInputActionWidgetForCurrentInput())
	{
		InputActionWidget->SetHidden(true);
	}
}

void UUI_ButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	Super::OnInputMethodChanged(CurrentInputType);

	UpdateButtonStyle();
}

void UUI_ButtonBase::SetButtonText(const FText& InText)
{
	bOverrideButtonText = InText.IsEmpty();
	ButtonText = InText;
	RefreshButtonText();
}

void UUI_ButtonBase::SetButtonIconBrush(const FSlateBrush& InBrush)
{
	bUseIconOverride = true;
	IconImageBrush = InBrush;
	UpdateButtonStyle();
}

void UUI_ButtonBase::RefreshButtonText()
{
	if (bOverrideButtonText || ButtonText.IsEmpty())
	{
		if (InputActionWidget)
		{
			const FText ActionDisplayText = InputActionWidget->GetDisplayText();	
			if (!ActionDisplayText.IsEmpty())
			{
				UpdateButtonText(ActionDisplayText);
				return;
			}
		}
	}
	
	UpdateButtonText(ButtonText);
}

bool UUI_ButtonBase::ShouldHideInputActionWidgetForCurrentInput() const
{
	const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	if (!CommonInputSubsystem || CommonInputSubsystem->GetCurrentInputType() != ECommonInputType::MouseAndKeyboard)
	{
		return false;
	}

	if (CommonUI::IsEnhancedInputSupportEnabled() && TriggeringEnhancedInputAction)
	{
		return GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, TriggeringEnhancedInputAction, GetOwningLocalPlayer());
	}

	if (!TriggeringInputAction.IsNull())
	{
		return GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, TriggeringInputAction);
	}

	if (!TriggeredInputAction.IsNull())
	{
		return GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, TriggeredInputAction);
	}

	return false;
}
