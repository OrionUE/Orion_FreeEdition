// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/SteamUserTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUserTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamDenyReason();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetTicketForWebApiResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamVoiceResult *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVoiceResult;
static UEnum* ESteamVoiceResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ESteamVoiceResult"));
	}
	return Z_Registration_Info_UEnum_ESteamVoiceResult.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamVoiceResult>()
{
	return ESteamVoiceResult_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BufferTooSmall.Name", "ESteamVoiceResult::BufferTooSmall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "DataCorrupted.Name", "ESteamVoiceResult::DataCorrupted" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
		{ "NoData.Name", "ESteamVoiceResult::NoData" },
		{ "NotInitialized.Name", "ESteamVoiceResult::NotInitialized" },
		{ "NotRecording.Name", "ESteamVoiceResult::NotRecording" },
		{ "OK.Name", "ESteamVoiceResult::OK" },
		{ "ReceiverDidNotAnswer.Name", "ESteamVoiceResult::ReceiverDidNotAnswer" },
		{ "ReceiverOutOfDate.Name", "ESteamVoiceResult::ReceiverOutOfDate" },
		{ "Restricted.Name", "ESteamVoiceResult::Restricted" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "UnsupportedCodec.Name", "ESteamVoiceResult::UnsupportedCodec" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamVoiceResult::OK", (int64)ESteamVoiceResult::OK },
		{ "ESteamVoiceResult::NotInitialized", (int64)ESteamVoiceResult::NotInitialized },
		{ "ESteamVoiceResult::NotRecording", (int64)ESteamVoiceResult::NotRecording },
		{ "ESteamVoiceResult::NoData", (int64)ESteamVoiceResult::NoData },
		{ "ESteamVoiceResult::BufferTooSmall", (int64)ESteamVoiceResult::BufferTooSmall },
		{ "ESteamVoiceResult::DataCorrupted", (int64)ESteamVoiceResult::DataCorrupted },
		{ "ESteamVoiceResult::Restricted", (int64)ESteamVoiceResult::Restricted },
		{ "ESteamVoiceResult::UnsupportedCodec", (int64)ESteamVoiceResult::UnsupportedCodec },
		{ "ESteamVoiceResult::ReceiverOutOfDate", (int64)ESteamVoiceResult::ReceiverOutOfDate },
		{ "ESteamVoiceResult::ReceiverDidNotAnswer", (int64)ESteamVoiceResult::ReceiverDidNotAnswer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"ESteamVoiceResult",
	"ESteamVoiceResult",
	Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult()
{
	if (!Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamVoiceResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamVoiceResult.InnerSingleton;
}
// ********** End Enum ESteamVoiceResult ***********************************************************

// ********** Begin Enum ESteamFailureType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFailureType;
static UEnum* ESteamFailureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ESteamFailureType"));
	}
	return Z_Registration_Info_UEnum_ESteamFailureType.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamFailureType>()
{
	return ESteamFailureType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlushedCallbackQueue.Name", "ESteamFailureType::FlushedCallbackQueue" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
		{ "PipeFail.Name", "ESteamFailureType::PipeFail" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamFailureType::FlushedCallbackQueue", (int64)ESteamFailureType::FlushedCallbackQueue },
		{ "ESteamFailureType::PipeFail", (int64)ESteamFailureType::PipeFail },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"ESteamFailureType",
	"ESteamFailureType",
	Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType()
{
	if (!Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamFailureType.InnerSingleton;
}
// ********** End Enum ESteamFailureType ***********************************************************

// ********** Begin ScriptStruct FClientGameServerDeny *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClientGameServerDeny;
class UScriptStruct* FClientGameServerDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClientGameServerDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClientGameServerDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGameServerDeny, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ClientGameServerDeny"));
	}
	return Z_Registration_Info_UScriptStruct_FClientGameServerDeny.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FClientGameServerDeny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerPort_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static void NewProp_bSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGameServerDeny>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientGameServerDeny, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerIP_MetaData), NewProp_GameServerIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerPort_MetaData), NewProp_GameServerPort_MetaData) };
void Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit(void* Obj)
{
	((FClientGameServerDeny*)Obj)->bSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClientGameServerDeny), &Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecure_MetaData), NewProp_bSecure_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientGameServerDeny, Reason), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamDenyReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) }; // 3860372151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ClientGameServerDeny",
	Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers),
	sizeof(FClientGameServerDeny),
	alignof(FClientGameServerDeny),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny()
{
	if (!Z_Registration_Info_UScriptStruct_FClientGameServerDeny.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClientGameServerDeny.InnerSingleton, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FClientGameServerDeny.InnerSingleton;
}
// ********** End ScriptStruct FClientGameServerDeny ***********************************************

// ********** Begin ScriptStruct FGameWebCallback **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameWebCallback;
class UScriptStruct* FGameWebCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameWebCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameWebCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameWebCallback, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GameWebCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FGameWebCallback.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameWebCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameWebCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameWebCallback, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GameWebCallback",
	Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers),
	sizeof(FGameWebCallback),
	alignof(FGameWebCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FGameWebCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameWebCallback.InnerSingleton, Z_Construct_UScriptStruct_FGameWebCallback_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameWebCallback.InnerSingleton;
}
// ********** End ScriptStruct FGameWebCallback ****************************************************

