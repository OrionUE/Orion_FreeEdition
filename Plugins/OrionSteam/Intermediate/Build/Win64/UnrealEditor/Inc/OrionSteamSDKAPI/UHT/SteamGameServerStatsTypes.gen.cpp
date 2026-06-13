// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServerStats/SteamGameServerStatsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamGameServerStatsTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsReceived();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsStored();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGSStatsUnloaded();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGSStatsReceived **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSStatsReceived;
class UScriptStruct* FGSStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsReceived, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GSStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsReceived.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGSStatsReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsReceived>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSStatsReceived, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSStatsReceived, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsReceived_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GSStatsReceived",
	Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::PropPointers),
	sizeof(FGSStatsReceived),
	alignof(FGSStatsReceived),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsReceived_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSStatsReceived_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSStatsReceived()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsReceived.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsReceived_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsReceived.InnerSingleton;
}
// ********** End ScriptStruct FGSStatsReceived ****************************************************

// ********** Begin ScriptStruct FGSStatsStored ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSStatsStored;
class UScriptStruct* FGSStatsStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSStatsStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsStored, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GSStatsStored"));
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsStored.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGSStatsStored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsStored>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSStatsStored, Result), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2505325344
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSStatsStored, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsStored_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GSStatsStored",
	Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::PropPointers),
	sizeof(FGSStatsStored),
	alignof(FGSStatsStored),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsStored_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSStatsStored_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSStatsStored()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsStored.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSStatsStored.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsStored_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsStored.InnerSingleton;
}
// ********** End ScriptStruct FGSStatsStored ******************************************************

// ********** Begin ScriptStruct FGSStatsUnloaded **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSStatsUnloaded;
class UScriptStruct* FGSStatsUnloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSStatsUnloaded, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("GSStatsUnloaded"));
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSStatsUnloaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"GSStatsUnloaded",
	Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::PropPointers),
	sizeof(FGSStatsUnloaded),
	alignof(FGSStatsUnloaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSStatsUnloaded()
{
	if (!Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.InnerSingleton, Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGSStatsUnloaded.InnerSingleton;
}
// ********** End ScriptStruct FGSStatsUnloaded ****************************************************

// ********** Begin Delegate FOnServerRequestUserStats *********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms
	{
		FGSStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms, Data), Z_Construct_UScriptStruct_FGSStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4263848840
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnServerRequestUserStats__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRequestUserStats_DelegateWrapper(const FScriptDelegate& OnServerRequestUserStats, FGSStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms
	{
		FGSStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnServerRequestUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRequestUserStats.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnServerRequestUserStats ***********************************************

// ********** Begin Delegate FOnServerStoreUserStats ***********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms
	{
		FGSStatsStored Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms, Data), Z_Construct_UScriptStruct_FGSStatsStored, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3531240060
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnServerStoreUserStats__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms
	{
		FGSStatsStored Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnServerStoreUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerStoreUserStats.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnServerStoreUserStats *************************************************

// ********** Begin Delegate FOnGSStatsUnloaded ****************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms
	{
		FGSStatsUnloaded Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms, Data), Z_Construct_UScriptStruct_FGSStatsUnloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2290427912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGSStatsUnloaded__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms
	{
		FGSStatsUnloaded Data;
	};
	_Script_OrionSteamSDKAPI_eventOnGSStatsUnloaded_Parms Parms;
	Parms.Data=Data;
	OnGSStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSStatsUnloaded ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FGSStatsReceived_Statics::NewStructOps, TEXT("GSStatsReceived"), &Z_Registration_Info_UScriptStruct_FGSStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsReceived), 4263848840U) },
		{ FGSStatsStored::StaticStruct, Z_Construct_UScriptStruct_FGSStatsStored_Statics::NewStructOps, TEXT("GSStatsStored"), &Z_Registration_Info_UScriptStruct_FGSStatsStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsStored), 3531240060U) },
		{ FGSStatsUnloaded::StaticStruct, Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics::NewStructOps, TEXT("GSStatsUnloaded"), &Z_Registration_Info_UScriptStruct_FGSStatsUnloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSStatsUnloaded), 2290427912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h__Script_OrionSteamSDKAPI_62966305(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
