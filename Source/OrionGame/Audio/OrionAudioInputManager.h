/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

class UAudioDeviceNotificationSubsystem;

enum class EAudioDeviceChangedRole : uint8;

class FOrionAudioInputManager : public FNoncopyable
{
public:
	explicit FOrionAudioInputManager();
	virtual ~FOrionAudioInputManager();

public:
	void SetInputDeviceByName(const FString& InputDeviceName);
	void SetInputDeviceByIndex(int32 InputDeviceIndex);

	void GetAudioDevicesList(TArray<FString>& InputDevicesList) const;

protected:
	void OnCaptureDeviceChanged(EAudioDeviceChangedRole InRole, FString DeviceId);
	void OnAudioInputDevicesObtained();

	void ReloadVoiceModule();

protected:
	TObjectPtr<UAudioDeviceNotificationSubsystem> AudioDeviceNotificationSubsystem;

	TArray<FString> InputDevices;

public:
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnAudioInputDevicesChanged, const TArray<FString>& /*InputDevices*/, int32 /*CurrentInputDeviceIndex*/);
	FOnAudioInputDevicesChanged OnAudioInputDevicesChanged;

private:
	FDelegateHandle CaptureDeviceChangedDelegateHandle;
};
