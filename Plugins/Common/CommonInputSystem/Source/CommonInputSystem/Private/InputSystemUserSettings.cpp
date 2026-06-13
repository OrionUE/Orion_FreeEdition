// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#include "InputSystemUserSettings.h"

#include "InputMappingContext.h"
#include "InputSystemMappableKeySettings.h"

// FPlayerKeyMappingExtension
////////////////////////////////////////////////////////////////////////////////////

FPlayerKeyMappingExtension::FPlayerKeyMappingExtension()
	: GamepadKeyName(NAME_None)
	, bEnabledInKeySetting(true)
{
}

FPlayerKeyMappingExtension::FPlayerKeyMappingExtension(const FName& InGamepadKeyName, bool InEnabledInKeySetting, UObject* InMetadata)
	: GamepadKeyName(InGamepadKeyName)
	, bEnabledInKeySetting(InEnabledInKeySetting)
	, Metadata(InMetadata)
{
}

FName FPlayerKeyMappingExtension::GetGamepadKeyName() const
{
	return GamepadKeyName;
}

bool FPlayerKeyMappingExtension::IsEnabledInKeySetting() const
{
	return bEnabledInKeySetting;
}

const UObject* FPlayerKeyMappingExtension::GetMetadata() const
{
	return Metadata;
}

// UInputSystemUserSettings
////////////////////////////////////////////////////////////////////////////////////

void UInputSystemUserSettings::ApplySettings()
{
	Super::ApplySettings();
}

bool UInputSystemUserSettings::RegisterKeyMappingsToProfile(UEnhancedPlayerMappableKeyProfile& Profile, const UInputMappingContext* IMC)
{
	if (!Super::RegisterKeyMappingsToProfile(Profile, IMC))
	{
		return false;
	}

	for (const FEnhancedActionKeyMapping& KeyMapping : IMC->GetMappings())
	{
		// Skip over non-player mappable keys
		if (!KeyMapping.IsPlayerMappable())
		{
			continue;
		}

		if (UInputSystemMappableKeySettings* MappableKeySettings = Cast<UInputSystemMappableKeySettings>(KeyMapping.GetPlayerMappableKeySettings()))
		{
			FName GamepadName = MappableKeySettings->GamepadKeyName;
			bool bEnabledInKeySetting = MappableKeySettings->bEnabledInKeySetting;
			UObject* Metadata = MappableKeySettings->Metadata;

			FPlayerKeyMappingExtension& CurrentKeyMappingExtension = KeyMappingExtensions.FindOrAdd(KeyMapping.GetMappingName());
			CurrentKeyMappingExtension = {GamepadName, bEnabledInKeySetting, Metadata};
		}
	}

	return true;
}

const TMap<FName, FPlayerKeyMappingExtension>& UInputSystemUserSettings::GetKeyMappingExtensions() const
{
	return KeyMappingExtensions;
}
