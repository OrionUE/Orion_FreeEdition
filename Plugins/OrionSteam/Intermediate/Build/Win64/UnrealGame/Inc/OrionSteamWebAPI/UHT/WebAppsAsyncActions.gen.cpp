// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apps/WebAppsAsyncActions.h"
#include "OrionSteamWebAPI/SteamWebTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebAppsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListAsyncCallback__DelegateSignature();
ORIONSTEAMWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppBetas Function GetAppBetasAsync **********
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		UOrionSteamAppsAsyncActionGetAppBetas* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets all of the beta branches for the specified application.\n\x09 *\n\x09 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09 */" },
#endif
		{ "DisplayName", "Get App Betas" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication key.\n@param       AppID           The App ID to get the betas of." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas, nullptr, "GetAppBetasAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::OrionSteamAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetAppBetas::execGetAppBetasAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetAppBetas**)Z_Param__Result=UOrionSteamAppsAsyncActionGetAppBetas::GetAppBetasAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetAppBetas Function GetAppBetasAsync ************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppBetas ************************************
void UOrionSteamAppsAsyncActionGetAppBetas::StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppBetas()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetAppBetas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppBetasAsync", &UOrionSteamAppsAsyncActionGetAppBetas::execGetAppBetasAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas;
UClass* UOrionSteamAppsAsyncActionGetAppBetas::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetAppBetas;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetAppBetas"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppBetas,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetAppBetas::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetAppBetas\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetAppBetas\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBetas_GetAppBetasAsync, "GetAppBetasAsync" }, // 410884866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetAppBetas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetAppBetas::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetAppBetas::UOrionSteamAppsAsyncActionGetAppBetas() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetAppBetas);
UOrionSteamAppsAsyncActionGetAppBetas::~UOrionSteamAppsAsyncActionGetAppBetas() {}
// ********** End Class UOrionSteamAppsAsyncActionGetAppBetas **************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppBuilds Function GetAppBuildsAsync ********
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 Count;
		UOrionSteamAppsAsyncActionGetAppBuilds* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xef\xbf\xbdGets an applications build history.\n\x09 *\n\x09 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the build history of.\n\x09 * @param\x09""Count\x09\x09The number of builds to retrieve, the default is 10.\n\x09 */" },
