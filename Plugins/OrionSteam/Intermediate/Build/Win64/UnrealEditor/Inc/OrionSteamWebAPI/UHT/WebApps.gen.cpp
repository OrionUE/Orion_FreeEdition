// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apps/WebApps.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebApps() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebApps();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebApps_NoRegister();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListCallback__DelegateSignature();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebApps Function GetAppBetas ********************************************
struct Z_Construct_UFunction_UWebApps_GetAppBetas_Statics
{
	struct WebApps_eventGetAppBetas_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets all of the beta branches for the specified application.\n\x09 *\n\x09 * NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppID           The App ID to get the betas of." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBetas", Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::WebApps_eventGetAppBetas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::WebApps_eventGetAppBetas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetAppBetas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetAppBetas)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppBetas(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetAppBetas **********************************************

// ********** Begin Class UWebApps Function GetAppBuilds *******************************************
struct Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics
{
	struct WebApps_eventGetAppBuilds_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xef\xbf\xbdGets an applications build history.\n\x09 *\n\x09 * NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the build history of.\n\x09 * @param\x09""Count\x09\x09The number of builds to retrieve, the default is 10.\n\x09 */" },
#endif
		{ "CPP_Default_Count", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdGets an applications build history.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppID           The App ID to get the build history of.\n@param       Count           The number of builds to retrieve, the default is 10." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBuilds", Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::WebApps_eventGetAppBuilds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::WebApps_eventGetAppBuilds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetAppBuilds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetAppBuilds)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppBuilds(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetAppBuilds *********************************************

// ********** Begin Class UWebApps Function GetAppDepotVersions ************************************
struct Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics
{
	struct WebApps_eventGetAppDepotVersions_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets all the versions of all the depots for the specified application.\n\x09 *\n\x09 * NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09The App ID to get the depot versions for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the versions of all the depots for the specified application.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppID           The App ID to get the depot versions for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppDepotVersions", Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::WebApps_eventGetAppDepotVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::WebApps_eventGetAppDepotVersions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetAppDepotVersions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetAppDepotVersions)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppDepotVersions(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetAppDepotVersions **************************************

// ********** Begin Class UWebApps Function GetAppList *********************************************
struct Z_Construct_UFunction_UWebApps_GetAppList_Statics
{
	struct WebApps_eventGetAppList_Parms
	{
		FScriptDelegate Callback;
		FString Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the complete list of public apps.\n\x09 *\n\x09 * @param\x09Key\x09\x09Steamworks Web API publisher authentication Key.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the complete list of public apps.\n\n@param       Key             Steamworks Web API publisher authentication Key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 627407882
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppList", Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetAppList_Statics::WebApps_eventGetAppList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetAppList_Statics::WebApps_eventGetAppList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetAppList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetAppList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAppList(FOnOrionSteamWebAPIAppListCallback(Z_Param_Out_Callback),Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetAppList ***********************************************

// ********** Begin Class UWebApps Function GetCheatingReports *************************************
struct Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics
{
	struct WebApps_eventGetCheatingReports_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
		int32 TimeBegin;
		int32 TimeEnd;
		bool bIncludeReports;
		bool bIncludeBans;
		int32 ReportidMin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of cheating reports submitted for this app.\n\x09 *\n\x09 * Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09 * NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09\x09\x09""AppID of game\n\x09 * @param\x09TimeBegin\x09\x09\x09Time range begin\n\x09 * @param\x09TimeEnd\x09\x09\x09\x09Time range end\n\x09 * @param\x09""bIncludeReports\x09\x09include reports that were not bans\n\x09 * @param\x09""bIncludeBans\x09\x09include reports that were bans\n\x09 * @param\x09ReportidMin\x09\x09\x09minimum report id\n\x09 */" },
#endif
		{ "CPP_Default_ReportidMin", "0" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\nNOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppID                           AppID of game\n@param       TimeBegin                       Time range begin\n@param       TimeEnd                         Time range end\n@param       bIncludeReports         include reports that were not bans\n@param       bIncludeBans            include reports that were bans\n@param       ReportidMin                     minimum report id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReportidMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_ReportidMin = { "ReportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, ReportidMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_ReportidMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetCheatingReports", Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::WebApps_eventGetCheatingReports_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::WebApps_eventGetCheatingReports_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetCheatingReports()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetCheatingReports)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReportidMin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCheatingReports(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_TimeBegin,Z_Param_TimeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_ReportidMin);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetCheatingReports ***************************************

// ********** Begin Class UWebApps Function GetPlayersBanned ***************************************
struct Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics
{
	struct WebApps_eventGetPlayersBanned_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09""AppID of game\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key             Steamworks Web API publisher authentication Key.\n@param       AppID           AppID of game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetPlayersBanned", Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::WebApps_eventGetPlayersBanned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::WebApps_eventGetPlayersBanned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetPlayersBanned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetPlayersBanned)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayersBanned(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetPlayersBanned *****************************************

// ********** Begin Class UWebApps Function GetServerList ******************************************
struct Z_Construct_UFunction_UWebApps_GetServerList_Statics
{
	struct WebApps_eventGetServerList_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString Filter;
		int32 Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""Filter\x09\x09Query filter string\n\x09 * @param\x09Limit\x09\x09Limit number of servers in the response\n\x09 */" },
#endif
		{ "CPP_Default_Limit", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       Filter          Query filter string\n@param       Limit           Limit number of servers in the response" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServerList", Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetServerList_Statics::WebApps_eventGetServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetServerList_Statics::WebApps_eventGetServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetServerList(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetServerList ********************************************

// ********** Begin Class UWebApps Function GetServersAtAddress ************************************
struct Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics
{
	struct WebApps_eventGetServersAtAddress_Parms
	{
		FScriptDelegate Callback;
		FString Addr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param\x09""Addr\x09IP or IP:queryport to list\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param       Addr    IP or IP:queryport to list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Addr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, Addr), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Addr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServersAtAddress", Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::WebApps_eventGetServersAtAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::WebApps_eventGetServersAtAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_GetServersAtAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execGetServersAtAddress)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Addr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetServersAtAddress(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Addr);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function GetServersAtAddress **************************************

// ********** Begin Class UWebApps Function SetAppBuildLive ****************************************
struct Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics
{
	struct WebApps_eventSetAppBuildLive_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
		int32 BuildID;
		FString BetaKey;
		FString Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppID\x09\x09\x09""AppID of game\n\x09 * @param\x09""BuildID\x09\x09\x09""BuildID\n\x09 * @param\x09""BetaKey\x09\x09\x09""beta Key, required. Use public for default branch\n\x09 * @param\x09""Description\x09\x09optional description for this build\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       AppID                   AppID of game\n@param       BuildID                 BuildID\n@param       BetaKey                 beta Key, required. Use public for default branch\n@param       Description             optional description for this build" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, BuildID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BetaKey = { "BetaKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, BetaKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BuildID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BetaKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "SetAppBuildLive", Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::WebApps_eventSetAppBuildLive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::WebApps_eventSetAppBuildLive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_SetAppBuildLive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execSetAppBuildLive)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_BuildID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAppBuildLive(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_BuildID,Z_Param_BetaKey,Z_Param_Description);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function SetAppBuildLive ******************************************

// ********** Begin Class UWebApps Function UpToDateCheck ******************************************
struct Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics
{
	struct WebApps_eventUpToDateCheck_Parms
	{
		FScriptDelegate Callback;
		int32 AppID;
		int32 Version;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param\x09""AppID\x09\x09""AppID of game\n\x09 * @param\x09Version\x09\x09The installed version of the game\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param       AppID           AppID of game\n@param       Version         The installed version of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Version), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "UpToDateCheck", Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::WebApps_eventUpToDateCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::WebApps_eventUpToDateCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebApps_UpToDateCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebApps::execUpToDateCheck)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Version);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpToDateCheck(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_Version);
	P_NATIVE_END;
}
// ********** End Class UWebApps Function UpToDateCheck ********************************************

// ********** Begin Class UWebApps *****************************************************************
void UWebApps::StaticRegisterNativesUWebApps()
{
	UClass* Class = UWebApps::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppBetas", &UWebApps::execGetAppBetas },
		{ "GetAppBuilds", &UWebApps::execGetAppBuilds },
		{ "GetAppDepotVersions", &UWebApps::execGetAppDepotVersions },
		{ "GetAppList", &UWebApps::execGetAppList },
		{ "GetCheatingReports", &UWebApps::execGetCheatingReports },
		{ "GetPlayersBanned", &UWebApps::execGetPlayersBanned },
		{ "GetServerList", &UWebApps::execGetServerList },
		{ "GetServersAtAddress", &UWebApps::execGetServersAtAddress },
		{ "SetAppBuildLive", &UWebApps::execSetAppBuildLive },
		{ "UpToDateCheck", &UWebApps::execUpToDateCheck },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWebApps;
UClass* UWebApps::GetPrivateStaticClass()
{
	using TClass = UWebApps;
	if (!Z_Registration_Info_UClass_UWebApps.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WebApps"),
			Z_Registration_Info_UClass_UWebApps.InnerSingleton,
			StaticRegisterNativesUWebApps,
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
	return Z_Registration_Info_UClass_UWebApps.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebApps_NoRegister()
{
	return UWebApps::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebApps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Apps/WebApps.h" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebApps_GetAppBetas, "GetAppBetas" }, // 746941953
		{ &Z_Construct_UFunction_UWebApps_GetAppBuilds, "GetAppBuilds" }, // 1468746296
		{ &Z_Construct_UFunction_UWebApps_GetAppDepotVersions, "GetAppDepotVersions" }, // 2626420242
		{ &Z_Construct_UFunction_UWebApps_GetAppList, "GetAppList" }, // 1091443364
		{ &Z_Construct_UFunction_UWebApps_GetCheatingReports, "GetCheatingReports" }, // 2959537425
		{ &Z_Construct_UFunction_UWebApps_GetPlayersBanned, "GetPlayersBanned" }, // 2778352197
		{ &Z_Construct_UFunction_UWebApps_GetServerList, "GetServerList" }, // 36653208
		{ &Z_Construct_UFunction_UWebApps_GetServersAtAddress, "GetServersAtAddress" }, // 2366376561
		{ &Z_Construct_UFunction_UWebApps_SetAppBuildLive, "SetAppBuildLive" }, // 1957214030
		{ &Z_Construct_UFunction_UWebApps_UpToDateCheck, "UpToDateCheck" }, // 832492924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebApps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebApps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebApps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebApps_Statics::ClassParams = {
	&UWebApps::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebApps()
{
	if (!Z_Registration_Info_UClass_UWebApps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebApps.OuterSingleton, Z_Construct_UClass_UWebApps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebApps.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebApps);
UWebApps::~UWebApps() {}
// ********** End Class UWebApps *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebApps_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebApps, UWebApps::StaticClass, TEXT("UWebApps"), &Z_Registration_Info_UClass_UWebApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebApps), 1818754443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebApps_h__Script_OrionSteamWebAPI_1778068556(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebApps_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Apps_WebApps_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
