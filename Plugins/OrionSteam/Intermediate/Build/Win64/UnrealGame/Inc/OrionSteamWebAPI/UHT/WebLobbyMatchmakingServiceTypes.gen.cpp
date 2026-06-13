// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingServiceTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UEnum* Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOrionSteamWebAPILobbyType ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType;
static UEnum* EOrionSteamWebAPILobbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType, (UObject*)Z_Construct_UPackage__Script_OrionSteamWebAPI(), TEXT("EOrionSteamWebAPILobbyType"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.OuterSingleton;
}
template<> ORIONSTEAMWEBAPI_API UEnum* StaticEnum<EOrionSteamWebAPILobbyType>()
{
	return EOrionSteamWebAPILobbyType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n// lobby type description\n" },
#endif
		{ "FriendsOnly.Name", "EOrionSteamWebAPILobbyType::FriendsOnly" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h" },
		{ "Private.Name", "EOrionSteamWebAPILobbyType::Private" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nlobby type description" },
#endif
		{ "TypeInvisible.Name", "EOrionSteamWebAPILobbyType::TypeInvisible" },
		{ "TypePublic.Name", "EOrionSteamWebAPILobbyType::TypePublic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamWebAPILobbyType::Private", (int64)EOrionSteamWebAPILobbyType::Private },
		{ "EOrionSteamWebAPILobbyType::FriendsOnly", (int64)EOrionSteamWebAPILobbyType::FriendsOnly },
		{ "EOrionSteamWebAPILobbyType::TypePublic", (int64)EOrionSteamWebAPILobbyType::TypePublic },
		{ "EOrionSteamWebAPILobbyType::TypeInvisible", (int64)EOrionSteamWebAPILobbyType::TypeInvisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
	nullptr,
	"EOrionSteamWebAPILobbyType",
	"EOrionSteamWebAPILobbyType",
	Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.InnerSingleton, Z_Construct_UEnum_OrionSteamWebAPI_EOrionSteamWebAPILobbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType.InnerSingleton;
}
// ********** End Enum EOrionSteamWebAPILobbyType **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionSteamWebAPILobbyType_StaticEnum, TEXT("EOrionSteamWebAPILobbyType"), &Z_Registration_Info_UEnum_EOrionSteamWebAPILobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1728016212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_OrionSteamWebAPI_3352378470(TEXT("/Script/OrionSteamWebAPI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_OrionSteamWebAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_OrionSteamWebAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
