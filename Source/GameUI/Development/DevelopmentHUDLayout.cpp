/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "DevelopmentHUDLayout.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(DevelopmentHUDLayout)

#if !UE_BUILD_SHIPPING
static int32 ShowDevelopmentHUD = 1;
static FAutoConsoleVariableRef CVarShowDevelopmentHUD(
	TEXT("Orion.ShowDevelopmentHUD"),
	ShowDevelopmentHUD,
	TEXT("Show Development HUD Panel (0 = Hidden, 1 = Visible)"),
	ECVF_Default);
#endif

UDevelopmentHUDLayout::UDevelopmentHUDLayout(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UDevelopmentHUDLayout::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UDevelopmentHUDLayout::NativeConstruct()
{
	Super::NativeConstruct();

	GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
	bDevelopmentHUDActivated = false;
	DevelopmentActionHandle = FUIComboActionBinding::RegisterComboAction(GetOwningPlayer(), DevelopmentActionKeys, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleDevelopmentAction));
}

void UDevelopmentHUDLayout::NativeDestruct()
{
	Super::NativeDestruct();

	DevelopmentActionHandle.Unregister();
}

void UDevelopmentHUDLayout::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

#if !UE_BUILD_SHIPPING
	if (ShowDevelopmentHUD == 0)
	{
		SetRenderOpacity(0.f);
	}
	else
	{
		SetRenderOpacity(1.f);
	}
#endif
}

void UDevelopmentHUDLayout::HandleDevelopmentAction()
{
	if (bDevelopmentHUDActivated)
	{
		GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
		GetOwningPlayer()->bShowMouseCursor = false;

		bDevelopmentHUDActivated = false;
	}
	else
	{
		FInputModeGameAndUI InputModeGameAndUI;
		InputModeGameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputModeGameAndUI.SetHideCursorDuringCapture(true);
		InputModeGameAndUI.SetWidgetToFocus(this->TakeWidget());
		GetOwningPlayer()->SetInputMode(InputModeGameAndUI);
		GetOwningPlayer()->bShowMouseCursor = true;

		bDevelopmentHUDActivated = true;
	}

	K2_HandleDevelopmentAction();
}
