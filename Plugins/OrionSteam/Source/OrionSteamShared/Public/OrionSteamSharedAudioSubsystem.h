/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrionSteamSharedTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "OrionSteamSharedAudioSubsystem.generated.h"

class ISoundHandleOwner;

UCLASS(meta=(ScriptName="OrionSteamAudioCaptureLibrary"))
class ORIONSTEAMSHARED_API UOrionSteamAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Returns the device info in a human readable format
	 * @param info - The audio device data to print
	 * @return The data in a string format
	 */
	UFUNCTION(BlueprintPure, meta=(DisplayName="Audio Input Device Info To String", CompactNodeTitle="To String", BlueprintAutocast), Category="Audio")
	static FString Conv_AudioInputDeviceInfoToString(const FOrionSteamAudioInputDeviceInfo& info);

	/**
	 * Gets information about all audio output devices available in the system
	 * @param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved
	 */
	UFUNCTION(BlueprintCallable, Category="Audio", meta=(WorldContext="WorldContextObject"))
	static void GetAvailableAudioInputDevices(const UObject* WorldContextObject, const FOnOrionSteamAudioInputDevicesObtained& OnObtainDevicesEvent);
};

/**
 * An implementation of ISoundHandleSystem using AudioEngineSubsystem
 */
UCLASS()
class ORIONSTEAMSHARED_API UOrionSteamSharedAudioSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void GatherAudioInputDevices();

	static TArray<FOrionSteamAudioInputDeviceInfo> GetAudioInputDevices()
	{
		return s_AvailableDeviceInfos;
	}
	static FOrionSteamAudioInputDeviceInfo FindAudioDeviceInfoFromDeviceId(FString DeviceId);

	UFUNCTION(BlueprintCallable, meta=(DisplayName="Find Audio Device Info From Device Id"), Category="OrionSteam|Voice")
	static FOrionSteamAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceId(FString DeviceId);

	UFUNCTION(BlueprintCallable, meta=(DisplayName="Get Audio Input Devices"), Category="OrionSteam|Voice")
	static TArray<FOrionSteamAudioInputDeviceInfo> K2_GetAudioInputDevices();

	UFUNCTION(BlueprintCallable, meta=(DisplayName="Find Audio Device Info From Device Name"), Category="OrionSteam|Voice")
	static FOrionSteamAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceName(FString DeviceName);

private:
	static TArray<FOrionSteamAudioInputDeviceInfo> s_AvailableDeviceInfos;
};