// ********** Begin ScriptStruct FGetAuthSessionTicketResponse *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse;
class UScriptStruct* FGetAuthSessionTicketResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GetAuthSessionTicketResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthTicket_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAuthSessionTicketResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, AuthTicket), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthTicket_MetaData), NewProp_AuthTicket_MetaData) }; // 3663624285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GetAuthSessionTicketResponse",
	Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers),
	sizeof(FGetAuthSessionTicketResponse),
	alignof(FGetAuthSessionTicketResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse.InnerSingleton;
}
// ********** End ScriptStruct FGetAuthSessionTicketResponse ***************************************

// ********** Begin ScriptStruct FIPCFailure *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIPCFailure;
class UScriptStruct* FIPCFailure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIPCFailure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIPCFailure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCFailure, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("IPCFailure"));
	}
	return Z_Registration_Info_UScriptStruct_FIPCFailure.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIPCFailure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCFailure>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIPCFailure, FailureType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFailureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureType_MetaData), NewProp_FailureType_MetaData) }; // 1775459436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCFailure_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"IPCFailure",
	Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers),
	sizeof(FIPCFailure),
	alignof(FIPCFailure),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure()
{
	if (!Z_Registration_Info_UScriptStruct_FIPCFailure.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIPCFailure.InnerSingleton, Z_Construct_UScriptStruct_FIPCFailure_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIPCFailure.InnerSingleton;
}
// ********** End ScriptStruct FIPCFailure *********************************************************

// ********** Begin ScriptStruct FLicensesUpdated **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLicensesUpdated;
class UScriptStruct* FLicensesUpdated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLicensesUpdated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLicensesUpdated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicensesUpdated, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("LicensesUpdated"));
	}
	return Z_Registration_Info_UScriptStruct_FLicensesUpdated.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLicensesUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicensesUpdated>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicensesUpdated_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"LicensesUpdated",
	nullptr,
	0,
	sizeof(FLicensesUpdated),
	alignof(FLicensesUpdated),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated()
{
	if (!Z_Registration_Info_UScriptStruct_FLicensesUpdated.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLicensesUpdated.InnerSingleton, Z_Construct_UScriptStruct_FLicensesUpdated_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLicensesUpdated.InnerSingleton;
}
// ********** End ScriptStruct FLicensesUpdated ****************************************************

// ********** Begin ScriptStruct FMicroTxnAuthorizationResponse ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse;
class UScriptStruct* FMicroTxnAuthorizationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("MicroTxnAuthorizationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAuthorized_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderID;
	static void NewProp_bAuthorized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthorized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMicroTxnAuthorizationResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, OrderID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderID_MetaData), NewProp_OrderID_MetaData) };
void Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit(void* Obj)
{
	((FMicroTxnAuthorizationResponse*)Obj)->bAuthorized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized = { "bAuthorized", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMicroTxnAuthorizationResponse), &Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAuthorized_MetaData), NewProp_bAuthorized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"MicroTxnAuthorizationResponse",
	Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers),
	sizeof(FMicroTxnAuthorizationResponse),
	alignof(FMicroTxnAuthorizationResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.InnerSingleton, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse.InnerSingleton;
}
// ********** End ScriptStruct FMicroTxnAuthorizationResponse **************************************

// ********** Begin ScriptStruct FSteamServersConnected ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamServersConnected;
class UScriptStruct* FSteamServersConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServersConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamServersConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersConnected, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamServersConnected"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamServersConnected.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamServersConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersConnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersConnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamServersConnected",
	nullptr,
	0,
	sizeof(FSteamServersConnected),
	alignof(FSteamServersConnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServersConnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamServersConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamServersConnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamServersConnected.InnerSingleton;
}
// ********** End ScriptStruct FSteamServersConnected **********************************************

