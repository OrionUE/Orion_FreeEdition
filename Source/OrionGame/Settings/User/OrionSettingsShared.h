/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SubtitleDisplayOptions.h"
#include "GameFramework/SaveGame.h"

#include "OrionSettingsShared.generated.h"

class UOrionLocalPlayer;

UENUM(BlueprintType)
enum class EOrionAllowBackgroundAudioSetting : uint8
{
	Off,
	AllSounds,

	Num UMETA(Hidden),
};

UENUM()
enum class EOrionGamepadInputAPIOption : uint8
{
	Legacy,	// XInput + WinDualShock
	Modern,	// GameInput API

	Num UMETA(Hidden),
};

UENUM(BlueprintType)
enum class EOrionGamepadSensitivity : uint8
{
	Invalid = 0		UMETA(Hidden),

	Slow			UMETA(DisplayName = "01 - Slow"),
	SlowPlus		UMETA(DisplayName = "02 - Slow+"),
	SlowPlusPlus	UMETA(DisplayName = "03 - Slow++"),
	Normal			UMETA(DisplayName = "04 - Normal"),
	NormalPlus		UMETA(DisplayName = "05 - Normal+"),
	NormalPlusPlus	UMETA(DisplayName = "06 - Normal++"),
	Fast			UMETA(DisplayName = "07 - Fast"),
	FastPlus		UMETA(DisplayName = "08 - Fast+"),
	FastPlusPlus	UMETA(DisplayName = "09 - Fast++"),
	Insane			UMETA(DisplayName = "10 - Insane"),

	MAX				UMETA(Hidden),
};

/**
 * UGameSettingsShared - 共享游戏设置
 * 该设置将储存为USaveGame系统的一部分，可以安全地储存在云中并共享
 * 按键、控制器keybinding等偏好设置应在此处进行配置
 */
UCLASS()
class UOrionSettingsShared : public ULocalPlayerSaveGame
{
	GENERATED_BODY()

public:
	DECLARE_DELEGATE_OneParam(FOnSettingsLoadedEvent, UOrionSettingsShared* Settings);
	
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnSettingChanged, const UOrionSettingsShared* /*Settings*/)
	FOnSettingChanged OnSettingChanged;

public:
	UOrionSettingsShared();

	////////////////////////////////////////////////////////
	// Graphics - Subtitles
public:
	UFUNCTION()
	bool GetSubtitlesEnabled() const { return bEnableSubtitles; }
	UFUNCTION()
	void SetSubtitlesEnabled(bool Value) { ChangeValueAndDirty(bEnableSubtitles, Value); }

	UFUNCTION()
	ESubtitleDisplayTextSize GetSubtitlesTextSize() const { return SubtitleTextSize; }
	UFUNCTION()
	void SetSubtitlesTextSize(ESubtitleDisplayTextSize Value) { ChangeValueAndDirty(SubtitleTextSize, Value); ApplySubtitleOptions(); }

	UFUNCTION()
	ESubtitleDisplayTextColor GetSubtitlesTextColor() const { return SubtitleTextColor; }
	UFUNCTION()
	void SetSubtitlesTextColor(ESubtitleDisplayTextColor Value) { ChangeValueAndDirty(SubtitleTextColor, Value); ApplySubtitleOptions(); }

	UFUNCTION()
	ESubtitleDisplayTextBorder GetSubtitlesTextBorder() const { return SubtitleTextBorder; }
	UFUNCTION()
	void SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value) { ChangeValueAndDirty(SubtitleTextBorder, Value); ApplySubtitleOptions(); }

	UFUNCTION()
	ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity() const { return SubtitleBackgroundOpacity; }
	UFUNCTION()
	void SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value) { ChangeValueAndDirty(SubtitleBackgroundOpacity, Value); ApplySubtitleOptions(); }

	void ApplySubtitleOptions();

