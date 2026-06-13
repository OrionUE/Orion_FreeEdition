// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamId();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOrionSteamId *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOrionSteamId;
class UScriptStruct* FOrionSteamId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOrionSteamId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOrionSteamId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrionSteamId, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("OrionSteamId"));
	}
	return Z_Registration_Info_UScriptStruct_FOrionSteamId.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOrionSteamId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrionSteamId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOrionSteamId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOrionSteamId, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrionSteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrionSteamId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrionSteamId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"OrionSteamId",
	Z_Construct_UScriptStruct_FOrionSteamId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamId_Statics::PropPointers),
	sizeof(FOrionSteamId),
	alignof(FOrionSteamId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrionSteamId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrionSteamId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamId()
{
	if (!Z_Registration_Info_UScriptStruct_FOrionSteamId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOrionSteamId.InnerSingleton, Z_Construct_UScriptStruct_FOrionSteamId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOrionSteamId.InnerSingleton;
}
// ********** End ScriptStruct FOrionSteamId *******************************************************

// ********** Begin Enum EOrionSteamPersonaState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamPersonaState;
static UEnum* EOrionSteamPersonaState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamPersonaState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamPersonaState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamPersonaState"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamPersonaState.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamPersonaState>()
{
	return EOrionSteamPersonaState_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Away.Name", "EOrionSteamPersonaState::Away" },
		{ "BlueprintType", "true" },
		{ "Busy.Name", "EOrionSteamPersonaState::Busy" },
		{ "LookingToPlay.Name", "EOrionSteamPersonaState::LookingToPlay" },
		{ "LookingToTrade.Name", "EOrionSteamPersonaState::LookingToTrade" },
		{ "Max.Name", "EOrionSteamPersonaState::Max" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamTypes.h" },
		{ "Offline.Name", "EOrionSteamPersonaState::Offline" },
		{ "Online.Name", "EOrionSteamPersonaState::Online" },
		{ "Snooze.Name", "EOrionSteamPersonaState::Snooze" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamPersonaState::Offline", (int64)EOrionSteamPersonaState::Offline },
		{ "EOrionSteamPersonaState::Online", (int64)EOrionSteamPersonaState::Online },
		{ "EOrionSteamPersonaState::Busy", (int64)EOrionSteamPersonaState::Busy },
		{ "EOrionSteamPersonaState::Away", (int64)EOrionSteamPersonaState::Away },
		{ "EOrionSteamPersonaState::Snooze", (int64)EOrionSteamPersonaState::Snooze },
		{ "EOrionSteamPersonaState::LookingToTrade", (int64)EOrionSteamPersonaState::LookingToTrade },
		{ "EOrionSteamPersonaState::LookingToPlay", (int64)EOrionSteamPersonaState::LookingToPlay },
		{ "EOrionSteamPersonaState::Max", (int64)EOrionSteamPersonaState::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamPersonaState",
	"EOrionSteamPersonaState",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamPersonaState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamPersonaState.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamPersonaState.InnerSingleton;
}
// ********** End Enum EOrionSteamPersonaState *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionSteamPersonaState_StaticEnum, TEXT("EOrionSteamPersonaState"), &Z_Registration_Info_UEnum_EOrionSteamPersonaState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1911211830U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOrionSteamId::StaticStruct, Z_Construct_UScriptStruct_FOrionSteamId_Statics::NewStructOps, TEXT("OrionSteamId"), &Z_Registration_Info_UScriptStruct_FOrionSteamId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrionSteamId), 3522859118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_3247530487(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
