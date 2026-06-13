// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionMicrophoneSpeakComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionMicrophoneSpeakComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionVoiceChat();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDataMicrophoneReceived ***********************************************
struct Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics
{
	struct OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms
	{
		TArray<uint8> data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "DataMicrophoneReceived__DelegateSignature", Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOrionMicrophoneSpeakComponent::FDataMicrophoneReceived_DelegateWrapper(const FMulticastScriptDelegate& DataMicrophoneReceived, TArray<uint8> const& data)
{
	struct OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms
	{
		TArray<uint8> data;
	};
	OrionMicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms Parms;
	Parms.data=data;
	DataMicrophoneReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDataMicrophoneReceived *************************************************

// ********** Begin Delegate FMicrophoneVolumeReceived *********************************************
struct Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics
{
	struct OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "MicrophoneVolumeReceived__DelegateSignature", Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOrionMicrophoneSpeakComponent::FMicrophoneVolumeReceived_DelegateWrapper(const FMulticastScriptDelegate& MicrophoneVolumeReceived, float Volume)
{
	struct OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms
	{
		float Volume;
	};
	OrionMicrophoneSpeakComponent_eventMicrophoneVolumeReceived_Parms Parms;
	Parms.Volume=Volume;
	MicrophoneVolumeReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMicrophoneVolumeReceived ***********************************************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function GetLocalVolumeMultiplier *********
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics
{
	struct OrionMicrophoneSpeakComponent_eventGetLocalVolumeMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventGetLocalVolumeMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "GetLocalVolumeMultiplier", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::OrionMicrophoneSpeakComponent_eventGetLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::OrionMicrophoneSpeakComponent_eventGetLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execGetLocalVolumeMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLocalVolumeMultiplier();
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function GetLocalVolumeMultiplier ***********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function InitializeAudioResources *********
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics
{
	struct OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms
	{
		int32 InVoiceSampleRate;
		int32 InVoiceNumChannels;
		int32 InOpusFramesPerSec;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* create sound wave, audio component */" },
#endif
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create sound wave, audio component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InVoiceSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InOpusFramesPerSec;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InVoiceSampleRate = { "InVoiceSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms, InVoiceSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InVoiceNumChannels = { "InVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms, InVoiceNumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InOpusFramesPerSec = { "InOpusFramesPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms, InOpusFramesPerSec), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InVoiceSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_InOpusFramesPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "InitializeAudioResources", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::OrionMicrophoneSpeakComponent_eventInitializeAudioResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execInitializeAudioResources)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InVoiceSampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_InVoiceNumChannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_InOpusFramesPerSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeAudioResources(Z_Param_InVoiceSampleRate,Z_Param_InVoiceNumChannels,Z_Param_InOpusFramesPerSec);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function InitializeAudioResources ***********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function IsPlayingVoiceAudio **************
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics
{
	struct OrionMicrophoneSpeakComponent_eventIsPlayingVoiceAudio_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventIsPlayingVoiceAudio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventIsPlayingVoiceAudio_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "IsPlayingVoiceAudio", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::OrionMicrophoneSpeakComponent_eventIsPlayingVoiceAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::OrionMicrophoneSpeakComponent_eventIsPlayingVoiceAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execIsPlayingVoiceAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingVoiceAudio();
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function IsPlayingVoiceAudio ****************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function ProcessReceivedVoiceData *********
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics
{
	struct OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms
	{
		TArray<uint8> dataEncoded;
		int32 sampleRate;
		int32 numchannels;
		int32 PCMSize;
		int32 OpusFramePerSec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dataEncoded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_dataEncoded_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_dataEncoded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numchannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PCMSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpusFramePerSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_dataEncoded_Inner = { "dataEncoded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_dataEncoded = { "dataEncoded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms, dataEncoded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dataEncoded_MetaData), NewProp_dataEncoded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms, sampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms, numchannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms, PCMSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_OpusFramePerSec = { "OpusFramePerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms, OpusFramePerSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_dataEncoded_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_dataEncoded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_sampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_numchannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_PCMSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::NewProp_OpusFramePerSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "ProcessReceivedVoiceData", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::OrionMicrophoneSpeakComponent_eventProcessReceivedVoiceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execProcessReceivedVoiceData)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_dataEncoded);
	P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpusFramePerSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessReceivedVoiceData(Z_Param_Out_dataEncoded,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize,Z_Param_OpusFramePerSec);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function ProcessReceivedVoiceData ***********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function RPCClientTransmitVoiceData *******
struct OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms
{
	TArray<uint8> data;
	int32 sampleRate;
	int32 numchannels;
	int32 PCMSize;
	int32 OpusFramePerSec;
	bool _bIsGlobal;
	TArray<int32> _RadioChannel;
	bool _bUseRange;
	float _MaxRange;
};
static FName NAME_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData = FName(TEXT("RPCClientTransmitVoiceData"));
void UOrionMicrophoneSpeakComponent::RPCClientTransmitVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec, bool _bIsGlobal, TArray<int32> const& _RadioChannel, bool _bUseRange, float _MaxRange)
{
	OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms Parms;
	Parms.data=data;
	Parms.sampleRate=sampleRate;
	Parms.numchannels=numchannels;
	Parms.PCMSize=PCMSize;
	Parms.OpusFramePerSec=OpusFramePerSec;
	Parms._bIsGlobal=_bIsGlobal ? true : false;
	Parms._RadioChannel=_RadioChannel;
	Parms._bUseRange=_bUseRange ? true : false;
	Parms._MaxRange=_MaxRange;
	UFunction* Func = FindFunctionChecked(NAME_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client transmit voice\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client transmit voice" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__RadioChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numchannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PCMSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpusFramePerSec;
	static void NewProp__bIsGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bIsGlobal;
	static const UECodeGen_Private::FIntPropertyParams NewProp__RadioChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__RadioChannel;
	static void NewProp__bUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bUseRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, sampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, numchannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, PCMSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_OpusFramePerSec = { "OpusFramePerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, OpusFramePerSec), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bIsGlobal_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms*)Obj)->_bIsGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bIsGlobal = { "_bIsGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bIsGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__RadioChannel_Inner = { "_RadioChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__RadioChannel = { "_RadioChannel", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, _RadioChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__RadioChannel_MetaData), NewProp__RadioChannel_MetaData) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bUseRange_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms*)Obj)->_bUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bUseRange = { "_bUseRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bUseRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__MaxRange = { "_MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, _MaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_sampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_numchannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_PCMSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_OpusFramePerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bIsGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__RadioChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__RadioChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__bUseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "RPCClientTransmitVoiceData", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers), sizeof(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionMicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execRPCClientTransmitVoiceData)
{
	P_GET_TARRAY(uint8,Z_Param_data);
	P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpusFramePerSec);
	P_GET_UBOOL(Z_Param__bIsGlobal);
	P_GET_TARRAY(int32,Z_Param__RadioChannel);
	P_GET_UBOOL(Z_Param__bUseRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param__MaxRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientTransmitVoiceData_Implementation(Z_Param_data,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize,Z_Param_OpusFramePerSec,Z_Param__bIsGlobal,Z_Param__RadioChannel,Z_Param__bUseRange,Z_Param__MaxRange);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function RPCClientTransmitVoiceData *********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function RPCReceiveVoiceFromServer ********
struct OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms
{
	UOrionMicrophoneSpeakComponent* compToOutputVoice;
	TArray<uint8> dataEncoded;
	int32 sampleRate;
	int32 numchannels;
	int32 PCMSize;
	int32 OpusFramePerSec;
};
static FName NAME_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer = FName(TEXT("RPCReceiveVoiceFromServer"));
void UOrionMicrophoneSpeakComponent::RPCReceiveVoiceFromServer(UOrionMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec)
{
	OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms Parms;
	Parms.compToOutputVoice=compToOutputVoice;
	Parms.dataEncoded=dataEncoded;
	Parms.sampleRate=sampleRate;
	Parms.numchannels=numchannels;
	Parms.PCMSize=PCMSize;
	Parms.OpusFramePerSec=OpusFramePerSec;
	UFunction* Func = FindFunctionChecked(NAME_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// server send voice to relevant client\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "server send voice to relevant client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_compToOutputVoice_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dataEncoded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_compToOutputVoice;
	static const UECodeGen_Private::FBytePropertyParams NewProp_dataEncoded_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_dataEncoded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numchannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PCMSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpusFramePerSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice = { "compToOutputVoice", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, compToOutputVoice), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_compToOutputVoice_MetaData), NewProp_compToOutputVoice_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_Inner = { "dataEncoded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded = { "dataEncoded", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, dataEncoded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dataEncoded_MetaData), NewProp_dataEncoded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, sampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, numchannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, PCMSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_OpusFramePerSec = { "OpusFramePerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, OpusFramePerSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_sampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_numchannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_PCMSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_OpusFramePerSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "RPCReceiveVoiceFromServer", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers), sizeof(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionMicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execRPCReceiveVoiceFromServer)
{
	P_GET_OBJECT(UOrionMicrophoneSpeakComponent,Z_Param_compToOutputVoice);
	P_GET_TARRAY(uint8,Z_Param_dataEncoded);
	P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpusFramePerSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCReceiveVoiceFromServer_Implementation(Z_Param_compToOutputVoice,Z_Param_dataEncoded,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize,Z_Param_OpusFramePerSec);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function RPCReceiveVoiceFromServer **********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function RPCServerBroadcastVoiceData ******
struct OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms
{
	TArray<uint8> data;
	int32 sampleRate;
	int32 numchannels;
	int32 PCMSize;
	int32 OpusFramePerSec;
};
static FName NAME_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData = FName(TEXT("RPCServerBroadcastVoiceData"));
void UOrionMicrophoneSpeakComponent::RPCServerBroadcastVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, int32 OpusFramePerSec)
{
	OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms Parms;
	Parms.data=data;
	Parms.sampleRate=sampleRate;
	Parms.numchannels=numchannels;
	Parms.PCMSize=PCMSize;
	Parms.OpusFramePerSec=OpusFramePerSec;
	UFunction* Func = FindFunctionChecked(NAME_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numchannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PCMSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpusFramePerSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, sampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, numchannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, PCMSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_OpusFramePerSec = { "OpusFramePerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, OpusFramePerSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_sampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_numchannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_PCMSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_OpusFramePerSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "RPCServerBroadcastVoiceData", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers), sizeof(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionMicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execRPCServerBroadcastVoiceData)
{
	P_GET_TARRAY(uint8,Z_Param_data);
	P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpusFramePerSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCServerBroadcastVoiceData_Implementation(Z_Param_data,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize,Z_Param_OpusFramePerSec);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function RPCServerBroadcastVoiceData ********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetAttenuationAssetPath **********
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms
	{
		bool bEnableAttenuation;
		FString _AttenuationAssetPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAttenuation;
	static const UECodeGen_Private::FStrPropertyParams NewProp__AttenuationAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp__AttenuationAssetPath = { "_AttenuationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms, _AttenuationAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::NewProp__AttenuationAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetAttenuationAssetPath", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::OrionMicrophoneSpeakComponent_eventSetAttenuationAssetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetAttenuationAssetPath)
{
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_PROPERTY(FStrProperty,Z_Param__AttenuationAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttenuationAssetPath(Z_Param_bEnableAttenuation,Z_Param__AttenuationAssetPath);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetAttenuationAssetPath ************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetAudioMuted ********************
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetAudioMuted_Parms
	{
		bool bMuted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMuted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::NewProp_bMuted_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetAudioMuted_Parms*)Obj)->bMuted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::NewProp_bMuted = { "bMuted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetAudioMuted_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::NewProp_bMuted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::NewProp_bMuted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetAudioMuted", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::OrionMicrophoneSpeakComponent_eventSetAudioMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::OrionMicrophoneSpeakComponent_eventSetAudioMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetAudioMuted)
{
	P_GET_UBOOL(Z_Param_bMuted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioMuted(Z_Param_bMuted);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetAudioMuted **********************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetLocalVolumeMultiplier *********
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetLocalVolumeMultiplier_Parms
	{
		float MultiplierVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume = { "MultiplierVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetLocalVolumeMultiplier_Parms, MultiplierVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetLocalVolumeMultiplier", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::OrionMicrophoneSpeakComponent_eventSetLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::OrionMicrophoneSpeakComponent_eventSetLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetLocalVolumeMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplierVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocalVolumeMultiplier(Z_Param_MultiplierVolume);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetLocalVolumeMultiplier ***********

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetOverrideLocalAttenuationPath **
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms
	{
		bool bEnableAttenuation;
		bool bOverrideLocally;
		FString _AttenuationAssetPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAttenuation;
	static void NewProp_bOverrideLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocally;
	static const UECodeGen_Private::FStrPropertyParams NewProp__AttenuationAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath = { "_AttenuationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms, _AttenuationAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetOverrideLocalAttenuationPath", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::OrionMicrophoneSpeakComponent_eventSetOverrideLocalAttenuationPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetOverrideLocalAttenuationPath)
{
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__AttenuationAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideLocalAttenuationPath(Z_Param_bEnableAttenuation,Z_Param_bOverrideLocally,Z_Param__AttenuationAssetPath);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetOverrideLocalAttenuationPath ****

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetOverrideLocalSourceEffectPath *
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms
	{
		bool bEnableSourceEffect;
		bool bOverrideLocally;
		FString _pathToSourceEffectAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSourceEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceEffect;
	static void NewProp_bOverrideLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocally;
	static const UECodeGen_Private::FStrPropertyParams NewProp__pathToSourceEffectAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms*)Obj)->bEnableSourceEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect = { "bEnableSourceEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset = { "_pathToSourceEffectAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms, _pathToSourceEffectAsset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetOverrideLocalSourceEffectPath", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::OrionMicrophoneSpeakComponent_eventSetOverrideLocalSourceEffectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetOverrideLocalSourceEffectPath)
{
	P_GET_UBOOL(Z_Param_bEnableSourceEffect);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__pathToSourceEffectAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideLocalSourceEffectPath(Z_Param_bEnableSourceEffect,Z_Param_bOverrideLocally,Z_Param__pathToSourceEffectAsset);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetOverrideLocalSourceEffectPath ***

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetSourceChainEffectAssetPath ****
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms
	{
		bool bEnableSourceChainEffect;
		FString _SourceChainEffectPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSourceChainEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceChainEffect;
	static const UECodeGen_Private::FStrPropertyParams NewProp__SourceChainEffectPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp_bEnableSourceChainEffect_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms*)Obj)->bEnableSourceChainEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp_bEnableSourceChainEffect = { "bEnableSourceChainEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp_bEnableSourceChainEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp__SourceChainEffectPath = { "_SourceChainEffectPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms, _SourceChainEffectPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp_bEnableSourceChainEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::NewProp__SourceChainEffectPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetSourceChainEffectAssetPath", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::OrionMicrophoneSpeakComponent_eventSetSourceChainEffectAssetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetSourceChainEffectAssetPath)
{
	P_GET_UBOOL(Z_Param_bEnableSourceChainEffect);
	P_GET_PROPERTY(FStrProperty,Z_Param__SourceChainEffectPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceChainEffectAssetPath(Z_Param_bEnableSourceChainEffect,Z_Param__SourceChainEffectPath);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetSourceChainEffectAssetPath ******

// ********** Begin Class UOrionMicrophoneSpeakComponent Function SetVoiceVolume *******************
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics
{
	struct OrionMicrophoneSpeakComponent_eventSetVoiceVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventSetVoiceVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "SetVoiceVolume", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::OrionMicrophoneSpeakComponent_eventSetVoiceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::OrionMicrophoneSpeakComponent_eventSetVoiceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execSetVoiceVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoiceVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function SetVoiceVolume *********************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function StartSpeaking ********************
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics
{
	struct OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms
	{
		bool bShouldHearMyOwnVoice;
		bool bIsGlobal;
		TArray<int32> RadioChannel;
		bool bUseRange;
		float MaxRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHearMyOwnVoice;
	static void NewProp_bIsGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RadioChannel;
	static void NewProp_bUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms*)Obj)->bShouldHearMyOwnVoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bShouldHearMyOwnVoice = { "bShouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bShouldHearMyOwnVoice_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bIsGlobal_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms*)Obj)->bIsGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bIsGlobal = { "bIsGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bIsGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_RadioChannel_Inner = { "RadioChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_RadioChannel = { "RadioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms, RadioChannel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bUseRange_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms*)Obj)->bUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bUseRange = { "bUseRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bUseRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms, MaxRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms), &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bShouldHearMyOwnVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bIsGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_RadioChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_RadioChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_bUseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "StartSpeaking", Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::OrionMicrophoneSpeakComponent_eventStartSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execStartSpeaking)
{
	P_GET_UBOOL(Z_Param_bShouldHearMyOwnVoice);
	P_GET_UBOOL(Z_Param_bIsGlobal);
	P_GET_TARRAY(int32,Z_Param_RadioChannel);
	P_GET_UBOOL(Z_Param_bUseRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartSpeaking(Z_Param_bShouldHearMyOwnVoice,Z_Param_bIsGlobal,Z_Param_RadioChannel,Z_Param_bUseRange,Z_Param_MaxRange);
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function StartSpeaking **********************

// ********** Begin Class UOrionMicrophoneSpeakComponent Function StopSpeaking *********************
struct Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMicrophoneSpeakComponent, nullptr, "StopSpeaking", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMicrophoneSpeakComponent::execStopSpeaking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSpeaking();
	P_NATIVE_END;
}
// ********** End Class UOrionMicrophoneSpeakComponent Function StopSpeaking ***********************

// ********** Begin Class UOrionMicrophoneSpeakComponent *******************************************
void UOrionMicrophoneSpeakComponent::StaticRegisterNativesUOrionMicrophoneSpeakComponent()
{
	UClass* Class = UOrionMicrophoneSpeakComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalVolumeMultiplier", &UOrionMicrophoneSpeakComponent::execGetLocalVolumeMultiplier },
		{ "InitializeAudioResources", &UOrionMicrophoneSpeakComponent::execInitializeAudioResources },
		{ "IsPlayingVoiceAudio", &UOrionMicrophoneSpeakComponent::execIsPlayingVoiceAudio },
		{ "ProcessReceivedVoiceData", &UOrionMicrophoneSpeakComponent::execProcessReceivedVoiceData },
		{ "RPCClientTransmitVoiceData", &UOrionMicrophoneSpeakComponent::execRPCClientTransmitVoiceData },
		{ "RPCReceiveVoiceFromServer", &UOrionMicrophoneSpeakComponent::execRPCReceiveVoiceFromServer },
		{ "RPCServerBroadcastVoiceData", &UOrionMicrophoneSpeakComponent::execRPCServerBroadcastVoiceData },
		{ "SetAttenuationAssetPath", &UOrionMicrophoneSpeakComponent::execSetAttenuationAssetPath },
		{ "SetAudioMuted", &UOrionMicrophoneSpeakComponent::execSetAudioMuted },
		{ "SetLocalVolumeMultiplier", &UOrionMicrophoneSpeakComponent::execSetLocalVolumeMultiplier },
		{ "SetOverrideLocalAttenuationPath", &UOrionMicrophoneSpeakComponent::execSetOverrideLocalAttenuationPath },
		{ "SetOverrideLocalSourceEffectPath", &UOrionMicrophoneSpeakComponent::execSetOverrideLocalSourceEffectPath },
		{ "SetSourceChainEffectAssetPath", &UOrionMicrophoneSpeakComponent::execSetSourceChainEffectAssetPath },
		{ "SetVoiceVolume", &UOrionMicrophoneSpeakComponent::execSetVoiceVolume },
		{ "StartSpeaking", &UOrionMicrophoneSpeakComponent::execStartSpeaking },
		{ "StopSpeaking", &UOrionMicrophoneSpeakComponent::execStopSpeaking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent;
UClass* UOrionMicrophoneSpeakComponent::GetPrivateStaticClass()
{
	using TClass = UOrionMicrophoneSpeakComponent;
	if (!Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionMicrophoneSpeakComponent"),
			Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.InnerSingleton,
			StaticRegisterNativesUOrionMicrophoneSpeakComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister()
{
	return UOrionMicrophoneSpeakComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OrionMicrophoneSpeakComponent.h" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDataMicrophoneReceived_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMicrophoneVolumeReceived_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestVolume_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// get runtime microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get runtime microphone Volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceAudioComponent_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWaveProcedural_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionMicrophoneSpeakComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataMicrophoneReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMicrophoneVolumeReceived;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LatestVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWaveProcedural;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature, "DataMicrophoneReceived__DelegateSignature" }, // 1315526343
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_GetLocalVolumeMultiplier, "GetLocalVolumeMultiplier" }, // 536389544
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_InitializeAudioResources, "InitializeAudioResources" }, // 1917401753
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_IsPlayingVoiceAudio, "IsPlayingVoiceAudio" }, // 3628090137
		{ &Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature, "MicrophoneVolumeReceived__DelegateSignature" }, // 153173254
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_ProcessReceivedVoiceData, "ProcessReceivedVoiceData" }, // 242995343
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCClientTransmitVoiceData, "RPCClientTransmitVoiceData" }, // 194375798
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCReceiveVoiceFromServer, "RPCReceiveVoiceFromServer" }, // 4275310151
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_RPCServerBroadcastVoiceData, "RPCServerBroadcastVoiceData" }, // 2694702554
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAttenuationAssetPath, "SetAttenuationAssetPath" }, // 410428094
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetAudioMuted, "SetAudioMuted" }, // 2189797969
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetLocalVolumeMultiplier, "SetLocalVolumeMultiplier" }, // 1859775511
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalAttenuationPath, "SetOverrideLocalAttenuationPath" }, // 1481209060
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetOverrideLocalSourceEffectPath, "SetOverrideLocalSourceEffectPath" }, // 856528709
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetSourceChainEffectAssetPath, "SetSourceChainEffectAssetPath" }, // 2474418341
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_SetVoiceVolume, "SetVoiceVolume" }, // 345312098
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StartSpeaking, "StartSpeaking" }, // 257656060
		{ &Z_Construct_UFunction_UOrionMicrophoneSpeakComponent_StopSpeaking, "StopSpeaking" }, // 2145860202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMicrophoneSpeakComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived = { "OnDataMicrophoneReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMicrophoneSpeakComponent, OnDataMicrophoneReceived), Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDataMicrophoneReceived_MetaData), NewProp_OnDataMicrophoneReceived_MetaData) }; // 1315526343
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_OnMicrophoneVolumeReceived = { "OnMicrophoneVolumeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMicrophoneSpeakComponent, OnMicrophoneVolumeReceived), Z_Construct_UDelegateFunction_UOrionMicrophoneSpeakComponent_MicrophoneVolumeReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMicrophoneVolumeReceived_MetaData), NewProp_OnMicrophoneVolumeReceived_MetaData) }; // 153173254
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_LatestVolume = { "LatestVolume", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMicrophoneSpeakComponent, LatestVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestVolume_MetaData), NewProp_LatestVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_VoiceAudioComponent = { "VoiceAudioComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMicrophoneSpeakComponent, VoiceAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceAudioComponent_MetaData), NewProp_VoiceAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_VoiceSoundWaveProcedural = { "VoiceSoundWaveProcedural", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMicrophoneSpeakComponent, VoiceSoundWaveProcedural), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSoundWaveProcedural_MetaData), NewProp_VoiceSoundWaveProcedural_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_OnMicrophoneVolumeReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_LatestVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_VoiceAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::NewProp_VoiceSoundWaveProcedural,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionVoiceChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::ClassParams = {
	&UOrionMicrophoneSpeakComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent()
{
	if (!Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.OuterSingleton, Z_Construct_UClass_UOrionMicrophoneSpeakComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionMicrophoneSpeakComponent);
UOrionMicrophoneSpeakComponent::~UOrionMicrophoneSpeakComponent() {}
// ********** End Class UOrionMicrophoneSpeakComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h__Script_OrionVoiceChat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMicrophoneSpeakComponent, UOrionMicrophoneSpeakComponent::StaticClass, TEXT("UOrionMicrophoneSpeakComponent"), &Z_Registration_Info_UClass_UOrionMicrophoneSpeakComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMicrophoneSpeakComponent), 135891592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h__Script_OrionVoiceChat_349515773(TEXT("/Script/OrionVoiceChat"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h__Script_OrionVoiceChat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionMicrophoneSpeakComponent_h__Script_OrionVoiceChat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
