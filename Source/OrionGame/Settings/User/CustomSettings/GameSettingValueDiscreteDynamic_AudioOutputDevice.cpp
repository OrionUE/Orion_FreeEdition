/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingValueDiscreteDynamic_AudioOutputDevice.h"

#include "AudioDeviceNotificationSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueDiscreteDynamic_AudioOutputDevice)

#define LOCTEXT_NAMESPACE "GameSettings"

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::SetDiscreteOptionByIndex(int32 Index)
{
	Super::SetDiscreteOptionByIndex(Index);
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::OnInitialized()
{
	Super::OnInitialized();

	if (UAudioDeviceNotificationSubsystem* AudioDeviceNotificationSubsystem = UAudioDeviceNotificationSubsystem::Get())
	{
		AudioDeviceNotificationSubsystem->DeviceAddedNative.AddUObject(this, &UGameSettingValueDiscreteDynamic_AudioOutputDevice::DeviceAddedOrRemoved);
		AudioDeviceNotificationSubsystem->DeviceRemovedNative.AddUObject(this, &UGameSettingValueDiscreteDynamic_AudioOutputDevice::DeviceAddedOrRemoved);
		AudioDeviceNotificationSubsystem->DefaultRenderDeviceChangedNative.AddUObject(this, &UGameSettingValueDiscreteDynamic_AudioOutputDevice::DefaultDeviceChanged);
	}

	DevicesObtainedCallback.BindUFunction(this, FName("OnAudioOutputDevicesObtained"));
	UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(this, DevicesObtainedCallback);
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::OnApply()
{
	Super::OnApply();

	int32 OutputDeviceIndex = 0;
	if (GetDiscreteOptionIndex() != 0)
	{
		OutputDeviceIndex = GetDiscreteOptionIndex() - 1;
	}

	FString RequestedAudioDeviceId = GetValueAsString();
	const int32 DefaultOptionIndex = GetDiscreteOptionDefaultIndex();
	if (OutputDeviceIndex == DefaultOptionIndex)
	{
		RequestedAudioDeviceId = SystemDefaultDeviceId;
	}

	if (RequestedAudioDeviceId == CurrentDeviceId)
	{
		LastKnownGoodIndex = OutputDeviceIndex;
		return;
	}
	
	bRequestDefault = (OutputDeviceIndex == DefaultOptionIndex);

	DevicesSwappedCallback.BindUFunction(this, FName("OnCompletedDeviceSwap"));
	UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(LocalPlayer, RequestedAudioDeviceId, DevicesSwappedCallback);
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::OnAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& AvailableDevices)
{
	int32 NewSize = AvailableDevices.Num();
	OutputDevices.Reset(NewSize++);
	OutputDevices.Append(AvailableDevices);

	OptionValues.Reset(NewSize);
	OptionDisplayTexts.Reset(NewSize);

	// Placeholder - needs to be first option, so we can format the default device string later
	AddDynamicOption(TEXT(""), FText::GetEmpty());
	FText SystemDefaultDeviceName = LOCTEXT("DefaultAudioOutputDevice_None", "None");

	for (const FAudioOutputDeviceInfo& DeviceInfo : AvailableDevices)
	{
		if (!DeviceInfo.DeviceId.IsEmpty() && !DeviceInfo.Name.IsEmpty())
		{
			// System Default 
			if (DeviceInfo.bIsSystemDefault)
			{
				SystemDefaultDeviceId = DeviceInfo.DeviceId;
				SystemDefaultDeviceName = FText::FromString(DeviceInfo.Name);
			}

			// Current Device
			if (DeviceInfo.bIsCurrentDevice)
			{
				CurrentDeviceId = DeviceInfo.DeviceId;
			}

			// Add the menu option
			AddDynamicOption(DeviceInfo.DeviceId, FText::FromString(DeviceInfo.Name));
		}
	}

	OptionDisplayTexts[0] = FText::Format(LOCTEXT("DefaultAudioOutputDevice_DefaultOutput", "Default Output - {0}"), SystemDefaultDeviceName);
	SetDefaultValueFromString(TEXT(""));
	LastKnownGoodIndex = GetDiscreteOptionIndex();
	RefreshEditableState();
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::OnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult)
{
    if (SwapResult.Result == ESwapAudioOutputDeviceResultState::Success)
    {
        CurrentDeviceId = SwapResult.RequestedDeviceId;
        LastKnownGoodIndex = GetDiscreteOptionIndex();
        return;
    }

    if (LastKnownGoodIndex >= 0 && OptionValues.IsValidIndex(LastKnownGoodIndex))
    {
        const FString& LastKnownGoodDeviceId = OptionValues[LastKnownGoodIndex];
        if (SwapResult.RequestedDeviceId != LastKnownGoodDeviceId)
        {
            SetDiscreteOptionByIndex(LastKnownGoodIndex);
        }
    }
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::DeviceAddedOrRemoved(FString DeviceId)
{
	UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(this, DevicesObtainedCallback);
}

void UGameSettingValueDiscreteDynamic_AudioOutputDevice::DefaultDeviceChanged(EAudioDeviceChangedRole InRole, FString DeviceId)
{
	UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(this, DevicesObtainedCallback);
}

#undef LOCTEXT_NAMESPACE
