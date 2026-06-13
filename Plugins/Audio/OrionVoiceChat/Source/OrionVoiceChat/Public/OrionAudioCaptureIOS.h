/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#if PLATFORM_IOS
#include "AudioCaptureCore.h"
#include <AudioToolbox/AudioToolbox.h>
#include <AudioUnit/AudioUnit.h>
#include "AVFoundation/AVFoundation.h"
#include "Math/UnrealMathUtility.h"
#include "OrionVoiceChat.h"

class UOrionMicrophoneSpeakComponent;

class FOrionAudioCaptureIOS
{
public:
	FOrionAudioCaptureIOS();

	bool GetCaptureDeviceInfo(Audio::FCaptureDeviceInfo& OutInfo, int32 DeviceIndex);
	bool OpenIOSCaptureStream(int _SampleRate, int _NumChannels, int32 EncoderMinimumBytesPerFrame);
	bool CloseStream();
	bool StartStream();
	bool StopStream();
	bool AbortStream();
	bool GetStreamTime(double& OutStreamTime);
	int32 GetSampleRate() const
	{
		return SampleRate;
	}

	bool IsStreamOpen() const;
	bool IsCapturing() const;
	void OnAudioCapture(void* InBuffer, uint32 InBufferFrames, double StreamTime, bool bOverflow);
	bool GetInputDevicesAvailable(TArray<Audio::FCaptureDeviceInfo>& OutDevices);
	void SetHardwareFeatureEnabled(Audio::EHardwareInputFeature FeatureType, bool bEnabled);

	OSStatus OnCaptureCallback(AudioUnitRenderActionFlags* ioActionFlags, const AudioTimeStamp* inTimeStamp, UInt32 inBusNumber, UInt32 inNumberFrames, AudioBufferList* ioData);

	UOrionMicrophoneSpeakComponent* CallbackMicrophoneComponent;

private:
	void AllocateBuffer(int SizeInBytes);

	bool bStreamOpened = false;
	bool bInitialized = false;
	AudioComponentInstance IOUnit;

	int32 NumChannels;
	int32 SampleRate;
	int32 EncoderMinimumBytesPerFrame;

	TArray<uint8> CaptureBuffer;
	TArray<int16> VoiceCaptureBufferAppended;
	int BufferSize = 0;
};

#endif
