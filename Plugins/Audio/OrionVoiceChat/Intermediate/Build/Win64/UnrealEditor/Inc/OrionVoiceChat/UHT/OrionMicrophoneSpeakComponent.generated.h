// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionMicrophoneSpeakComponent.h"

#ifdef ORIONVOICECHAT_OrionMicrophoneSpeakComponent_generated_h
#error "OrionMicrophoneSpeakComponent.generated.h already included, missing '#pragma once' in OrionMicrophoneSpeakComponent.h"
#endif
#define ORIONVOICECHAT_OrionMicrophoneSpeakComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionMicrophoneSpeakComponent;

// ********** Begin Delegate FDataMicrophoneReceived ***********************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_32_DELEGATE \
static void FDataMicrophoneReceived_DelegateWrapper(const FMulticastScriptDelegate& DataMicrophoneReceived, TArray<uint8> const& data);


// ********** End Delegate FDataMicrophoneReceived *************************************************

// ********** Begin Delegate FMicrophoneVolumeReceived *********************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_33_DELEGATE \
static void FMicrophoneVolumeReceived_DelegateWrapper(const FMulticastScriptDelegate& MicrophoneVolumeReceived, float Volume);


// ********** End Delegate FMicrophoneVolumeReceived ***********************************************

// ********** Begin Class UOrionMicrophoneSpeakComponent *******************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCReceiveVoiceFromServer_Implementation(UOrionMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec); \
	virtual void RPCServerBroadcastVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec); \
	virtual void RPCClientTransmitVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec, bool _bIsGlobal, TArray<int32> const& _RadioChannel, bool _bUseRange, float _MaxRange); \
	DECLARE_FUNCTION(execGetLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetOverrideLocalSourceEffectPath); \
	DECLARE_FUNCTION(execSetOverrideLocalAttenuationPath); \
	DECLARE_FUNCTION(execSetSourceChainEffectAssetPath); \
	DECLARE_FUNCTION(execSetAttenuationAssetPath); \
	DECLARE_FUNCTION(execProcessReceivedVoiceData); \
	DECLARE_FUNCTION(execRPCReceiveVoiceFromServer); \
	DECLARE_FUNCTION(execRPCServerBroadcastVoiceData); \
	DECLARE_FUNCTION(execRPCClientTransmitVoiceData); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execSetAudioMuted); \
	DECLARE_FUNCTION(execStopSpeaking); \
	DECLARE_FUNCTION(execStartSpeaking); \
	DECLARE_FUNCTION(execInitializeAudioResources); \
	DECLARE_FUNCTION(execIsPlayingVoiceAudio);


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_CALLBACK_WRAPPERS
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister();

#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionMicrophoneSpeakComponent(); \
	friend struct Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionMicrophoneSpeakComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionVoiceChat"), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister) \
	DECLARE_SERIALIZER(UOrionMicrophoneSpeakComponent)


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionMicrophoneSpeakComponent(UOrionMicrophoneSpeakComponent&&) = delete; \
	UOrionMicrophoneSpeakComponent(const UOrionMicrophoneSpeakComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionMicrophoneSpeakComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionMicrophoneSpeakComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionMicrophoneSpeakComponent) \
	NO_API virtual ~UOrionMicrophoneSpeakComponent();


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_27_PROLOG
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionMicrophoneSpeakComponent;

// ********** End Class UOrionMicrophoneSpeakComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
