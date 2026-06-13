/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ButtonBase.h"

#include "CommonActionWidget.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ButtonBase)

void UUI_ButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateButtonStyle();
	RefreshButtonText();
}

void UUI_ButtonBase::UpdateInputActionWidget()
{
	Super::UpdateInputActionWidget();

	UpdateButtonStyle();
	RefreshButtonText();
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
