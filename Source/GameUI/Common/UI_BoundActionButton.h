/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Input/CommonBoundActionButton.h"

#include "UI_BoundActionButton.generated.h"

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Bound Action Button Base"))
class GAMEUI_API UUI_BoundActionButton : public UCommonBoundActionButton
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

	virtual void UpdateInputActionWidget() override;

private:
	void HandleInputMethodChanged(ECommonInputType NewInputMethod);

	UPROPERTY(EditAnywhere, Category="Styles")
	TSubclassOf<UCommonButtonStyle> KeyboardStyle;

	UPROPERTY(EditAnywhere, Category="Styles")
	TSubclassOf<UCommonButtonStyle> GamepadStyle;

	UPROPERTY(EditAnywhere, Category="Styles")
	TSubclassOf<UCommonButtonStyle> TouchStyle;
};
