/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_BoundActionButton.h"

#include "CommonInputSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_BoundActionButton)

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
