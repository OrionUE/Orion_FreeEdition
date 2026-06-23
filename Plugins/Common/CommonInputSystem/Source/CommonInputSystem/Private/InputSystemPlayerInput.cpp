/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "InputSystemPlayerInput.h"

#include "EnhancedInputSubsystems.h"
#include "InputSystemUserSettings.h"
#include "Engine/LocalPlayer.h"
#include "Performance/LatencyMarkerModule.h"

UInputSystemPlayerInput::UInputSystemPlayerInput()
	: Super()
{
	if (HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		return;
	}

	BindToLatencyMarkerSettingChange();
}

UInputSystemPlayerInput::~UInputSystemPlayerInput()
{
	BoundLatencyUserSettings.Reset();
}

void UInputSystemPlayerInput::BeginDestroy()
{
	UnbindLatencyMarkerSettingChangeListener();

	Super::BeginDestroy();
}

bool UInputSystemPlayerInput::InputKey(const FInputKeyEventArgs& Params)
{
	const bool bResult = Super::InputKey(Params);

	ProcessInputEventForLatencyMarker(Params);

	return bResult;
}

void UInputSystemPlayerInput::ProcessInputEventForLatencyMarker(const FInputKeyEventArgs& Params)
{
	if (!bShouldTriggerLatencyFlash)
	{
		return;
	}

	// Flash the latency marker on left mouse down
	if (Params.Key == EKeys::LeftMouseButton)
	{
		TArray<ILatencyMarkerModule*> LatencyMarkerModules = IModularFeatures::Get().GetModularFeatureImplementations<ILatencyMarkerModule>(ILatencyMarkerModule::GetModularFeatureName());

		for (ILatencyMarkerModule* LatencyMarkerModule : LatencyMarkerModules)
		{
			// TRIGGER_FLASH is 7
			LatencyMarkerModule->SetCustomLatencyMarker(7, GFrameCounter);
		}
	}
}

void UInputSystemPlayerInput::BindToLatencyMarkerSettingChange()
{
	if (!UInputSystemUserSettings::DoesPlatformSupportLatencyMarkers())
	{
		return;
	}

	UInputSystemUserSettings* UserSettings = GetInputSystemUserSettings();
	if (UserSettings == nullptr)
	{
		return;
	}

	BoundLatencyUserSettings = UserSettings;
	UserSettings->OnLatencyFlashInidicatorSettingsChangedEvent().AddUObject(this, &ThisClass::HandleLatencyMarkerSettingChanged);

	// Initialize the settings and make sure that the input latency modules are enabled
	HandleLatencyMarkerSettingChanged();
}

void UInputSystemPlayerInput::UnbindLatencyMarkerSettingChangeListener()
{
	UInputSystemUserSettings* UserSettings = BoundLatencyUserSettings.Get();
	if (UserSettings != nullptr)
	{
		UserSettings->OnLatencyFlashInidicatorSettingsChangedEvent().RemoveAll(this);
	}

	BoundLatencyUserSettings.Reset();
	bShouldTriggerLatencyFlash = false;
}

void UInputSystemPlayerInput::HandleLatencyMarkerSettingChanged()
{
	// Make sure that we only ever get this callback on platforms which support latency markers
	if (!UInputSystemUserSettings::DoesPlatformSupportLatencyMarkers())
	{
		bShouldTriggerLatencyFlash = false;
		return;
	}

	UInputSystemUserSettings* UserSettings = BoundLatencyUserSettings.Get();
	if (UserSettings == nullptr)
	{
		bShouldTriggerLatencyFlash = false;
		return;
	}

	// Enable or disable the latency flash on all the marker modules according to the settings change
	bShouldTriggerLatencyFlash = UserSettings->GetEnableLatencyFlashIndicators();

	TArray<ILatencyMarkerModule*> LatencyMarkerModules = IModularFeatures::Get().GetModularFeatureImplementations<ILatencyMarkerModule>(ILatencyMarkerModule::GetModularFeatureName());
	for (ILatencyMarkerModule* LatencyMarkerModule : LatencyMarkerModules)
	{
		LatencyMarkerModule->SetFlashIndicatorEnabled(bShouldTriggerLatencyFlash);
	}
}

UInputSystemUserSettings* UInputSystemPlayerInput::GetInputSystemUserSettings() const
{
	if (HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject | RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return nullptr;
	}

	const ULocalPlayer* LocalPlayer = GetOwningLocalPlayer();
	if (LocalPlayer == nullptr)
	{
		return nullptr;
	}

	const UEnhancedInputLocalPlayerSubsystem* EISubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (EISubsystem == nullptr)
	{
		return nullptr;
	}

	return Cast<UInputSystemUserSettings>(EISubsystem->GetUserSettings());
}
