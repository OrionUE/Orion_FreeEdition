// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionVoiceChatActor.h"

#ifdef ORIONVOICECHAT_OrionVoiceChatActor_generated_h
#error "OrionVoiceChatActor.generated.h already included, missing '#pragma once' in OrionVoiceChatActor.h"
#endif
#define ORIONVOICECHAT_OrionVoiceChatActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AOrionVoiceChatActor;
class APlayerState;
class UObject;
enum class EOrionOpusFramePerSec : uint8;

// ********** Begin Delegate FOnNewOrionVoiceChatActorDelegate *************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_34_DELEGATE \
ORIONVOICECHAT_API void FOnNewOrionVoiceChatActorDelegate_DelegateWrapper(const FScriptDelegate& OnNewOrionVoiceChatActorDelegate, const AOrionVoiceChatActor* VoiceChatActor);


// ********** End Delegate FOnNewOrionVoiceChatActorDelegate ***************************************

// ********** Begin Delegate FOnDeleteOrionVoiceChatActorDelegate **********************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_35_DELEGATE \
ORIONVOICECHAT_API void FOnDeleteOrionVoiceChatActorDelegate_DelegateWrapper(const FScriptDelegate& OnDeleteOrionVoiceChatActorDelegate, const AOrionVoiceChatActor* VoiceChatActor);


// ********** End Delegate FOnDeleteOrionVoiceChatActorDelegate ************************************

// ********** Begin Delegate FOnMyOrionVoiceChatActorReadyDelegate *********************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_37_DELEGATE \
ORIONVOICECHAT_API void FOnMyOrionVoiceChatActorReadyDelegate_DelegateWrapper(const FScriptDelegate& OnMyOrionVoiceChatActorReadyDelegate, const AOrionVoiceChatActor* VoiceChatActor);


// ********** End Delegate FOnMyOrionVoiceChatActorReadyDelegate ***********************************

// ********** Begin Delegate FPlayerNameReceived ***************************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_44_DELEGATE \
static void FPlayerNameReceived_DelegateWrapper(const FMulticastScriptDelegate& PlayerNameReceived, const FString& Name);


// ********** End Delegate FPlayerNameReceived *****************************************************

// ********** Begin Delegate FPlayerMicrophoneOnReceived *******************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_45_DELEGATE \
static void FPlayerMicrophoneOnReceived_DelegateWrapper(const FMulticastScriptDelegate& PlayerMicrophoneOnReceived, bool IsMicrophoneOn);


// ********** End Delegate FPlayerMicrophoneOnReceived *********************************************

// ********** Begin Class AOrionVoiceChatActor *****************************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCClientSetSourceChainEffectPath_Implementation(const FString& _SourceChainEffectAssetPath); \
	virtual void RPCClientSetAttenuationPath_Implementation(const FString& _attenuationPath); \
	virtual void RPCClientAskRemoveChannel_Implementation(int32 ChannelToRemove); \
	virtual void RPCClientAskAddChannel_Implementation(int32 ChannelToAdd); \
	virtual void RPCServerUpdatePosAudioComp_Implementation(FVector WorldPos, FRotator WorldRotation); \
	virtual void RPCClientSetMicrophoneVolume_Implementation(float Volume); \
	virtual void RPCClientSetIsMicrophoneOn_Implementation(bool _bIsMicrophoneOn); \
	virtual void RPCClientSetPlayerName_Implementation(const FString& Name); \
	DECLARE_FUNCTION(execIsMicrophoneComponentValid); \
	DECLARE_FUNCTION(execGetLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetOverrideLocalSourceEffectPath); \
	DECLARE_FUNCTION(execSetOverrideLocalAttenuationPath); \
	DECLARE_FUNCTION(execRPCClientSetSourceChainEffectPath); \
	DECLARE_FUNCTION(execRPCClientSetAttenuationPath); \
	DECLARE_FUNCTION(execRPCClientAskRemoveChannel); \
	DECLARE_FUNCTION(execRPCClientAskAddChannel); \
	DECLARE_FUNCTION(execRPCServerUpdatePosAudioComp); \
	DECLARE_FUNCTION(execRPCClientSetMicrophoneVolume); \
	DECLARE_FUNCTION(execRPCClientSetIsMicrophoneOn); \
	DECLARE_FUNCTION(execRPCClientSetPlayerName); \
	DECLARE_FUNCTION(execServerSetMaxProximityRange); \
	DECLARE_FUNCTION(execServerSetAllowUseProximity); \
	DECLARE_FUNCTION(execServerSetSourceChainEffect); \
	DECLARE_FUNCTION(execServerSetAttenuation); \
	DECLARE_FUNCTION(execServerRemoveChannel); \
	DECLARE_FUNCTION(execServerAddChannel); \
	DECLARE_FUNCTION(execServerSetAllowUseGlobal); \
	DECLARE_FUNCTION(execSetAudioMuted); \
	DECLARE_FUNCTION(execRepNotifyIsMicrophoneOn); \
	DECLARE_FUNCTION(execRepNotifyPlayerName); \
	DECLARE_FUNCTION(execRepNotifyVoiceVolume); \
	DECLARE_FUNCTION(execRepNotifySourceEffectAsset); \
	DECLARE_FUNCTION(execRepNotifyAttenuationAsset); \
	DECLARE_FUNCTION(execRepNotifyMicComp); \
	DECLARE_FUNCTION(execDelegateEndPlayOwner);


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_CALLBACK_WRAPPERS
ORIONVOICECHAT_API UClass* Z_Construct_UClass_AOrionVoiceChatActor_NoRegister();

