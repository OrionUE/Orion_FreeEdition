/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionSettingsShared.h"

#include "EnhancedInputSubsystems.h"
#include "SubtitleDisplaySubsystem.h"
#include "Internationalization/Culture.h"
#include "Player/OrionLocalPlayer.h"
#include "Player/OrionUserSubsystem.h"
#include "UserSettings/EnhancedInputUserSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionSettingsShared)

static FString SHARED_SETTINGS_SLOT_NAME = TEXT("SharedGameSettings");

namespace OrionSettingsSharedCVars
{
	static float DefaultGamepadLeftStickInnerDeadZone = 0.25f;
	static FAutoConsoleVariableRef CVarGamepadLeftStickInnerDeadZone(
		TEXT("gpad.DefaultLeftStickInnerDeadZone"),
		DefaultGamepadLeftStickInnerDeadZone,
		TEXT("Gamepad left stick inner deadzone")
	);

	static float DefaultGamepadRightStickInnerDeadZone = 0.25f;
	static FAutoConsoleVariableRef CVarGamepadRightStickInnerDeadZone(
		TEXT("gpad.DefaultRightStickInnerDeadZone"),
		DefaultGamepadRightStickInnerDeadZone,
		TEXT("Gamepad right stick inner deadzone")
	);	
}

UOrionSettingsShared::UOrionSettingsShared()
{
	FInternationalization::Get().OnCultureChanged().AddUObject(this, &ThisClass::OnCultureChanged);

	GamepadMoveStickDeadZone = OrionSettingsSharedCVars::DefaultGamepadLeftStickInnerDeadZone;
	GamepadLookStickDeadZone = OrionSettingsSharedCVars::DefaultGamepadRightStickInnerDeadZone;
}

void UOrionSettingsShared::ApplySubtitleOptions()
{
	if (USubtitleDisplaySubsystem* SubtitleSystem = USubtitleDisplaySubsystem::Get(OwningPlayer))
	{
		FSubtitleFormat SubtitleFormat;
		SubtitleFormat.SubtitleTextSize = SubtitleTextSize;
		SubtitleFormat.SubtitleTextColor = SubtitleTextColor;
		SubtitleFormat.SubtitleTextBorder = SubtitleTextBorder;
		SubtitleFormat.SubtitleBackgroundOpacity = SubtitleBackgroundOpacity;

		SubtitleSystem->SetSubtitleDisplayOptions(SubtitleFormat);
	}
}

UOrionSettingsShared* UOrionSettingsShared::CreateTemporarySettings(const UOrionLocalPlayer* LocalPlayer)
{
	FString UserPlayerID = UOrionUserSubsystem::Get().GetPlayerID().ToString();
	FString SaveSlotName = FString::Printf(TEXT("%s/%s"), *UserPlayerID, *SHARED_SETTINGS_SLOT_NAME);
	
	// This is not loaded from disk but should be set up to save
	UOrionSettingsShared* SharedSettings = Cast<UOrionSettingsShared>(CreateNewSaveGameForLocalPlayer(UOrionSettingsShared::StaticClass(), LocalPlayer, SaveSlotName));

	SharedSettings->ApplySettings();

	return SharedSettings;
}

UOrionSettingsShared* UOrionSettingsShared::LoadOrCreateSettings(const UOrionLocalPlayer* LocalPlayer)
{
	FString UserPlayerID = UOrionUserSubsystem::Get().GetPlayerID().ToString();
	FString SaveSlotName = FString::Printf(TEXT("%s/%s"), *UserPlayerID, *SHARED_SETTINGS_SLOT_NAME);
	
	// This will stall the main thread while it loads
	UOrionSettingsShared* SharedSettings = Cast<UOrionSettingsShared>(LoadOrCreateSaveGameForLocalPlayer(UOrionSettingsShared::StaticClass(), LocalPlayer, SaveSlotName));

	SharedSettings->ApplySettings();

	return SharedSettings;
}

