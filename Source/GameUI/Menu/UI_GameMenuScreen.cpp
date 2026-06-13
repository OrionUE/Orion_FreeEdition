/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_GameMenuScreen.h"

#include "CommonActivatableWidgetSwitcher.h"
#include "Common/UI_TabListWidgetBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_GameMenuScreen)

void UUI_GameMenuScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	TopOptionTabs->SetLinkedSwitcher(OptionsSwitcher);
}
