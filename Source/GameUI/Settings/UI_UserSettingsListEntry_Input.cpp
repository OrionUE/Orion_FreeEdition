/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_UserSettingsListEntry_Input.h"

#include "CommonUIExtensions.h"
#include "InputSystemUserSettings.h"
#include "NativeGameplayTags.h"
#include "Foundation/UI_ButtonBase.h"
#include "Settings/GameSettingInput.h"
#include "Widgets/Misc/GameSettingPressAnyKey.h"
#include "Widgets/Misc/KeyAlreadyBoundWarning.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_UserSettingsListEntry_Input)

UE_DEFINE_GAMEPLAY_TAG_STATIC(PressAnyKeyLayer, "UI.Layer.Modal");

#define LOCTEXT_NAMESPACE "GameUI"

void UUI_UserSettingsListEntry_Input::SetSetting(UGameSetting* InSetting)
{
	InputSetting = CastChecked<UGameSettingInput>(InSetting);

	Super::SetSetting(InSetting);

	Refresh();
}

void UUI_UserSettingsListEntry_Input::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	Button_MouseAndKeyboardFirst->OnClicked().AddUObject(this, &ThisClass::HandleMouseAndKeyboardFirstKeyClicked);
	Button_MouseAndKeyboardSecond->OnClicked().AddUObject(this, &ThisClass::HandleMouseAndKeyboardSecondKeyClicked);
	Button_GamepadFirst->OnClicked().AddUObject(this, &ThisClass::HandleGamepadFirstKeyClicked);
	Button_ResetToDefault->OnClicked().AddUObject(this, &ThisClass::HandleResetToDefaultClicked);
}

void UUI_UserSettingsListEntry_Input::NativeOnEntryReleased()
{
	Super::NativeOnEntryReleased();

	InputSetting = nullptr;
}