#endif
		{ "CPP_Default_Count", "10" },
		{ "DisplayName", "Get App Builds" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdGets an applications build history.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication key.\n@param       AppID           The App ID to get the build history of.\n@param       Count           The number of builds to retrieve, the default is 10." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds, nullptr, "GetAppBuildsAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::OrionSteamAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetAppBuilds::execGetAppBuildsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetAppBuilds**)Z_Param__Result=UOrionSteamAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetAppBuilds Function GetAppBuildsAsync **********

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppBuilds ***********************************
void UOrionSteamAppsAsyncActionGetAppBuilds::StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppBuilds()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetAppBuilds::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppBuildsAsync", &UOrionSteamAppsAsyncActionGetAppBuilds::execGetAppBuildsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds;
UClass* UOrionSteamAppsAsyncActionGetAppBuilds::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetAppBuilds;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetAppBuilds"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppBuilds,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetAppBuilds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetAppBuilds\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetAppBuilds\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppBuilds_GetAppBuildsAsync, "GetAppBuildsAsync" }, // 2082160052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetAppBuilds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetAppBuilds::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetAppBuilds::UOrionSteamAppsAsyncActionGetAppBuilds() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetAppBuilds);
UOrionSteamAppsAsyncActionGetAppBuilds::~UOrionSteamAppsAsyncActionGetAppBuilds() {}
// ********** End Class UOrionSteamAppsAsyncActionGetAppBuilds *************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppDepotVersions Function GetAppDepotVersionsAsync 
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		UOrionSteamAppsAsyncActionGetAppDepotVersions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets all the versions of all the depots for the specified application.\n\x09 *\n\x09 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the depot versions for.\n\x09 */" },
#endif
		{ "DisplayName", "Get App Depot Versions" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the versions of all the depots for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication key.\n@param       AppID           The App ID to get the depot versions for." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions, nullptr, "GetAppDepotVersionsAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::OrionSteamAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetAppDepotVersions::execGetAppDepotVersionsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetAppDepotVersions**)Z_Param__Result=UOrionSteamAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetAppDepotVersions Function GetAppDepotVersionsAsync 

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppDepotVersions ****************************
void UOrionSteamAppsAsyncActionGetAppDepotVersions::StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppDepotVersions()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetAppDepotVersions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppDepotVersionsAsync", &UOrionSteamAppsAsyncActionGetAppDepotVersions::execGetAppDepotVersionsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions;
UClass* UOrionSteamAppsAsyncActionGetAppDepotVersions::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetAppDepotVersions;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetAppDepotVersions"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppDepotVersions,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetAppDepotVersions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetAppDepotVersions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetAppDepotVersions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync, "GetAppDepotVersionsAsync" }, // 2251634213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetAppDepotVersions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetAppDepotVersions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetAppDepotVersions::UOrionSteamAppsAsyncActionGetAppDepotVersions() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetAppDepotVersions);
UOrionSteamAppsAsyncActionGetAppDepotVersions::~UOrionSteamAppsAsyncActionGetAppDepotVersions() {}
// ********** End Class UOrionSteamAppsAsyncActionGetAppDepotVersions ******************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppList Function GetAppListAsync ************
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetAppList_eventGetAppListAsync_Parms
	{
		UObject* WorldContextObject;
		UOrionSteamAppsAsyncActionGetAppList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the complete list of public apps.\n\x09 */" },
#endif
		{ "DisplayName", "Get App List" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the complete list of public apps." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList, nullptr, "GetAppListAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::OrionSteamAppsAsyncActionGetAppList_eventGetAppListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::OrionSteamAppsAsyncActionGetAppList_eventGetAppListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetAppList::execGetAppListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetAppList**)Z_Param__Result=UOrionSteamAppsAsyncActionGetAppList::GetAppListAsync(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetAppList Function GetAppListAsync **************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppList Function HandleCallback *************
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics
{
	struct OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms
	{
		TArray<FWebAppsGetAppList> data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWebAppsGetAppList, METADATA_PARAMS(0, nullptr) }; // 3428441574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3428441574
void Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::OrionSteamAppsAsyncActionGetAppList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetAppList::execHandleCallback)
{
	P_GET_TARRAY_REF(FWebAppsGetAppList,Z_Param_Out_data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetAppList Function HandleCallback ***************

// ********** Begin Class UOrionSteamAppsAsyncActionGetAppList *************************************
void UOrionSteamAppsAsyncActionGetAppList::StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppList()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetAppList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppListAsync", &UOrionSteamAppsAsyncActionGetAppList::execGetAppListAsync },
		{ "HandleCallback", &UOrionSteamAppsAsyncActionGetAppList::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList;
UClass* UOrionSteamAppsAsyncActionGetAppList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetAppList;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetAppList"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetAppList,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetAppList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetAppList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetAppList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_GetAppListAsync, "GetAppListAsync" }, // 1263797406
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetAppList_HandleCallback, "HandleCallback" }, // 2292685250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetAppList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamAppsAsyncActionGetAppList, OnCallback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListAsyncCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3005962332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetAppList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetAppList);
// ********** End Class UOrionSteamAppsAsyncActionGetAppList ***************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetCheatingReports Function GetCheatingReportsAsync 
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 TimeBegin;
		int32 TimeEnd;
		bool bIncludeReports;
		bool bIncludeBans;
		int32 ReportidMin;
		UOrionSteamAppsAsyncActionGetCheatingReports* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of cheating reports submitted for this app.\n\x09 *\n\x09 * Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09\x09\x09""AppID of game\n\x09 * @param\x09TimeBegin\x09\x09\x09Time range begin\n\x09 * @param\x09TimeEnd\x09\x09\x09\x09Time range end\n\x09 * @param\x09""bIncludeReports\x09\x09include reports that were not bans\n\x09 * @param\x09""bIncludeBans\x09\x09include reports that were bans\n\x09 * @param\x09ReportidMin\x09\x09\x09minimum report id\n\x09 */" },
#endif
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\nNOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                                     Steamworks Web API publisher authentication key.\n@param       AppID                           AppID of game\n@param       TimeBegin                       Time range begin\n@param       TimeEnd                         Time range end\n@param       bIncludeReports         include reports that were not bans\n@param       bIncludeBans            include reports that were bans\n@param       ReportidMin                     minimum report id" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReportidMin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportidMin = { "ReportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReportidMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportidMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::OrionSteamAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReportidMin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetCheatingReports**)Z_Param__Result=UOrionSteamAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_TimeBegin,Z_Param_TimeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_ReportidMin);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetCheatingReports Function GetCheatingReportsAsync 

// ********** Begin Class UOrionSteamAppsAsyncActionGetCheatingReports *****************************
void UOrionSteamAppsAsyncActionGetCheatingReports::StaticRegisterNativesUOrionSteamAppsAsyncActionGetCheatingReports()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetCheatingReports::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCheatingReportsAsync", &UOrionSteamAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports;
UClass* UOrionSteamAppsAsyncActionGetCheatingReports::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetCheatingReports;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetCheatingReports"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetCheatingReports,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetCheatingReports::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 563546396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetCheatingReports>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetCheatingReports::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetCheatingReports::UOrionSteamAppsAsyncActionGetCheatingReports() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetCheatingReports);
UOrionSteamAppsAsyncActionGetCheatingReports::~UOrionSteamAppsAsyncActionGetCheatingReports() {}
// ********** End Class UOrionSteamAppsAsyncActionGetCheatingReports *******************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetPlayersBanned Function GetPlayersBannedAsync 
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		UOrionSteamAppsAsyncActionGetPlayersBanned* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09""AppID of game\n\x09 */" },
#endif
		{ "DisplayName", "Get Players Banned" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key             Steamworks Web API publisher authentication key.\n@param       AppID           AppID of game" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned, nullptr, "GetPlayersBannedAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::OrionSteamAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetPlayersBanned::execGetPlayersBannedAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetPlayersBanned**)Z_Param__Result=UOrionSteamAppsAsyncActionGetPlayersBanned::GetPlayersBannedAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetPlayersBanned Function GetPlayersBannedAsync **

// ********** Begin Class UOrionSteamAppsAsyncActionGetPlayersBanned *******************************
void UOrionSteamAppsAsyncActionGetPlayersBanned::StaticRegisterNativesUOrionSteamAppsAsyncActionGetPlayersBanned()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetPlayersBanned::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayersBannedAsync", &UOrionSteamAppsAsyncActionGetPlayersBanned::execGetPlayersBannedAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned;
UClass* UOrionSteamAppsAsyncActionGetPlayersBanned::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetPlayersBanned;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetPlayersBanned"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetPlayersBanned,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetPlayersBanned::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetPlayersBanned\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetPlayersBanned\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync, "GetPlayersBannedAsync" }, // 3311517361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetPlayersBanned>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetPlayersBanned::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetPlayersBanned::UOrionSteamAppsAsyncActionGetPlayersBanned() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetPlayersBanned);
UOrionSteamAppsAsyncActionGetPlayersBanned::~UOrionSteamAppsAsyncActionGetPlayersBanned() {}
// ********** End Class UOrionSteamAppsAsyncActionGetPlayersBanned *********************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetServerList Function GetServerListAsync ******
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString Filter;
		int32 Limit;
		UOrionSteamAppsAsyncActionGetServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""Filter\x09\x09Query filter string\n\x09 * @param\x09Limit\x09\x09Limit number of servers in the response\n\x09 */" },
#endif
		{ "DisplayName", "Get Server List" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication key.\n@param       Filter          Query filter string\n@param       Limit           Limit number of servers in the response" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList, nullptr, "GetServerListAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::OrionSteamAppsAsyncActionGetServerList_eventGetServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetServerList::execGetServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetServerList**)Z_Param__Result=UOrionSteamAppsAsyncActionGetServerList::GetServerListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetServerList Function GetServerListAsync ********

// ********** Begin Class UOrionSteamAppsAsyncActionGetServerList **********************************
void UOrionSteamAppsAsyncActionGetServerList::StaticRegisterNativesUOrionSteamAppsAsyncActionGetServerList()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetServerList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetServerListAsync", &UOrionSteamAppsAsyncActionGetServerList::execGetServerListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList;
UClass* UOrionSteamAppsAsyncActionGetServerList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetServerList;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetServerList"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetServerList,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetServerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetServerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetServerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServerList_GetServerListAsync, "GetServerListAsync" }, // 3863939970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetServerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetServerList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetServerList::UOrionSteamAppsAsyncActionGetServerList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetServerList);
UOrionSteamAppsAsyncActionGetServerList::~UOrionSteamAppsAsyncActionGetServerList() {}
// ********** End Class UOrionSteamAppsAsyncActionGetServerList ************************************

// ********** Begin Class UOrionSteamAppsAsyncActionGetServersAtAddress Function GetServersAtAddressAsync 
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics
{
	struct OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms
	{
		UObject* WorldContextObject;
		FString Addr;
		UOrionSteamAppsAsyncActionGetServersAtAddress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param\x09""Addr\x09IP or IP:queryport to list\n\x09 */" },
#endif
		{ "DisplayName", "Get Servers at Address" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param       Addr    IP or IP:queryport to list" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Addr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, Addr), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_Addr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress, nullptr, "GetServersAtAddressAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::OrionSteamAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Addr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionGetServersAtAddress**)Z_Param__Result=UOrionSteamAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(Z_Param_WorldContextObject,Z_Param_Addr);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionGetServersAtAddress Function GetServersAtAddressAsync 

// ********** Begin Class UOrionSteamAppsAsyncActionGetServersAtAddress ****************************
void UOrionSteamAppsAsyncActionGetServersAtAddress::StaticRegisterNativesUOrionSteamAppsAsyncActionGetServersAtAddress()
{
	UClass* Class = UOrionSteamAppsAsyncActionGetServersAtAddress::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetServersAtAddressAsync", &UOrionSteamAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress;
UClass* UOrionSteamAppsAsyncActionGetServersAtAddress::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionGetServersAtAddress;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionGetServersAtAddress"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionGetServersAtAddress,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_NoRegister()
{
	return UOrionSteamAppsAsyncActionGetServersAtAddress::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionGetServersAtAddress\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionGetServersAtAddress\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync, "GetServersAtAddressAsync" }, // 4130436420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionGetServersAtAddress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionGetServersAtAddress::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress.OuterSingleton;
}
UOrionSteamAppsAsyncActionGetServersAtAddress::UOrionSteamAppsAsyncActionGetServersAtAddress() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionGetServersAtAddress);
UOrionSteamAppsAsyncActionGetServersAtAddress::~UOrionSteamAppsAsyncActionGetServersAtAddress() {}
// ********** End Class UOrionSteamAppsAsyncActionGetServersAtAddress ******************************

// ********** Begin Class UOrionSteamAppsAsyncActionSetAppBuildLive Function SetAppBuildLiveAsync **
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics
{
	struct OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 BuildID;
		FString BetaKey;
		FString Description;
		UOrionSteamAppsAsyncActionSetAppBuildLive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\x09\x09\x09""AppID of game\n\x09 * @param\x09""BuildID\x09\x09\x09""BuildID\n\x09 * @param\x09""BetaKey\x09\x09\x09""beta key, required. Use public for default branch\n\x09 * @param\x09""Description\x09\x09optional description for this build\n\x09 */" },
#endif
		{ "DisplayName", "Set App Build Live" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                             Steamworks Web API publisher authentication key.\n@param       AppID                   AppID of game\n@param       BuildID                 BuildID\n@param       BetaKey                 beta key, required. Use public for default branch\n@param       Description             optional description for this build" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, BuildID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BetaKey = { "BetaKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, BetaKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BuildID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BetaKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive, nullptr, "SetAppBuildLiveAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::OrionSteamAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionSetAppBuildLive::execSetAppBuildLiveAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_BuildID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionSetAppBuildLive**)Z_Param__Result=UOrionSteamAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_BuildID,Z_Param_BetaKey,Z_Param_Description);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionSetAppBuildLive Function SetAppBuildLiveAsync ****

// ********** Begin Class UOrionSteamAppsAsyncActionSetAppBuildLive ********************************
void UOrionSteamAppsAsyncActionSetAppBuildLive::StaticRegisterNativesUOrionSteamAppsAsyncActionSetAppBuildLive()
{
	UClass* Class = UOrionSteamAppsAsyncActionSetAppBuildLive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAppBuildLiveAsync", &UOrionSteamAppsAsyncActionSetAppBuildLive::execSetAppBuildLiveAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive;
UClass* UOrionSteamAppsAsyncActionSetAppBuildLive::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionSetAppBuildLive;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionSetAppBuildLive"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionSetAppBuildLive,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_NoRegister()
{
	return UOrionSteamAppsAsyncActionSetAppBuildLive::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionSetAppBuildLive\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionSetAppBuildLive\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync, "SetAppBuildLiveAsync" }, // 3402860462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionSetAppBuildLive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionSetAppBuildLive::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive.OuterSingleton;
}
UOrionSteamAppsAsyncActionSetAppBuildLive::UOrionSteamAppsAsyncActionSetAppBuildLive() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionSetAppBuildLive);
UOrionSteamAppsAsyncActionSetAppBuildLive::~UOrionSteamAppsAsyncActionSetAppBuildLive() {}
// ********** End Class UOrionSteamAppsAsyncActionSetAppBuildLive **********************************

// ********** Begin Class UOrionSteamAppsAsyncActionUpToDateCheck Function UpToDateCheckAsync ******
struct Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics
{
	struct OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		int32 Version;
		UOrionSteamAppsAsyncActionUpToDateCheck* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Apps|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param\x09""AppID\x09\x09""AppID of game\n\x09 * @param\x09Version\x09\x09The installed version of the game\n\x09 */" },
#endif
		{ "DisplayName", "Up To Date Check" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param       AppID           AppID of game\n@param       Version         The installed version of the game" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, Version), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck, nullptr, "UpToDateCheckAsync", Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::OrionSteamAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAppsAsyncActionUpToDateCheck::execUpToDateCheckAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Version);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAppsAsyncActionUpToDateCheck**)Z_Param__Result=UOrionSteamAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Version);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAppsAsyncActionUpToDateCheck Function UpToDateCheckAsync ********

// ********** Begin Class UOrionSteamAppsAsyncActionUpToDateCheck **********************************
void UOrionSteamAppsAsyncActionUpToDateCheck::StaticRegisterNativesUOrionSteamAppsAsyncActionUpToDateCheck()
{
	UClass* Class = UOrionSteamAppsAsyncActionUpToDateCheck::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpToDateCheckAsync", &UOrionSteamAppsAsyncActionUpToDateCheck::execUpToDateCheckAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck;
UClass* UOrionSteamAppsAsyncActionUpToDateCheck::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAppsAsyncActionUpToDateCheck;
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAppsAsyncActionUpToDateCheck"),
			Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.InnerSingleton,
			StaticRegisterNativesUOrionSteamAppsAsyncActionUpToDateCheck,
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
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_NoRegister()
{
	return UOrionSteamAppsAsyncActionUpToDateCheck::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionUpToDateCheck\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionUpToDateCheck\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAppsAsyncActionUpToDateCheck_UpToDateCheckAsync, "UpToDateCheckAsync" }, // 2383327897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAppsAsyncActionUpToDateCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::ClassParams = {
	&UOrionSteamAppsAsyncActionUpToDateCheck::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.OuterSingleton, Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck.OuterSingleton;
}
UOrionSteamAppsAsyncActionUpToDateCheck::UOrionSteamAppsAsyncActionUpToDateCheck() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAppsAsyncActionUpToDateCheck);
UOrionSteamAppsAsyncActionUpToDateCheck::~UOrionSteamAppsAsyncActionUpToDateCheck() {}
// ********** End Class UOrionSteamAppsAsyncActionUpToDateCheck ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebAppsAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBetas, UOrionSteamAppsAsyncActionGetAppBetas::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetAppBetas"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBetas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetAppBetas), 2718335617U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppBuilds, UOrionSteamAppsAsyncActionGetAppBuilds::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetAppBuilds"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppBuilds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetAppBuilds), 2793580202U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions, UOrionSteamAppsAsyncActionGetAppDepotVersions::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetAppDepotVersions"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppDepotVersions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetAppDepotVersions), 2778640855U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetAppList, UOrionSteamAppsAsyncActionGetAppList::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetAppList"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetAppList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetAppList), 1691600778U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetCheatingReports, UOrionSteamAppsAsyncActionGetCheatingReports::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetCheatingReports"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetCheatingReports), 1990212495U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned, UOrionSteamAppsAsyncActionGetPlayersBanned::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetPlayersBanned"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetPlayersBanned, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetPlayersBanned), 238571132U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServerList, UOrionSteamAppsAsyncActionGetServerList::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetServerList"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetServerList), 3078065991U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress, UOrionSteamAppsAsyncActionGetServersAtAddress::StaticClass, TEXT("UOrionSteamAppsAsyncActionGetServersAtAddress"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionGetServersAtAddress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionGetServersAtAddress), 1916743762U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive, UOrionSteamAppsAsyncActionSetAppBuildLive::StaticClass, TEXT("UOrionSteamAppsAsyncActionSetAppBuildLive"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionSetAppBuildLive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionSetAppBuildLive), 2410810289U) },
		{ Z_Construct_UClass_UOrionSteamAppsAsyncActionUpToDateCheck, UOrionSteamAppsAsyncActionUpToDateCheck::StaticClass, TEXT("UOrionSteamAppsAsyncActionUpToDateCheck"), &Z_Registration_Info_UClass_UOrionSteamAppsAsyncActionUpToDateCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAppsAsyncActionUpToDateCheck), 274458314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebAppsAsyncActions_h__Script_OrionSteamWebAPI_504988970(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebAppsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebAppsAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
