// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionVoiceChatActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionVoiceChatActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_AOrionVoiceChatActor();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_AOrionVoiceChatActor_NoRegister();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionVoiceChat();
ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionVoiceChat_NoRegister();
ORIONVOICECHAT_API UEnum* Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature();
ORIONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionVoiceChat();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOrionOpusFramePerSec *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionOpusFramePerSec;
static UEnum* EOrionOpusFramePerSec_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionOpusFramePerSec.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionOpusFramePerSec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec, (UObject*)Z_Construct_UPackage__Script_OrionVoiceChat(), TEXT("EOrionOpusFramePerSec"));
	}
	return Z_Registration_Info_UEnum_EOrionOpusFramePerSec.OuterSingleton;
}
template<> ORIONVOICECHAT_API UEnum* StaticEnum<EOrionOpusFramePerSec>()
{
	return EOrionOpusFramePerSec_StaticEnum();
}
struct Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// frames allowed 400 200 100 50 25\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
		{ "ORION_OPUS_FPS_100.DisplayName", "ORION_OPUS_FPS_100" },
		{ "ORION_OPUS_FPS_100.Name", "EOrionOpusFramePerSec::ORION_OPUS_FPS_100" },
		{ "ORION_OPUS_FPS_200.DisplayName", "ORION_OPUS_FPS_200" },
		{ "ORION_OPUS_FPS_200.Name", "EOrionOpusFramePerSec::ORION_OPUS_FPS_200" },
		{ "ORION_OPUS_FPS_25.DisplayName", "ORION_OPUS_FPS_25" },
		{ "ORION_OPUS_FPS_25.Name", "EOrionOpusFramePerSec::ORION_OPUS_FPS_25" },
		{ "ORION_OPUS_FPS_400.DisplayName", "ORION_OPUS_FPS_400" },
		{ "ORION_OPUS_FPS_400.Name", "EOrionOpusFramePerSec::ORION_OPUS_FPS_400" },
		{ "ORION_OPUS_FPS_50.DisplayName", "ORION_OPUS_FPS_50" },
		{ "ORION_OPUS_FPS_50.Name", "EOrionOpusFramePerSec::ORION_OPUS_FPS_50" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "frames allowed 400 200 100 50 25" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionOpusFramePerSec::ORION_OPUS_FPS_400", (int64)EOrionOpusFramePerSec::ORION_OPUS_FPS_400 },
		{ "EOrionOpusFramePerSec::ORION_OPUS_FPS_200", (int64)EOrionOpusFramePerSec::ORION_OPUS_FPS_200 },
		{ "EOrionOpusFramePerSec::ORION_OPUS_FPS_100", (int64)EOrionOpusFramePerSec::ORION_OPUS_FPS_100 },
		{ "EOrionOpusFramePerSec::ORION_OPUS_FPS_50", (int64)EOrionOpusFramePerSec::ORION_OPUS_FPS_50 },
		{ "EOrionOpusFramePerSec::ORION_OPUS_FPS_25", (int64)EOrionOpusFramePerSec::ORION_OPUS_FPS_25 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionVoiceChat,
	nullptr,
	"EOrionOpusFramePerSec",
	"EOrionOpusFramePerSec",
	Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec()
{
	if (!Z_Registration_Info_UEnum_EOrionOpusFramePerSec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionOpusFramePerSec.InnerSingleton, Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionOpusFramePerSec.InnerSingleton;
}
// ********** End Enum EOrionOpusFramePerSec *******************************************************

// ********** Begin Delegate FOnNewOrionVoiceChatActorDelegate *************************************
struct Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics
{
	struct _Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global delegates for monitoring Voice Chat Actors creation / deletion\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global delegates for monitoring Voice Chat Actors creation / deletion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceChatActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor = { "VoiceChatActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms, VoiceChatActor), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatActor_MetaData), NewProp_VoiceChatActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionVoiceChat, nullptr, "OnNewOrionVoiceChatActorDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewOrionVoiceChatActorDelegate_DelegateWrapper(const FScriptDelegate& OnNewOrionVoiceChatActorDelegate, const AOrionVoiceChatActor* VoiceChatActor)
{
	struct _Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
	_Script_OrionVoiceChat_eventOnNewOrionVoiceChatActorDelegate_Parms Parms;
	Parms.VoiceChatActor=VoiceChatActor;
	OnNewOrionVoiceChatActorDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnNewOrionVoiceChatActorDelegate ***************************************

// ********** Begin Delegate FOnDeleteOrionVoiceChatActorDelegate **********************************
struct Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics
{
	struct _Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceChatActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor = { "VoiceChatActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms, VoiceChatActor), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatActor_MetaData), NewProp_VoiceChatActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionVoiceChat, nullptr, "OnDeleteOrionVoiceChatActorDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeleteOrionVoiceChatActorDelegate_DelegateWrapper(const FScriptDelegate& OnDeleteOrionVoiceChatActorDelegate, const AOrionVoiceChatActor* VoiceChatActor)
{
	struct _Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
	_Script_OrionVoiceChat_eventOnDeleteOrionVoiceChatActorDelegate_Parms Parms;
	Parms.VoiceChatActor=VoiceChatActor;
	OnDeleteOrionVoiceChatActorDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeleteOrionVoiceChatActorDelegate ************************************

// ********** Begin Delegate FOnMyOrionVoiceChatActorReadyDelegate *********************************
struct Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics
{
	struct _Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global delegates for monitoring local plalyer Voice Chat Actor creation\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global delegates for monitoring local plalyer Voice Chat Actor creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceChatActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor = { "VoiceChatActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms, VoiceChatActor), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatActor_MetaData), NewProp_VoiceChatActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::NewProp_VoiceChatActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionVoiceChat, nullptr, "OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::_Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMyOrionVoiceChatActorReadyDelegate_DelegateWrapper(const FScriptDelegate& OnMyOrionVoiceChatActorReadyDelegate, const AOrionVoiceChatActor* VoiceChatActor)
{
	struct _Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms
	{
		const AOrionVoiceChatActor* VoiceChatActor;
	};
	_Script_OrionVoiceChat_eventOnMyOrionVoiceChatActorReadyDelegate_Parms Parms;
	Parms.VoiceChatActor=VoiceChatActor;
	OnMyOrionVoiceChatActorReadyDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMyOrionVoiceChatActorReadyDelegate ***********************************

// ********** Begin Delegate FPlayerNameReceived ***************************************************
struct Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics
{
	struct OrionVoiceChatActor_eventPlayerNameReceived_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventPlayerNameReceived_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "PlayerNameReceived__DelegateSignature", Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::OrionVoiceChatActor_eventPlayerNameReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::OrionVoiceChatActor_eventPlayerNameReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AOrionVoiceChatActor::FPlayerNameReceived_DelegateWrapper(const FMulticastScriptDelegate& PlayerNameReceived, const FString& Name)
{
	struct OrionVoiceChatActor_eventPlayerNameReceived_Parms
	{
		FString Name;
	};
	OrionVoiceChatActor_eventPlayerNameReceived_Parms Parms;
	Parms.Name=Name;
	PlayerNameReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPlayerNameReceived *****************************************************

// ********** Begin Delegate FPlayerMicrophoneOnReceived *******************************************
struct Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics
{
	struct OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms
	{
		bool IsMicrophoneOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsMicrophoneOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMicrophoneOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::NewProp_IsMicrophoneOn_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms*)Obj)->IsMicrophoneOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::NewProp_IsMicrophoneOn = { "IsMicrophoneOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms), &Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::NewProp_IsMicrophoneOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::NewProp_IsMicrophoneOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "PlayerMicrophoneOnReceived__DelegateSignature", Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AOrionVoiceChatActor::FPlayerMicrophoneOnReceived_DelegateWrapper(const FMulticastScriptDelegate& PlayerMicrophoneOnReceived, bool IsMicrophoneOn)
{
	struct OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms
	{
		bool IsMicrophoneOn;
	};
	OrionVoiceChatActor_eventPlayerMicrophoneOnReceived_Parms Parms;
	Parms.IsMicrophoneOn=IsMicrophoneOn ? true : false;
	PlayerMicrophoneOnReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPlayerMicrophoneOnReceived *********************************************

// ********** Begin Class AOrionVoiceChatActor Function DelegateEndPlayOwner ***********************
struct Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics
{
	struct OrionVoiceChatActor_eventDelegateEndPlayOwner_Parms
	{
		AActor* Actor;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* delegate to clean up this Actor*/" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "delegate to clean up this Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventDelegateEndPlayOwner_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventDelegateEndPlayOwner_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "DelegateEndPlayOwner", Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::OrionVoiceChatActor_eventDelegateEndPlayOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::OrionVoiceChatActor_eventDelegateEndPlayOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execDelegateEndPlayOwner)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelegateEndPlayOwner(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function DelegateEndPlayOwner *************************

// ********** Begin Class AOrionVoiceChatActor Function GetLocalVolumeMultiplier *******************
struct Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics
{
	struct OrionVoiceChatActor_eventGetLocalVolumeMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventGetLocalVolumeMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "GetLocalVolumeMultiplier", Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::OrionVoiceChatActor_eventGetLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::OrionVoiceChatActor_eventGetLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execGetLocalVolumeMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLocalVolumeMultiplier();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function GetLocalVolumeMultiplier *********************

// ********** Begin Class AOrionVoiceChatActor Function IsMicrophoneComponentValid *****************
struct Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics
{
	struct OrionVoiceChatActor_eventIsMicrophoneComponentValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventIsMicrophoneComponentValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventIsMicrophoneComponentValid_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "IsMicrophoneComponentValid", Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::OrionVoiceChatActor_eventIsMicrophoneComponentValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::OrionVoiceChatActor_eventIsMicrophoneComponentValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execIsMicrophoneComponentValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMicrophoneComponentValid();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function IsMicrophoneComponentValid *******************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifyAttenuationAsset ******************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifyAttenuationAsset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifyAttenuationAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifyAttenuationAsset();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifyAttenuationAsset ********************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifyIsMicrophoneOn ********************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifyIsMicrophoneOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifyIsMicrophoneOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifyIsMicrophoneOn();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifyIsMicrophoneOn **********************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifyMicComp ***************************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifyMicComp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifyMicComp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifyMicComp();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifyMicComp *****************************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifyPlayerName ************************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifyPlayerName", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifyPlayerName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifyPlayerName();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifyPlayerName **************************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifySourceEffectAsset *****************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifySourceEffectAsset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifySourceEffectAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifySourceEffectAsset();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifySourceEffectAsset *******************

// ********** Begin Class AOrionVoiceChatActor Function RepNotifyVoiceVolume ***********************
struct Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RepNotifyVoiceVolume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRepNotifyVoiceVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotifyVoiceVolume();
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RepNotifyVoiceVolume *************************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientAskAddChannel *********************
struct OrionVoiceChatActor_eventRPCClientAskAddChannel_Parms
{
	int32 ChannelToAdd;
};
static FName NAME_AOrionVoiceChatActor_RPCClientAskAddChannel = FName(TEXT("RPCClientAskAddChannel"));
void AOrionVoiceChatActor::RPCClientAskAddChannel(int32 ChannelToAdd)
{
	OrionVoiceChatActor_eventRPCClientAskAddChannel_Parms Parms;
	Parms.ChannelToAdd=ChannelToAdd;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientAskAddChannel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client ask radio/team channel add\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client ask radio/team channel add" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_ChannelToAdd = { "ChannelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientAskAddChannel_Parms, ChannelToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_ChannelToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientAskAddChannel", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientAskAddChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientAskAddChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientAskAddChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientAskAddChannel_Implementation(Z_Param_ChannelToAdd);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientAskAddChannel ***********************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientAskRemoveChannel ******************
struct OrionVoiceChatActor_eventRPCClientAskRemoveChannel_Parms
{
	int32 ChannelToRemove;
};
static FName NAME_AOrionVoiceChatActor_RPCClientAskRemoveChannel = FName(TEXT("RPCClientAskRemoveChannel"));
void AOrionVoiceChatActor::RPCClientAskRemoveChannel(int32 ChannelToRemove)
{
	OrionVoiceChatActor_eventRPCClientAskRemoveChannel_Parms Parms;
	Parms.ChannelToRemove=ChannelToRemove;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientAskRemoveChannel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client ask radio/team channel remove\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client ask radio/team channel remove" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_ChannelToRemove = { "ChannelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientAskRemoveChannel_Parms, ChannelToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_ChannelToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientAskRemoveChannel", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientAskRemoveChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientAskRemoveChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientAskRemoveChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientAskRemoveChannel_Implementation(Z_Param_ChannelToRemove);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientAskRemoveChannel ********************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientSetAttenuationPath ****************
struct OrionVoiceChatActor_eventRPCClientSetAttenuationPath_Parms
{
	FString _attenuationPath;
};
static FName NAME_AOrionVoiceChatActor_RPCClientSetAttenuationPath = FName(TEXT("RPCClientSetAttenuationPath"));
void AOrionVoiceChatActor::RPCClientSetAttenuationPath(const FString& _attenuationPath)
{
	OrionVoiceChatActor_eventRPCClientSetAttenuationPath_Parms Parms;
	Parms._attenuationPath=_attenuationPath;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientSetAttenuationPath);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client attenuation path\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client attenuation path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attenuationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__attenuationPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::NewProp__attenuationPath = { "_attenuationPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientSetAttenuationPath_Parms, _attenuationPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attenuationPath_MetaData), NewProp__attenuationPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::NewProp__attenuationPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientSetAttenuationPath", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientSetAttenuationPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientSetAttenuationPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientSetAttenuationPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__attenuationPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientSetAttenuationPath_Implementation(Z_Param__attenuationPath);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientSetAttenuationPath ******************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientSetIsMicrophoneOn *****************
struct OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms
{
	bool _bIsMicrophoneOn;
};
static FName NAME_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn = FName(TEXT("RPCClientSetIsMicrophoneOn"));
void AOrionVoiceChatActor::RPCClientSetIsMicrophoneOn(bool _bIsMicrophoneOn)
{
	OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms Parms;
	Parms._bIsMicrophoneOn=_bIsMicrophoneOn ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client replicate its microphone status ( on / off )\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client replicate its microphone status ( on / off )" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp__bIsMicrophoneOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bIsMicrophoneOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::NewProp__bIsMicrophoneOn_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms*)Obj)->_bIsMicrophoneOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::NewProp__bIsMicrophoneOn = { "_bIsMicrophoneOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::NewProp__bIsMicrophoneOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::NewProp__bIsMicrophoneOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientSetIsMicrophoneOn", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientSetIsMicrophoneOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientSetIsMicrophoneOn)
{
	P_GET_UBOOL(Z_Param__bIsMicrophoneOn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientSetIsMicrophoneOn_Implementation(Z_Param__bIsMicrophoneOn);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientSetIsMicrophoneOn *******************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientSetMicrophoneVolume ***************
struct OrionVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms
{
	float Volume;
};
static FName NAME_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume = FName(TEXT("RPCClientSetMicrophoneVolume"));
void AOrionVoiceChatActor::RPCClientSetMicrophoneVolume(float Volume)
{
	OrionVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms Parms;
	Parms.Volume=Volume;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client replicate its microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client replicate its microphone Volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientSetMicrophoneVolume", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientSetMicrophoneVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientSetMicrophoneVolume_Implementation(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientSetMicrophoneVolume *****************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientSetPlayerName *********************
struct OrionVoiceChatActor_eventRPCClientSetPlayerName_Parms
{
	FString Name;
};
static FName NAME_AOrionVoiceChatActor_RPCClientSetPlayerName = FName(TEXT("RPCClientSetPlayerName"));
void AOrionVoiceChatActor::RPCClientSetPlayerName(const FString& Name)
{
	OrionVoiceChatActor_eventRPCClientSetPlayerName_Parms Parms;
	Parms.Name=Name;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientSetPlayerName);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client set Name\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client set Name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientSetPlayerName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientSetPlayerName", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientSetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientSetPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientSetPlayerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientSetPlayerName_Implementation(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientSetPlayerName ***********************

// ********** Begin Class AOrionVoiceChatActor Function RPCClientSetSourceChainEffectPath **********
struct OrionVoiceChatActor_eventRPCClientSetSourceChainEffectPath_Parms
{
	FString _SourceChainEffectAssetPath;
};
static FName NAME_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath = FName(TEXT("RPCClientSetSourceChainEffectPath"));
void AOrionVoiceChatActor::RPCClientSetSourceChainEffectPath(const FString& _SourceChainEffectAssetPath)
{
	OrionVoiceChatActor_eventRPCClientSetSourceChainEffectPath_Parms Parms;
	Parms._SourceChainEffectAssetPath=_SourceChainEffectAssetPath;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// client source chain effect path\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "client source chain effect path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SourceChainEffectAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__SourceChainEffectAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::NewProp__SourceChainEffectAssetPath = { "_SourceChainEffectAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCClientSetSourceChainEffectPath_Parms, _SourceChainEffectAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SourceChainEffectAssetPath_MetaData), NewProp__SourceChainEffectAssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::NewProp__SourceChainEffectAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCClientSetSourceChainEffectPath", Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCClientSetSourceChainEffectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCClientSetSourceChainEffectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCClientSetSourceChainEffectPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__SourceChainEffectAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCClientSetSourceChainEffectPath_Implementation(Z_Param__SourceChainEffectAssetPath);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCClientSetSourceChainEffectPath ************

// ********** Begin Class AOrionVoiceChatActor Function RPCServerUpdatePosAudioComp ****************
struct OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms
{
	FVector WorldPos;
	FRotator WorldRotation;
};
static FName NAME_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp = FName(TEXT("RPCServerUpdatePosAudioComp"));
void AOrionVoiceChatActor::RPCServerUpdatePosAudioComp(FVector WorldPos, FRotator WorldRotation)
{
	OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms Parms;
	Parms.WorldPos=WorldPos;
	Parms.WorldRotation=WorldRotation;
	UFunction* Func = FindFunctionChecked(NAME_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// server update audio pos\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "server update audio pos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms, WorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_WorldRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "RPCServerUpdatePosAudioComp", Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers), sizeof(OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(OrionVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execRPCServerUpdatePosAudioComp)
{
	P_GET_STRUCT(FVector,Z_Param_WorldPos);
	P_GET_STRUCT(FRotator,Z_Param_WorldRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPCServerUpdatePosAudioComp_Implementation(Z_Param_WorldPos,Z_Param_WorldRotation);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function RPCServerUpdatePosAudioComp ******************

// ********** Begin Class AOrionVoiceChatActor Function ServerAddChannel ***************************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics
{
	struct OrionVoiceChatActor_eventServerAddChannel_Parms
	{
		int32 ChannelToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::NewProp_ChannelToAdd = { "ChannelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventServerAddChannel_Parms, ChannelToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::NewProp_ChannelToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerAddChannel", Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::OrionVoiceChatActor_eventServerAddChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::OrionVoiceChatActor_eventServerAddChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerAddChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAddChannel(Z_Param_ChannelToAdd);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerAddChannel *****************************

// ********** Begin Class AOrionVoiceChatActor Function ServerRemoveChannel ************************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics
{
	struct OrionVoiceChatActor_eventServerRemoveChannel_Parms
	{
		int32 ChannelToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::NewProp_ChannelToRemove = { "ChannelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventServerRemoveChannel_Parms, ChannelToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::NewProp_ChannelToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerRemoveChannel", Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::OrionVoiceChatActor_eventServerRemoveChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::OrionVoiceChatActor_eventServerRemoveChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerRemoveChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRemoveChannel(Z_Param_ChannelToRemove);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerRemoveChannel **************************

// ********** Begin Class AOrionVoiceChatActor Function ServerSetAllowUseGlobal ********************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics
{
	struct OrionVoiceChatActor_eventServerSetAllowUseGlobal_Parms
	{
		bool bAllowUseGlobal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowUseGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowUseGlobal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp_bAllowUseGlobal_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventServerSetAllowUseGlobal_Parms*)Obj)->bAllowUseGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp_bAllowUseGlobal = { "bAllowUseGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventServerSetAllowUseGlobal_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp_bAllowUseGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp_bAllowUseGlobal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerSetAllowUseGlobal", Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::OrionVoiceChatActor_eventServerSetAllowUseGlobal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::OrionVoiceChatActor_eventServerSetAllowUseGlobal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerSetAllowUseGlobal)
{
	P_GET_UBOOL(Z_Param_bAllowUseGlobal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetAllowUseGlobal(Z_Param_bAllowUseGlobal);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerSetAllowUseGlobal **********************

// ********** Begin Class AOrionVoiceChatActor Function ServerSetAllowUseProximity *****************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics
{
	struct OrionVoiceChatActor_eventServerSetAllowUseProximity_Parms
	{
		bool bAllowUseRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowUseRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp_bAllowUseRange_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventServerSetAllowUseProximity_Parms*)Obj)->bAllowUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp_bAllowUseRange = { "bAllowUseRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventServerSetAllowUseProximity_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp_bAllowUseRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp_bAllowUseRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerSetAllowUseProximity", Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::OrionVoiceChatActor_eventServerSetAllowUseProximity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::OrionVoiceChatActor_eventServerSetAllowUseProximity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerSetAllowUseProximity)
{
	P_GET_UBOOL(Z_Param_bAllowUseRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetAllowUseProximity(Z_Param_bAllowUseRange);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerSetAllowUseProximity *******************

// ********** Begin Class AOrionVoiceChatActor Function ServerSetAttenuation ***********************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics
{
	struct OrionVoiceChatActor_eventServerSetAttenuation_Parms
	{
		bool bEnableAttenuation;
		FString _AttenuationAssetPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAttenuation;
	static const UECodeGen_Private::FStrPropertyParams NewProp__AttenuationAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventServerSetAttenuation_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventServerSetAttenuation_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp__AttenuationAssetPath = { "_AttenuationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventServerSetAttenuation_Parms, _AttenuationAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::NewProp__AttenuationAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerSetAttenuation", Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::OrionVoiceChatActor_eventServerSetAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::OrionVoiceChatActor_eventServerSetAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerSetAttenuation)
{
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_PROPERTY(FStrProperty,Z_Param__AttenuationAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetAttenuation(Z_Param_bEnableAttenuation,Z_Param__AttenuationAssetPath);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerSetAttenuation *************************

// ********** Begin Class AOrionVoiceChatActor Function ServerSetMaxProximityRange *****************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics
{
	struct OrionVoiceChatActor_eventServerSetMaxProximityRange_Parms
	{
		float _MaxProximityRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__MaxProximityRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__MaxProximityRange = { "_MaxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventServerSetMaxProximityRange_Parms, _MaxProximityRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__MaxProximityRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerSetMaxProximityRange", Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::OrionVoiceChatActor_eventServerSetMaxProximityRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::OrionVoiceChatActor_eventServerSetMaxProximityRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerSetMaxProximityRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__MaxProximityRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetMaxProximityRange(Z_Param__MaxProximityRange);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerSetMaxProximityRange *******************

// ********** Begin Class AOrionVoiceChatActor Function ServerSetSourceChainEffect *****************
struct Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics
{
	struct OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms
	{
		bool bEnableSourceChainEffect;
		FString _SourceChainEffectPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSourceChainEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceChainEffect;
	static const UECodeGen_Private::FStrPropertyParams NewProp__SourceChainEffectPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp_bEnableSourceChainEffect_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms*)Obj)->bEnableSourceChainEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp_bEnableSourceChainEffect = { "bEnableSourceChainEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp_bEnableSourceChainEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp__SourceChainEffectPath = { "_SourceChainEffectPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms, _SourceChainEffectPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp_bEnableSourceChainEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::NewProp__SourceChainEffectPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "ServerSetSourceChainEffect", Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::OrionVoiceChatActor_eventServerSetSourceChainEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execServerSetSourceChainEffect)
{
	P_GET_UBOOL(Z_Param_bEnableSourceChainEffect);
	P_GET_PROPERTY(FStrProperty,Z_Param__SourceChainEffectPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetSourceChainEffect(Z_Param_bEnableSourceChainEffect,Z_Param__SourceChainEffectPath);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function ServerSetSourceChainEffect *******************

// ********** Begin Class AOrionVoiceChatActor Function SetAudioMuted ******************************
struct Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics
{
	struct OrionVoiceChatActor_eventSetAudioMuted_Parms
	{
		bool isMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::NewProp_isMute_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventSetAudioMuted_Parms*)Obj)->isMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::NewProp_isMute = { "isMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventSetAudioMuted_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::NewProp_isMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::NewProp_isMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "SetAudioMuted", Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::OrionVoiceChatActor_eventSetAudioMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::OrionVoiceChatActor_eventSetAudioMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execSetAudioMuted)
{
	P_GET_UBOOL(Z_Param_isMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioMuted(Z_Param_isMute);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function SetAudioMuted ********************************

// ********** Begin Class AOrionVoiceChatActor Function SetLocalVolumeMultiplier *******************
struct Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics
{
	struct OrionVoiceChatActor_eventSetLocalVolumeMultiplier_Parms
	{
		float MultiplierVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume = { "MultiplierVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventSetLocalVolumeMultiplier_Parms, MultiplierVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "SetLocalVolumeMultiplier", Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::OrionVoiceChatActor_eventSetLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::OrionVoiceChatActor_eventSetLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execSetLocalVolumeMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplierVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocalVolumeMultiplier(Z_Param_MultiplierVolume);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function SetLocalVolumeMultiplier *********************

// ********** Begin Class AOrionVoiceChatActor Function SetOverrideLocalAttenuationPath ************
struct Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics
{
	struct OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms
	{
		bool bEnableAttenuation;
		bool bOverrideLocally;
		FString _AttenuationAssetPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
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
void Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath = { "_AttenuationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms, _AttenuationAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "SetOverrideLocalAttenuationPath", Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::OrionVoiceChatActor_eventSetOverrideLocalAttenuationPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execSetOverrideLocalAttenuationPath)
{
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__AttenuationAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideLocalAttenuationPath(Z_Param_bEnableAttenuation,Z_Param_bOverrideLocally,Z_Param__AttenuationAssetPath);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function SetOverrideLocalAttenuationPath **************

// ********** Begin Class AOrionVoiceChatActor Function SetOverrideLocalSourceEffectPath ***********
struct Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics
{
	struct OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms
	{
		bool bEnableSourceEffect;
		bool bOverrideLocally;
		FString _pathToSourceEffectAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
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
void Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms*)Obj)->bEnableSourceEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect = { "bEnableSourceEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset = { "_pathToSourceEffectAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms, _pathToSourceEffectAsset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionVoiceChatActor, nullptr, "SetOverrideLocalSourceEffectPath", Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::OrionVoiceChatActor_eventSetOverrideLocalSourceEffectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionVoiceChatActor::execSetOverrideLocalSourceEffectPath)
{
	P_GET_UBOOL(Z_Param_bEnableSourceEffect);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__pathToSourceEffectAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideLocalSourceEffectPath(Z_Param_bEnableSourceEffect,Z_Param_bOverrideLocally,Z_Param__pathToSourceEffectAsset);
	P_NATIVE_END;
}
// ********** End Class AOrionVoiceChatActor Function SetOverrideLocalSourceEffectPath *************

// ********** Begin Class AOrionVoiceChatActor *****************************************************
void AOrionVoiceChatActor::StaticRegisterNativesAOrionVoiceChatActor()
{
	UClass* Class = AOrionVoiceChatActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DelegateEndPlayOwner", &AOrionVoiceChatActor::execDelegateEndPlayOwner },
		{ "GetLocalVolumeMultiplier", &AOrionVoiceChatActor::execGetLocalVolumeMultiplier },
		{ "IsMicrophoneComponentValid", &AOrionVoiceChatActor::execIsMicrophoneComponentValid },
		{ "RepNotifyAttenuationAsset", &AOrionVoiceChatActor::execRepNotifyAttenuationAsset },
		{ "RepNotifyIsMicrophoneOn", &AOrionVoiceChatActor::execRepNotifyIsMicrophoneOn },
		{ "RepNotifyMicComp", &AOrionVoiceChatActor::execRepNotifyMicComp },
		{ "RepNotifyPlayerName", &AOrionVoiceChatActor::execRepNotifyPlayerName },
		{ "RepNotifySourceEffectAsset", &AOrionVoiceChatActor::execRepNotifySourceEffectAsset },
		{ "RepNotifyVoiceVolume", &AOrionVoiceChatActor::execRepNotifyVoiceVolume },
		{ "RPCClientAskAddChannel", &AOrionVoiceChatActor::execRPCClientAskAddChannel },
		{ "RPCClientAskRemoveChannel", &AOrionVoiceChatActor::execRPCClientAskRemoveChannel },
		{ "RPCClientSetAttenuationPath", &AOrionVoiceChatActor::execRPCClientSetAttenuationPath },
		{ "RPCClientSetIsMicrophoneOn", &AOrionVoiceChatActor::execRPCClientSetIsMicrophoneOn },
		{ "RPCClientSetMicrophoneVolume", &AOrionVoiceChatActor::execRPCClientSetMicrophoneVolume },
		{ "RPCClientSetPlayerName", &AOrionVoiceChatActor::execRPCClientSetPlayerName },
		{ "RPCClientSetSourceChainEffectPath", &AOrionVoiceChatActor::execRPCClientSetSourceChainEffectPath },
		{ "RPCServerUpdatePosAudioComp", &AOrionVoiceChatActor::execRPCServerUpdatePosAudioComp },
		{ "ServerAddChannel", &AOrionVoiceChatActor::execServerAddChannel },
		{ "ServerRemoveChannel", &AOrionVoiceChatActor::execServerRemoveChannel },
		{ "ServerSetAllowUseGlobal", &AOrionVoiceChatActor::execServerSetAllowUseGlobal },
		{ "ServerSetAllowUseProximity", &AOrionVoiceChatActor::execServerSetAllowUseProximity },
		{ "ServerSetAttenuation", &AOrionVoiceChatActor::execServerSetAttenuation },
		{ "ServerSetMaxProximityRange", &AOrionVoiceChatActor::execServerSetMaxProximityRange },
		{ "ServerSetSourceChainEffect", &AOrionVoiceChatActor::execServerSetSourceChainEffect },
		{ "SetAudioMuted", &AOrionVoiceChatActor::execSetAudioMuted },
		{ "SetLocalVolumeMultiplier", &AOrionVoiceChatActor::execSetLocalVolumeMultiplier },
		{ "SetOverrideLocalAttenuationPath", &AOrionVoiceChatActor::execSetOverrideLocalAttenuationPath },
		{ "SetOverrideLocalSourceEffectPath", &AOrionVoiceChatActor::execSetOverrideLocalSourceEffectPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOrionVoiceChatActor;
UClass* AOrionVoiceChatActor::GetPrivateStaticClass()
{
	using TClass = AOrionVoiceChatActor;
	if (!Z_Registration_Info_UClass_AOrionVoiceChatActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionVoiceChatActor"),
			Z_Registration_Info_UClass_AOrionVoiceChatActor.InnerSingleton,
			StaticRegisterNativesAOrionVoiceChatActor,
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
	return Z_Registration_Info_UClass_AOrionVoiceChatActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AOrionVoiceChatActor_NoRegister()
{
	return AOrionVoiceChatActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOrionVoiceChatActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionVoiceChatActor.h" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* the root scene component*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the root scene component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicrophoneSpeakComponent_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* the component used to speak and receive voice*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the component used to speak and receive voice" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* the owner of this Actor, used for muting a player for example */" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the owner of this Actor, used for muting a player for example" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatId_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMicrophoneOn_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolume_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubscribedRadioChannels_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationAssetPath_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceChainEffectAssetPath_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerPerformAntiCheat_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAntiCheatAllowUseProximity_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAntiCheatAllowUseGlobal_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiCheatMaxProximityRange_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerNameReceived_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIsMicrophoneOnReceived_MetaData[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MicrophoneSpeakComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChatId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static void NewProp_bIsMicrophoneOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMicrophoneOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubscribedRadioChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubscribedRadioChannels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttenuationAssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceChainEffectAssetPath;
	static void NewProp_bServerPerformAntiCheat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerPerformAntiCheat;
	static void NewProp_bAntiCheatAllowUseProximity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatAllowUseProximity;
	static void NewProp_bAntiCheatAllowUseGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatAllowUseGlobal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AntiCheatMaxProximityRange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerNameReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsMicrophoneOnReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_DelegateEndPlayOwner, "DelegateEndPlayOwner" }, // 1380990651
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_GetLocalVolumeMultiplier, "GetLocalVolumeMultiplier" }, // 2817449184
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_IsMicrophoneComponentValid, "IsMicrophoneComponentValid" }, // 4109431832
		{ &Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature, "PlayerMicrophoneOnReceived__DelegateSignature" }, // 2249764134
		{ &Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature, "PlayerNameReceived__DelegateSignature" }, // 401784703
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyAttenuationAsset, "RepNotifyAttenuationAsset" }, // 4098323820
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyIsMicrophoneOn, "RepNotifyIsMicrophoneOn" }, // 1535329336
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyMicComp, "RepNotifyMicComp" }, // 1956486610
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyPlayerName, "RepNotifyPlayerName" }, // 2003414735
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifySourceEffectAsset, "RepNotifySourceEffectAsset" }, // 1796374374
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RepNotifyVoiceVolume, "RepNotifyVoiceVolume" }, // 2687543030
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskAddChannel, "RPCClientAskAddChannel" }, // 739566351
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientAskRemoveChannel, "RPCClientAskRemoveChannel" }, // 3767839759
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetAttenuationPath, "RPCClientSetAttenuationPath" }, // 3537464382
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetIsMicrophoneOn, "RPCClientSetIsMicrophoneOn" }, // 3644984977
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetMicrophoneVolume, "RPCClientSetMicrophoneVolume" }, // 3034572772
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetPlayerName, "RPCClientSetPlayerName" }, // 897054753
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCClientSetSourceChainEffectPath, "RPCClientSetSourceChainEffectPath" }, // 868017817
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_RPCServerUpdatePosAudioComp, "RPCServerUpdatePosAudioComp" }, // 2663456605
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerAddChannel, "ServerAddChannel" }, // 2767435980
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerRemoveChannel, "ServerRemoveChannel" }, // 2353106533
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseGlobal, "ServerSetAllowUseGlobal" }, // 513323052
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAllowUseProximity, "ServerSetAllowUseProximity" }, // 3936090779
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetAttenuation, "ServerSetAttenuation" }, // 3440257147
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetMaxProximityRange, "ServerSetMaxProximityRange" }, // 2976271857
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_ServerSetSourceChainEffect, "ServerSetSourceChainEffect" }, // 889279128
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_SetAudioMuted, "SetAudioMuted" }, // 3543695466
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_SetLocalVolumeMultiplier, "SetLocalVolumeMultiplier" }, // 2134945731
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalAttenuationPath, "SetOverrideLocalAttenuationPath" }, // 4214732838
		{ &Z_Construct_UFunction_AOrionVoiceChatActor_SetOverrideLocalSourceEffectPath, "SetOverrideLocalSourceEffectPath" }, // 2588185586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrionVoiceChatActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_MicrophoneSpeakComponent = { "MicrophoneSpeakComponent", "RepNotifyMicComp", (EPropertyFlags)0x011400010008203c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, MicrophoneSpeakComponent), Z_Construct_UClass_UOrionMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicrophoneSpeakComponent_MetaData), NewProp_MicrophoneSpeakComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", nullptr, (EPropertyFlags)0x0114000000002034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, OwnerPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPlayerState_MetaData), NewProp_OwnerPlayerState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_VoiceChatId = { "VoiceChatId", nullptr, (EPropertyFlags)0x0011000000002025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, VoiceChatId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatId_MetaData), NewProp_VoiceChatId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_PlayerName = { "PlayerName", "RepNotifyPlayerName", (EPropertyFlags)0x0010000100002034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
void Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bIsMicrophoneOn_SetBit(void* Obj)
{
	((AOrionVoiceChatActor*)Obj)->bIsMicrophoneOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bIsMicrophoneOn = { "bIsMicrophoneOn", "RepNotifyIsMicrophoneOn", (EPropertyFlags)0x0010000100002025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOrionVoiceChatActor), &Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bIsMicrophoneOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMicrophoneOn_MetaData), NewProp_bIsMicrophoneOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_VoiceVolume = { "VoiceVolume", "RepNotifyVoiceVolume", (EPropertyFlags)0x0010000100002034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, VoiceVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceVolume_MetaData), NewProp_VoiceVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SubscribedRadioChannels_Inner = { "SubscribedRadioChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SubscribedRadioChannels = { "SubscribedRadioChannels", nullptr, (EPropertyFlags)0x0010000000002024, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, SubscribedRadioChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubscribedRadioChannels_MetaData), NewProp_SubscribedRadioChannels_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_AttenuationAssetPath = { "AttenuationAssetPath", "RepNotifyAttenuationAsset", (EPropertyFlags)0x0011000100002025, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, AttenuationAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationAssetPath_MetaData), NewProp_AttenuationAssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SourceChainEffectAssetPath = { "SourceChainEffectAssetPath", "RepNotifySourceEffectAsset", (EPropertyFlags)0x0011000100002025, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, SourceChainEffectAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceChainEffectAssetPath_MetaData), NewProp_SourceChainEffectAssetPath_MetaData) };
void Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bServerPerformAntiCheat_SetBit(void* Obj)
{
	((AOrionVoiceChatActor*)Obj)->bServerPerformAntiCheat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bServerPerformAntiCheat = { "bServerPerformAntiCheat", nullptr, (EPropertyFlags)0x0011000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOrionVoiceChatActor), &Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bServerPerformAntiCheat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerPerformAntiCheat_MetaData), NewProp_bServerPerformAntiCheat_MetaData) };
void Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseProximity_SetBit(void* Obj)
{
	((AOrionVoiceChatActor*)Obj)->bAntiCheatAllowUseProximity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseProximity = { "bAntiCheatAllowUseProximity", nullptr, (EPropertyFlags)0x0011000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOrionVoiceChatActor), &Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseProximity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAntiCheatAllowUseProximity_MetaData), NewProp_bAntiCheatAllowUseProximity_MetaData) };
void Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseGlobal_SetBit(void* Obj)
{
	((AOrionVoiceChatActor*)Obj)->bAntiCheatAllowUseGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseGlobal = { "bAntiCheatAllowUseGlobal", nullptr, (EPropertyFlags)0x0011000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOrionVoiceChatActor), &Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseGlobal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAntiCheatAllowUseGlobal_MetaData), NewProp_bAntiCheatAllowUseGlobal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange = { "AntiCheatMaxProximityRange", nullptr, (EPropertyFlags)0x0011000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, AntiCheatMaxProximityRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiCheatMaxProximityRange_MetaData), NewProp_AntiCheatMaxProximityRange_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OnPlayerNameReceived = { "OnPlayerNameReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, OnPlayerNameReceived), Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerNameReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerNameReceived_MetaData), NewProp_OnPlayerNameReceived_MetaData) }; // 401784703
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OnIsMicrophoneOnReceived = { "OnIsMicrophoneOnReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionVoiceChatActor, OnIsMicrophoneOnReceived), Z_Construct_UDelegateFunction_AOrionVoiceChatActor_PlayerMicrophoneOnReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIsMicrophoneOnReceived_MetaData), NewProp_OnIsMicrophoneOnReceived_MetaData) }; // 2249764134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrionVoiceChatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_MicrophoneSpeakComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OwnerPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_VoiceChatId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bIsMicrophoneOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_VoiceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SubscribedRadioChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SubscribedRadioChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_AttenuationAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_SourceChainEffectAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bServerPerformAntiCheat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseProximity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_bAntiCheatAllowUseGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OnPlayerNameReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionVoiceChatActor_Statics::NewProp_OnIsMicrophoneOnReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionVoiceChatActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOrionVoiceChatActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionVoiceChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionVoiceChatActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrionVoiceChatActor_Statics::ClassParams = {
	&AOrionVoiceChatActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOrionVoiceChatActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOrionVoiceChatActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionVoiceChatActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrionVoiceChatActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrionVoiceChatActor()
{
	if (!Z_Registration_Info_UClass_AOrionVoiceChatActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrionVoiceChatActor.OuterSingleton, Z_Construct_UClass_AOrionVoiceChatActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrionVoiceChatActor.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AOrionVoiceChatActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_MicrophoneSpeakComponent(TEXT("MicrophoneSpeakComponent"));
	static FName Name_OwnerPlayerState(TEXT("OwnerPlayerState"));
	static FName Name_VoiceChatId(TEXT("VoiceChatId"));
	static FName Name_PlayerName(TEXT("PlayerName"));
	static FName Name_bIsMicrophoneOn(TEXT("bIsMicrophoneOn"));
	static FName Name_VoiceVolume(TEXT("VoiceVolume"));
	static FName Name_SubscribedRadioChannels(TEXT("SubscribedRadioChannels"));
	static FName Name_AttenuationAssetPath(TEXT("AttenuationAssetPath"));
	static FName Name_SourceChainEffectAssetPath(TEXT("SourceChainEffectAssetPath"));
	const bool bIsValid = true
		&& Name_MicrophoneSpeakComponent == ClassReps[(int32)ENetFields_Private::MicrophoneSpeakComponent].Property->GetFName()
		&& Name_OwnerPlayerState == ClassReps[(int32)ENetFields_Private::OwnerPlayerState].Property->GetFName()
		&& Name_VoiceChatId == ClassReps[(int32)ENetFields_Private::VoiceChatId].Property->GetFName()
		&& Name_PlayerName == ClassReps[(int32)ENetFields_Private::PlayerName].Property->GetFName()
		&& Name_bIsMicrophoneOn == ClassReps[(int32)ENetFields_Private::bIsMicrophoneOn].Property->GetFName()
		&& Name_VoiceVolume == ClassReps[(int32)ENetFields_Private::VoiceVolume].Property->GetFName()
		&& Name_SubscribedRadioChannels == ClassReps[(int32)ENetFields_Private::SubscribedRadioChannels].Property->GetFName()
		&& Name_AttenuationAssetPath == ClassReps[(int32)ENetFields_Private::AttenuationAssetPath].Property->GetFName()
		&& Name_SourceChainEffectAssetPath == ClassReps[(int32)ENetFields_Private::SourceChainEffectAssetPath].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOrionVoiceChatActor"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AOrionVoiceChatActor);
AOrionVoiceChatActor::~AOrionVoiceChatActor() {}
// ********** End Class AOrionVoiceChatActor *******************************************************

// ********** Begin Class UOrionVoiceChat Function AddChannel **************************************
struct Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics
{
	struct OrionVoiceChat_eventAddChannel_Parms
	{
		int32 ChannelToAdd;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Register to a radio channel\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Register to a radio channel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToAdd;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ChannelToAdd = { "ChannelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventAddChannel_Parms, ChannelToAdd), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventAddChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventAddChannel_Parms), &Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ChannelToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "AddChannel", Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::OrionVoiceChat_eventAddChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::OrionVoiceChat_eventAddChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_AddChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_AddChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execAddChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::AddChannel(Z_Param_ChannelToAdd);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function AddChannel ****************************************

// ********** Begin Class UOrionVoiceChat Function AskMicrophonePermission *************************
struct Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Android and iOS microphone permission asking\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Android and iOS microphone permission asking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "AskMicrophonePermission", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execAskMicrophonePermission)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::AskMicrophonePermission();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function AskMicrophonePermission ***************************

// ********** Begin Class UOrionVoiceChat Function EnableShouldHearMyOwnVoice **********************
struct Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics
{
	struct OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms
	{
		bool enable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Enable/disable hear my own voice when speaking\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Enable/disable hear my own voice when speaking" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_enable_SetBit(void* Obj)
{
	((OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms*)Obj)->enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms), &Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms), &Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "EnableShouldHearMyOwnVoice", Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::OrionVoiceChat_eventEnableShouldHearMyOwnVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execEnableShouldHearMyOwnVoice)
{
	P_GET_UBOOL(Z_Param_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::EnableShouldHearMyOwnVoice(Z_Param_enable);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function EnableShouldHearMyOwnVoice ************************

// ********** Begin Class UOrionVoiceChat Function GetActorFromPlayerState *************************
struct Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics
{
	struct OrionVoiceChat_eventGetActorFromPlayerState_Parms
	{
		const UObject* WorldContextObject;
		APlayerState* FromPlayerState;
		AOrionVoiceChatActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Get a voice chat Actor from a APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Get a voice chat Actor from a APlayerState" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetActorFromPlayerState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_FromPlayerState = { "FromPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetActorFromPlayerState_Parms, FromPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetActorFromPlayerState_Parms, ReturnValue), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_FromPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetActorFromPlayerState", Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::OrionVoiceChat_eventGetActorFromPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::OrionVoiceChat_eventGetActorFromPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetActorFromPlayerState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_FromPlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOrionVoiceChatActor**)Z_Param__Result=UOrionVoiceChat::GetActorFromPlayerState(Z_Param_WorldContextObject,Z_Param_FromPlayerState);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetActorFromPlayerState ***************************

// ********** Begin Class UOrionVoiceChat Function GetAudioDevicesList *****************************
struct Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics
{
	struct OrionVoiceChat_eventGetAudioDevicesList_Parms
	{
		TArray<FString> OutDevices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Get microphones connected to your PC\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Get microphones connected to your PC" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetAudioDevicesList_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::NewProp_OutDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::NewProp_OutDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetAudioDevicesList", Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::OrionVoiceChat_eventGetAudioDevicesList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::OrionVoiceChat_eventGetAudioDevicesList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetAudioDevicesList)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDevices);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::GetAudioDevicesList(Z_Param_Out_OutDevices);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetAudioDevicesList *******************************

// ********** Begin Class UOrionVoiceChat Function GetMicrophoneRuntimeVolumeFromPlayerState *******
struct Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics
{
	struct OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms
	{
		const UObject* WorldContextObject;
		APlayerState* FromPlayerState;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Get how loud is a player from a APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Get how loud is a player from a APlayerState" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPlayerState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_FromPlayerState = { "FromPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms, FromPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_FromPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetMicrophoneRuntimeVolumeFromPlayerState", Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::OrionVoiceChat_eventGetMicrophoneRuntimeVolumeFromPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetMicrophoneRuntimeVolumeFromPlayerState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_FromPlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOrionVoiceChat::GetMicrophoneRuntimeVolumeFromPlayerState(Z_Param_WorldContextObject,Z_Param_FromPlayerState);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetMicrophoneRuntimeVolumeFromPlayerState *********

// ********** Begin Class UOrionVoiceChat Function GetMuteAllPlayers *******************************
struct Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics
{
	struct OrionVoiceChat_eventGetMuteAllPlayers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Is all voice chat muted\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Is all voice chat muted" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventGetMuteAllPlayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventGetMuteAllPlayers_Parms), &Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetMuteAllPlayers", Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::OrionVoiceChat_eventGetMuteAllPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::OrionVoiceChat_eventGetMuteAllPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetMuteAllPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::GetMuteAllPlayers();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetMuteAllPlayers *********************************

// ********** Begin Class UOrionVoiceChat Function GetMyLocalOrionVoiceChatActor *******************
struct Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics
{
	struct OrionVoiceChat_eventGetMyLocalOrionVoiceChatActor_Parms
	{
		AOrionVoiceChatActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Your client local voice chat Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your client local voice chat Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetMyLocalOrionVoiceChatActor_Parms, ReturnValue), Z_Construct_UClass_AOrionVoiceChatActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetMyLocalOrionVoiceChatActor", Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::OrionVoiceChat_eventGetMyLocalOrionVoiceChatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::OrionVoiceChat_eventGetMyLocalOrionVoiceChatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetMyLocalOrionVoiceChatActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOrionVoiceChatActor**)Z_Param__Result=UOrionVoiceChat::GetMyLocalOrionVoiceChatActor();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetMyLocalOrionVoiceChatActor *********************

// ********** Begin Class UOrionVoiceChat Function GetPlayerLocalVolumeMultiplier ******************
struct Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics
{
	struct OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms
	{
		const UObject* WorldContextObject;
		APlayerState* PlayerToOverride;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : getter function to get bypassed Volume value\n// <This is Discord style Volume adjustment>\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : getter function to get bypassed Volume value\n<This is Discord style Volume adjustment>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_PlayerToOverride = { "PlayerToOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms, PlayerToOverride), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_PlayerToOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "GetPlayerLocalVolumeMultiplier", Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::OrionVoiceChat_eventGetPlayerLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execGetPlayerLocalVolumeMultiplier)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerLocalVolumeMultiplier(Z_Param_WorldContextObject,Z_Param_PlayerToOverride);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function GetPlayerLocalVolumeMultiplier ********************

// ********** Begin Class UOrionVoiceChat Function HasMicrophonePermission *************************
struct Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics
{
	struct OrionVoiceChat_eventHasMicrophonePermission_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Android and iOS check if permission already granted\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Android and iOS check if permission already granted" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventHasMicrophonePermission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventHasMicrophonePermission_Parms), &Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "HasMicrophonePermission", Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::OrionVoiceChat_eventHasMicrophonePermission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::OrionVoiceChat_eventHasMicrophonePermission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execHasMicrophonePermission)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::HasMicrophonePermission();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function HasMicrophonePermission ***************************

// ********** Begin Class UOrionVoiceChat Function InitializeAudioQuality **************************
struct Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics
{
	struct OrionVoiceChat_eventInitializeAudioQuality_Parms
	{
		int32 SampleRate;
		int32 NumChannels;
		EOrionOpusFramePerSec OpusFramePerSec;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Customize audio settings\n" },
#endif
		{ "CPP_Default_NumChannels", "1" },
		{ "CPP_Default_OpusFramePerSec", "ORION_OPUS_FPS_200" },
		{ "CPP_Default_SampleRate", "48000" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Customize audio settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpusFramePerSec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpusFramePerSec;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventInitializeAudioQuality_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventInitializeAudioQuality_Parms, NumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_OpusFramePerSec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_OpusFramePerSec = { "OpusFramePerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventInitializeAudioQuality_Parms, OpusFramePerSec), Z_Construct_UEnum_OrionVoiceChat_EOrionOpusFramePerSec, METADATA_PARAMS(0, nullptr) }; // 3946874800
void Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventInitializeAudioQuality_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventInitializeAudioQuality_Parms), &Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_OpusFramePerSec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_OpusFramePerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "InitializeAudioQuality", Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::OrionVoiceChat_eventInitializeAudioQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::OrionVoiceChat_eventInitializeAudioQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execInitializeAudioQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChannels);
	P_GET_ENUM(EOrionOpusFramePerSec,Z_Param_OpusFramePerSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::InitializeAudioQuality(Z_Param_SampleRate,Z_Param_NumChannels,EOrionOpusFramePerSec(Z_Param_OpusFramePerSec));
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function InitializeAudioQuality ****************************

// ********** Begin Class UOrionVoiceChat Function IsMyOrionVoiceChatActorReady ********************
struct Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics
{
	struct OrionVoiceChat_eventIsMyOrionVoiceChatActorReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Check if your Actor is ready to speak\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Check if your Actor is ready to speak" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventIsMyOrionVoiceChatActorReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventIsMyOrionVoiceChatActorReady_Parms), &Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "IsMyOrionVoiceChatActorReady", Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::OrionVoiceChat_eventIsMyOrionVoiceChatActorReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::OrionVoiceChat_eventIsMyOrionVoiceChatActorReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execIsMyOrionVoiceChatActorReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::IsMyOrionVoiceChatActorReady();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function IsMyOrionVoiceChatActorReady **********************

// ********** Begin Class UOrionVoiceChat Function IsRegisteredToChannel ***************************
struct Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics
{
	struct OrionVoiceChat_eventIsRegisteredToChannel_Parms
	{
		int32 ChannelToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Check if registered to radio channel\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Check if registered to radio channel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ChannelToCheck = { "ChannelToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventIsRegisteredToChannel_Parms, ChannelToCheck), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventIsRegisteredToChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventIsRegisteredToChannel_Parms), &Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ChannelToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "IsRegisteredToChannel", Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::OrionVoiceChat_eventIsRegisteredToChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::OrionVoiceChat_eventIsRegisteredToChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execIsRegisteredToChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::IsRegisteredToChannel(Z_Param_ChannelToCheck);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function IsRegisteredToChannel *****************************

// ********** Begin Class UOrionVoiceChat Function IsSpeaking **************************************
struct Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics
{
	struct OrionVoiceChat_eventIsSpeaking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Is Speaking\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Is Speaking" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventIsSpeaking_Parms), &Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "IsSpeaking", Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::OrionVoiceChat_eventIsSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::OrionVoiceChat_eventIsSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execIsSpeaking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::IsSpeaking();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function IsSpeaking ****************************************

// ********** Begin Class UOrionVoiceChat Function LocalIsPlayerMuted ******************************
struct Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics
{
	struct OrionVoiceChat_eventLocalIsPlayerMuted_Parms
	{
		const UObject* WorldContextObject;
		APlayerState* PlayerToCheckMute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Check if someone is muted given its APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Check if someone is muted given its APlayerState" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToCheckMute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventLocalIsPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_PlayerToCheckMute = { "PlayerToCheckMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventLocalIsPlayerMuted_Parms, PlayerToCheckMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventLocalIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventLocalIsPlayerMuted_Parms), &Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_PlayerToCheckMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "LocalIsPlayerMuted", Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::OrionVoiceChat_eventLocalIsPlayerMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::OrionVoiceChat_eventLocalIsPlayerMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execLocalIsPlayerMuted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToCheckMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::LocalIsPlayerMuted(Z_Param_WorldContextObject,Z_Param_PlayerToCheckMute);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function LocalIsPlayerMuted ********************************

// ********** Begin Class UOrionVoiceChat Function LocalMutePlayer *********************************
struct Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics
{
	struct OrionVoiceChat_eventLocalMutePlayer_Parms
	{
		const UObject* WorldContextObject;
		APlayerState* PlayerToMute;
		bool bShouldMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Mute someone given its APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Mute someone given its APlayerState" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToMute;
	static void NewProp_bShouldMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventLocalMutePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_PlayerToMute = { "PlayerToMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventLocalMutePlayer_Parms, PlayerToMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_bShouldMute_SetBit(void* Obj)
{
	((OrionVoiceChat_eventLocalMutePlayer_Parms*)Obj)->bShouldMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_bShouldMute = { "bShouldMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventLocalMutePlayer_Parms), &Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_bShouldMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_PlayerToMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::NewProp_bShouldMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "LocalMutePlayer", Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::OrionVoiceChat_eventLocalMutePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::OrionVoiceChat_eventLocalMutePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execLocalMutePlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToMute);
	P_GET_UBOOL(Z_Param_bShouldMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::LocalMutePlayer(Z_Param_WorldContextObject,Z_Param_PlayerToMute,Z_Param_bShouldMute);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function LocalMutePlayer ***********************************

// ********** Begin Class UOrionVoiceChat Function RegisterOnDeleteOrionVoiceChatActor *************
struct Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics
{
	struct OrionVoiceChat_eventRegisterOnDeleteOrionVoiceChatActor_Parms
	{
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Register callback when a new Voice Chat Actor is destroyed\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Register callback when a new Voice Chat Actor is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventRegisterOnDeleteOrionVoiceChatActor_Parms, Delegate), Z_Construct_UDelegateFunction_OrionVoiceChat_OnDeleteOrionVoiceChatActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 189626963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "RegisterOnDeleteOrionVoiceChatActor", Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::OrionVoiceChat_eventRegisterOnDeleteOrionVoiceChatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::OrionVoiceChat_eventRegisterOnDeleteOrionVoiceChatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execRegisterOnDeleteOrionVoiceChatActor)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::RegisterOnDeleteOrionVoiceChatActor(FOnDeleteOrionVoiceChatActorDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function RegisterOnDeleteOrionVoiceChatActor ***************

// ********** Begin Class UOrionVoiceChat Function RegisterOnMyOrionVoiceChatActorReady ************
struct Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics
{
	struct OrionVoiceChat_eventRegisterOnMyOrionVoiceChatActorReady_Parms
	{
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Register callback when a local Voice Chat Actor is ready\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Register callback when a local Voice Chat Actor is ready" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventRegisterOnMyOrionVoiceChatActorReady_Parms, Delegate), Z_Construct_UDelegateFunction_OrionVoiceChat_OnMyOrionVoiceChatActorReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 954913320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "RegisterOnMyOrionVoiceChatActorReady", Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::OrionVoiceChat_eventRegisterOnMyOrionVoiceChatActorReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::OrionVoiceChat_eventRegisterOnMyOrionVoiceChatActorReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execRegisterOnMyOrionVoiceChatActorReady)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::RegisterOnMyOrionVoiceChatActorReady(FOnMyOrionVoiceChatActorReadyDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function RegisterOnMyOrionVoiceChatActorReady **************

// ********** Begin Class UOrionVoiceChat Function RegisterOnNewOrionVoiceChatActor ****************
struct Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics
{
	struct OrionVoiceChat_eventRegisterOnNewOrionVoiceChatActor_Parms
	{
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Register callback when a new Voice Chat Actor is created\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Register callback when a new Voice Chat Actor is created" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventRegisterOnNewOrionVoiceChatActor_Parms, Delegate), Z_Construct_UDelegateFunction_OrionVoiceChat_OnNewOrionVoiceChatActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2766280047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "RegisterOnNewOrionVoiceChatActor", Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::OrionVoiceChat_eventRegisterOnNewOrionVoiceChatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::OrionVoiceChat_eventRegisterOnNewOrionVoiceChatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execRegisterOnNewOrionVoiceChatActor)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::RegisterOnNewOrionVoiceChatActor(FOnNewOrionVoiceChatActorDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function RegisterOnNewOrionVoiceChatActor ******************

// ********** Begin Class UOrionVoiceChat Function RemoveChannel ***********************************
struct Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics
{
	struct OrionVoiceChat_eventRemoveChannel_Parms
	{
		int32 ChannelToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Unregister to a radio channel\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Unregister to a radio channel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ChannelToRemove = { "ChannelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventRemoveChannel_Parms, ChannelToRemove), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventRemoveChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventRemoveChannel_Parms), &Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ChannelToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "RemoveChannel", Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::OrionVoiceChat_eventRemoveChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::OrionVoiceChat_eventRemoveChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execRemoveChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::RemoveChannel(Z_Param_ChannelToRemove);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function RemoveChannel *************************************

// ********** Begin Class UOrionVoiceChat Function SetAttenuationPath ******************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics
{
	struct OrionVoiceChat_eventSetAttenuationPath_Parms
	{
		bool bEnableAttenuation;
		FString _attenuationPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Enable/disable attenuation and set attenuation path to use\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Enable/disable attenuation and set attenuation path to use" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAttenuation;
	static const UECodeGen_Private::FStrPropertyParams NewProp__attenuationPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetAttenuationPath_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetAttenuationPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp__attenuationPath = { "_attenuationPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetAttenuationPath_Parms, _attenuationPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetAttenuationPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetAttenuationPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp__attenuationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetAttenuationPath", Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::OrionVoiceChat_eventSetAttenuationPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::OrionVoiceChat_eventSetAttenuationPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetAttenuationPath)
{
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_PROPERTY(FStrProperty,Z_Param__attenuationPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::SetAttenuationPath(Z_Param_bEnableAttenuation,Z_Param__attenuationPath);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetAttenuationPath ********************************

// ********** Begin Class UOrionVoiceChat Function SetDefaultLocationUpdateTickRate ****************
struct Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics
{
	struct OrionVoiceChat_eventSetDefaultLocationUpdateTickRate_Parms
	{
		float tickRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Set voice chat location tick rate\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Set voice chat location tick rate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tickRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::NewProp_tickRate = { "tickRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetDefaultLocationUpdateTickRate_Parms, tickRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::NewProp_tickRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetDefaultLocationUpdateTickRate", Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::OrionVoiceChat_eventSetDefaultLocationUpdateTickRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::OrionVoiceChat_eventSetDefaultLocationUpdateTickRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetDefaultLocationUpdateTickRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_tickRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetDefaultLocationUpdateTickRate(Z_Param_tickRate);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetDefaultLocationUpdateTickRate ******************

// ********** Begin Class UOrionVoiceChat Function SetGlobalVolume *********************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics
{
	struct OrionVoiceChat_eventSetGlobalVolume_Parms
	{
		float GlobalVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound settings set global Voice Chat Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound settings set global Voice Chat Volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::NewProp_GlobalVolume = { "GlobalVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetGlobalVolume_Parms, GlobalVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::NewProp_GlobalVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetGlobalVolume", Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::OrionVoiceChat_eventSetGlobalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::OrionVoiceChat_eventSetGlobalVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetGlobalVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_GlobalVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetGlobalVolume(Z_Param_GlobalVolume);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetGlobalVolume ***********************************

// ********** Begin Class UOrionVoiceChat Function SetHardwareAudioInput ***************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics
{
	struct OrionVoiceChat_eventSetHardwareAudioInput_Parms
	{
		FString AudioInputDeviceName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Set microphone to use\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Set microphone to use" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioInputDeviceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::NewProp_AudioInputDeviceName = { "AudioInputDeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetHardwareAudioInput_Parms, AudioInputDeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::NewProp_AudioInputDeviceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetHardwareAudioInput", Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::OrionVoiceChat_eventSetHardwareAudioInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::OrionVoiceChat_eventSetHardwareAudioInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetHardwareAudioInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AudioInputDeviceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetHardwareAudioInput(Z_Param_AudioInputDeviceName);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetHardwareAudioInput *****************************

// ********** Begin Class UOrionVoiceChat Function SetMicrophoneVolume *****************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics
{
	struct OrionVoiceChat_eventSetMicrophoneVolume_Parms
	{
		float Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Multiply your microphone Volume\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Multiply your microphone Volume" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetMicrophoneVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetMicrophoneVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetMicrophoneVolume_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetMicrophoneVolume", Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::OrionVoiceChat_eventSetMicrophoneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::OrionVoiceChat_eventSetMicrophoneVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetMicrophoneVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::SetMicrophoneVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetMicrophoneVolume *******************************

// ********** Begin Class UOrionVoiceChat Function SetMuteAllPlayers *******************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics
{
	struct OrionVoiceChat_eventSetMuteAllPlayers_Parms
	{
		bool bInMuteAll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Set voice chat muted\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Set voice chat muted" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInMuteAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMuteAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::NewProp_bInMuteAll_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetMuteAllPlayers_Parms*)Obj)->bInMuteAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::NewProp_bInMuteAll = { "bInMuteAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetMuteAllPlayers_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::NewProp_bInMuteAll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::NewProp_bInMuteAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetMuteAllPlayers", Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::OrionVoiceChat_eventSetMuteAllPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::OrionVoiceChat_eventSetMuteAllPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetMuteAllPlayers)
{
	P_GET_UBOOL(Z_Param_bInMuteAll);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetMuteAllPlayers(Z_Param_bInMuteAll);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetMuteAllPlayers *********************************

// ********** Begin Class UOrionVoiceChat Function SetPlayerLocalVolumeMultiplier ******************
struct Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics
{
	struct OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms
	{
		const UObject* WorldContextObject;
		float MultiplierVolume;
		APlayerState* PlayerToOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : If you want your user to be able to bypass server replicated Volume, use this function on any voice chat Actor by using APlayerState\n// <This is Discord style Volume adjustment>\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : If you want your user to be able to bypass server replicated Volume, use this function on any voice chat Actor by using APlayerState\n<This is Discord style Volume adjustment>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume = { "MultiplierVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms, MultiplierVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_PlayerToOverride = { "PlayerToOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms, PlayerToOverride), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_MultiplierVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::NewProp_PlayerToOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetPlayerLocalVolumeMultiplier", Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::OrionVoiceChat_eventSetPlayerLocalVolumeMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetPlayerLocalVolumeMultiplier)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MultiplierVolume);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerLocalVolumeMultiplier(Z_Param_WorldContextObject,Z_Param_MultiplierVolume,Z_Param_PlayerToOverride);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetPlayerLocalVolumeMultiplier ********************

// ********** Begin Class UOrionVoiceChat Function SetPlayerName ***********************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics
{
	struct OrionVoiceChat_eventSetPlayerName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Set player Name\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Set player Name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetPlayerName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetPlayerName_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetPlayerName", Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::OrionVoiceChat_eventSetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::OrionVoiceChat_eventSetPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetPlayerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::SetPlayerName(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetPlayerName *************************************

// ********** Begin Class UOrionVoiceChat Function SetPlayerOverrideLocalAttenuationPath ***********
struct Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics
{
	struct OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms
	{
		const UObject* WorldContextObject;
		bool bEnableAttenuation;
		bool bOverrideLocally;
		FString _AttenuationAssetPath;
		APlayerState* PlayerToOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : If you want your user to be able bypass server replicated attenuation, use this function on any voice chat Actor by using APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : If you want your user to be able bypass server replicated attenuation, use this function on any voice chat Actor by using APlayerState" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bEnableAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAttenuation;
	static void NewProp_bOverrideLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocally;
	static const UECodeGen_Private::FStrPropertyParams NewProp__AttenuationAssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms*)Obj)->bEnableAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation = { "bEnableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath = { "_AttenuationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms, _AttenuationAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_PlayerToOverride = { "PlayerToOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms, PlayerToOverride), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bEnableAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp__AttenuationAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::NewProp_PlayerToOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetPlayerOverrideLocalAttenuationPath", Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::OrionVoiceChat_eventSetPlayerOverrideLocalAttenuationPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetPlayerOverrideLocalAttenuationPath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bEnableAttenuation);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__AttenuationAssetPath);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerOverrideLocalAttenuationPath(Z_Param_WorldContextObject,Z_Param_bEnableAttenuation,Z_Param_bOverrideLocally,Z_Param__AttenuationAssetPath,Z_Param_PlayerToOverride);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetPlayerOverrideLocalAttenuationPath *************

// ********** Begin Class UOrionVoiceChat Function SetPlayerOverrideLocalSourceEffectPath **********
struct Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics
{
	struct OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms
	{
		const UObject* WorldContextObject;
		bool bEnableSourceEffect;
		bool bOverrideLocally;
		FString _pathToSourceEffectAsset;
		APlayerState* PlayerToOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : If you want your user to be able bypass server replicated source effect , use this function on any voice chat Actor by using APlayerState\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : If you want your user to be able bypass server replicated source effect , use this function on any voice chat Actor by using APlayerState" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bEnableSourceEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceEffect;
	static void NewProp_bOverrideLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocally;
	static const UECodeGen_Private::FStrPropertyParams NewProp__pathToSourceEffectAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms*)Obj)->bEnableSourceEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect = { "bEnableSourceEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms*)Obj)->bOverrideLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally = { "bOverrideLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset = { "_pathToSourceEffectAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms, _pathToSourceEffectAsset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_PlayerToOverride = { "PlayerToOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms, PlayerToOverride), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bEnableSourceEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_bOverrideLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp__pathToSourceEffectAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::NewProp_PlayerToOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetPlayerOverrideLocalSourceEffectPath", Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::OrionVoiceChat_eventSetPlayerOverrideLocalSourceEffectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetPlayerOverrideLocalSourceEffectPath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bEnableSourceEffect);
	P_GET_UBOOL(Z_Param_bOverrideLocally);
	P_GET_PROPERTY(FStrProperty,Z_Param__pathToSourceEffectAsset);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerToOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerOverrideLocalSourceEffectPath(Z_Param_WorldContextObject,Z_Param_bEnableSourceEffect,Z_Param_bOverrideLocally,Z_Param__pathToSourceEffectAsset,Z_Param_PlayerToOverride);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetPlayerOverrideLocalSourceEffectPath ************

// ********** Begin Class UOrionVoiceChat Function SetRawMicrophoneGain ****************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics
{
	struct OrionVoiceChat_eventSetRawMicrophoneGain_Parms
	{
		float Gain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Multiply your microphone Volume from PCM data\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Multiply your microphone Volume from PCM data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetRawMicrophoneGain_Parms, Gain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::NewProp_Gain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetRawMicrophoneGain", Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::OrionVoiceChat_eventSetRawMicrophoneGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::OrionVoiceChat_eventSetRawMicrophoneGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetRawMicrophoneGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetRawMicrophoneGain(Z_Param_Gain);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetRawMicrophoneGain ******************************

// ********** Begin Class UOrionVoiceChat Function SetSendDataThreshold ****************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics
{
	struct OrionVoiceChat_eventSetSendDataThreshold_Parms
	{
		float SendDataThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : If Volume is superior to threshold, then send data, otherwise skip data\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : If Volume is superior to threshold, then send data, otherwise skip data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendDataThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::NewProp_SendDataThreshold = { "SendDataThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetSendDataThreshold_Parms, SendDataThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::NewProp_SendDataThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetSendDataThreshold", Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::OrionVoiceChat_eventSetSendDataThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::OrionVoiceChat_eventSetSendDataThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetSendDataThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SendDataThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::SetSendDataThreshold(Z_Param_SendDataThreshold);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetSendDataThreshold ******************************

// ********** Begin Class UOrionVoiceChat Function SetSourceChainEffectPath ************************
struct Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics
{
	struct OrionVoiceChat_eventSetSourceChainEffectPath_Parms
	{
		bool bEnableSourceChainEffect;
		FString _SourceChainEffectAssetPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Enable/disable source effect and set source effect path to use\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Enable/disable source effect and set source effect path to use" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSourceChainEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceChainEffect;
	static const UECodeGen_Private::FStrPropertyParams NewProp__SourceChainEffectAssetPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_bEnableSourceChainEffect_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetSourceChainEffectPath_Parms*)Obj)->bEnableSourceChainEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_bEnableSourceChainEffect = { "bEnableSourceChainEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetSourceChainEffectPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_bEnableSourceChainEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp__SourceChainEffectAssetPath = { "_SourceChainEffectAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventSetSourceChainEffectPath_Parms, _SourceChainEffectAssetPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventSetSourceChainEffectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventSetSourceChainEffectPath_Parms), &Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_bEnableSourceChainEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp__SourceChainEffectAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "SetSourceChainEffectPath", Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::OrionVoiceChat_eventSetSourceChainEffectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::OrionVoiceChat_eventSetSourceChainEffectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execSetSourceChainEffectPath)
{
	P_GET_UBOOL(Z_Param_bEnableSourceChainEffect);
	P_GET_PROPERTY(FStrProperty,Z_Param__SourceChainEffectAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::SetSourceChainEffectPath(Z_Param_bEnableSourceChainEffect,Z_Param__SourceChainEffectAssetPath);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function SetSourceChainEffectPath **************************

// ********** Begin Class UOrionVoiceChat Function StartSpeak **************************************
struct Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics
{
	struct OrionVoiceChat_eventStartSpeak_Parms
	{
		bool bShouldHearMyOwnVoice;
		bool bIsGlobal;
		int32 RadioChannel;
		bool bUseProximity;
		float MaxProximityRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Start speak\n" },
#endif
		{ "CPP_Default_bIsGlobal", "true" },
		{ "CPP_Default_bShouldHearMyOwnVoice", "true" },
		{ "CPP_Default_bUseProximity", "false" },
		{ "CPP_Default_MaxProximityRange", "0.000000" },
		{ "CPP_Default_RadioChannel", "0" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Start speak" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHearMyOwnVoice;
	static void NewProp_bIsGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioChannel;
	static void NewProp_bUseProximity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProximity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProximityRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeak_Parms*)Obj)->bShouldHearMyOwnVoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bShouldHearMyOwnVoice = { "bShouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeak_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bShouldHearMyOwnVoice_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bIsGlobal_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeak_Parms*)Obj)->bIsGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bIsGlobal = { "bIsGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeak_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bIsGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_RadioChannel = { "RadioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventStartSpeak_Parms, RadioChannel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bUseProximity_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeak_Parms*)Obj)->bUseProximity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bUseProximity = { "bUseProximity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeak_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bUseProximity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_MaxProximityRange = { "MaxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventStartSpeak_Parms, MaxProximityRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeak_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeak_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bShouldHearMyOwnVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bIsGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_RadioChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_bUseProximity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_MaxProximityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "StartSpeak", Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::OrionVoiceChat_eventStartSpeak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::OrionVoiceChat_eventStartSpeak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_StartSpeak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_StartSpeak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execStartSpeak)
{
	P_GET_UBOOL(Z_Param_bShouldHearMyOwnVoice);
	P_GET_UBOOL(Z_Param_bIsGlobal);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadioChannel);
	P_GET_UBOOL(Z_Param_bUseProximity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxProximityRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::StartSpeak(Z_Param_bShouldHearMyOwnVoice,Z_Param_bIsGlobal,Z_Param_RadioChannel,Z_Param_bUseProximity,Z_Param_MaxProximityRange);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function StartSpeak ****************************************

// ********** Begin Class UOrionVoiceChat Function StartSpeakTeamArray *****************************
struct Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics
{
	struct OrionVoiceChat_eventStartSpeakTeamArray_Parms
	{
		bool bShouldHearMyOwnVoice;
		bool bIsGlobal;
		TArray<int32> RadioChannel;
		bool bUseProximity;
		float MaxProximityRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Start speak to several radio channel\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Start speak to several radio channel" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHearMyOwnVoice;
	static void NewProp_bIsGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RadioChannel;
	static void NewProp_bUseProximity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProximity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProximityRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bShouldHearMyOwnVoice_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeakTeamArray_Parms*)Obj)->bShouldHearMyOwnVoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bShouldHearMyOwnVoice = { "bShouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeakTeamArray_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bShouldHearMyOwnVoice_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bIsGlobal_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeakTeamArray_Parms*)Obj)->bIsGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bIsGlobal = { "bIsGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeakTeamArray_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bIsGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_RadioChannel_Inner = { "RadioChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_RadioChannel = { "RadioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventStartSpeakTeamArray_Parms, RadioChannel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bUseProximity_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeakTeamArray_Parms*)Obj)->bUseProximity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bUseProximity = { "bUseProximity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeakTeamArray_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bUseProximity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_MaxProximityRange = { "MaxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionVoiceChat_eventStartSpeakTeamArray_Parms, MaxProximityRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStartSpeakTeamArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStartSpeakTeamArray_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bShouldHearMyOwnVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bIsGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_RadioChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_RadioChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_bUseProximity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_MaxProximityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "StartSpeakTeamArray", Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::OrionVoiceChat_eventStartSpeakTeamArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::OrionVoiceChat_eventStartSpeakTeamArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execStartSpeakTeamArray)
{
	P_GET_UBOOL(Z_Param_bShouldHearMyOwnVoice);
	P_GET_UBOOL(Z_Param_bIsGlobal);
	P_GET_TARRAY(int32,Z_Param_RadioChannel);
	P_GET_UBOOL(Z_Param_bUseProximity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxProximityRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::StartSpeakTeamArray(Z_Param_bShouldHearMyOwnVoice,Z_Param_bIsGlobal,Z_Param_RadioChannel,Z_Param_bUseProximity,Z_Param_MaxProximityRange);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function StartSpeakTeamArray *******************************

// ********** Begin Class UOrionVoiceChat Function StopSpeak ***************************************
struct Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics
{
	struct OrionVoiceChat_eventStopSpeak_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local Voice Chat Actor : Stop speak\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local Voice Chat Actor : Stop speak" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventStopSpeak_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventStopSpeak_Parms), &Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "StopSpeak", Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::OrionVoiceChat_eventStopSpeak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::OrionVoiceChat_eventStopSpeak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_StopSpeak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_StopSpeak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execStopSpeak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::StopSpeak();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function StopSpeak *****************************************

// ********** Begin Class UOrionVoiceChat Function UseAndroidCommunicationMode *********************
struct Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics
{
	struct OrionVoiceChat_eventUseAndroidCommunicationMode_Parms
	{
		bool use;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers function : Android switch between microphone to use\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers function : Android switch between microphone to use" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_use_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_use;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::NewProp_use_SetBit(void* Obj)
{
	((OrionVoiceChat_eventUseAndroidCommunicationMode_Parms*)Obj)->use = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::NewProp_use = { "use", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventUseAndroidCommunicationMode_Parms), &Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::NewProp_use_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::NewProp_use,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "UseAndroidCommunicationMode", Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::OrionVoiceChat_eventUseAndroidCommunicationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::OrionVoiceChat_eventUseAndroidCommunicationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execUseAndroidCommunicationMode)
{
	P_GET_UBOOL(Z_Param_use);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionVoiceChat::UseAndroidCommunicationMode(Z_Param_use);
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function UseAndroidCommunicationMode ***********************

// ********** Begin Class UOrionVoiceChat Function WasAudioQualityInitialized **********************
struct Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics
{
	struct OrionVoiceChat_eventWasAudioQualityInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionVoiceChat" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionVoiceChat_eventWasAudioQualityInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionVoiceChat_eventWasAudioQualityInitialized_Parms), &Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionVoiceChat, nullptr, "WasAudioQualityInitialized", Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::OrionVoiceChat_eventWasAudioQualityInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::OrionVoiceChat_eventWasAudioQualityInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionVoiceChat::execWasAudioQualityInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionVoiceChat::WasAudioQualityInitialized();
	P_NATIVE_END;
}
// ********** End Class UOrionVoiceChat Function WasAudioQualityInitialized ************************

// ********** Begin Class UOrionVoiceChat **********************************************************
void UOrionVoiceChat::StaticRegisterNativesUOrionVoiceChat()
{
	UClass* Class = UOrionVoiceChat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChannel", &UOrionVoiceChat::execAddChannel },
		{ "AskMicrophonePermission", &UOrionVoiceChat::execAskMicrophonePermission },
		{ "EnableShouldHearMyOwnVoice", &UOrionVoiceChat::execEnableShouldHearMyOwnVoice },
		{ "GetActorFromPlayerState", &UOrionVoiceChat::execGetActorFromPlayerState },
		{ "GetAudioDevicesList", &UOrionVoiceChat::execGetAudioDevicesList },
		{ "GetMicrophoneRuntimeVolumeFromPlayerState", &UOrionVoiceChat::execGetMicrophoneRuntimeVolumeFromPlayerState },
		{ "GetMuteAllPlayers", &UOrionVoiceChat::execGetMuteAllPlayers },
		{ "GetMyLocalOrionVoiceChatActor", &UOrionVoiceChat::execGetMyLocalOrionVoiceChatActor },
		{ "GetPlayerLocalVolumeMultiplier", &UOrionVoiceChat::execGetPlayerLocalVolumeMultiplier },
		{ "HasMicrophonePermission", &UOrionVoiceChat::execHasMicrophonePermission },
		{ "InitializeAudioQuality", &UOrionVoiceChat::execInitializeAudioQuality },
		{ "IsMyOrionVoiceChatActorReady", &UOrionVoiceChat::execIsMyOrionVoiceChatActorReady },
		{ "IsRegisteredToChannel", &UOrionVoiceChat::execIsRegisteredToChannel },
		{ "IsSpeaking", &UOrionVoiceChat::execIsSpeaking },
		{ "LocalIsPlayerMuted", &UOrionVoiceChat::execLocalIsPlayerMuted },
		{ "LocalMutePlayer", &UOrionVoiceChat::execLocalMutePlayer },
		{ "RegisterOnDeleteOrionVoiceChatActor", &UOrionVoiceChat::execRegisterOnDeleteOrionVoiceChatActor },
		{ "RegisterOnMyOrionVoiceChatActorReady", &UOrionVoiceChat::execRegisterOnMyOrionVoiceChatActorReady },
		{ "RegisterOnNewOrionVoiceChatActor", &UOrionVoiceChat::execRegisterOnNewOrionVoiceChatActor },
		{ "RemoveChannel", &UOrionVoiceChat::execRemoveChannel },
		{ "SetAttenuationPath", &UOrionVoiceChat::execSetAttenuationPath },
		{ "SetDefaultLocationUpdateTickRate", &UOrionVoiceChat::execSetDefaultLocationUpdateTickRate },
		{ "SetGlobalVolume", &UOrionVoiceChat::execSetGlobalVolume },
		{ "SetHardwareAudioInput", &UOrionVoiceChat::execSetHardwareAudioInput },
		{ "SetMicrophoneVolume", &UOrionVoiceChat::execSetMicrophoneVolume },
		{ "SetMuteAllPlayers", &UOrionVoiceChat::execSetMuteAllPlayers },
		{ "SetPlayerLocalVolumeMultiplier", &UOrionVoiceChat::execSetPlayerLocalVolumeMultiplier },
		{ "SetPlayerName", &UOrionVoiceChat::execSetPlayerName },
		{ "SetPlayerOverrideLocalAttenuationPath", &UOrionVoiceChat::execSetPlayerOverrideLocalAttenuationPath },
		{ "SetPlayerOverrideLocalSourceEffectPath", &UOrionVoiceChat::execSetPlayerOverrideLocalSourceEffectPath },
		{ "SetRawMicrophoneGain", &UOrionVoiceChat::execSetRawMicrophoneGain },
		{ "SetSendDataThreshold", &UOrionVoiceChat::execSetSendDataThreshold },
		{ "SetSourceChainEffectPath", &UOrionVoiceChat::execSetSourceChainEffectPath },
		{ "StartSpeak", &UOrionVoiceChat::execStartSpeak },
		{ "StartSpeakTeamArray", &UOrionVoiceChat::execStartSpeakTeamArray },
		{ "StopSpeak", &UOrionVoiceChat::execStopSpeak },
		{ "UseAndroidCommunicationMode", &UOrionVoiceChat::execUseAndroidCommunicationMode },
		{ "WasAudioQualityInitialized", &UOrionVoiceChat::execWasAudioQualityInitialized },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionVoiceChat;
UClass* UOrionVoiceChat::GetPrivateStaticClass()
{
	using TClass = UOrionVoiceChat;
	if (!Z_Registration_Info_UClass_UOrionVoiceChat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionVoiceChat"),
			Z_Registration_Info_UClass_UOrionVoiceChat.InnerSingleton,
			StaticRegisterNativesUOrionVoiceChat,
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
	return Z_Registration_Info_UClass_UOrionVoiceChat.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionVoiceChat_NoRegister()
{
	return UOrionVoiceChat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionVoiceChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* bp library */" },
#endif
		{ "IncludePath", "OrionVoiceChatActor.h" },
		{ "ModuleRelativePath", "Public/OrionVoiceChatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bp library" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionVoiceChat_AddChannel, "AddChannel" }, // 3324017722
		{ &Z_Construct_UFunction_UOrionVoiceChat_AskMicrophonePermission, "AskMicrophonePermission" }, // 4243458716
		{ &Z_Construct_UFunction_UOrionVoiceChat_EnableShouldHearMyOwnVoice, "EnableShouldHearMyOwnVoice" }, // 1600384047
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetActorFromPlayerState, "GetActorFromPlayerState" }, // 3999463542
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetAudioDevicesList, "GetAudioDevicesList" }, // 1871537090
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetMicrophoneRuntimeVolumeFromPlayerState, "GetMicrophoneRuntimeVolumeFromPlayerState" }, // 625135725
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetMuteAllPlayers, "GetMuteAllPlayers" }, // 1545251965
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetMyLocalOrionVoiceChatActor, "GetMyLocalOrionVoiceChatActor" }, // 1580160308
		{ &Z_Construct_UFunction_UOrionVoiceChat_GetPlayerLocalVolumeMultiplier, "GetPlayerLocalVolumeMultiplier" }, // 1027526403
		{ &Z_Construct_UFunction_UOrionVoiceChat_HasMicrophonePermission, "HasMicrophonePermission" }, // 3210068766
		{ &Z_Construct_UFunction_UOrionVoiceChat_InitializeAudioQuality, "InitializeAudioQuality" }, // 2451163828
		{ &Z_Construct_UFunction_UOrionVoiceChat_IsMyOrionVoiceChatActorReady, "IsMyOrionVoiceChatActorReady" }, // 4262276735
		{ &Z_Construct_UFunction_UOrionVoiceChat_IsRegisteredToChannel, "IsRegisteredToChannel" }, // 163930231
		{ &Z_Construct_UFunction_UOrionVoiceChat_IsSpeaking, "IsSpeaking" }, // 105370795
		{ &Z_Construct_UFunction_UOrionVoiceChat_LocalIsPlayerMuted, "LocalIsPlayerMuted" }, // 1570227569
		{ &Z_Construct_UFunction_UOrionVoiceChat_LocalMutePlayer, "LocalMutePlayer" }, // 609608966
		{ &Z_Construct_UFunction_UOrionVoiceChat_RegisterOnDeleteOrionVoiceChatActor, "RegisterOnDeleteOrionVoiceChatActor" }, // 144819895
		{ &Z_Construct_UFunction_UOrionVoiceChat_RegisterOnMyOrionVoiceChatActorReady, "RegisterOnMyOrionVoiceChatActorReady" }, // 2082979938
		{ &Z_Construct_UFunction_UOrionVoiceChat_RegisterOnNewOrionVoiceChatActor, "RegisterOnNewOrionVoiceChatActor" }, // 1378610202
		{ &Z_Construct_UFunction_UOrionVoiceChat_RemoveChannel, "RemoveChannel" }, // 1766346879
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetAttenuationPath, "SetAttenuationPath" }, // 3019362738
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetDefaultLocationUpdateTickRate, "SetDefaultLocationUpdateTickRate" }, // 1428331624
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetGlobalVolume, "SetGlobalVolume" }, // 2688977356
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetHardwareAudioInput, "SetHardwareAudioInput" }, // 4152085071
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetMicrophoneVolume, "SetMicrophoneVolume" }, // 1988450536
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetMuteAllPlayers, "SetMuteAllPlayers" }, // 1388526685
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerLocalVolumeMultiplier, "SetPlayerLocalVolumeMultiplier" }, // 3898145289
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerName, "SetPlayerName" }, // 567040764
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalAttenuationPath, "SetPlayerOverrideLocalAttenuationPath" }, // 3394106745
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetPlayerOverrideLocalSourceEffectPath, "SetPlayerOverrideLocalSourceEffectPath" }, // 2883913714
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetRawMicrophoneGain, "SetRawMicrophoneGain" }, // 2127346911
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetSendDataThreshold, "SetSendDataThreshold" }, // 152959269
		{ &Z_Construct_UFunction_UOrionVoiceChat_SetSourceChainEffectPath, "SetSourceChainEffectPath" }, // 3436798762
		{ &Z_Construct_UFunction_UOrionVoiceChat_StartSpeak, "StartSpeak" }, // 459353938
		{ &Z_Construct_UFunction_UOrionVoiceChat_StartSpeakTeamArray, "StartSpeakTeamArray" }, // 1631346713
		{ &Z_Construct_UFunction_UOrionVoiceChat_StopSpeak, "StopSpeak" }, // 1004490072
		{ &Z_Construct_UFunction_UOrionVoiceChat_UseAndroidCommunicationMode, "UseAndroidCommunicationMode" }, // 1701581871
		{ &Z_Construct_UFunction_UOrionVoiceChat_WasAudioQualityInitialized, "WasAudioQualityInitialized" }, // 1774777858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionVoiceChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionVoiceChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionVoiceChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionVoiceChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionVoiceChat_Statics::ClassParams = {
	&UOrionVoiceChat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionVoiceChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionVoiceChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionVoiceChat()
{
	if (!Z_Registration_Info_UClass_UOrionVoiceChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionVoiceChat.OuterSingleton, Z_Construct_UClass_UOrionVoiceChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionVoiceChat.OuterSingleton;
}
UOrionVoiceChat::UOrionVoiceChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionVoiceChat);
UOrionVoiceChat::~UOrionVoiceChat() {}
// ********** End Class UOrionVoiceChat ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionOpusFramePerSec_StaticEnum, TEXT("EOrionOpusFramePerSec"), &Z_Registration_Info_UEnum_EOrionOpusFramePerSec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3946874800U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrionVoiceChatActor, AOrionVoiceChatActor::StaticClass, TEXT("AOrionVoiceChatActor"), &Z_Registration_Info_UClass_AOrionVoiceChatActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrionVoiceChatActor), 135007488U) },
		{ Z_Construct_UClass_UOrionVoiceChat, UOrionVoiceChat::StaticClass, TEXT("UOrionVoiceChat"), &Z_Registration_Info_UClass_UOrionVoiceChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionVoiceChat), 1627946055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_1468316380(TEXT("/Script/OrionVoiceChat"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionVoiceChatActor_h__Script_OrionVoiceChat_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
