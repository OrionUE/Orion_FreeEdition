// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/WebSteamUserTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebSteamUserTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UEnum* Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVanityUrlType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVanityUrlType;
static UEnum* EVanityUrlType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType, (UObject*)Z_Construct_UPackage__Script_OrionSteamWebAPI(), TEXT("EVanityUrlType"));
	}
	return Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton;
}
template<> ORIONSTEAMWEBAPI_API UEnum* StaticEnum<EVanityUrlType>()
{
	return EVanityUrlType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Group.Name", "EVanityUrlType::Group" },
		{ "Individual.Name", "EVanityUrlType::Individual" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserTypes.h" },
		{ "OfficialGameGroup.Name", "EVanityUrlType::OfficialGameGroup" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVanityUrlType::Individual", (int64)EVanityUrlType::Individual },
		{ "EVanityUrlType::Group", (int64)EVanityUrlType::Group },
		{ "EVanityUrlType::OfficialGameGroup", (int64)EVanityUrlType::OfficialGameGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
	nullptr,
	"EVanityUrlType",
	"EVanityUrlType",
	Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType()
{
	if (!Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton, Z_Construct_UEnum_OrionSteamWebAPI_EVanityUrlType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton;
}
// ********** End Enum EVanityUrlType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserTypes_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVanityUrlType_StaticEnum, TEXT("EVanityUrlType"), &Z_Registration_Info_UEnum_EVanityUrlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 270422063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserTypes_h__Script_OrionSteamWebAPI_3550321244(TEXT("/Script/OrionSteamWebAPI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserTypes_h__Script_OrionSteamWebAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserTypes_h__Script_OrionSteamWebAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