private:
	UPROPERTY()
	bool bEnableSubtitles = true;

	UPROPERTY()
	ESubtitleDisplayTextSize SubtitleTextSize = ESubtitleDisplayTextSize::Medium;

	UPROPERTY()
	ESubtitleDisplayTextColor SubtitleTextColor = ESubtitleDisplayTextColor::White;

	UPROPERTY()
	ESubtitleDisplayTextBorder SubtitleTextBorder = ESubtitleDisplayTextBorder::None;

	UPROPERTY()
	ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity = ESubtitleDisplayBackgroundOpacity::Medium;

	////////////////////////////////////////////////////////
	// Create
public:
	/** Creates a temporary settings object, this will be replaced by one loaded from the user save game */
	static UOrionSettingsShared* CreateTemporarySettings(const UOrionLocalPlayer* LocalPlayer);
	
	/** Synchronously loads a settings object, this is not valid to call before login */
	static UOrionSettingsShared* LoadOrCreateSettings(const UOrionLocalPlayer* LocalPlayer);

	/** Starts an async load of the settings object, calls Delegate on completion */
	static bool AsyncLoadOrCreateSettings(const UOrionLocalPlayer* LocalPlayer, const FOnSettingsLoadedEvent& Delegate);

	/** Saves the settings to disk */
	void SaveSettings();

	/** Applies the current settings to the player */
	void ApplySettings();

	////////////////////////////////////////////////////////
	// Culture
public:
	/** Gets the pending culture */
	const FString& GetPendingCulture() const { return PendingCulture; }
	/** Sets the pending culture to apply */
	void SetPendingCulture(const FString& NewCulture);
	
	/** Called when the culture changes. */
	void OnCultureChanged();

	/** Clears the pending culture to apply */
	void ClearPendingCulture();

	void ResetToDefaultCulture();
	bool ShouldResetToDefaultCulture() const { return bResetToDefaultCulture; }

	void ApplyCultureSettings();
	void ResetCultureToCurrentSettings();

	bool IsUsingDefaultCulture() const;

private:
	/** The pending culture to apply */
	UPROPERTY(Transient)
	FString PendingCulture;

	/* If true, resets the culture to default. */
	bool bResetToDefaultCulture = false;

	////////////////////////////////////////////////////////
	// Shared Audio Settings
public:
	UFUNCTION()
	EOrionAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting() const { return AllowAudioInBackground; }
	UFUNCTION()
	void SetAllowAudioInBackgroundSetting(EOrionAllowBackgroundAudioSetting NewValue);

	void ApplyBackgroundAudioSettings();

private:
	UPROPERTY()
	EOrionAllowBackgroundAudioSetting AllowAudioInBackground = EOrionAllowBackgroundAudioSetting::Off;
	
	////////////////////////////////////////////////////////
	// Mouse and Keyboard
public:
	UFUNCTION()
	double GetMouseSensitivityX() const { return MouseSensitivityX; }
	UFUNCTION()
	void SetMouseSensitivityX(double NewValue) { ChangeValueAndDirty(MouseSensitivityX, NewValue); }

	UFUNCTION()
	double GetMouseSensitivityY() const { return MouseSensitivityY; }
	UFUNCTION()
	void SetMouseSensitivityY(double NewValue) { ChangeValueAndDirty(MouseSensitivityY, NewValue);}

	UFUNCTION()
	double GetTargetingMultiplier() const { return TargetingMultiplier; }
	UFUNCTION()
	void SetTargetingMultiplier(double NewValue) { ChangeValueAndDirty(TargetingMultiplier, NewValue);}

	UFUNCTION()
	bool GetInvertVerticalAxis() const { return bInvertVerticalAxis; }
	UFUNCTION()
	void SetInvertVerticalAxis(bool NewValue) { ChangeValueAndDirty(bInvertVerticalAxis, NewValue);}

	UFUNCTION()
	bool GetInvertHorizontalAxis() const { return bInvertHorizontalAxis; }
	UFUNCTION()
	void SetInvertHorizontalAxis(bool NewValue) { ChangeValueAndDirty(bInvertHorizontalAxis, NewValue);}