#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrionVoiceChatActor(); \
	friend struct Z_Construct_UClass_AOrionVoiceChatActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONVOICECHAT_API UClass* Z_Construct_UClass_AOrionVoiceChatActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AOrionVoiceChatActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionVoiceChat"), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister) \
	DECLARE_SERIALIZER(AOrionVoiceChatActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MicrophoneSpeakComponent=NETFIELD_REP_START, \
		OwnerPlayerState, \
		VoiceChatId, \
		PlayerName, \
		bIsMicrophoneOn, \
		VoiceVolume, \
		SubscribedRadioChannels, \
		AttenuationAssetPath, \
		SourceChainEffectAssetPath, \
		NETFIELD_REP_END=SourceChainEffectAssetPath	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOrionVoiceChatActor(AOrionVoiceChatActor&&) = delete; \
	AOrionVoiceChatActor(const AOrionVoiceChatActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrionVoiceChatActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrionVoiceChatActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOrionVoiceChatActor) \
	NO_API virtual ~AOrionVoiceChatActor();


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_39_PROLOG
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOrionVoiceChatActor;

// ********** End Class AOrionVoiceChatActor *******************************************************

// ********** Begin Class UOrionVoiceChat **********************************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetPlayerLocalVolumeMultiplier); \
	DECLARE_FUNCTION(execSetPlayerOverrideLocalSourceEffectPath); \
	DECLARE_FUNCTION(execSetPlayerOverrideLocalAttenuationPath); \
	DECLARE_FUNCTION(execEnableShouldHearMyOwnVoice); \
	DECLARE_FUNCTION(execSetSourceChainEffectPath); \
	DECLARE_FUNCTION(execSetAttenuationPath); \
	DECLARE_FUNCTION(execUseAndroidCommunicationMode); \
	DECLARE_FUNCTION(execSetSendDataThreshold); \
	DECLARE_FUNCTION(execSetDefaultLocationUpdateTickRate); \
	DECLARE_FUNCTION(execSetMuteAllPlayers); \
	DECLARE_FUNCTION(execGetMuteAllPlayers); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execRegisterOnMyOrionVoiceChatActorReady); \
	DECLARE_FUNCTION(execRegisterOnDeleteOrionVoiceChatActor); \
	DECLARE_FUNCTION(execRegisterOnNewOrionVoiceChatActor); \
	DECLARE_FUNCTION(execGetMicrophoneRuntimeVolumeFromPlayerState); \
	DECLARE_FUNCTION(execGetActorFromPlayerState); \
	DECLARE_FUNCTION(execSetHardwareAudioInput); \
	DECLARE_FUNCTION(execGetAudioDevicesList); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execSetGlobalVolume); \
	DECLARE_FUNCTION(execSetRawMicrophoneGain); \
	DECLARE_FUNCTION(execHasMicrophonePermission); \
	DECLARE_FUNCTION(execAskMicrophonePermission); \
	DECLARE_FUNCTION(execRemoveChannel); \
	DECLARE_FUNCTION(execIsRegisteredToChannel); \
	DECLARE_FUNCTION(execAddChannel); \
	DECLARE_FUNCTION(execLocalIsPlayerMuted); \
	DECLARE_FUNCTION(execLocalMutePlayer); \
	DECLARE_FUNCTION(execSetMicrophoneVolume); \
	DECLARE_FUNCTION(execStopSpeak); \
	DECLARE_FUNCTION(execStartSpeakTeamArray); \
	DECLARE_FUNCTION(execStartSpeak); \
	DECLARE_FUNCTION(execWasAudioQualityInitialized); \
	DECLARE_FUNCTION(execInitializeAudioQuality); \
	DECLARE_FUNCTION(execIsMyOrionVoiceChatActorReady); \
	DECLARE_FUNCTION(execGetMyLocalOrionVoiceChatActor);


ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionVoiceChat_NoRegister();

#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionVoiceChat(); \
	friend struct Z_Construct_UClass_UOrionVoiceChat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionVoiceChat_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionVoiceChat, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionVoiceChat"), Z_Construct_UClass_UOrionVoiceChat_NoRegister) \
	DECLARE_SERIALIZER(UOrionVoiceChat)


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionVoiceChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionVoiceChat(UOrionVoiceChat&&) = delete; \
	UOrionVoiceChat(const UOrionVoiceChat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionVoiceChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionVoiceChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionVoiceChat) \
	NO_API virtual ~UOrionVoiceChat();


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_212_PROLOG
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionVoiceChat;

// ********** End Class UOrionVoiceChat ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h

// ********** Begin Enum EOrionOpusFramePerSec *****************************************************
#define FOREACH_ENUM_EORIONOPUSFRAMEPERSEC(op) \
	op(EOrionOpusFramePerSec::ORION_OPUS_FPS_400) \
	op(EOrionOpusFramePerSec::ORION_OPUS_FPS_200) \
	op(EOrionOpusFramePerSec::ORION_OPUS_FPS_100) \
	op(EOrionOpusFramePerSec::ORION_OPUS_FPS_50) \
	op(EOrionOpusFramePerSec::ORION_OPUS_FPS_25) 

enum class EOrionOpusFramePerSec : uint8;
template<> struct TIsUEnumClass<EOrionOpusFramePerSec> { enum { Value = true }; };
template<> ORIONVOICECHAT_API UEnum* StaticEnum<EOrionOpusFramePerSec>();
// ********** End Enum EOrionOpusFramePerSec *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