void UUI_UserSettingsListEntry_Input::OnSettingChanged()
{
	Refresh();
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardFirstKeyClicked()
{
	PressAnyKeyPanel = CastChecked<UGameSettingPressAnyKey>(
		UCommonUIExtensions::PushContentToLayer_ForPlayer(GetOwningLocalPlayer(), PressAnyKeyLayer, PressAnyKeyPanelClass));
	PressAnyKeyPanel->SetAcceptKeyType(EPressAnyKeyAcceptKeyType::MouseAndKeyboard);
	PressAnyKeyPanel->OnKeySelected.AddUObject(this, &ThisClass::HandleMouseAndKeyboardFirstKeySelected);
	PressAnyKeyPanel->OnKeySelectionCanceled.AddUObject(this, &ThisClass::HandleKeySelectionCanceled);
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardFirstKeySelected(FKey InKey)
{
	PressAnyKeyPanel->OnKeySelected.RemoveAll(this);
	ChangeBinding(EGameSettingKeyboardSlot::MouseAndKeyboardFirst, InKey);
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardFirstDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const
{
	if (InKey == OriginalKeyToBind)
	{
		DuplicateKeyPressAnyKeyPanel->OnKeySelected.RemoveAll(this);
		InputSetting->ChangeBinding(EGameSettingKeyboardSlot::MouseAndKeyboardFirst, OriginalKeyToBind);
	}
	DuplicateKeyPressAnyKeyPanel->DeactivateWidget();
	PressAnyKeyPanel->DeactivateWidget();
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardSecondKeyClicked()
{
	PressAnyKeyPanel = CastChecked<UGameSettingPressAnyKey>(
		UCommonUIExtensions::PushContentToLayer_ForPlayer(GetOwningLocalPlayer(), PressAnyKeyLayer, PressAnyKeyPanelClass));
	PressAnyKeyPanel->SetAcceptKeyType(EPressAnyKeyAcceptKeyType::MouseAndKeyboard);
	PressAnyKeyPanel->OnKeySelected.AddUObject(this, &ThisClass::HandleMouseAndKeyboardSecondKeySelected);
	PressAnyKeyPanel->OnKeySelectionCanceled.AddUObject(this, &ThisClass::HandleKeySelectionCanceled);
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardSecondKeySelected(FKey InKey)
{
	PressAnyKeyPanel->OnKeySelected.RemoveAll(this);
	ChangeBinding(EGameSettingKeyboardSlot::MouseAndKeyboardSecond, InKey);
}

void UUI_UserSettingsListEntry_Input::HandleMouseAndKeyboardSecondDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const
{
	if (InKey == OriginalKeyToBind)
	{
		DuplicateKeyPressAnyKeyPanel->OnKeySelected.RemoveAll(this);
		InputSetting->ChangeBinding(EGameSettingKeyboardSlot::MouseAndKeyboardSecond, OriginalKeyToBind);
	}
	DuplicateKeyPressAnyKeyPanel->DeactivateWidget();
	PressAnyKeyPanel->DeactivateWidget();
}

void UUI_UserSettingsListEntry_Input::HandleGamepadFirstKeyClicked()
{
	PressAnyKeyPanel = CastChecked<UGameSettingPressAnyKey>(
		UCommonUIExtensions::PushContentToLayer_ForPlayer(GetOwningLocalPlayer(), PressAnyKeyLayer, PressAnyKeyPanelClass));
	PressAnyKeyPanel->SetAcceptKeyType(EPressAnyKeyAcceptKeyType::Gamepad);
	PressAnyKeyPanel->OnKeySelected.AddUObject(this, &ThisClass::HandleGamepadFirstKeySelected);
	PressAnyKeyPanel->OnKeySelectionCanceled.AddUObject(this, &ThisClass::HandleKeySelectionCanceled);
}

void UUI_UserSettingsListEntry_Input::HandleGamepadFirstKeySelected(FKey InKey)
{
	PressAnyKeyPanel->OnKeySelected.RemoveAll(this);
	ChangeBinding(EGameSettingKeyboardSlot::GamepadFirst, InKey);
}

void UUI_UserSettingsListEntry_Input::HandleGamepadFirstDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const
{
	if (InKey == OriginalKeyToBind)
	{
		DuplicateKeyPressAnyKeyPanel->OnKeySelected.RemoveAll(this);
		InputSetting->ChangeBinding(EGameSettingKeyboardSlot::GamepadFirst, OriginalKeyToBind);
	}
	DuplicateKeyPressAnyKeyPanel->DeactivateWidget();
	PressAnyKeyPanel->DeactivateWidget();
}

void UUI_UserSettingsListEntry_Input::HandleResetToDefaultClicked()
{
	InputSetting->ResetToDefault();
}

void UUI_UserSettingsListEntry_Input::HandleKeySelectionCanceled()
{
	PressAnyKeyPanel->OnKeySelectionCanceled.RemoveAll(this);
	PressAnyKeyPanel->DeactivateWidget();
}

void UUI_UserSettingsListEntry_Input::HandleKeySelectionCanceled(UKeyAlreadyBoundWarning* InAlreadyBoundWarningPanel)
{
	InAlreadyBoundWarningPanel->OnKeySelectionCanceled.RemoveAll(this);
	InAlreadyBoundWarningPanel->DeactivateWidget();
	PressAnyKeyPanel->DeactivateWidget();
}

void UUI_UserSettingsListEntry_Input::ChangeBinding(const EGameSettingKeyboardSlot InSlot, const FKey& InKey)
{
	OriginalKeyToBind = InKey;
	TArray<FName> ActionsForKey;
	InputSetting->GetAllMappedActionsFromKey(InSlot, InKey, ActionsForKey);
	if (!ActionsForKey.IsEmpty())
	{
		UKeyAlreadyBoundWarning* KeyAlreadyBoundWarning = CastChecked<UKeyAlreadyBoundWarning>(
		UCommonUIExtensions::PushContentToLayer_ForPlayer(GetOwningLocalPlayer(), PressAnyKeyLayer, KeyAlreadyBoundWarningPanelClass));

		FString ActionNames;
		for (FName ActionName : ActionsForKey)
		{
			ActionNames += ActionName.ToString() += ", ";
		}

		FFormatNamedArguments Args;
		Args.Add(TEXT("InKey"), InKey.GetDisplayName());
		Args.Add(TEXT("ActionNames"), FText::FromString(ActionNames));

		KeyAlreadyBoundWarning->SetAcceptKeyType(EPressAnyKeyAcceptKeyType::All);
		KeyAlreadyBoundWarning->SetWarningText(FText::Format(LOCTEXT("WarningText", "{InKey} is already bound to {ActionNames} are you sure you want to rebind it?"), Args));
		KeyAlreadyBoundWarning->SetCancelText(FText::Format(LOCTEXT("CancelText", "Press escape to cancel, or press {InKey} again to confirm rebinding."), Args));

		switch (InSlot)
		{
		case EGameSettingKeyboardSlot::MouseAndKeyboardFirst:
			KeyAlreadyBoundWarning->OnKeySelected.AddUObject(this, &ThisClass::HandleMouseAndKeyboardFirstDuplicateKeySelected, KeyAlreadyBoundWarning);
			break;

		case EGameSettingKeyboardSlot::MouseAndKeyboardSecond:
			KeyAlreadyBoundWarning->OnKeySelected.AddUObject(this, &ThisClass::HandleMouseAndKeyboardSecondDuplicateKeySelected, KeyAlreadyBoundWarning);
			break;

		case EGameSettingKeyboardSlot::GamepadFirst:
			KeyAlreadyBoundWarning->OnKeySelected.AddUObject(this, &ThisClass::HandleGamepadFirstDuplicateKeySelected, KeyAlreadyBoundWarning);
			break;
		}

		KeyAlreadyBoundWarning->OnKeySelectionCanceled.AddUObject(this, &ThisClass::HandleKeySelectionCanceled, KeyAlreadyBoundWarning);
	}
	else
	{
		PressAnyKeyPanel->DeactivateWidget();
		InputSetting->ChangeBinding(InSlot, InKey);
	}
}

void UUI_UserSettingsListEntry_Input::Refresh()
{
	if (ensure(InputSetting))
	{
		// TODO: 有些键盘按键没有图标，后续将图标补充完整；或者无图标则显示按键名称
		FSlateBrush KeyBrush;

		InputSetting->GetKeyBrushFromSlot(KeyBrush, EGameSettingKeyboardSlot::MouseAndKeyboardFirst);
		if (KeyBrush.GetResourceObject() == nullptr)
		{
			KeyBrush.ImageSize = FDeprecateSlateVector2D(0, 0);
		}
		Button_MouseAndKeyboardFirst->SetButtonIconBrush(KeyBrush);

		KeyBrush = FSlateBrush();
		InputSetting->GetKeyBrushFromSlot(KeyBrush, EGameSettingKeyboardSlot::MouseAndKeyboardSecond);
		if (KeyBrush.GetResourceObject() == nullptr)
		{
			KeyBrush.ImageSize = FDeprecateSlateVector2D(0, 0);
		}
		Button_MouseAndKeyboardSecond->SetButtonIconBrush(KeyBrush);

		KeyBrush = FSlateBrush();
		InputSetting->GetKeyBrushFromSlot(KeyBrush, EGameSettingKeyboardSlot::GamepadFirst);
		if (KeyBrush.GetResourceObject() == nullptr)
		{
			KeyBrush.ImageSize = FDeprecateSlateVector2D(0, 0);
		}
		Button_GamepadFirst->SetButtonIconBrush(KeyBrush);

		if (InputSetting->GetMouseAndKeyboardMappingExtension())
		{
			Button_MouseAndKeyboardFirst->SetIsEnabled(InputSetting->GetMouseAndKeyboardMappingExtension()->IsEnabledInKeySetting());
			Button_MouseAndKeyboardSecond->SetIsEnabled(InputSetting->GetMouseAndKeyboardMappingExtension()->IsEnabledInKeySetting());
		}
		else
		{
			Button_MouseAndKeyboardFirst->SetIsEnabled(false);
			Button_MouseAndKeyboardSecond->SetIsEnabled(false);
		}

		if (InputSetting->GetGamepadMappingExtension())
		{
			Button_GamepadFirst->SetIsEnabled(InputSetting->GetGamepadMappingExtension()->IsEnabledInKeySetting());
		}
		else
		{
			Button_GamepadFirst->SetIsEnabled(false);
		}

		// Only display the reset to default button if a mapping is customized
		if (ensure(Button_ResetToDefault))
		{
			if (InputSetting->IsMappingCustomized())
			{
				Button_ResetToDefault->SetIsEnabled(true);
			}
			else
			{
				Button_ResetToDefault->SetIsEnabled(false);
			}
		}		
	}
}

#undef LOCTEXT_NAMESPACE
