/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_UserSettingScreen.h"

#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "ICommonInputModule.h"
#include "Common/GameUIInputActionDomainTable.h"
#include "Input/CommonUIInputTypes.h"
#include "Player/OrionLocalPlayer.h"
#include "Settings/User/OrionGameSettingRegistry.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_UserSettingScreen)

void UUI_UserSettingScreen::NativeConstruct()
{
	Super::NativeConstruct();

	ApplyHandle = RegisterUIActionBinding(FBindUIActionArgs(ApplyInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleApplyAction)));
	CancelChangesHandle = RegisterUIActionBinding(FBindUIActionArgs(CancelChangesInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleCancelChangesAction)));

	if (bIsSecondBackHandler)
	{
		if (UGameUIInputActionDomainTable* InputActionDomainTable = Cast<UGameUIInputActionDomainTable>(ICommonInputModule::GetSettings().GetActionDomainTable()))
		{
			if (CommonUI::IsEnhancedInputSupportEnabled() && ICommonInputModule::GetSettings().GetEnhancedInputBackAction())
			{
				FBindUIActionArgs BindArgs(InputActionDomainTable->EnhancedInputSecondBackAction, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleBackAction));
				BindArgs.bDisplayInActionBar = bIsSecondBackActionDisplayedInActionBar;
				BindArgs.OverrideDisplayName = OverrideBackActionDisplayName;

				SecondBackActionHandle = RegisterUIActionBinding(BindArgs);
			}
			else if (!InputActionDomainTable->SecondBackAction.IsNull())
			{
				if (FCommonInputActionDataBase* SecondBackInputActionData = InputActionDomainTable->SecondBackAction.GetRow<FCommonInputActionDataBase>(TEXT("")))
				{
					const FCommonInputTypeInfo SecondBackInputTypeInfo = SecondBackInputActionData->GetInputTypeInfo(ECommonInputType::MouseAndKeyboard, FCommonInputDefaults::GamepadGeneric);
					if (SecondBackInputTypeInfo.GetKey().IsMouseButton())
					{
						bRightMouseButtonBackAction = true;
					}

					FBindUIActionArgs BindArgs(InputActionDomainTable->SecondBackAction, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleBackAction));
					BindArgs.bDisplayInActionBar = bIsSecondBackActionDisplayedInActionBar;
					BindArgs.OverrideDisplayName = OverrideBackActionDisplayName;

					SecondBackActionHandle = RegisterUIActionBinding(BindArgs);
				}
			}
		}
	}
}

void UUI_UserSettingScreen::NativeDestruct()
{
	Super::NativeDestruct();

	if (ApplyHandle.IsValid())
	{
		ApplyHandle.Unregister();
	}
	if (CancelChangesHandle.IsValid())
	{
		CancelChangesHandle.Unregister();
	}
	if (SecondBackActionHandle.IsValid())
	{
		SecondBackActionHandle.Unregister();
	}

	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputSubsystem->OnInputMethodChangedNative.Remove(InputMethodChangedDelegateHandle);
		InputMethodChangedDelegateHandle.Reset();
	}
}

void UUI_UserSettingScreen::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);

	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::ResetCurrentSelectedItem);

	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputMethodChangedDelegateHandle = InputSubsystem->OnInputMethodChangedNative.AddWeakLambda(this, [this](ECommonInputType InputType)
		{
			ResetCurrentSelectedItem();
		});
	}
}

void UUI_UserSettingScreen::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);

	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputSubsystem->OnInputMethodChangedNative.Remove(InputMethodChangedDelegateHandle);
		InputMethodChangedDelegateHandle.Reset();
	}
}

UGameSettingRegistry* UUI_UserSettingScreen::CreateRegistry()
{
	if (UOrionLocalPlayer* LocalPlayer = CastChecked<UOrionLocalPlayer>(GetOwningLocalPlayer()))
	{
		return UOrionGameSettingRegistry::Get(LocalPlayer);
	}

	return NewObject<UOrionGameSettingRegistry>();
}

void UUI_UserSettingScreen::OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty)
{
	if (bSettingsDirty)
	{
		if (!GetActionBindings().Contains(ApplyHandle))
		{
			AddActionBinding(ApplyHandle);
		}
		if (!GetActionBindings().Contains(CancelChangesHandle))
		{
			AddActionBinding(CancelChangesHandle);
		}
	}
	else
	{
		RemoveActionBinding(ApplyHandle);
		RemoveActionBinding(CancelChangesHandle);
	}
}

FReply UUI_UserSettingScreen::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (bRightMouseButtonBackAction && InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		HandleBackAction();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

bool UUI_UserSettingScreen::NativeOnHandleBackAction()
{
	// 没有未保存的更改直接返回
	if (!ChangeTracker.HaveSettingsBeenChanged())
	{
		if (AttemptToPopNavigation())
		{
			return true;
		}

		DeactivateWidget();

		return true;
	}

	// 有未保存的更改，弹窗提示
	if (AttemptToPopNavigation())
	{
		return true;
	}

	OnShowBackWidget();

	return true;
}

void UUI_UserSettingScreen::HandleApplyAction()
{
	ApplyChanges();
}

void UUI_UserSettingScreen::HandleCancelChangesAction()
{
	CancelChanges();
}

void UUI_UserSettingScreen::ApplyActionAndBack()
{
	ApplyChanges();

	DeactivateWidget();
}

void UUI_UserSettingScreen::CancelChangesActionAndBack()
{
	CancelChanges();

	DeactivateWidget();
}
