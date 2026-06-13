/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"

#include "UI_ControllerDisconnectedScreen.generated.h"

class UCommonButtonBase;
class UHorizontalBox;
struct FPlatformUserSelectionCompleteParams;

UCLASS(Abstract, BlueprintType, Blueprintable)
class UUI_ControllerDisconnectedScreen : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUI_ControllerDisconnectedScreen(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativeOnActivated() override;

	virtual void HandleChangeUserClicked();

	/**
	 * Called when the user has changed after selecting the prompt to change platform users. 
	 */
	virtual void HandleChangeUserCompleted(const FPlatformUserSelectionCompleteParams& Params);

	/**
	 * Returns true if the Change User button should be displayed.
	 * This will check the ICommonUIModule's platform trait tags at runtime.
	 */
	virtual bool ShouldDisplayChangeUserButton() const;

protected:
	/**
	 * Required platform traits that, when met, will display the "Change User" button
	 * allowing the player to change what signed-in user is currently mapped to an input device.
	 */
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer PlatformSupportsUserChangeTags;

	/**
	 * Platforms that have "strict" user pairing requirements may want to allow you to change your user right from
	 * the in-game UI here. These platforms are tagged with "Platform.Trait.Input.HasStrictControllerPairing" in CommonUI.
	 *
	 * This HBox will be set to invisible if the platform you are on does NOT have that platform trait.
	 */
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UHorizontalBox> HBox_SwitchUser;

	/**
	 * A button to handle changing the user on platforms with strict user pairing requirements.
	 */
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonButtonBase> Button_ChangeUser;
};
