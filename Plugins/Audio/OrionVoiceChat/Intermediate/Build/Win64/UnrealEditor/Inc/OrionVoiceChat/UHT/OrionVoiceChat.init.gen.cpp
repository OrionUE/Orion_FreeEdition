// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionVoiceChat_init() {}
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature();
	ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OrionVoiceChat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OrionVoiceChat()
	{
		if (!Z_Registration_Info_UPackage__Script_OrionVoiceChat.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OrionVoiceChat",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1452BD39,
				0xEE7D6063,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OrionVoiceChat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OrionVoiceChat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OrionVoiceChat(Z_Construct_UPackage__Script_OrionVoiceChat, TEXT("/Script/OrionVoiceChat"), Z_Registration_Info_UPackage__Script_OrionVoiceChat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1452BD39, 0xEE7D6063));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
