/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_InteractionWithKeyBrush.h"

#include "CommonActionWidget.h"
#include "IndicatorManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_InteractionWithKeyBrush)

void UUI_InteractionWithKeyBrush::NativeConstruct()
{
	Super::NativeConstruct();

	InputActionWidget->SetEnhancedInputAction(InputAction);
}

void UUI_InteractionWithKeyBrush::OnVisibilityChanged(bool bVisible)
{
	K2_OnVisibilityChanged(bVisible);
}
