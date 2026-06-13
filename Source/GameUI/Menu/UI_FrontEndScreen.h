/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ActivatableWidget.h"

#include "UI_FrontEndScreen.generated.h"

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Front End Screen Base"))
class UUI_FrontEndScreen : public UUI_ActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void QuitGame();
};
