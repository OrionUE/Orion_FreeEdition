/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "InputSystemUserSettings.h"

#include "CommonUISettings.h"
#include "ICommonUIModule.h"
#include "InputMappingContext.h"
#include "InputSystemMappableKeySettings.h"
#include "Framework/Application/SlateApplication.h"
#include "Performance/LatencyMarkerModule.h"

namespace PerfStatTags
{
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_SupportsLatencyStats, "Platform.Trait.SupportsLatencyStats");
	UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_SupportsLatencyMarkers, "Platform.Trait.SupportsLatencyMarkers");
}

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

void UInputSystemUserSettings::SetToDefaults()
{
	bEnableLatencyTrackingStats = UInputSystemUserSettings::DoesPlatformSupportLatencyTrackingStats();
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

bool UInputSystemUserSettings::DoesPlatformSupportLatencyMarkers()
{
	return ICommonUIModule::GetSettings().GetPlatformTraits().HasTag(PerfStatTags::TAG_Platform_Trait_SupportsLatencyMarkers);
}

void UInputSystemUserSettings::SetEnableLatencyFlashIndicators(const bool bNewVal)
{
	if (bNewVal != bEnableLatencyFlashIndicators)
	{
		bEnableLatencyFlashIndicators = bNewVal;
		LatencyFlashInidicatorSettingsChangedEvent.Broadcast();
	}	
}

bool UInputSystemUserSettings::DoesPlatformSupportLatencyTrackingStats()
{
	return ICommonUIModule::GetSettings().GetPlatformTraits().HasTag(PerfStatTags::TAG_Platform_Trait_SupportsLatencyStats);
}

void UInputSystemUserSettings::SetEnableLatencyTrackingStats(const bool bNewVal)
{
	if (bNewVal != bEnableLatencyTrackingStats)
	{
		bEnableLatencyTrackingStats = bNewVal;

		ApplyLatencyTrackingStatSetting();

		LatencyStatIndicatorSettingsChangedEvent.Broadcast();
	}
}

void UInputSystemUserSettings::ApplyLatencyTrackingStatSetting()
{
	// Since this function will be called on load of the settings, we check if the slate app is initalized.
	// If it isn't then we are not in a target which can even have latency stats (like a headless cooker) so we
	// will exit early and do nothing.
	if (!FSlateApplication::IsInitialized())
	{
		return;
	}

	// Don't bother doing anything if the platform doesn't even support tracking stats.
	if (!DoesPlatformSupportLatencyTrackingStats())
	{
		return;
	}

	// Actually enable or disable the latency marker modules based on this setting
	TArray<ILatencyMarkerModule*> LatencyMarkerModules = IModularFeatures::Get().GetModularFeatureImplementations<ILatencyMarkerModule>(ILatencyMarkerModule::GetModularFeatureName());
	for (ILatencyMarkerModule* LatencyMarkerModule : LatencyMarkerModules)
	{
		LatencyMarkerModule->SetEnabled(bEnableLatencyTrackingStats);
	}

	UE_CLOG(!LatencyMarkerModules.IsEmpty(), LogConsoleResponse, Log, TEXT("%s %d Latency Marker Module(s)"), bEnableLatencyTrackingStats ? TEXT("Enabled") : TEXT("Disabled"), LatencyMarkerModules.Num());
}
