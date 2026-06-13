/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "OrionMicrophoneSpeakComponent.h"

#include "OrionVoiceChatActor.generated.h"

enum EOrionVoiceChatMode
{
	OVC_GlobalNoRadio,
	OVC_GlobalRadio,
	OVC_ProximityNoRadio,
	OVC_ProximityRadio
};

// frames allowed 400 200 100 50 25
UENUM(BlueprintType)
enum class EOrionOpusFramePerSec : uint8
{
	ORION_OPUS_FPS_400 UMETA(DisplayName="ORION_OPUS_FPS_400"),
	ORION_OPUS_FPS_200 UMETA(DisplayName="ORION_OPUS_FPS_200"),
	ORION_OPUS_FPS_100 UMETA(DisplayName="ORION_OPUS_FPS_100"),
	ORION_OPUS_FPS_50 UMETA(DisplayName="ORION_OPUS_FPS_50"),
	ORION_OPUS_FPS_25 UMETA(DisplayName="ORION_OPUS_FPS_25")
};

// Global delegates for monitoring Voice Chat Actors creation / deletion
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNewOrionVoiceChatActorDelegate, const AOrionVoiceChatActor*, VoiceChatActor);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteOrionVoiceChatActorDelegate, const AOrionVoiceChatActor*, VoiceChatActor);
// Global delegates for monitoring local plalyer Voice Chat Actor creation
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMyOrionVoiceChatActorReadyDelegate, const AOrionVoiceChatActor*, VoiceChatActor);

UCLASS()
class ORIONVOICECHAT_API AOrionVoiceChatActor : public AActor
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNameReceived, FString, Name);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerMicrophoneOnReceived, bool, IsMicrophoneOn);

