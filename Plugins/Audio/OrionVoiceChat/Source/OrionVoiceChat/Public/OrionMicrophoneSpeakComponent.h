/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/ActorComponent.h"
#include "Sound/SoundWaveProcedural.h"
#include "Sound/SoundEffectSource.h"
#include "Components/AudioComponent.h"

#include "VoiceModule.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

#if PLATFORM_IOS
#include "AVFoundation/AVFoundation.h"
#include "OrionAudioCaptureIOS.h"
#endif

#include "OrionMicrophoneSpeakComponent.generated.h"

#define NUM_ENTROPY_VALUES 5

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ORIONVOICECHAT_API UOrionMicrophoneSpeakComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataMicrophoneReceived, const TArray<uint8>&, data);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMicrophoneVolumeReceived, float, Volume);

public:
	UOrionMicrophoneSpeakComponent();

	UPROPERTY(BlueprintAssignable, Category="OrionVoiceChat")
	FDataMicrophoneReceived OnDataMicrophoneReceived;

	UPROPERTY(BlueprintAssignable, Category="OrionVoiceChat")
	FMicrophoneVolumeReceived OnMicrophoneVolumeReceived;

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	bool IsPlayingVoiceAudio();

	/* create sound wave, audio component */
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	bool InitializeAudioResources(int32 InVoiceSampleRate, int32 InVoiceNumChannels, int32 InOpusFramesPerSec);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	bool StartSpeaking(bool bShouldHearMyOwnVoice, bool bIsGlobal, TArray<int32> RadioChannel, bool bUseRange, float MaxRange);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void StopSpeaking();

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetAudioMuted(bool bMuted);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetVoiceVolume(float Volume);

	// client transmit voice
	UFUNCTION(Server, Unreliable, Category="OrionVoiceChat")
	void RPCClientTransmitVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec, bool _bIsGlobal, TArray<int32> const& _RadioChannel, bool _bUseRange, float _MaxRange);

	UFUNCTION(NetMulticast, Unreliable, Category="OrionVoiceChat")
	void RPCServerBroadcastVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec);
	// server send voice to relevant client
	UFUNCTION(Client, Unreliable, Category="OrionVoiceChat")
	void RPCReceiveVoiceFromServer(UOrionMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ProcessReceivedVoiceData(TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec);

	UFUNCTION(Category="OrionVoiceChat")
	void SetAttenuationAssetPath(bool bEnableAttenuation, FString _AttenuationAssetPath);

	UFUNCTION(Category="OrionVoiceChat")
	void SetSourceChainEffectAssetPath(bool bEnableSourceChainEffect, FString _SourceChainEffectPath);

	UFUNCTION(Category="OrionVoiceChat")
	void SetOverrideLocalAttenuationPath(bool bEnableAttenuation, bool bOverrideLocally, FString _AttenuationAssetPath);

	UFUNCTION(Category="OrionVoiceChat")
	void SetOverrideLocalSourceEffectPath(bool bEnableSourceEffect, bool bOverrideLocally, FString _pathToSourceEffectAsset);

	UFUNCTION(Category="OrionVoiceChat")
	void SetLocalVolumeMultiplier(float MultiplierVolume);

	UFUNCTION(Category="OrionVoiceChat")
	float GetLocalVolumeMultiplier();

	// variable used for local client voice
	bool bLocalSpeaking = false;
	bool bShouldHearMyOwnVoiceLocal = true;
	bool bLocalMuted = false;
	bool bLocalGlobal = true;
	TArray<int32> LocalRadioChannels;
	bool bUseRangeLocal = false;
	float MaxRangeLocal = 0;

	// get runtime microphone Volume
	UPROPERTY(BlueprintReadOnly, Category="OrionVoiceChat")
	float LatestVolume = 0.0f;
	const float ResetRuntimeVolumeDelay = 0.2f;
	float ResetRuntimeVolumeTimer = 0.0f;

	FString AttenuationAssetPath = "";
	bool bAttenuationEnabled = false;

	FString SourceChainEffectPath = "";
	bool bSourceChainEffectEnabled = false;

	UPROPERTY(BlueprintReadWrite, Category="OrionVoiceChat")
	TObjectPtr<UAudioComponent> VoiceAudioComponent;
	UPROPERTY(BlueprintReadOnly, Category="OrionVoiceChat")
	TObjectPtr<USoundWaveProcedural> VoiceSoundWaveProcedural;

	/* mobile raw data buffer for opus */
	TArray<uint8> MobileVoiceCaptureBufferAppended;

	/* opus buffer used */
	TArray<uint8> bufferDecodedOpus;
	TArray<uint8> bufferEncodedOpus;
	TArray<uint8> bufferRPCdecodedData;

#if PLATFORM_WINDOWS
	// PC
	TSharedPtr<class IVoiceCapture> PCVoiceCapture;
	TArray<uint8> PCVoiceCaptureBuffer;
	TArray<uint8> PCVoiceCaptureBufferAppended;
	int32 MaxRawCaptureDataSize;
#endif

#if PLATFORM_IOS
	FOrionAudioCaptureIOS iosCapture;
#endif

	// used to override server attenuation/source effect on local client
	bool bOverrideLocalAttenuation = false;
	bool bOverrideLocalSourceEffect = false;
	FString OverrideLocalAttenuationPath;
	FString OverrideLocalSourceEffectPath;

	// override voice Volume of a player locally, like you can do in Discord
	float VoiceAudioComponentVolume = 3.0f;
	float LocalVolumeMultiplier = 1.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
	virtual void OnUnregister() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void ReceiveMicrophoneData(TArray<int16> data, int32 readsize);
	void TransmitVoiceDataToRemoteAndLocal(uint8* pointerBufferPCMMic, int32 uint8sizeBufferPCMMic);
	bool WasAudioResourcesInitialized();

	//  at 48 kHz the permitted values are 120 (2.5ms 400 ), 240 (5ms 200), 480 (10ms 100), 960 (20ms 50 ), 1920 (40ms 25 )
	int32 NUM_OPUS_FRAMES_PER_SEC = 200; // 400 200 100 50 25
	const int32 DEFAULT_NUM_OPUS_FRAMES_PER_SEC = 200;

private:
	/* opus init, encode, decode*/
	bool OpusInit(int32 InSampleRate, int32 InNumChannels, int32 OpusFramePerSec);
	int32 OpusEncode(const uint8* RawPCMData, uint32 RawDataSize, uint8* OutCompressedData, uint32& OutCompressedDataSize);

	bool OpusDecoderInit(int32 InSampleRate, int32 InNumChannels, int32 OpusFramePerSec);
	void OpusDecode(const uint8* InCompressedData, uint32 CompressedDataSize, uint8* OutRawPCMData, uint32& OutRawDataSize);

	/* start playing sound */
	void PlayAudioVoice();

	/* was already init ?*/
	bool bAudioResourcesInitialized = false;

	/*********************** OPUS ************************/
	/** Sample rate encoding (supports 8000, 12000, 16000, 24000, 480000) */
	int32 VoiceSampleRate;
	/** Encoded channel count (supports 1,2) */
	int32 VoiceNumChannels;

	/** Sample rate encoding (supports 8000, 12000, 16000, 24000, 480000) */
	int32 EncoderSampleRate;
	/** Encoded channel count (supports 1,2) */
	int32 EncoderNumChannels;
	/**
	 * Number of samples encoded in a time slice "frame" (must match decoder)
	 * One frame defined as (2.5, 5, 10, 20, 40 or 60 ms) of audio data
	 * Voice encoding lower bound is 10ms (audio goes to 2.5ms).
	 * Voice encoding upper bound is 60ms (audio goes to 20ms).
	 * at 48 kHz the permitted values are 120 (2.5ms), 240 (5ms), 480 (10ms), 960 (20ms), 1920 (40ms), and 2880 (60ms)
	 */
	int32 EncoderFrameSize;

	int32 EncoderBytesPerFrame;

	/** Opus encoder stateful data */
	struct OpusEncoder* Encoder;
	/** Last values for error checking with the decoder */
	uint32 EncoderEntropy[NUM_ENTROPY_VALUES];
	/** Last recorded entropy index */
	uint32 EncoderLastEntropyIndex;
	/** Last value set in the call to Encode() */
	uint8 EncoderGeneration;

	/** Sample rate to decode into, regardless of encoding (supports 8000, 12000, 16000, 24000, 480000) */
	int32 DecoderSampleRate;
	/** Decoded channel count (supports 1,2) */
	int32 DecoderNumChannels;
	/**
	 * Number of samples encoded in a time slice (must match encoder)
	 * at 48 kHz the permitted values are 120, 240, 480, 960, 1920, and 2880
	 */
	int32 DecoderFrameSize;
	/** Opus decoder stateful data */
	struct OpusDecoder* Decoder;
	/** Last values for error checking with the encoder */
	uint32 DecoderEntropy[NUM_ENTROPY_VALUES];
	/** Last recorded entropy index */
	uint32 DecoderLastEntropyIndex;
	/** Generation value received from the last incoming packet */
	uint8 DecoderLastGeneration;
	/*******************************************************/
};