// ********** Begin ScriptStruct FSteamServerConnectFailure ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure;
class UScriptStruct* FSteamServerConnectFailure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerConnectFailure, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamServerConnectFailure"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStillRetrying_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static void NewProp_bStillRetrying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStillRetrying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerConnectFailure>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerConnectFailure, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
void Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit(void* Obj)
{
	((FSteamServerConnectFailure*)Obj)->bStillRetrying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying = { "bStillRetrying", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamServerConnectFailure), &Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStillRetrying_MetaData), NewProp_bStillRetrying_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamServerConnectFailure",
	Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers),
	sizeof(FSteamServerConnectFailure),
	alignof(FSteamServerConnectFailure),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.InnerSingleton, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure.InnerSingleton;
}
// ********** End ScriptStruct FSteamServerConnectFailure ******************************************

// ********** Begin ScriptStruct FSteamServersDisconnected *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamServersDisconnected;
class UScriptStruct* FSteamServersDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersDisconnected, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("SteamServersDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersDisconnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServersDisconnected, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"SteamServersDisconnected",
	Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers),
	sizeof(FSteamServersDisconnected),
	alignof(FSteamServersDisconnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSteamServersDisconnected.InnerSingleton;
}
// ********** End ScriptStruct FSteamServersDisconnected *******************************************

// ********** Begin ScriptStruct FEncryptedAppTicketResponse ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse;
class UScriptStruct* FEncryptedAppTicketResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EncryptedAppTicketResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncryptedAppTicketResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncryptedAppTicketResponse, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"EncryptedAppTicketResponse",
	Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers),
	sizeof(FEncryptedAppTicketResponse),
	alignof(FEncryptedAppTicketResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.InnerSingleton, Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse.InnerSingleton;
}
// ********** End ScriptStruct FEncryptedAppTicketResponse *****************************************

// ********** Begin ScriptStruct FGetTicketForWebApiResponse ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse;
class UScriptStruct* FGetTicketForWebApiResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetTicketForWebApiResponse, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GetTicketForWebApiResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthTicket_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetTicketForWebApiResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetTicketForWebApiResponse, AuthTicket), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthTicket_MetaData), NewProp_AuthTicket_MetaData) }; // 3663624285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetTicketForWebApiResponse, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetTicketForWebApiResponse, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ticket_MetaData), NewProp_Ticket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_AuthTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewProp_Ticket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GetTicketForWebApiResponse",
	Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::PropPointers),
	sizeof(FGetTicketForWebApiResponse),
	alignof(FGetTicketForWebApiResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetTicketForWebApiResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse.InnerSingleton;
}
// ********** End ScriptStruct FGetTicketForWebApiResponse *****************************************

// ********** Begin ScriptStruct FStoreAuthURLResponse *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse;
class UScriptStruct* FStoreAuthURLResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreAuthURLResponse, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("StoreAuthURLResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreAuthURLResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoreAuthURLResponse, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"StoreAuthURLResponse",
	Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers),
	sizeof(FStoreAuthURLResponse),
	alignof(FStoreAuthURLResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.InnerSingleton, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse.InnerSingleton;
}
// ********** End ScriptStruct FStoreAuthURLResponse ***********************************************

// ********** Begin Delegate FOnClientGameServerDeny ***********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms
	{
		FClientGameServerDeny Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms, Data), Z_Construct_UScriptStruct_FClientGameServerDeny, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2289896435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnClientGameServerDeny__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClientGameServerDeny_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDeny, FClientGameServerDeny const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms
	{
		FClientGameServerDeny Data;
	};
	_Script_OrionSteamSDKAPI_eventOnClientGameServerDeny_Parms Parms;
	Parms.Data=Data;
	OnClientGameServerDeny.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnClientGameServerDeny *************************************************

// ********** Begin Delegate FOnGameWebCallback ****************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms
	{
		FGameWebCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms, Data), Z_Construct_UScriptStruct_FGameWebCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3815301243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGameWebCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameWebCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameWebCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallback, FGameWebCallback const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms
	{
		FGameWebCallback Data;
	};
	_Script_OrionSteamSDKAPI_eventOnGameWebCallback_Parms Parms;
	Parms.Data=Data;
	OnGameWebCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameWebCallback ******************************************************

