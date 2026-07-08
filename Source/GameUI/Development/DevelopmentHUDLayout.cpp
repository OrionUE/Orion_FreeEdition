/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "DevelopmentHUDLayout.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(DevelopmentHUDLayout)

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

void UDevelopmentHUDLayout::SetDevelopmentHUDVisible(bool bVisible, bool bOpenPanel)
{
	SetVisibility(bVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	SetRenderOpacity(bVisible ? 1.f : 0.f);
	SetIsEnabled(bVisible);

	if (bVisible)
	{
		if (bOpenPanel)
		{
			SetDevelopmentHUDActivated(true, true);
		}
	}
	else
	{
		SetDevelopmentHUDActivated(false, true);
	}
}

void UDevelopmentHUDLayout::HandleDevelopmentAction()
{
	const bool bShouldOpen = !bDevelopmentHUDActivated ||
		GetVisibility() != ESlateVisibility::Visible ||
		GetRenderOpacity() <= 0.f ||
		!GetIsEnabled();

	SetDevelopmentHUDVisible(true, false);
	SetDevelopmentHUDActivated(bShouldOpen, true);
}

void UDevelopmentHUDLayout::SetDevelopmentHUDActivated(bool bActivated, bool bForceRefresh)
{
	if (bDevelopmentHUDActivated == bActivated && !bForceRefresh)
	{
		return;
	}

	bDevelopmentHUDActivated = bActivated;

	if (APlayerController* OwningPlayer = GetOwningPlayer())
	{
		if (bDevelopmentHUDActivated)
		{
			FInputModeGameAndUI InputModeGameAndUI;
			InputModeGameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			InputModeGameAndUI.SetHideCursorDuringCapture(true);
			InputModeGameAndUI.SetWidgetToFocus(TakeWidget());
			OwningPlayer->SetInputMode(InputModeGameAndUI);
			OwningPlayer->bShowMouseCursor = true;
		}
		else
		{
			OwningPlayer->SetInputMode(FInputModeGameOnly());
			OwningPlayer->bShowMouseCursor = false;
		}
	}

	K2_HandleDevelopmentAction();
}
