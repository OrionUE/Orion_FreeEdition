// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServerStats/WebSteamGameServerStats.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebSteamGameServerStats() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebSteamGameServerStats();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebSteamGameServerStats Function GetGameServerPlayerStatsForGame ********
struct Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics
{
	struct WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString GameId;
		int32 AppId;
		FString RangeStart;
		FString RangeEnd;
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|SteamGameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Game Server Player Stats For Game\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09GameId\x09\x09\x09game id to get stats for, if not a mod, it's safe to use appid here\n\x09 * @param\x09""AppId\x09\x09\x09""appID of the game\n\x09 * @param\x09RangeStart\x09\x09range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09 * @param\x09RangeEnd\x09\x09range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09 * @param\x09MaxResults\x09\x09Max number of results to return (up to 1000)\n\x09 */" },
#endif
		{ "CPP_Default_MaxResults", "1000" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Game Server Player Stats For Game\n\n@param       Key                             Steamworks Web API publisher authentication key.\n@param       GameId                  game id to get stats for, if not a mod, it's safe to use appid here\n@param       AppId                   appID of the game\n@param       RangeStart              range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param       RangeEnd                range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param       MaxResults              Max number of results to return (up to 1000)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, GameId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamGameServerStats, nullptr, "GetGameServerPlayerStatsForGame", Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FStrProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGameServerPlayerStatsForGame(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_GameId,Z_Param_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class UWebSteamGameServerStats Function GetGameServerPlayerStatsForGame **********

// ********** Begin Class UWebSteamGameServerStats *************************************************
void UWebSteamGameServerStats::StaticRegisterNativesUWebSteamGameServerStats()
{
	UClass* Class = UWebSteamGameServerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameServerPlayerStatsForGame", &UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWebSteamGameServerStats;
UClass* UWebSteamGameServerStats::GetPrivateStaticClass()
{
	using TClass = UWebSteamGameServerStats;
	if (!Z_Registration_Info_UClass_UWebSteamGameServerStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WebSteamGameServerStats"),
			Z_Registration_Info_UClass_UWebSteamGameServerStats.InnerSingleton,
			StaticRegisterNativesUWebSteamGameServerStats,
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
	return Z_Registration_Info_UClass_UWebSteamGameServerStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister()
{
	return UWebSteamGameServerStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebSteamGameServerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/WebSteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame, "GetGameServerPlayerStatsForGame" }, // 1938193711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamGameServerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebSteamGameServerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamGameServerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams = {
	&UWebSteamGameServerStats::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSteamGameServerStats()
{
	if (!Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton, Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamGameServerStats);
UWebSteamGameServerStats::~UWebSteamGameServerStats() {}
// ********** End Class UWebSteamGameServerStats ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamGameServerStats, UWebSteamGameServerStats::StaticClass, TEXT("UWebSteamGameServerStats"), &Z_Registration_Info_UClass_UWebSteamGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamGameServerStats), 2681972484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h__Script_OrionSteamWebAPI_391960082(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
