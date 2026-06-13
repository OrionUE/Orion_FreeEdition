/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingValueDiscreteDynamic_AudioInputDevice.h"

#include "Audio/OrionAudioInputManager.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "System/OrionGameInstance.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueDiscreteDynamic_AudioInputDevice)

#define LOCTEXT_NAMESPACE "GameSettings"

void UGameSettingValueDiscreteDynamic_AudioInputDevice::SetDiscreteOptionByIndex(int32 Index)
{
	Super::SetDiscreteOptionByIndex(Index);
}

void UGameSettingValueDiscreteDynamic_AudioInputDevice::OnApply()
{
	Super::OnApply();

	int32 InputDeviceIndex = 0;
	if (GetDiscreteOptionIndex() != 0)
	{
		InputDeviceIndex = GetDiscreteOptionIndex() - 1;
	}

	UOrionGameInstance* GameInstance = Cast<UOrionGameInstance>(LocalPlayer->GetGameInstance());
	FOrionAudioInputManager& AudioInputManager = GameInstance->GetAudioInputManager();
	AudioInputManager.SetInputDeviceByIndex(InputDeviceIndex);
}

void UGameSettingValueDiscreteDynamic_AudioInputDevice::OnInitialized()
{
	Super::OnInitialized();

	UOrionGameInstance* GameInstance = Cast<UOrionGameInstance>(LocalPlayer->GetGameInstance());
	FOrionAudioInputManager& AudioInputManager = GameInstance->GetAudioInputManager();
	AudioInputManager.OnAudioInputDevicesChanged.AddUObject(this, &ThisClass::OnAudioInputDevicesChanged);

	TArray<FString> InputDevicesList;
	AudioInputManager.GetAudioDevicesList(InputDevicesList);
	OnAudioInputDevicesObtained(InputDevicesList);
}

void UGameSettingValueDiscreteDynamic_AudioInputDevice::OnAudioInputDevicesChanged(const TArray<FString>& InputDevices, int32 CurrentInputDeviceIndex)
{
	OnAudioInputDevicesObtained(InputDevices);

	SetDiscreteOptionByIndex(CurrentInputDeviceIndex);
}

void UGameSettingValueDiscreteDynamic_AudioInputDevice::OnAudioInputDevicesObtained(const TArray<FString>& InputDevices)
{
	for (const FString& DeviceName : InputDevices)
	{
		RemoveDynamicOption(DeviceName);
	}

	FText DefaultDeviceName = LOCTEXT("DefaultAudioOutputDevice_None", "None");
	FString CurrentSavedDeviceID = UOrionSettingsLocal::Get()->GetAudioInputDeviceId();

	if (InputDevices.IsValidIndex(0))
	{
		DefaultDeviceName = FText::FromString(InputDevices[0]);
	}

	OptionValues.Reset(InputDevices.Num() + 1);
	OptionDisplayTexts.Reset(InputDevices.Num() + 1);
	AddDynamicOption(TEXT("Default"), FText::Format(LOCTEXT("DefaultAudioInputDevice_DefaultInput", "Default Input - {0}"), DefaultDeviceName));

	for (int32 DeviceIndex = 0; DeviceIndex < InputDevices.Num(); DeviceIndex++)
	{
		AddDynamicOption(InputDevices[DeviceIndex], FText::FromString(InputDevices[DeviceIndex]));
	}

	SetDefaultValueFromString(TEXT("Default"));
	RefreshEditableState();
}

#undef LOCTEXT_NAMESPACE