public:
	static AOrionVoiceChatActor* MyVoiceChatActor; // local player reference
	static FString SelectedAudioInputDevice;	   // selected microphone hardware on Windows
	static float RawMicrophoneGain;				   // Volume Gain
	static float VoiceChatGlobalVolume;			   // global voice chat Volume
	static bool bMuteAll;						   // mute all players
	static float LocationUpdateTickRate;		   // mute all players
	static float SendDataThreshold;
	static bool bUseAndroidCommunicationMode;

	// constructor
	AOrionVoiceChatActor();

	/* the root scene component*/
	UPROPERTY()
	TObjectPtr<USceneComponent> RootSceneComponent;

	/* the component used to speak and receive voice*/
	UPROPERTY(Transient, BlueprintReadOnly, ReplicatedUsing=RepNotifyMicComp, Category="OrionVoiceChat")
	TObjectPtr<UOrionMicrophoneSpeakComponent> MicrophoneSpeakComponent;

	/* delegate to clean up this Actor*/
	UFUNCTION(Category="OrionVoiceChat")
	void DelegateEndPlayOwner(AActor* Actor, EEndPlayReason::Type EndPlayReason);

	/* the owner of this Actor, used for muting a player for example */
	UPROPERTY(Transient, replicated, BlueprintReadOnly, Category="OrionVoiceChat")
	TObjectPtr<APlayerState> OwnerPlayerState;

	UPROPERTY(Transient, replicated, EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	int32 VoiceChatId;

	UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=RepNotifyPlayerName, Category="OrionVoiceChat")
	FString PlayerName = "Player";

	UPROPERTY(Transient, ReplicatedUsing=RepNotifyIsMicrophoneOn, EditAnywhere, BlueprintReadWrite, Category="OrionVoiceChat")
	bool bIsMicrophoneOn = false;

	UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=RepNotifyVoiceVolume, Category="OrionVoiceChat")
	float VoiceVolume = 5.0f;

	UPROPERTY(BlueprintReadWrite, Transient, replicated, Category="OrionVoiceChat")
	TArray<int32> SubscribedRadioChannels;

	UPROPERTY(Transient, ReplicatedUsing=RepNotifyAttenuationAsset, EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	FString AttenuationAssetPath = "";

	UPROPERTY(Transient, ReplicatedUsing=RepNotifySourceEffectAsset, EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	FString SourceChainEffectAssetPath = "";

	UPROPERTY(Transient, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	bool bServerPerformAntiCheat = false;

	UPROPERTY(Transient, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	bool bAntiCheatAllowUseProximity = true;

	UPROPERTY(Transient, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	bool bAntiCheatAllowUseGlobal = true;

	UPROPERTY(Transient, BlueprintReadWrite, meta=(ExposeOnSpawn="true"), Category="OrionVoiceChat")
	float AntiCheatMaxProximityRange = 1000;

	UPROPERTY(BlueprintAssignable, Category="OrionVoiceChat")
	FPlayerNameReceived OnPlayerNameReceived;

	UPROPERTY(BlueprintAssignable, Category="OrionVoiceChat")
	FPlayerMicrophoneOnReceived OnIsMicrophoneOnReceived;

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifyMicComp();

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifyAttenuationAsset();

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifySourceEffectAsset();

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifyVoiceVolume();

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifyPlayerName();

	UFUNCTION(Category="OrionVoiceChat")
	void RepNotifyIsMicrophoneOn();

	UFUNCTION(Category="OrionVoiceChat")
	void SetAudioMuted(bool isMute);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerSetAllowUseGlobal(bool bAllowUseGlobal);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerAddChannel(int32 ChannelToAdd);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerRemoveChannel(int32 ChannelToRemove);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerSetAttenuation(bool bEnableAttenuation, FString _AttenuationAssetPath);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerSetSourceChainEffect(bool bEnableSourceChainEffect, FString _SourceChainEffectPath);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerSetAllowUseProximity(bool bAllowUseRange);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void ServerSetMaxProximityRange(float _MaxProximityRange);

	// client set Name
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientSetPlayerName(const FString& Name);

	// client replicate its microphone status ( on / off )
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientSetIsMicrophoneOn(bool _bIsMicrophoneOn);

	// client replicate its microphone Volume
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientSetMicrophoneVolume(float Volume);

	// server update audio pos
	UFUNCTION(NetMulticast, Unreliable, Category="OrionVoiceChat")
	void RPCServerUpdatePosAudioComp(FVector WorldPos, FRotator WorldRotation);

	// client ask radio/team channel add
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientAskAddChannel(int32 ChannelToAdd);

	// client ask radio/team channel remove
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientAskRemoveChannel(int32 ChannelToRemove);

	// client attenuation path
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientSetAttenuationPath(const FString& _attenuationPath);

	// client source chain effect path
	UFUNCTION(Server, Reliable, Category="OrionVoiceChat")
	void RPCClientSetSourceChainEffectPath(const FString& _SourceChainEffectAssetPath);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetOverrideLocalAttenuationPath(bool bEnableAttenuation, bool bOverrideLocally, FString _AttenuationAssetPath);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetOverrideLocalSourceEffectPath(bool bEnableSourceEffect, bool bOverrideLocally, FString _pathToSourceEffectAsset);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetLocalVolumeMultiplier(float MultiplierVolume);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	float GetLocalVolumeMultiplier();

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	bool IsMicrophoneComponentValid();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);
	virtual void Tick(float DeltaTime) override;
	virtual void OnRep_Owner() override;
};

/* bp library */
UCLASS()
class ORIONVOICECHAT_API UOrionVoiceChat : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// reference to local Actor client side
	static AOrionVoiceChatActor* GetMyOrionVoiceChatActor();
	// delegate creation / end any voice chat Actor
	static FOnNewOrionVoiceChatActorDelegate OnNewVoiceChatActorDelegate;
	static FOnDeleteOrionVoiceChatActorDelegate OnDeleteVoiceChatActorDelegate;
	// delegate my local voice chat Actor ready
	static FOnMyOrionVoiceChatActorReadyDelegate OnMyVoiceChatActorReadyDelegate;

	// Your client local voice chat Actor
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static AOrionVoiceChatActor* GetMyLocalOrionVoiceChatActor();

	// Local Voice Chat Actor : Check if your Actor is ready to speak
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool IsMyOrionVoiceChatActorReady();

	// Local Voice Chat Actor : Customize audio settings
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool InitializeAudioQuality(int32 SampleRate = 48000, int32 NumChannels = 1, EOrionOpusFramePerSec OpusFramePerSec = EOrionOpusFramePerSec::ORION_OPUS_FPS_200);

	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool WasAudioQualityInitialized();

	// Local Voice Chat Actor : Start speak
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool StartSpeak(bool bShouldHearMyOwnVoice = true, bool bIsGlobal = true, int32 RadioChannel = 0, bool bUseProximity = false, float MaxProximityRange = 0);

	// Local Voice Chat Actor : Start speak to several radio channel
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool StartSpeakTeamArray(bool bShouldHearMyOwnVoice, bool bIsGlobal, TArray<int32> RadioChannel, bool bUseProximity, float MaxProximityRange);

	// Local Voice Chat Actor : Stop speak
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool StopSpeak();

	// Local Voice Chat Actor : Multiply your microphone Volume
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool SetMicrophoneVolume(float Volume);

	// Helpers function : Mute someone given its APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat", meta=(WorldContext="WorldContextObject"))
	static void LocalMutePlayer(const UObject* WorldContextObject, APlayerState* PlayerToMute, bool bShouldMute);

	// Helpers function : Check if someone is muted given its APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat", meta=(WorldContext="WorldContextObject"))
	static bool LocalIsPlayerMuted(const UObject* WorldContextObject, APlayerState* PlayerToCheckMute);

	// Local Voice Chat Actor : Register to a radio channel
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool AddChannel(int32 ChannelToAdd);

	// Local Voice Chat Actor : Check if registered to radio channel
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool IsRegisteredToChannel(int32 ChannelToCheck);

	// Local Voice Chat Actor : Unregister to a radio channel
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool RemoveChannel(int32 ChannelToRemove);

	// Helpers function : Android and iOS microphone permission asking
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void AskMicrophonePermission();

	// Helpers function : Android and iOS check if permission already granted
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool HasMicrophonePermission();

	// Local Voice Chat Actor : Multiply your microphone Volume from PCM data
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetRawMicrophoneGain(float Gain);

	// Sound settings set global Voice Chat Volume
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetGlobalVolume(float GlobalVolume);

	// Local Voice Chat Actor : Is Speaking
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool IsSpeaking();

	// Helpers function : Get microphones connected to your PC
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void GetAudioDevicesList(TArray<FString>& OutDevices);

	// Helpers function : Set microphone to use
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetHardwareAudioInput(FString AudioInputDeviceName);

	// Helpers function : Get a voice chat Actor from a APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat", meta=(WorldContext="WorldContextObject"))
	static AOrionVoiceChatActor* GetActorFromPlayerState(const UObject* WorldContextObject, APlayerState* FromPlayerState);

	// Helpers function : Get how loud is a player from a APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat", meta=(WorldContext="WorldContextObject"))
	static float GetMicrophoneRuntimeVolumeFromPlayerState(const UObject* WorldContextObject, APlayerState* FromPlayerState);

	// Helpers function : Register callback when a new Voice Chat Actor is created
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void RegisterOnNewOrionVoiceChatActor(const FOnNewOrionVoiceChatActorDelegate& Delegate);

	// Helpers function : Register callback when a new Voice Chat Actor is destroyed
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void RegisterOnDeleteOrionVoiceChatActor(const FOnDeleteOrionVoiceChatActorDelegate& Delegate);

	// Helpers function : Register callback when a local Voice Chat Actor is ready
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void RegisterOnMyOrionVoiceChatActorReady(const FOnMyOrionVoiceChatActorReadyDelegate& Delegate);

	// Local Voice Chat Actor : Set player Name
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool SetPlayerName(FString Name);

	// Helpers function : Is all voice chat muted
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool GetMuteAllPlayers();

	// Helpers function : Set voice chat muted
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetMuteAllPlayers(bool bInMuteAll);

	// Helpers function : Set voice chat location tick rate
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetDefaultLocationUpdateTickRate(float tickRate);

	// Helpers function : If Volume is superior to threshold, then send data, otherwise skip data
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void SetSendDataThreshold(float SendDataThreshold);

	// Helpers function : Android switch between microphone to use
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static void UseAndroidCommunicationMode(bool use);

	// Local Voice Chat Actor : Enable/disable attenuation and set attenuation path to use
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool SetAttenuationPath(bool bEnableAttenuation, FString _attenuationPath);

	// Local Voice Chat Actor : Enable/disable source effect and set source effect path to use
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool SetSourceChainEffectPath(bool bEnableSourceChainEffect, FString _SourceChainEffectAssetPath);

	// Local Voice Chat Actor : Enable/disable hear my own voice when speaking
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	static bool EnableShouldHearMyOwnVoice(bool enable);

	// Helpers function : If you want your user to be able bypass server replicated attenuation, use this function on any voice chat Actor by using APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetPlayerOverrideLocalAttenuationPath(const UObject* WorldContextObject, bool bEnableAttenuation, bool bOverrideLocally, FString _AttenuationAssetPath, APlayerState* PlayerToOverride);

	// Helpers function : If you want your user to be able bypass server replicated source effect , use this function on any voice chat Actor by using APlayerState
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetPlayerOverrideLocalSourceEffectPath(const UObject* WorldContextObject, bool bEnableSourceEffect, bool bOverrideLocally, FString _pathToSourceEffectAsset, APlayerState* PlayerToOverride);

	// Helpers function : If you want your user to be able to bypass server replicated Volume, use this function on any voice chat Actor by using APlayerState
	// <This is Discord style Volume adjustment>
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	void SetPlayerLocalVolumeMultiplier(const UObject* WorldContextObject, float MultiplierVolume, APlayerState* PlayerToOverride);

	// Helpers function : getter function to get bypassed Volume value
	// <This is Discord style Volume adjustment>
	UFUNCTION(BlueprintCallable, Category="OrionVoiceChat")
	float GetPlayerLocalVolumeMultiplier(const UObject* WorldContextObject, APlayerState* PlayerToOverride);
};
