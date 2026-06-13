/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionAudioInputManager.h"

#include "AudioDeviceNotificationSubsystem.h"
#include "OrionLogChannels.h"
#include "OrionVoiceChatActor.h"
#include "Settings/User/OrionSettingsLocal.h"

FOrionAudioInputManager::FOrionAudioInputManager()
{
	AudioDeviceNotificationSubsystem = UAudioDeviceNotificationSubsystem::Get();
	if (AudioDeviceNotificationSubsystem)
	{
		CaptureDeviceChangedDelegateHandle = AudioDeviceNotificationSubsystem->DefaultCaptureDeviceChangedNative.AddRaw(this, &FOrionAudioInputManager::OnCaptureDeviceChanged);
	}
	else
	{
		UE_LOG(LogOrion, Warning, TEXT("Audio device notification subsystem is unavailable. Audio input device change notifications are disabled."));
	}

	// 依赖 WmfMedia 插件获取音频输入设备
	UOrionVoiceChat::GetAudioDevicesList(InputDevices);
	OnAudioInputDevicesObtained();
}

FOrionAudioInputManager::~FOrionAudioInputManager()
{
	if (AudioDeviceNotificationSubsystem && CaptureDeviceChangedDelegateHandle.IsValid())
	{
		AudioDeviceNotificationSubsystem->DefaultCaptureDeviceChangedNative.Remove(CaptureDeviceChangedDelegateHandle);
	}
}

void FOrionAudioInputManager::SetInputDeviceByName(const FString& InputDeviceName)
{
	ReloadVoiceModule();
	UOrionVoiceChat::SetHardwareAudioInput(InputDeviceName);
	UOrionVoiceChat::InitializeAudioQuality(UOrionSettingsLocal::Get()->GetInputDeviceSampleRate(), UOrionSettingsLocal::Get()->GetInputDeviceNumChannels());
}

void FOrionAudioInputManager::SetInputDeviceByIndex(int32 InputDeviceIndex)
{
	if (InputDevices.IsValidIndex(InputDeviceIndex))
	{
		SetInputDeviceByName(InputDevices[InputDeviceIndex]);
	}
}

void FOrionAudioInputManager::GetAudioDevicesList(TArray<FString>& InputDevicesList) const
{
	InputDevicesList = InputDevices;
}

void FOrionAudioInputManager::OnCaptureDeviceChanged(EAudioDeviceChangedRole InRole, FString DeviceId)
{
	InputDevices.Empty();
	UOrionVoiceChat::GetAudioDevicesList(InputDevices);

	OnAudioInputDevicesObtained();
}

void FOrionAudioInputManager::OnAudioInputDevicesObtained()
{
	if (InputDevices.IsEmpty())
	{
		OnAudioInputDevicesChanged.Broadcast(InputDevices, INDEX_NONE);
		return;
	}

	FString CurrentSavedDeviceID = UOrionSettingsLocal::Get()->GetAudioInputDeviceId();
	bool bChangeSavedDeviceID = true;
	int32 CurrentInputDeviceIndex = 0;

	for (int32 DeviceIndex = 1; DeviceIndex < InputDevices.Num(); DeviceIndex++)
	{
		if (CurrentSavedDeviceID.Equals(InputDevices[DeviceIndex]))
		{
			bChangeSavedDeviceID = false;
			CurrentInputDeviceIndex = DeviceIndex;
		}
	}

	if (bChangeSavedDeviceID)
	{
		SetInputDeviceByIndex(CurrentInputDeviceIndex);
	}
	else
	{
		SetInputDeviceByName(CurrentSavedDeviceID);
	}

	OnAudioInputDevicesChanged.Broadcast(InputDevices, CurrentInputDeviceIndex);
}

void FOrionAudioInputManager::ReloadVoiceModule()
{
	FModuleManager::Get().UnloadModule(TEXT("Voice"));
	FModuleManager::Get().LoadModule(TEXT("Voice"));
}
