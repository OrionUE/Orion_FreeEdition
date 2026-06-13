// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmakingServers/SteamMatchmakingServers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServers() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerPing__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRules__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamMatchmakingServers Function GetSteamMatchmakingServers ********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics
{
	struct OrionSteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms
	{
		UOrionSteamMatchmakingServers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "GetSteamMatchmakingServers", Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::OrionSteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::OrionSteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execGetSteamMatchmakingServers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMatchmakingServers**)Z_Param__Result=UOrionSteamMatchmakingServers::GetSteamMatchmakingServers();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function GetSteamMatchmakingServers **********

// ********** Begin Class UOrionSteamMatchmakingServers Function PingServer ************************
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics
{
	struct OrionSteamMatchmakingServers_eventPingServer_Parms
	{
		FScriptDelegate Callback;
		FString Ip;
		int32 QueryPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09 *\n\x09 * @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param       Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       QueryPort       The port of the game server you are querying, in host order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventPingServer_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerPing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 210538912
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventPingServer_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventPingServer_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::NewProp_QueryPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "PingServer", Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::OrionSteamMatchmakingServers_eventPingServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::OrionSteamMatchmakingServers_eventPingServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execPingServer)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PingServer(FOnServerPing(Z_Param_Out_Callback),Z_Param_Ip,Z_Param_QueryPort);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function PingServer **************************

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestFavoritesServerList ********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestFavoritesServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::OrionSteamMatchmakingServers_eventRequestFavoritesServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestFavoritesServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFavoritesServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestFavoritesServerList **********

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestFriendsServerList **********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestFriendsServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::OrionSteamMatchmakingServers_eventRequestFriendsServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestFriendsServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFriendsServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestFriendsServerList ************

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestHistoryServerList **********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestHistoryServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::OrionSteamMatchmakingServers_eventRequestHistoryServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestHistoryServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestHistoryServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestHistoryServerList ************

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestInternetServerList *********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 *\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestInternetServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::OrionSteamMatchmakingServers_eventRequestInternetServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestInternetServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInternetServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestInternetServerList ***********

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestLANServerList **************
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestLANServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestLANServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestLANServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestLANServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::OrionSteamMatchmakingServers_eventRequestLANServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::OrionSteamMatchmakingServers_eventRequestLANServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestLANServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLANServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestLANServerList ****************

// ********** Begin Class UOrionSteamMatchmakingServers Function RequestSpectatorServerList ********
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics
{
	struct OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Request a new list of game servers from the 'spectator' server list.\n\x09 *\n\x09 * This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09 * that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09 *\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out\n\x09 * @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09 * @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09 */" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param       AppId                                   The app to request the server list of.\n@param       Timeout                                 How long to run the function until we time out.\n@param       MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param       bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param       ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 3186998881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "RequestSpectatorServerList", Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::OrionSteamMatchmakingServers_eventRequestSpectatorServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execRequestSpectatorServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSpectatorServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function RequestSpectatorServerList **********

// ********** Begin Class UOrionSteamMatchmakingServers Function ServerRules ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics
{
	struct OrionSteamMatchmakingServers_eventServerRules_Parms
	{
		FScriptDelegate Callback;
		FString Ip;
		int32 QueryPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09 *\n\x09 * @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param       Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       QueryPort       The port of the game server you are querying, in host order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventServerRules_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRules__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2164052204
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventServerRules_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingServers_eventServerRules_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::NewProp_QueryPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingServers, nullptr, "ServerRules", Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::OrionSteamMatchmakingServers_eventServerRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::OrionSteamMatchmakingServers_eventServerRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingServers::execServerRules)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRules(FOnServerRules(Z_Param_Out_Callback),Z_Param_Ip,Z_Param_QueryPort);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingServers Function ServerRules *************************

// ********** Begin Class UOrionSteamMatchmakingServers ********************************************
void UOrionSteamMatchmakingServers::StaticRegisterNativesUOrionSteamMatchmakingServers()
{
	UClass* Class = UOrionSteamMatchmakingServers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSteamMatchmakingServers", &UOrionSteamMatchmakingServers::execGetSteamMatchmakingServers },
		{ "PingServer", &UOrionSteamMatchmakingServers::execPingServer },
		{ "RequestFavoritesServerList", &UOrionSteamMatchmakingServers::execRequestFavoritesServerList },
		{ "RequestFriendsServerList", &UOrionSteamMatchmakingServers::execRequestFriendsServerList },
		{ "RequestHistoryServerList", &UOrionSteamMatchmakingServers::execRequestHistoryServerList },
		{ "RequestInternetServerList", &UOrionSteamMatchmakingServers::execRequestInternetServerList },
		{ "RequestLANServerList", &UOrionSteamMatchmakingServers::execRequestLANServerList },
		{ "RequestSpectatorServerList", &UOrionSteamMatchmakingServers::execRequestSpectatorServerList },
		{ "ServerRules", &UOrionSteamMatchmakingServers::execServerRules },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMatchmakingServers;
UClass* UOrionSteamMatchmakingServers::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMatchmakingServers;
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMatchmakingServers"),
			Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.InnerSingleton,
			StaticRegisterNativesUOrionSteamMatchmakingServers,
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
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister()
{
	return UOrionSteamMatchmakingServers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_GetSteamMatchmakingServers, "GetSteamMatchmakingServers" }, // 234389270
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_PingServer, "PingServer" }, // 1429668902
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFavoritesServerList, "RequestFavoritesServerList" }, // 1771039942
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestFriendsServerList, "RequestFriendsServerList" }, // 827264152
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestHistoryServerList, "RequestHistoryServerList" }, // 2733483252
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestInternetServerList, "RequestInternetServerList" }, // 1315446654
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestLANServerList, "RequestLANServerList" }, // 231067199
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_RequestSpectatorServerList, "RequestSpectatorServerList" }, // 2337188239
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingServers_ServerRules, "ServerRules" }, // 737353021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMatchmakingServers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::ClassParams = {
	&UOrionSteamMatchmakingServers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.OuterSingleton, Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingServers.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMatchmakingServers);
// ********** End Class UOrionSteamMatchmakingServers **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamMatchmakingServers, UOrionSteamMatchmakingServers::StaticClass, TEXT("UOrionSteamMatchmakingServers"), &Z_Registration_Info_UClass_UOrionSteamMatchmakingServers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMatchmakingServers), 3384775491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_OrionSteamSDKAPI_2543220296(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