bool UOrionSettingsShared::AsyncLoadOrCreateSettings(const UOrionLocalPlayer* LocalPlayer, const FOnSettingsLoadedEvent& Delegate)
{
	FOnLocalPlayerSaveGameLoadedNative Lambda = FOnLocalPlayerSaveGameLoadedNative::CreateLambda([Delegate]
		(ULocalPlayerSaveGame* LoadedSave)
		{
			UOrionSettingsShared* LoadedSettings = CastChecked<UOrionSettingsShared>(LoadedSave);
			
			LoadedSettings->ApplySettings();

			Delegate.ExecuteIfBound(LoadedSettings);
		});
	
	FString UserPlayerID = UOrionUserSubsystem::Get().GetPlayerID().ToString();
	FString SaveSlotName = FString::Printf(TEXT("%s/%s"), *UserPlayerID, *SHARED_SETTINGS_SLOT_NAME);
	
	return ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer(UOrionSettingsShared::StaticClass(), LocalPlayer, SaveSlotName, Lambda);
}

void UOrionSettingsShared::SaveSettings()
{
	// Schedule an async save because it's okay if it fails
	AsyncSaveGameToSlotForLocalPlayer();

	// TODO_BH: Move this to the serialize function instead with a bumped version number
	if (UEnhancedInputLocalPlayerSubsystem* System = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(OwningPlayer))
	{
		if (UEnhancedInputUserSettings* InputSettings = System->GetUserSettings())
		{
			InputSettings->AsyncSaveSettings();
		}
	}
}

void UOrionSettingsShared::ApplySettings()
{
	ApplySubtitleOptions();
	ApplyBackgroundAudioSettings();
	ApplyCultureSettings();

	if (UEnhancedInputLocalPlayerSubsystem* System = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(OwningPlayer))
	{
		if (UEnhancedInputUserSettings* InputSettings = System->GetUserSettings())
		{
			InputSettings->ApplySettings();
		}
	}
}

void UOrionSettingsShared::SetPendingCulture(const FString& NewCulture)
{
	PendingCulture = NewCulture;
	bResetToDefaultCulture = false;
	bIsDirty = true;
}

void UOrionSettingsShared::OnCultureChanged()
{
	ClearPendingCulture();
	bResetToDefaultCulture = false;
}

void UOrionSettingsShared::ClearPendingCulture()
{
	PendingCulture.Reset();
}

void UOrionSettingsShared::ResetToDefaultCulture()
{
	ClearPendingCulture();
	bResetToDefaultCulture = true;
	bIsDirty = true;
}

void UOrionSettingsShared::ApplyCultureSettings()
{
	if (bResetToDefaultCulture)
	{
		const FCulturePtr SystemDefaultCulture = FInternationalization::Get().GetDefaultCulture();
		check(SystemDefaultCulture.IsValid());

		const FString CultureToApply = SystemDefaultCulture->GetName();
		if (FInternationalization::Get().SetCurrentCulture(CultureToApply))
		{
			GConfig->RemoveKey(TEXT("Internationalization"), TEXT("Culture"), GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
		bResetToDefaultCulture = false;
	}
	else if (!PendingCulture.IsEmpty())
	{
		const FString CultureToApply = PendingCulture;
		if (FInternationalization::Get().SetCurrentCulture(CultureToApply))
		{
			// We need to localize text before the player logs in and very early in the loading screen
			GConfig->SetString(TEXT("Internationalization"), TEXT("Culture"), *CultureToApply, GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
		ClearPendingCulture();
	}
}

void UOrionSettingsShared::ResetCultureToCurrentSettings()
{
	ClearPendingCulture();
	bResetToDefaultCulture = false;
}

bool UOrionSettingsShared::IsUsingDefaultCulture() const
{
	FString Culture;
	GConfig->GetString(TEXT("Internationalization"), TEXT("Culture"), Culture, GGameUserSettingsIni);
	
	return Culture.IsEmpty();
}

void UOrionSettingsShared::SetAllowAudioInBackgroundSetting(EOrionAllowBackgroundAudioSetting NewValue)
{
	if (ChangeValueAndDirty(AllowAudioInBackground, NewValue))
	{
		ApplyBackgroundAudioSettings();
	}
}

void UOrionSettingsShared::ApplyBackgroundAudioSettings()
{
	if (OwningPlayer && OwningPlayer->IsPrimaryPlayer())
	{
		FApp::SetUnfocusedVolumeMultiplier((AllowAudioInBackground != EOrionAllowBackgroundAudioSetting::Off) ? 1.0f : 0.0f);
	}
}
