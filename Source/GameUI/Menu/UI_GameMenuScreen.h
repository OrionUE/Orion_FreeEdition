/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ActivatableWidget.h"

#include "UI_GameMenuScreen.generated.h"

class UUI_TabListWidgetBase;
class UCommonActivatableWidgetSwitcher;

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Game Menu Screen Base"))
class UUI_GameMenuScreen : public UUI_ActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

protected:
	UPROPERTY(BlueprintReadOnly, Category="Option", meta=(BindWidget, OptionalWidget=true))
	TObjectPtr<UUI_TabListWidgetBase> TopOptionTabs;

	UPROPERTY(BlueprintReadOnly, Category="Option", meta=(BindWidget))
	TObjectPtr<UCommonActivatableWidgetSwitcher> OptionsSwitcher;
};
