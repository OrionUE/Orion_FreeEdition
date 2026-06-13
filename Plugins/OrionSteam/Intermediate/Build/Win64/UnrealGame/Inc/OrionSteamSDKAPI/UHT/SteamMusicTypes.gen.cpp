// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMusic/SteamMusicTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamMusicTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamAudioPlaybackStatus *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus;
static UEnum* ESteamAudioPlaybackStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ESteamAudioPlaybackStatus"));
	}
	return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>()
{
	return ESteamAudioPlaybackStatus_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Idle.Name", "ESteamAudioPlaybackStatus::Idle" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "Paused.Name", "ESteamAudioPlaybackStatus::Paused" },
		{ "Playing.Name", "ESteamAudioPlaybackStatus::Playing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "Undefined.Name", "ESteamAudioPlaybackStatus::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamAudioPlaybackStatus::Undefined", (int64)ESteamAudioPlaybackStatus::Undefined },
		{ "ESteamAudioPlaybackStatus::Playing", (int64)ESteamAudioPlaybackStatus::Playing },
		{ "ESteamAudioPlaybackStatus::Paused", (int64)ESteamAudioPlaybackStatus::Paused },
		{ "ESteamAudioPlaybackStatus::Idle", (int64)ESteamAudioPlaybackStatus::Idle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"ESteamAudioPlaybackStatus",
	"ESteamAudioPlaybackStatus",
	Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus()
{
	if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAudioPlaybackStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton;
}
// ********** End Enum ESteamAudioPlaybackStatus ***************************************************

// ********** Begin ScriptStruct FPlaybackStatusHasChanged *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged;
class UScriptStruct* FPlaybackStatusHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("PlaybackStatusHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaybackStatusHasChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"PlaybackStatusHasChanged",
	nullptr,
	0,
	sizeof(FPlaybackStatusHasChanged),
	alignof(FPlaybackStatusHasChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged.InnerSingleton;
}
// ********** End ScriptStruct FPlaybackStatusHasChanged *******************************************

// ********** Begin ScriptStruct FVolumeHasChanged *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVolumeHasChanged;
class UScriptStruct* FVolumeHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVolumeHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVolumeHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeHasChanged, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("VolumeHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FVolumeHasChanged.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeHasChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeHasChanged, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"VolumeHasChanged",
	Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers),
	sizeof(FVolumeHasChanged),
	alignof(FVolumeHasChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged()
{
	if (!Z_Registration_Info_UScriptStruct_FVolumeHasChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVolumeHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVolumeHasChanged.InnerSingleton;
}
// ********** End ScriptStruct FVolumeHasChanged ***************************************************

// ********** Begin Delegate FOnPlaybackStatusHasChanged *******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms
	{
		FPlaybackStatusHasChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms, Data), Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2988373119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnPlaybackStatusHasChanged__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms
	{
		FPlaybackStatusHasChanged Data;
	};
	_Script_OrionSteamSDKAPI_eventOnPlaybackStatusHasChanged_Parms Parms;
	Parms.Data=Data;
	OnPlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlaybackStatusHasChanged *********************************************

// ********** Begin Delegate FOnVolumeHasChanged ***************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms
	{
		FVolumeHasChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms, Data), Z_Construct_UScriptStruct_FVolumeHasChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2900853461
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnVolumeHasChanged__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data)
{
	struct _Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms
	{
		FVolumeHasChanged Data;
	};
	_Script_OrionSteamSDKAPI_eventOnVolumeHasChanged_Parms Parms;
	Parms.Data=Data;
	OnVolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnVolumeHasChanged *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamAudioPlaybackStatus_StaticEnum, TEXT("ESteamAudioPlaybackStatus"), &Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2624482108U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlaybackStatusHasChanged::StaticStruct, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::NewStructOps, TEXT("PlaybackStatusHasChanged"), &Z_Registration_Info_UScriptStruct_FPlaybackStatusHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaybackStatusHasChanged), 2988373119U) },
		{ FVolumeHasChanged::StaticStruct, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewStructOps, TEXT("VolumeHasChanged"), &Z_Registration_Info_UScriptStruct_FVolumeHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeHasChanged), 2900853461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_2877211349(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
