// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/WebUserStatsAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebUserStatsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForAppAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms
	{
		UObject* WorldContextObject;
		FString GameId;
		UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the global achievement percentages for the specified app.\n\x09 *\n\x09 * @param\x09GameId\x09\x09GameID to retrieve the achievement percentages for\n\x09 */" },
#endif
		{ "DisplayName", "Get Global Achievement Percentages for App" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the global achievement percentages for the specified app.\n\n@param       GameId          GameID to retrieve the achievement percentages for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, GameId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp, nullptr, "GetGlobalAchievementPercentagesForAppAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForAppAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(Z_Param_WorldContextObject,Z_Param_GameId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForAppAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp ********
void UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalAchievementPercentagesForAppAsync", &UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForAppAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp;
UClass* UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync, "GetGlobalAchievementPercentagesForAppAsync" }, // 3193952753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp);
UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::~UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame Function GetGlobalStatsForGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		TArray<FString> Names;
		int32 StartDate;
		int32 EndDate;
		UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the global stats percentages for the specified app.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09""AppID that we're getting global stats for\n\x09 * @param\x09Names\x09\x09\x09Names of stat to get data for\n\x09 * @param\x09StartDate\x09\x09Start date for daily totals (unix epoch timestamp)\n\x09 * @param\x09""EndDate\x09\x09\x09""End date for daily totals (unix epoch timestamp)\n\x09 */" },
#endif
		{ "DisplayName", "Get Global Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the global stats percentages for the specified app.\n\n@param       AppId                   AppID that we're getting global stats for\n@param       Names                   Names of stat to get data for\n@param       StartDate               Start date for daily totals (unix epoch timestamp)\n@param       EndDate                 End date for daily totals (unix epoch timestamp)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, StartDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame, nullptr, "GetGlobalStatsForGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_AppId,Z_Param_Names,Z_Param_StartDate,Z_Param_EndDate);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame Function GetGlobalStatsForGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame ************************
void UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetGlobalStatsForGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalStatsForGameAsync", &UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame;
UClass* UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetGlobalStatsForGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetGlobalStatsForGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync, "GetGlobalStatsForGameAsync" }, // 1431773452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame);
UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::~UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the total number of players currently active in the specified app on Steam.\n\x09 *\n\x09 * Note that this will not return players that are playing while not connected to Steam.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09""AppID that we're getting user count for\n\x09 */" },
#endif
		{ "DisplayName", "Get Number of Current Players" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the total number of players currently active in the specified app on Steam.\n\nNote that this will not return players that are playing while not connected to Steam.\n\n@param       AppId                   AppID that we're getting user count for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayersAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(Z_Param_WorldContextObject,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers ********************
void UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumberOfCurrentPlayersAsync", &UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers;
UClass* UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync, "GetNumberOfCurrentPlayersAsync" }, // 2990499217
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers);
UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::~UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers **********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerAchievements Function GetPlayerAchievementsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString language;
		UOrionSteamWebAPIAsyncActionGetPlayerAchievements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the list of achievements the specified user has unlocked in an app.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamId of user\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09 * @param\x09language\x09\x09Language to return strings for\n\x09 */" },
