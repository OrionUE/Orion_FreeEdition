/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ActivatableWidget.h"

#include "UI_StartUpScreen.generated.h"

class UOrionFrontendStateComponent;

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Start Up Screen Base"))
class UUI_StartUpScreen : public UUI_ActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;

protected:
	void HandleKeySelected(FKey InKey);

	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedAnyKey();

	UFUNCTION(BlueprintCallable)
	void ContinueFlow();

private:
	TSharedPtr<class FPressAnyKeyInputPreProcessor> InputProcessor;

	bool bPressedAnyKey = false;
};