// ********** Begin Delegate FOnGetAuthSessionTicketResponse ***************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms
	{
		FGetAuthSessionTicketResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3929322095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGetAuthSessionTicketResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetAuthSessionTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponse, FGetAuthSessionTicketResponse const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms
	{
		FGetAuthSessionTicketResponse Data;
	};
	_Script_OrionSteamSDKAPI_eventOnGetAuthSessionTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnGetAuthSessionTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetAuthSessionTicketResponse *****************************************

// ********** Begin Delegate FOnIPCFailure *********************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms
	{
		FIPCFailure Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms, Data), Z_Construct_UScriptStruct_FIPCFailure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2522375313
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnIPCFailure__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIPCFailure_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailure, FIPCFailure const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms
	{
		FIPCFailure Data;
	};
	_Script_OrionSteamSDKAPI_eventOnIPCFailure_Parms Parms;
	Parms.Data=Data;
	OnIPCFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnIPCFailure ***********************************************************

// ********** Begin Delegate FOnLicensesUpdated ****************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms
	{
		FLicensesUpdated Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms, Data), Z_Construct_UScriptStruct_FLicensesUpdated, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 650239090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnLicensesUpdated__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLicensesUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLicensesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdated, FLicensesUpdated const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms
	{
		FLicensesUpdated Data;
	};
	_Script_OrionSteamSDKAPI_eventOnLicensesUpdated_Parms Parms;
	Parms.Data=Data;
	OnLicensesUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLicensesUpdated ******************************************************

// ********** Begin Delegate FOnMicroTxnAuthorizationResponse **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms
	{
		FMicroTxnAuthorizationResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms, Data), Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1853812253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnMicroTxnAuthorizationResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMicroTxnAuthorizationResponse_DelegateWrapper(const FMulticastScriptDelegate& OnMicroTxnAuthorizationResponse, FMicroTxnAuthorizationResponse const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms
	{
		FMicroTxnAuthorizationResponse Data;
	};
	_Script_OrionSteamSDKAPI_eventOnMicroTxnAuthorizationResponse_Parms Parms;
	Parms.Data=Data;
	OnMicroTxnAuthorizationResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMicroTxnAuthorizationResponse ****************************************

// ********** Begin Delegate FOnSteamServersConnected **********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms
	{
		FSteamServersConnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamServersConnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3755143615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamServersConnected__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamServersConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnected, FSteamServersConnected const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms
	{
		FSteamServersConnected Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamServersConnected_Parms Parms;
	Parms.Data=Data;
	OnSteamServersConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamServersConnected ************************************************

// ********** Begin Delegate FOnSteamServerConnectFailure ******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms
	{
		FSteamServerConnectFailure Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms, Data), Z_Construct_UScriptStruct_FSteamServerConnectFailure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2466063314
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamServerConnectFailure__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamServerConnectFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailure, FSteamServerConnectFailure const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms
	{
		FSteamServerConnectFailure Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamServerConnectFailure_Parms Parms;
	Parms.Data=Data;
	OnSteamServerConnectFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamServerConnectFailure ********************************************

// ********** Begin Delegate FOnSteamServersDisconnected *******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms
	{
		FSteamServersDisconnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamServersDisconnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1701375020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamServersDisconnected__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamServersDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnected, FSteamServersDisconnected const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms
	{
		FSteamServersDisconnected Data;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamServersDisconnected_Parms Parms;
	Parms.Data=Data;
	OnSteamServersDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamServersDisconnected *********************************************

// ********** Begin Delegate FOnValidateAuthTicketResponse *****************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms
	{
		FValidateAuthTicketResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1864840003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnValidateAuthTicketResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms
	{
		FValidateAuthTicketResponse Data;
	};
	_Script_OrionSteamSDKAPI_eventOnValidateAuthTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnValidateAuthTicketResponse *******************************************

// ********** Begin Delegate FOnRequestEncryptedAppTicketResponse **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms
	{
		FEncryptedAppTicketResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 402256911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestEncryptedAppTicketResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEncryptedAppTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEncryptedAppTicketResponse, FEncryptedAppTicketResponse const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms
	{
		FEncryptedAppTicketResponse Data;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnRequestEncryptedAppTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEncryptedAppTicketResponse ************************************

// ********** Begin Delegate FOnGetTicketForWebApiResponse *****************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms
	{
		FGetTicketForWebApiResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms, Data), Z_Construct_UScriptStruct_FGetTicketForWebApiResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3906394428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGetTicketForWebApiResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetTicketForWebApiResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetTicketForWebApiResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetTicketForWebApiResponse, FGetTicketForWebApiResponse const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms
	{
		FGetTicketForWebApiResponse Data;
	};
	_Script_OrionSteamSDKAPI_eventOnGetTicketForWebApiResponse_Parms Parms;
	Parms.Data=Data;
	OnGetTicketForWebApiResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetTicketForWebApiResponse *******************************************

// ********** Begin Delegate FOnRequestEncryptedAppTicket ******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 402256911
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestEncryptedAppTicket__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEncryptedAppTicket_DelegateWrapper(const FScriptDelegate& OnRequestEncryptedAppTicket, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestEncryptedAppTicket_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEncryptedAppTicket.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEncryptedAppTicket ********************************************

// ********** Begin Delegate FOnStoreAuthURLResponse ***********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4157254683
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnStoreAuthURLResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoreAuthURLResponse_DelegateWrapper(const FScriptDelegate& OnStoreAuthURLResponse, FStoreAuthURLResponse const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnStoreAuthURLResponse_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnStoreAuthURLResponse.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStoreAuthURLResponse *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamVoiceResult_StaticEnum, TEXT("ESteamVoiceResult"), &Z_Registration_Info_UEnum_ESteamVoiceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2074620593U) },
		{ ESteamFailureType_StaticEnum, TEXT("ESteamFailureType"), &Z_Registration_Info_UEnum_ESteamFailureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1775459436U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClientGameServerDeny::StaticStruct, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewStructOps, TEXT("ClientGameServerDeny"), &Z_Registration_Info_UScriptStruct_FClientGameServerDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientGameServerDeny), 2289896435U) },
		{ FGameWebCallback::StaticStruct, Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewStructOps, TEXT("GameWebCallback"), &Z_Registration_Info_UScriptStruct_FGameWebCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameWebCallback), 3815301243U) },
		{ FGetAuthSessionTicketResponse::StaticStruct, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewStructOps, TEXT("GetAuthSessionTicketResponse"), &Z_Registration_Info_UScriptStruct_FGetAuthSessionTicketResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetAuthSessionTicketResponse), 3929322095U) },
		{ FIPCFailure::StaticStruct, Z_Construct_UScriptStruct_FIPCFailure_Statics::NewStructOps, TEXT("IPCFailure"), &Z_Registration_Info_UScriptStruct_FIPCFailure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIPCFailure), 2522375313U) },
		{ FLicensesUpdated::StaticStruct, Z_Construct_UScriptStruct_FLicensesUpdated_Statics::NewStructOps, TEXT("LicensesUpdated"), &Z_Registration_Info_UScriptStruct_FLicensesUpdated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLicensesUpdated), 650239090U) },
		{ FMicroTxnAuthorizationResponse::StaticStruct, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewStructOps, TEXT("MicroTxnAuthorizationResponse"), &Z_Registration_Info_UScriptStruct_FMicroTxnAuthorizationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMicroTxnAuthorizationResponse), 1853812253U) },
		{ FSteamServersConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamServersConnected_Statics::NewStructOps, TEXT("SteamServersConnected"), &Z_Registration_Info_UScriptStruct_FSteamServersConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServersConnected), 3755143615U) },
		{ FSteamServerConnectFailure::StaticStruct, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewStructOps, TEXT("SteamServerConnectFailure"), &Z_Registration_Info_UScriptStruct_FSteamServerConnectFailure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServerConnectFailure), 2466063314U) },
		{ FSteamServersDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewStructOps, TEXT("SteamServersDisconnected"), &Z_Registration_Info_UScriptStruct_FSteamServersDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServersDisconnected), 1701375020U) },
		{ FEncryptedAppTicketResponse::StaticStruct, Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewStructOps, TEXT("EncryptedAppTicketResponse"), &Z_Registration_Info_UScriptStruct_FEncryptedAppTicketResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncryptedAppTicketResponse), 402256911U) },
		{ FGetTicketForWebApiResponse::StaticStruct, Z_Construct_UScriptStruct_FGetTicketForWebApiResponse_Statics::NewStructOps, TEXT("GetTicketForWebApiResponse"), &Z_Registration_Info_UScriptStruct_FGetTicketForWebApiResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetTicketForWebApiResponse), 3906394428U) },
		{ FStoreAuthURLResponse::StaticStruct, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewStructOps, TEXT("StoreAuthURLResponse"), &Z_Registration_Info_UScriptStruct_FStoreAuthURLResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoreAuthURLResponse), 4157254683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_2499130813(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
