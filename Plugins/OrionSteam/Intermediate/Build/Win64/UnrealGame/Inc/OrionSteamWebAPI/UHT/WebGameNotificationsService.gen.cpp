// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameNotificationsService/WebGameNotificationsService.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebGameNotificationsService() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebGameNotificationsService();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebGameNotificationsService Function CreateSession **********************
struct Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics
{
	struct WebGameNotificationsService_eventCreateSession_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Context;
		FString Title;
		FString Users;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a brand new async session with the players specified in the request.\n\x09 *\n\x09 * The unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09 * @param\x09""Context\x09(int64)\x09\x09Game-specified context value the game can use to associate the session with some object on their backend.\n\x09 * @param\x09Title\x09\x09\x09\x09The Title of the session to be displayed within each user's list of sessions.\n\x09 * @param\x09Users\x09\x09\x09\x09The initial state of all Users in the session.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a brand new async session with the players specified in the request.\n\nThe unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The App ID of the session to update.\n@param       Context (int64)         Game-specified context value the game can use to associate the session with some object on their backend.\n@param       Title                           The Title of the session to be displayed within each user's list of sessions.\n@param       Users                           The initial state of all Users in the session.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all Users being added to the session must be friends with the user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Context), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "CreateSession", Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::WebGameNotificationsService_eventCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::WebGameNotificationsService_eventCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execCreateSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSession(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Context,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function CreateSession ************************

// ********** Begin Class UWebGameNotificationsService Function DeleteSession **********************
struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics
{
	struct WebGameNotificationsService_eventDeleteSession_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to delete.\n@param       AppId                           The App ID of the session to delete.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSession", Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::WebGameNotificationsService_eventDeleteSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::WebGameNotificationsService_eventDeleteSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSession(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function DeleteSession ************************

// ********** Begin Class UWebGameNotificationsService Function DeleteSessionBatch *****************
struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics
{
	struct WebGameNotificationsService_eventDeleteSessionBatch_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SessionId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Deletes a batch of async game sessions\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to delete.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to delete.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes a batch of async game sessions\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to delete.\n@param       AppId                           The App ID of the session to delete." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSessionBatch", Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::WebGameNotificationsService_eventDeleteSessionBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::WebGameNotificationsService_eventDeleteSessionBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSessionBatch)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSessionBatch(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function DeleteSessionBatch *******************

// ********** Begin Class UWebGameNotificationsService Function EnumerateSessionsForApp ************
struct Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics
{
	struct WebGameNotificationsService_eventEnumerateSessionsForApp_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		bool bIncludeAllUserMessages;
		bool bIncludeAuthUserMessage;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This returns a list of sessions that a Steam ID is part of.\n\x09 *\n\x09 * The optional bools will return further details about each session if set.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09\x09The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09\x09The user whose sessions are to be enumerated.\n\x09 * @param\x09""bIncludeAllUserMessages\x09\x09(Optional) Set whether the message for all Users should be included. Defaults to false.\n\x09 * @param\x09""bIncludeAuthUserMessage\x09\x09(Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n\x09 * @param\x09Language\x09\x09\x09\x09\x09(Optional) Language to localize the text in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This returns a list of sessions that a Steam ID is part of.\n\nThe optional bools will return further details about each session if set.\n\n@param       Key                                                     Steamworks Web API publisher authentication Key.\n@param       AppId                                           The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n@param       SteamId                                         The user whose sessions are to be enumerated.\n@param       bIncludeAllUserMessages         (Optional) Set whether the message for all Users should be included. Defaults to false.\n@param       bIncludeAuthUserMessage         (Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n@param       Language                                        (Optional) Language to localize the text in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
	static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
{
	((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAllUserMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
{
	((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAuthUserMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "EnumerateSessionsForApp", Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::WebGameNotificationsService_eventEnumerateSessionsForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execEnumerateSessionsForApp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
	P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateSessionsForApp(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function EnumerateSessionsForApp **************

// ********** Begin Class UWebGameNotificationsService Function GetSessionDetailsForApp ************
struct Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics
{
	struct WebGameNotificationsService_eventGetSessionDetailsForApp_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString Sessions;
		int32 AppId;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns details about specific session(s).\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09Sessions\x09\x09\x09The session(s) to receive the details for\n\x09 * @param\x09""AppId\x09\x09\x09\x09The appid for the sessions.\n\x09 * @param\x09Language\x09\x09\x09Language to localize the text in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns details about specific session(s).\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       Sessions                        The session(s) to receive the details for\n@param       AppId                           The appid for the sessions.\n@param       Language                        Language to localize the text in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sessions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Sessions = { "Sessions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Sessions), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Sessions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "GetSessionDetailsForApp", Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::WebGameNotificationsService_eventGetSessionDetailsForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::WebGameNotificationsService_eventGetSessionDetailsForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execGetSessionDetailsForApp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Sessions);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSessionDetailsForApp(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Sessions,Z_Param_AppId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function GetSessionDetailsForApp **************

// ********** Begin Class UWebGameNotificationsService Function RequestNotifications ***************
struct Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics
{
	struct WebGameNotificationsService_eventRequestNotifications_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests that a user receive game notifications for an app.\n\x09 *\n\x09 * Whenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\n\x09 * This will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\n\x09 * Make this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID to request notifications for.\n\x09 * @param\x09""AppId\x09\x09\x09The App ID to request notifications for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests that a user receive game notifications for an app.\n\nWhenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\nThis will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\nMake this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The Steam ID to request notifications for.\n@param       AppId                   The App ID to request notifications for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "RequestNotifications", Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::WebGameNotificationsService_eventRequestNotifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::WebGameNotificationsService_eventRequestNotifications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execRequestNotifications)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestNotifications(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function RequestNotifications *****************

// ********** Begin Class UWebGameNotificationsService Function UpdateSession **********************
struct Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics
{
	struct WebGameNotificationsService_eventUpdateSession_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SessionId;
		int32 AppId;
		FString Title;
		FString Users;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|GameNotificationsService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update a game session whenever the state of the game changes.\n\x09 *\n\x09 * Be sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\n\x09 * Any Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\n\x09 * You must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SessionId (int64)\x09The sessionid to update.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID of the session to update.\n\x09 * @param\x09Title\x09\x09\x09\x09(Optional) The new Title of the session. If not specified, the Title will not be changed.\n\x09 * @param\x09Users\x09\x09\x09\x09(Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update a game session whenever the state of the game changes.\n\nBe sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all Users in the game.\nAny Users that were in the session that are not specified will be removed from the session, and any newly specified Users will be added to the session.\nYou must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SessionId (int64)       The sessionid to update.\n@param       AppId                           The App ID of the session to update.\n@param       Title                           (Optional) The new Title of the session. If not specified, the Title will not be changed.\n@param       Users                           (Optional) A list of Users whose state will be updated to reflect the given state. If the Users are not already in the session, they will be added to it.\n@param       SteamId                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Users), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "UpdateSession", Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::WebGameNotificationsService_eventUpdateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::WebGameNotificationsService_eventUpdateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebGameNotificationsService::execUpdateSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSession(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionId,Z_Param_AppId,Z_Param_Title,Z_Param_Users,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebGameNotificationsService Function UpdateSession ************************

// ********** Begin Class UWebGameNotificationsService *********************************************
void UWebGameNotificationsService::StaticRegisterNativesUWebGameNotificationsService()
{
	UClass* Class = UWebGameNotificationsService::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSession", &UWebGameNotificationsService::execCreateSession },
		{ "DeleteSession", &UWebGameNotificationsService::execDeleteSession },
		{ "DeleteSessionBatch", &UWebGameNotificationsService::execDeleteSessionBatch },
		{ "EnumerateSessionsForApp", &UWebGameNotificationsService::execEnumerateSessionsForApp },
		{ "GetSessionDetailsForApp", &UWebGameNotificationsService::execGetSessionDetailsForApp },
		{ "RequestNotifications", &UWebGameNotificationsService::execRequestNotifications },
		{ "UpdateSession", &UWebGameNotificationsService::execUpdateSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWebGameNotificationsService;
UClass* UWebGameNotificationsService::GetPrivateStaticClass()
{
	using TClass = UWebGameNotificationsService;
	if (!Z_Registration_Info_UClass_UWebGameNotificationsService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WebGameNotificationsService"),
			Z_Registration_Info_UClass_UWebGameNotificationsService.InnerSingleton,
			StaticRegisterNativesUWebGameNotificationsService,
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
	return Z_Registration_Info_UClass_UWebGameNotificationsService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister()
{
	return UWebGameNotificationsService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebGameNotificationsService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsService.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameNotificationsService_CreateSession, "CreateSession" }, // 2612847203
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession, "DeleteSession" }, // 4001706629
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch, "DeleteSessionBatch" }, // 2207229554
		{ &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp, "EnumerateSessionsForApp" }, // 2874749668
		{ &Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp, "GetSessionDetailsForApp" }, // 3803685262
		{ &Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications, "RequestNotifications" }, // 3754739639
		{ &Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession, "UpdateSession" }, // 1989132700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameNotificationsService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebGameNotificationsService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameNotificationsService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams = {
	&UWebGameNotificationsService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebGameNotificationsService()
{
	if (!Z_Registration_Info_UClass_UWebGameNotificationsService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebGameNotificationsService.OuterSingleton, Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebGameNotificationsService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameNotificationsService);
UWebGameNotificationsService::~UWebGameNotificationsService() {}
// ********** End Class UWebGameNotificationsService ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsService_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebGameNotificationsService, UWebGameNotificationsService::StaticClass, TEXT("UWebGameNotificationsService"), &Z_Registration_Info_UClass_UWebGameNotificationsService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebGameNotificationsService), 1503152794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsService_h__Script_OrionSteamWebAPI_697416326(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsService_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameNotificationsService_WebGameNotificationsService_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