#endif
		{ "CPP_Default_language", "english" },
		{ "DisplayName", "Get Player Achievements" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the list of achievements the specified user has unlocked in an app.\n\n@param       Key                             Steamworks Web API user authentication Key.\n@param       SteamId                 SteamId of user\n@param       AppId                   AppID to get achievements for\n@param       language                Language to return strings for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements, nullptr, "GetPlayerAchievementsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::OrionSteamWebAPIAsyncActionGetPlayerAchievements_eventGetPlayerAchievementsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPlayerAchievements::execGetPlayerAchievementsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPlayerAchievements**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPlayerAchievements::GetPlayerAchievementsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerAchievements Function GetPlayerAchievementsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPlayerAchievements ************************
void UOrionSteamWebAPIAsyncActionGetPlayerAchievements::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerAchievements()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPlayerAchievements::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerAchievementsAsync", &UOrionSteamWebAPIAsyncActionGetPlayerAchievements::execGetPlayerAchievementsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements;
UClass* UOrionSteamWebAPIAsyncActionGetPlayerAchievements::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPlayerAchievements;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPlayerAchievements"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPlayerAchievements,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPlayerAchievements::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPlayerAchievements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPlayerAchievements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync, "GetPlayerAchievementsAsync" }, // 783476244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPlayerAchievements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPlayerAchievements::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPlayerAchievements::UOrionSteamWebAPIAsyncActionGetPlayerAchievements() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPlayerAchievements);
UOrionSteamWebAPIAsyncActionGetPlayerAchievements::~UOrionSteamWebAPIAsyncActionGetPlayerAchievements() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPlayerAchievements **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSchemaForGame Function GetSchemaForGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString language;
		UOrionSteamWebAPIAsyncActionGetSchemaForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the complete list of stats and achievements for the specified game.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09 * @param\x09language\x09\x09Language to return strings for\n\x09 */" },
#endif
		{ "CPP_Default_language", "english" },
		{ "DisplayName", "Get Schema for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the complete list of stats and achievements for the specified game.\n\n@param       Key                             Steamworks Web API user authentication Key.\n@param       AppId                   AppID to get achievements for\n@param       language                Language to return strings for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame, nullptr, "GetSchemaForGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetSchemaForGame_eventGetSchemaForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetSchemaForGame::execGetSchemaForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetSchemaForGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetSchemaForGame::GetSchemaForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_language);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSchemaForGame Function GetSchemaForGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetSchemaForGame *****************************
void UOrionSteamWebAPIAsyncActionGetSchemaForGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSchemaForGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetSchemaForGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSchemaForGameAsync", &UOrionSteamWebAPIAsyncActionGetSchemaForGame::execGetSchemaForGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame;
UClass* UOrionSteamWebAPIAsyncActionGetSchemaForGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetSchemaForGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetSchemaForGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetSchemaForGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetSchemaForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetSchemaForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetSchemaForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetSchemaForGame_GetSchemaForGameAsync, "GetSchemaForGameAsync" }, // 1269897814
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetSchemaForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetSchemaForGame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetSchemaForGame::UOrionSteamWebAPIAsyncActionGetSchemaForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetSchemaForGame);
UOrionSteamWebAPIAsyncActionGetSchemaForGame::~UOrionSteamWebAPIAsyncActionGetSchemaForGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetSchemaForGame *******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserStatsForGame Function GetUserStatsForGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionGetUserStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the list of stats that the specified user has set in an app.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamId of user\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09 */" },
#endif
		{ "DisplayName", "Get User Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the list of stats that the specified user has set in an app.\n\n@param       Key                             Steamworks Web API user authentication Key.\n@param       SteamId                 SteamId of user\n@param       AppId                   AppID to get achievements for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame, nullptr, "GetUserStatsForGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionGetUserStatsForGame_eventGetUserStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetUserStatsForGame::execGetUserStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetUserStatsForGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetUserStatsForGame::GetUserStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserStatsForGame Function GetUserStatsForGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserStatsForGame **************************
void UOrionSteamWebAPIAsyncActionGetUserStatsForGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserStatsForGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetUserStatsForGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserStatsForGameAsync", &UOrionSteamWebAPIAsyncActionGetUserStatsForGame::execGetUserStatsForGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame;
UClass* UOrionSteamWebAPIAsyncActionGetUserStatsForGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetUserStatsForGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetUserStatsForGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserStatsForGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetUserStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetUserStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetUserStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync, "GetUserStatsForGameAsync" }, // 1740068634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetUserStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetUserStatsForGame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetUserStatsForGame::UOrionSteamWebAPIAsyncActionGetUserStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetUserStatsForGame);
UOrionSteamWebAPIAsyncActionGetUserStatsForGame::~UOrionSteamWebAPIAsyncActionGetUserStatsForGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUserStatsForGame ****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetUserStatsForGame Function SetUserStatsForGameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		TArray<FString> Names;
		TArray<int32> Values;
		UOrionSteamWebAPIAsyncActionSetUserStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a stat for the specified user for the game.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09SteamId of user\n\x09 * @param\x09""AppId\x09\x09\x09""AppID to get achievements for\n\x09 * @param\x09Names\x09\x09\x09Names of stat or achievement to set\n\x09 * @param\x09Values\x09\x09\x09Values to set\n\x09 */" },
#endif
		{ "DisplayName", "Set User Stats for Game" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a stat for the specified user for the game.\n\n@param       Key                             Steamworks Web API user authentication Key.\n@param       SteamId                 SteamId of user\n@param       AppId                   AppID to get achievements for\n@param       Names                   Names of stat or achievement to set\n@param       Values                  Values to set" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame, nullptr, "SetUserStatsForGameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::OrionSteamWebAPIAsyncActionSetUserStatsForGame_eventSetUserStatsForGameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionSetUserStatsForGame::execSetUserStatsForGameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_TARRAY(int32,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionSetUserStatsForGame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionSetUserStatsForGame::SetUserStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_Names,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionSetUserStatsForGame Function SetUserStatsForGameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetUserStatsForGame **************************
void UOrionSteamWebAPIAsyncActionSetUserStatsForGame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetUserStatsForGame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionSetUserStatsForGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUserStatsForGameAsync", &UOrionSteamWebAPIAsyncActionSetUserStatsForGame::execSetUserStatsForGameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame;
UClass* UOrionSteamWebAPIAsyncActionSetUserStatsForGame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionSetUserStatsForGame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionSetUserStatsForGame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetUserStatsForGame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionSetUserStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionSetUserStatsForGame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/WebUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionSetUserStatsForGame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync, "SetUserStatsForGameAsync" }, // 547395758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionSetUserStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionSetUserStatsForGame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionSetUserStatsForGame::UOrionSteamWebAPIAsyncActionSetUserStatsForGame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionSetUserStatsForGame);
UOrionSteamWebAPIAsyncActionSetUserStatsForGame::~UOrionSteamWebAPIAsyncActionSetUserStatsForGame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionSetUserStatsForGame ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp, UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp), 1980797280U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame, UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame), 4161234106U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers, UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers), 762411203U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements, UOrionSteamWebAPIAsyncActionGetPlayerAchievements::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPlayerAchievements"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPlayerAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPlayerAchievements), 3101574548U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame, UOrionSteamWebAPIAsyncActionGetSchemaForGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetSchemaForGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetSchemaForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetSchemaForGame), 2755713174U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame, UOrionSteamWebAPIAsyncActionGetUserStatsForGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetUserStatsForGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUserStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetUserStatsForGame), 3073652949U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame, UOrionSteamWebAPIAsyncActionSetUserStatsForGame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionSetUserStatsForGame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUserStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionSetUserStatsForGame), 9562614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_OrionSteamWebAPI_2678706253(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStatsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
