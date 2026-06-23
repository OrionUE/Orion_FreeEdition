/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_BoundActionButton.h"

#include "CommonActionWidget.h"
#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "Common/UI_ActionIconVisibility.h"
#include "Input/UIActionBinding.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_BoundActionButton)

void UUI_BoundActionButton::SetRepresentedAction(FUIActionBindingHandle InBindingHandle)
{
	RepresentedActionHandle = InBindingHandle;

	Super::SetRepresentedAction(InBindingHandle);
}

void UUI_BoundActionButton::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputSubsystem->OnInputMethodChangedNative.AddUObject(this, &ThisClass::OnInputMethodChanged);
		HandleInputMethodChanged(InputSubsystem->GetCurrentInputType());
	}
}

void UUI_BoundActionButton::UpdateInputActionWidget()
{
	Super::UpdateInputActionWidget();

	if (GetGameInstance() && InputActionWidget)
	{
		UpdateInputActionWidgetVisibility();
	}
}

void UUI_BoundActionButton::UpdateInputActionWidgetVisibility()
{
	Super::UpdateInputActionWidgetVisibility();

	if (InputActionWidget && ShouldHideInputActionWidgetForCurrentInput())
	{
		InputActionWidget->SetHidden(true);
	}
}

void UUI_BoundActionButton::HandleInputMethodChanged(ECommonInputType NewInputMethod)
{
	TSubclassOf<UCommonButtonStyle> NewStyle = nullptr;

	switch (NewInputMethod)
	{
	case ECommonInputType::MouseAndKeyboard:
		NewStyle = KeyboardStyle;
		break;
	case ECommonInputType::Gamepad:
		NewStyle = GamepadStyle;
		break;
	case ECommonInputType::Touch:
		NewStyle = TouchStyle;
		break;
	case ECommonInputType::Count:
		NewStyle = KeyboardStyle;
		break;
	}

	if (NewStyle)
	{
		SetStyle(NewStyle);
	}
}

bool UUI_BoundActionButton::ShouldHideInputActionWidgetForCurrentInput() const
{
	const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	if (!CommonInputSubsystem || CommonInputSubsystem->GetCurrentInputType() != ECommonInputType::MouseAndKeyboard)
	{
		return false;
	}

	const TSharedPtr<FUIActionBinding> ActionBinding = FUIActionBinding::FindBinding(RepresentedActionHandle);
	if (!ActionBinding.IsValid())
	{
		return false;
	}

	if (CommonUI::IsEnhancedInputSupportEnabled() && ActionBinding->InputAction.IsValid())
	{
		return GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, ActionBinding->InputAction.Get(), RepresentedActionHandle.GetBoundLocalPlayer());
	}

	return GameUI::ActionIcon::ShouldHideKeyboardMouseIcon(CommonInputSubsystem, ActionBinding->LegacyActionTableRow);
}