private:
	/** Holds the mouse horizontal sensitivity */
	UPROPERTY()
	double MouseSensitivityX = 1.0;

	/** Holds the mouse vertical sensitivity */
	UPROPERTY()
	double MouseSensitivityY = 1.0;

	/** Multiplier applied while Aiming down sights. */
	UPROPERTY()
	double TargetingMultiplier = 0.5;

	/** If true then the vertical look axis should be inverted */
	UPROPERTY()
	bool bInvertVerticalAxis = false;

	/** If true then the horizontal look axis should be inverted */
	UPROPERTY()
	bool bInvertHorizontalAxis = false;

	////////////////////////////////////////////////////////
	// Gamepad Vibration
public:
	UFUNCTION()
	bool GetForceFeedbackEnabled() const { return bForceFeedbackEnabled; }

	UFUNCTION()
	void SetForceFeedbackEnabled(const bool NewValue) { ChangeValueAndDirty(bForceFeedbackEnabled, NewValue); }
	
private:
	/** Is force feedback enabled when a controller is being used? */
	UPROPERTY()
	bool bForceFeedbackEnabled = true;

	////////////////////////////////////////////////////////
	// Gamepad DeadZone
public:
	/** Getter for gamepad look stick dead zone value. */
	UFUNCTION()
	float GetGamepadLookStickDeadZone() const { return GamepadLookStickDeadZone; }
	/** Setter for gamepad look stick dead zone value. */
	UFUNCTION()
	void SetGamepadLookStickDeadZone(const float NewValue) { ChangeValueAndDirty(GamepadLookStickDeadZone, NewValue); }

	/** Getter for gamepad move stick dead zone value. */
	UFUNCTION()
	float GetGamepadMoveStickDeadZone() const { return GamepadMoveStickDeadZone; }
	/** Setter for gamepad move stick dead zone value. */
	UFUNCTION()
	void SetGamepadMoveStickDeadZone(const float NewValue) { ChangeValueAndDirty(GamepadMoveStickDeadZone, NewValue); }

private:
	/** Holds the gamepad move stick dead zone value. */
	UPROPERTY()
	float GamepadMoveStickDeadZone;
	/** Holds the gamepad look stick dead zone value. */
	UPROPERTY()
	float GamepadLookStickDeadZone;

	/////////////////////////////////////////////////
	// Gamepad Input API (only available on PC)

	UPROPERTY()
	EOrionGamepadInputAPIOption GamepadInputAPIOptions;

public:
	UFUNCTION()
	EOrionGamepadInputAPIOption GetGamepadInputAPIOption() const { return GamepadInputAPIOptions; }
	UFUNCTION()
	void SetGamepadInputAPIOption(const EOrionGamepadInputAPIOption NewValue);

	////////////////////////////////////////////////////////
	// Gamepad Sensitivity
public:
	UFUNCTION()
	EOrionGamepadSensitivity GetGamepadLookSensitivityPreset() const { return GamepadLookSensitivityPreset; }
	UFUNCTION()
	void SetLookSensitivityPreset(EOrionGamepadSensitivity NewValue) { ChangeValueAndDirty(GamepadLookSensitivityPreset, NewValue); }

	UFUNCTION()
	EOrionGamepadSensitivity GetGamepadTargetingSensitivityPreset() const { return GamepadTargetingSensitivityPreset; }
	UFUNCTION()
	void SetGamepadTargetingSensitivityPreset(EOrionGamepadSensitivity NewValue) { ChangeValueAndDirty(GamepadTargetingSensitivityPreset, NewValue); }

private:
	UPROPERTY()
	EOrionGamepadSensitivity GamepadLookSensitivityPreset = EOrionGamepadSensitivity::Normal;
	UPROPERTY()
	EOrionGamepadSensitivity GamepadTargetingSensitivityPreset = EOrionGamepadSensitivity::Normal;
	
	////////////////////////////////////////////////////////
	// Dirty and Change Reporting
private:
	template<typename T>
	bool ChangeValueAndDirty(T& CurrentValue, const T& NewValue)
	{
		if (CurrentValue != NewValue)
		{
			CurrentValue = NewValue;
			bIsDirty = true;
			OnSettingChanged.Broadcast(this);
			
			return true;
		}

		return false;
	}

	bool bIsDirty = false;
};
