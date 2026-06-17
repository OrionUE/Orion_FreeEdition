/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameSettingRegistry.h"

#include "GameSettingCollection.h"
#include "OrionSettingsLocal.h"
#include "OrionSettingsShared.h"
#include "Player/OrionLocalPlayer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameSettingRegistry)

UOrionGameSettingRegistry::UOrionGameSettingRegistry()
{
}

UOrionGameSettingRegistry* UOrionGameSettingRegistry::Get(UCoreLocalPlayer* InLocalPlayer)
{
	UOrionGameSettingRegistry* Registry = FindObject<UOrionGameSettingRegistry>(InLocalPlayer, TEXT("OrionGameSettingRegistry"), EFindObjectFlags::ExactClass);
	if (Registry == nullptr)
	{
		Registry = NewObject<UOrionGameSettingRegistry>(InLocalPlayer, TEXT("OrionGameSettingRegistry"));
		Registry->Initialize(InLocalPlayer);
	}

	return Registry;
}

void UOrionGameSettingRegistry::SaveChanges()
{
	Super::SaveChanges();

	if (UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(OwningLocalPlayer))
	{
		// Game user settings need to be applied to handle things like resolution, this saves indirectly
		LocalPlayer->GetLocalSettings()->ApplySettings(false);
		
		LocalPlayer->GetSharedSettings()->ApplySettings();
		LocalPlayer->GetSharedSettings()->SaveSettings();
	}
}

void UOrionGameSettingRegistry::OnInitialize(ULocalPlayer* InLocalPlayer)
{
	UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(InLocalPlayer);

	GameSetting = InitializeGameSettings(LocalPlayer);
	RegisterSetting(GameSetting);
	
	VideoSettings = InitializeVideoSettings(LocalPlayer);
	InitializeVideoSettings_FrameRates(VideoSettings, LocalPlayer);
	RegisterSetting(VideoSettings);
	
	AudioSettings = InitializeAudioSettings(LocalPlayer);
	RegisterSetting(AudioSettings);
	
	MouseAndKeyboardSettings = InitializeMouseAndKeyboardSettings(LocalPlayer);
	RegisterSetting(MouseAndKeyboardSettings);

	GamepadSettings = InitializeGamepadSettings(LocalPlayer);
	RegisterSetting(GamepadSettings);
}

bool UOrionGameSettingRegistry::IsFinishedInitializing() const
{
	if (Super::IsFinishedInitializing())
	{
		if (UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(OwningLocalPlayer))
		{
			if (LocalPlayer->GetSharedSettings() == nullptr)
			{
				return false;
			}
		}

		return true;
	}

	return false;
}
