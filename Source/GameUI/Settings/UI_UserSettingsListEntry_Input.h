/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Widgets/GameSettingListEntry.h"

#include "UI_UserSettingsListEntry_Input.generated.h"

class UUI_ButtonBase;
class UGameSettingInput;
class UGameSettingPressAnyKey;
class UKeyAlreadyBoundWarning;

enum class EGameSettingKeyboardSlot : uint8;

UCLASS(Abstract, Blueprintable, meta=(Category="Settings", DisableNativeTick, DisplayName="Setting List Entry Input Base"))
class UUI_UserSettingsListEntry_Input : public UGameSettingListEntry_Setting
{
	GENERATED_BODY()

public:
	virtual void SetSetting(UGameSetting* InSetting) override;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeOnEntryReleased() override;
	virtual void OnSettingChanged() override;

	////////////////////////////////////////////////////////
	// MouseAndKeyboardFirst
protected:
	void HandleMouseAndKeyboardFirstKeyClicked();
	void HandleMouseAndKeyboardFirstKeySelected(FKey InKey);
	void HandleMouseAndKeyboardFirstDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ButtonBase> Button_MouseAndKeyboardFirst;

	////////////////////////////////////////////////////////
	// MouseAndKeyboardSecond
protected:
	void HandleMouseAndKeyboardSecondKeyClicked();
	void HandleMouseAndKeyboardSecondKeySelected(FKey InKey);
	void HandleMouseAndKeyboardSecondDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ButtonBase> Button_MouseAndKeyboardSecond;

	////////////////////////////////////////////////////////
	// GamepadFirst
protected:
	void HandleGamepadFirstKeyClicked();
	void HandleGamepadFirstKeySelected(FKey InKey);
	void HandleGamepadFirstDuplicateKeySelected(FKey InKey, UKeyAlreadyBoundWarning* DuplicateKeyPressAnyKeyPanel) const;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ButtonBase> Button_GamepadFirst;

	////////////////////////////////////////////////////////

protected:
	void HandleResetToDefaultClicked();
	void HandleKeySelectionCanceled();
	void HandleKeySelectionCanceled(UKeyAlreadyBoundWarning* InAlreadyBoundWarningPanel);

	void ChangeBinding(const EGameSettingKeyboardSlot InSlot, const FKey& InKey);

	void Refresh();

private:
	FKey OriginalKeyToBind = EKeys::Invalid;

protected:
	UPROPERTY()
	TObjectPtr<UGameSettingInput> InputSetting;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameSettingPressAnyKey> PressAnyKeyPanelClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UKeyAlreadyBoundWarning> KeyAlreadyBoundWarningPanelClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ButtonBase> Button_ResetToDefault;

	TWeakObjectPtr<UGameSettingPressAnyKey> PressAnyKeyPanel;
};
