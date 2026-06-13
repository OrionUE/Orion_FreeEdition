// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmaking/SteamMatchmaking.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamMatchmaking() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmaking();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmaking_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamChatEntryType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFavoriteFlags();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyComparison();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyType();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobby__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFavoritesListAccountsUpdated__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFavoritesListChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobby__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyChatMsg__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyChatUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyDataUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyEnter__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyGameCreated__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyInvite__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyKicked__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyList__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSHARED_API UEnum* Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamMatchmaking Function AddFavoriteGame **************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics
{
	struct OrionSteamMatchmaking_eventAddFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\x09 *\n\x09 * @param\x09""AppID\x09\x09\x09\x09\x09\x09The App ID of the game.\n\x09 * @param\x09IP\x09\x09\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09""ConnectionPort\x09\x09\x09\x09The port used to connect to the server, in host order.\n\x09 * @param\x09QueryPort\x09\x09\x09\x09\x09The port used to query the server, in host order.\n\x09 * @param\x09""Flags\x09\x09\x09\x09\x09\x09Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09 * @param\x09TimeLastPlayedOnServer\x09\x09This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\n@param       AppID                                           The App ID of the game.\n@param       IP                                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       ConnectionPort                          The port used to connect to the server, in host order.\n@param       QueryPort                                       The port used to query the server, in host order.\n@param       Flags                                           Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n@param       TimeLastPlayedOnServer          This should be the current time in Unix epoch format (seconds since Jan 1st, 1970)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 205673649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 205673649
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddFavoriteGame", Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::OrionSteamMatchmaking_eventAddFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::OrionSteamMatchmaking_eventAddFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags,Z_Param_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddFavoriteGame ****************************

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListCompatibleMembersFilter 
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unused - Checks the player compatibility based on the frenemy system.\n\x09 *\n\x09 * @param\x09SteamIDLobby\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unused - Checks the player compatibility based on the frenemy system.\n\n@param       SteamIDLobby" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListCompatibleMembersFilter *

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListDistanceFilter ********
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms
	{
		ESteamLobbyDistanceFilter LobbyDistanceFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\x09 *\n\x09 * @param\x09LobbyDistanceFilter\x09\x09Specifies the maximum distance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\n@param       LobbyDistanceFilter             Specifies the maximum distance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 2792033207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListDistanceFilter)
{
	P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListDistanceFilter **********

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListFilterSlotsAvailable **
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
	{
		int32 SlotsAvailable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Filters to only return lobbies with the specified number of open slots available.\n\x09 *\n\x09 * @param\x09SlotsAvailable\x09The number of open slots that must be open.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters to only return lobbies with the specified number of open slots available.\n\n@param       SlotsAvailable  The number of open slots that must be open." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListFilterSlotsAvailable ****

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListNearValueFilter *******
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToBeCloseTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sorts the results closest to the specified value.\n\x09 *\n\x09 * Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\x09 *\n\x09 * @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09 * @param\x09ValueToBeCloseTo\x09The value that lobbies will be sorted on.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sorts the results closest to the specified value.\n\nNear filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\n@param       KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param       ValueToBeCloseTo        The value that lobbies will be sorted on." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListNearValueFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListNearValueFilter *********

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListNumericalFilter *******
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a numerical comparison filter to the next RequestLobbyList call.\n\x09 *\n\x09 * @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09 * @param\x09ValueToMatch\x09\x09The number to match.\n\x09 * @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a numerical comparison filter to the next RequestLobbyList call.\n\n@param       KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param       ValueToMatch            The number to match.\n@param       ComparisonType          The type of comparison to make." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 1108567924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListNumericalFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListNumericalFilter *********

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListResultCountFilter *****
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms
	{
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\x09 *\n\x09 * @param\x09MaxResults\x09The maximum number of lobbies to return.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\n@param       MaxResults      The maximum number of lobbies to return." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListResultCountFilter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListResultCountFilter *******

// ********** Begin Class UOrionSteamMatchmaking Function AddRequestLobbyListStringFilter **********
struct Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics
{
	struct OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms
	{
		FString KeyToMatch;
		FString ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a string comparison filter to the next RequestLobbyList call.\n\x09 *\n\x09 * @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09 * @param\x09ValueToMatch\x09\x09The string to match.\n\x09 * @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a string comparison filter to the next RequestLobbyList call.\n\n@param       KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param       ValueToMatch            The string to match.\n@param       ComparisonType          The type of comparison to make." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 1108567924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "AddRequestLobbyListStringFilter", Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::OrionSteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execAddRequestLobbyListStringFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function AddRequestLobbyListStringFilter ************

// ********** Begin Class UOrionSteamMatchmaking Function CreateLobby ******************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics
{
	struct OrionSteamMatchmaking_eventCreateLobby_Parms
	{
		FScriptDelegate Callback;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new matchmaking lobby.\n\x09 *\n\x09 * @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09 * @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param       LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param       MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3642002115
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 921498350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "CreateLobby", Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::OrionSteamMatchmaking_eventCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::OrionSteamMatchmaking_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execCreateLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLobby(FOnCreateLobby(Z_Param_Out_Callback),ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function CreateLobby ********************************

// ********** Begin Class UOrionSteamMatchmaking Function DeleteLobbyData **************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics
{
	struct OrionSteamMatchmaking_eventDeleteLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a metadata key from the lobby.\n\x09 *\n\x09 * This can only be done by the owner of the lobby.\n\x09 * This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to delete the metadata for.\n\x09 * @param\x09Key\x09\x09\x09\x09The key to delete the data for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a metadata key from the lobby.\n\nThis can only be done by the owner of the lobby.\nThis will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param       SteamIDLobby    The Steam ID of the lobby to delete the metadata for.\n@param       Key                             The key to delete the data for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "DeleteLobbyData", Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::OrionSteamMatchmaking_eventDeleteLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::OrionSteamMatchmaking_eventDeleteLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execDeleteLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function DeleteLobbyData ****************************

// ********** Begin Class UOrionSteamMatchmaking Function GetFavoriteGame **************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics
{
	struct OrionSteamMatchmaking_eventGetFavoriteGame_Parms
	{
		int32 Game;
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the details of the favorite game server by index.\n\x09 *\n\x09 * You must call GetFavoriteGameCount before calling this.\n\x09 *\n\x09 * @param\x09Game\x09\x09\x09\x09\x09\x09The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n\x09 * @param\x09""AppID\x09\x09\x09\x09\x09\x09Returns the App ID this server is for.\n\x09 * @param\x09IP\x09\x09\x09\x09\x09\x09\x09Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09""ConnectionPort\x09\x09\x09\x09Returns the port used to connect to the server, in host order.\n\x09 * @param\x09QueryPort\x09\x09\x09\x09\x09Returns the port used to query the server, in host order.\n\x09 * @param\x09""Flags\x09\x09\x09\x09\x09\x09Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n\x09 * @param\x09TimeLastPlayedOnServer\x09\x09Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the details of the favorite game server by index.\n\nYou must call GetFavoriteGameCount before calling this.\n\n@param       Game                                            The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n@param       AppID                                           Returns the App ID this server is for.\n@param       IP                                                      Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       ConnectionPort                          Returns the port used to connect to the server, in host order.\n@param       QueryPort                                       Returns the port used to query the server, in host order.\n@param       Flags                                           Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n@param       TimeLastPlayedOnServer          Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Game;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, Game), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 205673649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 205673649
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetFavoriteGame", Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::OrionSteamMatchmaking_eventGetFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::OrionSteamMatchmaking_eventGetFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Game);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::GetFavoriteGame(Z_Param_Game,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetFavoriteGame ****************************

// ********** Begin Class UOrionSteamMatchmaking Function GetFavoriteGameCount *********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics
{
	struct OrionSteamMatchmaking_eventGetFavoriteGameCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of favorite and recent game servers the user has stored locally.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of favorite and recent game servers the user has stored locally." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetFavoriteGameCount", Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::OrionSteamMatchmaking_eventGetFavoriteGameCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::OrionSteamMatchmaking_eventGetFavoriteGameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetFavoriteGameCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::GetFavoriteGameCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetFavoriteGameCount ***********************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyByIndex **************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyByIndex_Parms
	{
		int32 Lobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\x09 *\n\x09 * This should only be called after a LobbyMatchList_t call result is received.\n\x09 *\n\x09 * @param\x09Lobby\x09The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\nThis should only be called after a LobbyMatchList_t call result is received.\n\n@param       Lobby   The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyByIndex_Parms, Lobby), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyByIndex", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Lobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyByIndex(Z_Param_Lobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyByIndex ****************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyChatEntry ************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms
	{
		FSteamID SteamIDLobby;
		int32 MessageID;
		FSteamID SteamIDUser;
		FString Message;
		ESteamChatEntryType ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n\x09 * @param\x09MessageID\x09\x09\x09\x09The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n\x09 * @param\x09SteamIDUser\x09\x09\x09\x09If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n\x09 * @param\x09Message\x09\x09\x09\x09\x09Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n\x09 * @param\x09""ChatEntryType\x09\x09\x09If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\n@param       SteamIDLobby                    The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n@param       MessageID                               The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n@param       SteamIDUser                             If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n@param       Message                                 Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n@param       ChatEntryType                   If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 1651998004
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyChatEntry", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::OrionSteamMatchmaking_eventGetLobbyChatEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyChatEntry)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDUser);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyChatEntry(Z_Param_SteamIDLobby,Z_Param_MessageID,Z_Param_Out_SteamIDUser,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyChatEntry **************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyData *****************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the metadata associated with the specified key from the specified lobby.\n\x09 *\n\x09 * This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the metadata from.\n\x09 * @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the metadata associated with the specified key from the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\n@param       SteamIDLobby    The Steam ID of the lobby to get the metadata from.\n@param       Key                             The key to get the value of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyData", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::OrionSteamMatchmaking_eventGetLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::OrionSteamMatchmaking_eventGetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyData *******************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyDataByIndex **********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 LobbyData;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a lobby metadata key/value pair by index.\n\x09 *\n\x09 * You must call GetLobbyDataCount before calling this.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n\x09 * @param\x09LobbyData\x09\x09\x09""An index between 0 and GetLobbyDataCount.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Returns the name of the key at the specified index by copying it into this buffer.\n\x09 * @param\x09Value\x09\x09\x09\x09Returns the value associated with the key at the specified index by copying it into this buffer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a lobby metadata key/value pair by index.\n\nYou must call GetLobbyDataCount before calling this.\n\n@param       SteamIDLobby            This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n@param       LobbyData                       An index between 0 and GetLobbyDataCount.\n@param       Key                                     Returns the name of the key at the specified index by copying it into this buffer.\n@param       Value                           Returns the value associated with the key at the specified index by copying it into this buffer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyDataByIndex", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyDataByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_LobbyData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyDataByIndex(Z_Param_SteamIDLobby,Z_Param_LobbyData,Z_Param_Out_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyDataByIndex ************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyDataCount ************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyDataCount_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of metadata keys set on the specified lobby.\n\x09 *\n\x09 * This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09 * This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\n\x09 * This should typically only ever be used for debugging purposes.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09 The Steam ID of the lobby to get the data count from.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of metadata keys set on the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\nThis is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\nThis should typically only ever be used for debugging purposes.\n\n@param       SteamIDLobby     The Steam ID of the lobby to get the data count from." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyDataCount", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::OrionSteamMatchmaking_eventGetLobbyDataCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::OrionSteamMatchmaking_eventGetLobbyDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyDataCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyDataCount(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyDataCount **************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyGameServer ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the details of a game server set in a lobby.\n\x09 *\n\x09 * Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the game server information from.\n\x09 * @param\x09GameServerIP\x09\x09\x09Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n\x09 * @param\x09GameServerPort\x09\x09\x09Returns the connection port of the game server, in host order, if it's set.\n\x09 * @param\x09SteamIDGameServer\x09\x09Returns the Steam ID of the game server, if it's set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the details of a game server set in a lobby.\n\nEither the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\n@param       SteamIDLobby                    The Steam ID of the lobby to get the game server information from.\n@param       GameServerIP                    Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n@param       GameServerPort                  Returns the connection port of the game server, in host order, if it's set.\n@param       SteamIDGameServer               Returns the Steam ID of the game server, if it's set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyGameServer", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::OrionSteamMatchmaking_eventGetLobbyGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::OrionSteamMatchmaking_eventGetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_SteamIDGameServer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyGameServer *************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyMemberByIndex ********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 Member;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the lobby member at the given index.\n\x09 *\n\x09 * You must call GetNumLobbyMembers before calling this.\n\x09 * The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n\x09 * @param\x09Member\x09\x09\x09""An index between 0 and GetNumLobbyMembers.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the lobby member at the given index.\n\nYou must call GetNumLobbyMembers before calling this.\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\n@param       SteamIDLobby    This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n@param       Member                  An index between 0 and GetNumLobbyMembers." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Member;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms, Member), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyMemberByIndex", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::OrionSteamMatchmaking_eventGetLobbyMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyMemberByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_Member);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyMemberByIndex **********************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyMemberData ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDUser;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets per-user metadata from another player in the specified lobby.\n\x09 *\n\x09 * This can only be queried from members in lobbies that you are currently in.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby that the other player is in.\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the player to get the metadata from.\n\x09 * @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets per-user metadata from another player in the specified lobby.\n\nThis can only be queried from members in lobbies that you are currently in.\n\n@param       SteamIDLobby    The Steam ID of the lobby that the other player is in.\n@param       SteamIDUser             The Steam ID of the player to get the metadata from.\n@param       Key                             The key to get the value of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyMemberData", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::OrionSteamMatchmaking_eventGetLobbyMemberData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::OrionSteamMatchmaking_eventGetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_SteamIDUser,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyMemberData *************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyMemberLimit **********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The current limit on the # of users who can join the lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the member limit of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current limit on the # of users who can join the lobby.\n\n@param       SteamIDLobby    The Steam ID of the lobby to get the member limit of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyMemberLimit", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::OrionSteamMatchmaking_eventGetLobbyMemberLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::OrionSteamMatchmaking_eventGetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyMemberLimit(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyMemberLimit ************************

// ********** Begin Class UOrionSteamMatchmaking Function GetLobbyOwner ****************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics
{
	struct OrionSteamMatchmaking_eventGetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current lobby owner.\n\x09 *\n\x09 * You must be a member of the lobby to access this.\n\x09 * There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the owner of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current lobby owner.\n\nYou must be a member of the lobby to access this.\nThere always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\n@param       SteamIDLobby    The Steam ID of the lobby to get the owner of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetLobbyOwner", Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::OrionSteamMatchmaking_eventGetLobbyOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::OrionSteamMatchmaking_eventGetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamMatchmaking::GetLobbyOwner(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetLobbyOwner ******************************

// ********** Begin Class UOrionSteamMatchmaking Function GetNumLobbyMembers ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics
{
	struct OrionSteamMatchmaking_eventGetNumLobbyMembers_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of users in a lobby.\n\x09 *\n\x09 * The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09 * This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the number of members of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of users in a lobby.\n\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\n@param       SteamIDLobby    The Steam ID of the lobby to get the number of members of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetNumLobbyMembers", Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::OrionSteamMatchmaking_eventGetNumLobbyMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::OrionSteamMatchmaking_eventGetNumLobbyMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetNumLobbyMembers)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamMatchmaking::GetNumLobbyMembers(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetNumLobbyMembers *************************

// ********** Begin Class UOrionSteamMatchmaking Function GetSteamMatchmaking **********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics
{
	struct OrionSteamMatchmaking_eventGetSteamMatchmaking_Parms
	{
		UOrionSteamMatchmaking* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventGetSteamMatchmaking_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMatchmaking_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "GetSteamMatchmaking", Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::OrionSteamMatchmaking_eventGetSteamMatchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::OrionSteamMatchmaking_eventGetSteamMatchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execGetSteamMatchmaking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMatchmaking**)Z_Param__Result=UOrionSteamMatchmaking::GetSteamMatchmaking();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function GetSteamMatchmaking ************************

// ********** Begin Class UOrionSteamMatchmaking Function InviteUserToLobby ************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics
{
	struct OrionSteamMatchmaking_eventInviteUserToLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDInvitee;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Invite another user to the lobby.\n\x09 *\n\x09 * If the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\n\x09 * or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to invite the user to.\n\x09 * @param\x09SteamIDInvitee\x09\x09The Steam ID of the person who will be invited.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invite another user to the lobby.\n\nIf the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\nor if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n@param       SteamIDLobby            The Steam ID of the lobby to invite the user to.\n@param       SteamIDInvitee          The Steam ID of the person who will be invited." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "InviteUserToLobby", Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::OrionSteamMatchmaking_eventInviteUserToLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::OrionSteamMatchmaking_eventInviteUserToLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execInviteUserToLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function InviteUserToLobby **************************

// ********** Begin Class UOrionSteamMatchmaking Function JoinLobby ********************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics
{
	struct OrionSteamMatchmaking_eventJoinLobby_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Joins an existing lobby.\n\x09 *\n\x09 * The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins an existing lobby.\n\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param       SteamIDLobby    The Steam ID of the lobby to join." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventJoinLobby_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1192208747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "JoinLobby", Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::OrionSteamMatchmaking_eventJoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::OrionSteamMatchmaking_eventJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execJoinLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinLobby(FOnJoinLobby(Z_Param_Out_Callback),Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function JoinLobby **********************************

// ********** Begin Class UOrionSteamMatchmaking Function KickLobbyMember **************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics
{
	struct OrionSteamMatchmaking_eventKickLobbyMember_Parms
	{
		FSteamID LobbyId;
		FSteamID PlayerToKick;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Kick a lobby member\n\x09 * Only usable by the lobby owner\n\x09 *\n\x09 * Returns true if message was sent, does not represent if kicked or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kick a lobby member\nOnly usable by the lobby owner\n\nReturns true if message was sent, does not represent if kicked or not." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerToKick;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventKickLobbyMember_Parms, LobbyId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_PlayerToKick = { "PlayerToKick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventKickLobbyMember_Parms, PlayerToKick), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventKickLobbyMember_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventKickLobbyMember_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_PlayerToKick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "KickLobbyMember", Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::OrionSteamMatchmaking_eventKickLobbyMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::OrionSteamMatchmaking_eventKickLobbyMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execKickLobbyMember)
{
	P_GET_STRUCT(FSteamID,Z_Param_LobbyId);
	P_GET_STRUCT(FSteamID,Z_Param_PlayerToKick);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::KickLobbyMember(Z_Param_LobbyId,Z_Param_PlayerToKick);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function KickLobbyMember ****************************

// ********** Begin Class UOrionSteamMatchmaking Function LeaveLobby *******************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics
{
	struct OrionSteamMatchmaking_eventLeaveLobby_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The lobby to leave.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\n@param       SteamIDLobby    The lobby to leave." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "LeaveLobby", Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::OrionSteamMatchmaking_eventLeaveLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::OrionSteamMatchmaking_eventLeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execLeaveLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::LeaveLobby(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function LeaveLobby *********************************

// ********** Begin Class UOrionSteamMatchmaking Function RemoveFavoriteGame ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics
{
	struct OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes the game server from the local favorites list.\n\x09 *\n\x09 * @param\x09""AppID\x09\x09\x09\x09The App ID of the game.\n\x09 * @param\x09IP\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09""ConnectionPort\x09\x09The port used to connect to the server, in host order.\n\x09 * @param\x09QueryPort\x09\x09\x09The port used to query the server, in host order.\n\x09 * @param\x09""Flags\x09\x09\x09\x09Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the game server from the local favorites list.\n\n@param       AppID                           The App ID of the game.\n@param       IP                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       ConnectionPort          The port used to connect to the server, in host order.\n@param       QueryPort                       The port used to query the server, in host order.\n@param       Flags                           Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 205673649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 205673649
void Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "RemoveFavoriteGame", Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::OrionSteamMatchmaking_eventRemoveFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execRemoveFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function RemoveFavoriteGame *************************

// ********** Begin Class UOrionSteamMatchmaking Function RequestLobbyData *************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics
{
	struct OrionSteamMatchmaking_eventRequestLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Refreshes all of the metadata for a lobby that you're not in right now.\n\x09 *\n\x09 * You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to refresh the metadata of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refreshes all of the metadata for a lobby that you're not in right now.\n\nYou will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\n@param       SteamIDLobby    The Steam ID of the lobby to refresh the metadata of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "RequestLobbyData", Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::OrionSteamMatchmaking_eventRequestLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::OrionSteamMatchmaking_eventRequestLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execRequestLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::RequestLobbyData(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function RequestLobbyData ***************************

// ********** Begin Class UOrionSteamMatchmaking Function RequestLobbyList *************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics
{
	struct OrionSteamMatchmaking_eventRequestLobbyList_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a filtered list of relevant lobbies.\n\x09 *\n\x09 * There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09 * To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09 * If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09 * This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a filtered list of relevant lobbies.\n\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventRequestLobbyList_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1809061339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "RequestLobbyList", Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::OrionSteamMatchmaking_eventRequestLobbyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::OrionSteamMatchmaking_eventRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execRequestLobbyList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function RequestLobbyList ***************************

// ********** Begin Class UOrionSteamMatchmaking Function SendLobbyChatMsg *************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics
{
	struct OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms
	{
		FSteamID SteamIDLobby;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\x09 *\n\x09 * All users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\n\x09 * If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\n\x09 * For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\n\x09 * These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to send the chat message to.\n\x09 * @param\x09Message\x09\x09\x09This can be text or binary data, up to 4 Kilobytes in size.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\nAll users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\nIf you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\nFor communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\nThese messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\n@param       SteamIDLobby    The Steam ID of the lobby to send the chat message to.\n@param       Message                 This can be text or binary data, up to 4 Kilobytes in size." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SendLobbyChatMsg", Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::OrionSteamMatchmaking_eventSendLobbyChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSendLobbyChatMsg)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SendLobbyChatMsg(Z_Param_SteamIDLobby,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SendLobbyChatMsg ***************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLinkedLobby ***************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics
{
	struct OrionSteamMatchmaking_eventSetLinkedLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDLobbyDependent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\n\x09 * You must be the lobby owner of both lobbies.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09\x09\x09The Steam ID of the primary lobby.\n\x09 * @param\x09SteamIDLobbyDependent\x09\x09The Steam ID that will be linked to the primary lobby.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\nYou must be the lobby owner of both lobbies.\n\n@param       SteamIDLobby                            The Steam ID of the primary lobby.\n@param       SteamIDLobbyDependent           The Steam ID that will be linked to the primary lobby." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobbyDependent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLinkedLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent = { "SteamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLinkedLobby_Parms, SteamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLinkedLobby", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::OrionSteamMatchmaking_eventSetLinkedLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::OrionSteamMatchmaking_eventSetLinkedLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLinkedLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobbyDependent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLinkedLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDLobbyDependent);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLinkedLobby *****************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyData *****************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\x09 *\n\x09 * This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\n\x09 * Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09 * This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set the metadata for.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09 * @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\nThis can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThis will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param       SteamIDLobby            The Steam ID of the lobby to set the metadata for.\n@param       Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param       Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyData", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::OrionSteamMatchmaking_eventSetLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::OrionSteamMatchmaking_eventSetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyData *******************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyGameServer ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the game server associated with the lobby.\n\x09 *\n\x09 * This can only be set by the owner of the lobby.\n\x09 * Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\n\x09 * A LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to set the game server information for.\n\x09 * @param\x09GameServerIP\x09\x09\x09Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param\x09GameServerPort\x09\x09\x09Sets the connection port of the game server, in host order.\n\x09 * @param\x09SteamIDGameServer\x09\x09Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the game server associated with the lobby.\n\nThis can only be set by the owner of the lobby.\nEither the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\nA LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\n@param       SteamIDLobby                    The Steam ID of the lobby to set the game server information for.\n@param       GameServerIP                    Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n@param       GameServerPort                  Sets the connection port of the game server, in host order.\n@param       SteamIDGameServer               Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyGameServer", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::OrionSteamMatchmaking_eventSetLobbyGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::OrionSteamMatchmaking_eventSetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::SetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_SteamIDGameServer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyGameServer *************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyJoinable *************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyJoinable_Parms
	{
		FSteamID SteamIDLobby;
		bool bLobbyJoinable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\x09 *\n\x09 * If joining is disabled, then no players can join, even if they are a friend or have been invited.\n\x09 * Lobbies with joining disabled will not be returned from a lobby search.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby\n\x09 * @param\x09""bLobbyJoinable\x09\x09""Enable (true) or disable (false) allowing users to join this lobby?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\nIf joining is disabled, then no players can join, even if they are a friend or have been invited.\nLobbies with joining disabled will not be returned from a lobby search.\n\n@param       SteamIDLobby            The Steam ID of the lobby\n@param       bLobbyJoinable          Enable (true) or disable (false) allowing users to join this lobby?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLobbyJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyJoinable", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::OrionSteamMatchmaking_eventSetLobbyJoinable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::OrionSteamMatchmaking_eventSetLobbyJoinable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyJoinable)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_UBOOL(Z_Param_bLobbyJoinable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyJoinable ***************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyMemberData ***********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets per-user metadata for the local user.\n\x09 *\n\x09 * Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09 * There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set our metadata in.\n\x09 * @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09 * @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets per-user metadata for the local user.\n\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThere is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param       SteamIDLobby            The Steam ID of the lobby to set our metadata in.\n@param       Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param       Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyMemberData", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::OrionSteamMatchmaking_eventSetLobbyMemberData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::OrionSteamMatchmaking_eventSetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamMatchmaking::SetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyMemberData *************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyMemberLimit **********************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 MaxMembers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the maximum number of players that can join the lobby.\n\x09 *\n\x09 * This is also set when you create the lobby with CreateLobby.\n\x09 * This can only be set by the owner of the lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the member limit for.\n\x09 * @param\x09MaxMembers\x09\x09The maximum number of players allowed in this lobby. This can not be above 250.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of players that can join the lobby.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param       SteamIDLobby    The Steam ID of the lobby to set the member limit for.\n@param       MaxMembers              The maximum number of players allowed in this lobby. This can not be above 250." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyMemberLimit", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::OrionSteamMatchmaking_eventSetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyMemberLimit ************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyOwner ****************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDNewOwner;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes who the lobby owner is.\n\x09 *\n\x09 * This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby where the owner change will take place.\n\x09 * @param\x09SteamIDNewOwner\x09\x09The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes who the lobby owner is.\n\nThis can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\n@param       SteamIDLobby            The Steam ID of the lobby where the owner change will take place.\n@param       SteamIDNewOwner         The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyOwner", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::OrionSteamMatchmaking_eventSetLobbyOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::OrionSteamMatchmaking_eventSetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLobbyOwner(Z_Param_SteamIDLobby,Z_Param_SteamIDNewOwner);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyOwner ******************************

// ********** Begin Class UOrionSteamMatchmaking Function SetLobbyType *****************************
struct Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics
{
	struct OrionSteamMatchmaking_eventSetLobbyType_Parms
	{
		FSteamID SteamIDLobby;
		ESteamLobbyType LobbyType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates what type of lobby this is.\n\x09 *\n\x09 * This is also set when you create the lobby with CreateLobby.\n\x09 * This can only be set by the owner of the lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the type of.\n\x09 * @param\x09LobbyType\x09\x09The new lobby type to that will be set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates what type of lobby this is.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param       SteamIDLobby    The Steam ID of the lobby to set the type of.\n@param       LobbyType               The new lobby type to that will be set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 921498350
void Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamMatchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmaking, nullptr, "SetLobbyType", Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::OrionSteamMatchmaking_eventSetLobbyType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::OrionSteamMatchmaking_eventSetLobbyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmaking::execSetLobbyType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamMatchmaking::SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmaking Function SetLobbyType *******************************

// ********** Begin Class UOrionSteamMatchmaking ***************************************************
void UOrionSteamMatchmaking::StaticRegisterNativesUOrionSteamMatchmaking()
{
	UClass* Class = UOrionSteamMatchmaking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFavoriteGame", &UOrionSteamMatchmaking::execAddFavoriteGame },
		{ "AddRequestLobbyListCompatibleMembersFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
		{ "AddRequestLobbyListDistanceFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListDistanceFilter },
		{ "AddRequestLobbyListFilterSlotsAvailable", &UOrionSteamMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
		{ "AddRequestLobbyListNearValueFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListNearValueFilter },
		{ "AddRequestLobbyListNumericalFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListNumericalFilter },
		{ "AddRequestLobbyListResultCountFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListResultCountFilter },
		{ "AddRequestLobbyListStringFilter", &UOrionSteamMatchmaking::execAddRequestLobbyListStringFilter },
		{ "CreateLobby", &UOrionSteamMatchmaking::execCreateLobby },
		{ "DeleteLobbyData", &UOrionSteamMatchmaking::execDeleteLobbyData },
		{ "GetFavoriteGame", &UOrionSteamMatchmaking::execGetFavoriteGame },
		{ "GetFavoriteGameCount", &UOrionSteamMatchmaking::execGetFavoriteGameCount },
		{ "GetLobbyByIndex", &UOrionSteamMatchmaking::execGetLobbyByIndex },
		{ "GetLobbyChatEntry", &UOrionSteamMatchmaking::execGetLobbyChatEntry },
		{ "GetLobbyData", &UOrionSteamMatchmaking::execGetLobbyData },
		{ "GetLobbyDataByIndex", &UOrionSteamMatchmaking::execGetLobbyDataByIndex },
		{ "GetLobbyDataCount", &UOrionSteamMatchmaking::execGetLobbyDataCount },
		{ "GetLobbyGameServer", &UOrionSteamMatchmaking::execGetLobbyGameServer },
		{ "GetLobbyMemberByIndex", &UOrionSteamMatchmaking::execGetLobbyMemberByIndex },
		{ "GetLobbyMemberData", &UOrionSteamMatchmaking::execGetLobbyMemberData },
		{ "GetLobbyMemberLimit", &UOrionSteamMatchmaking::execGetLobbyMemberLimit },
		{ "GetLobbyOwner", &UOrionSteamMatchmaking::execGetLobbyOwner },
		{ "GetNumLobbyMembers", &UOrionSteamMatchmaking::execGetNumLobbyMembers },
		{ "GetSteamMatchmaking", &UOrionSteamMatchmaking::execGetSteamMatchmaking },
		{ "InviteUserToLobby", &UOrionSteamMatchmaking::execInviteUserToLobby },
		{ "JoinLobby", &UOrionSteamMatchmaking::execJoinLobby },
		{ "KickLobbyMember", &UOrionSteamMatchmaking::execKickLobbyMember },
		{ "LeaveLobby", &UOrionSteamMatchmaking::execLeaveLobby },
		{ "RemoveFavoriteGame", &UOrionSteamMatchmaking::execRemoveFavoriteGame },
		{ "RequestLobbyData", &UOrionSteamMatchmaking::execRequestLobbyData },
		{ "RequestLobbyList", &UOrionSteamMatchmaking::execRequestLobbyList },
		{ "SendLobbyChatMsg", &UOrionSteamMatchmaking::execSendLobbyChatMsg },
		{ "SetLinkedLobby", &UOrionSteamMatchmaking::execSetLinkedLobby },
		{ "SetLobbyData", &UOrionSteamMatchmaking::execSetLobbyData },
		{ "SetLobbyGameServer", &UOrionSteamMatchmaking::execSetLobbyGameServer },
		{ "SetLobbyJoinable", &UOrionSteamMatchmaking::execSetLobbyJoinable },
		{ "SetLobbyMemberData", &UOrionSteamMatchmaking::execSetLobbyMemberData },
		{ "SetLobbyMemberLimit", &UOrionSteamMatchmaking::execSetLobbyMemberLimit },
		{ "SetLobbyOwner", &UOrionSteamMatchmaking::execSetLobbyOwner },
		{ "SetLobbyType", &UOrionSteamMatchmaking::execSetLobbyType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMatchmaking;
UClass* UOrionSteamMatchmaking::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMatchmaking;
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmaking.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMatchmaking"),
			Z_Registration_Info_UClass_UOrionSteamMatchmaking.InnerSingleton,
			StaticRegisterNativesUOrionSteamMatchmaking,
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
	return Z_Registration_Info_UClass_UOrionSteamMatchmaking.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMatchmaking_NoRegister()
{
	return UOrionSteamMatchmaking::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMatchmaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmaking/SteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[] = {
		{ "Category", "OrionSteam|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 3512394828
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 3754995800
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 3142324806
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 2369638061
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 979727555
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 2920025519
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 3517744591
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 271817040
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_CreateLobby, "CreateLobby" }, // 2112619221
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 1876100632
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 3894591314
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 771835307
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 102691471
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 2665519422
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyData, "GetLobbyData" }, // 379049745
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 2883113003
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 1039630350
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 2816958564
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 1467982629
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 612474497
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 2688867810
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 4206522984
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 3704260839
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_GetSteamMatchmaking, "GetSteamMatchmaking" }, // 3778692250
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 3979914606
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_JoinLobby, "JoinLobby" }, // 1691206596
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_KickLobbyMember, "KickLobbyMember" }, // 2917867006
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_LeaveLobby, "LeaveLobby" }, // 2172820015
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 64845482
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 2176668991
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 1713904378
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 3735157266
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 2509487825
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyData, "SetLobbyData" }, // 530800182
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 1766347301
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 990847961
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 2897208381
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 17768415
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 2487837103
		{ &Z_Construct_UFunction_UOrionSteamMatchmaking_SetLobbyType, "SetLobbyType" }, // 4072942463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMatchmaking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListAccountsUpdated_MetaData), NewProp_FavoritesListAccountsUpdated_MetaData) }; // 3142791459
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListChanged_MetaData), NewProp_FavoritesListChanged_MetaData) }; // 2642508529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatMsg_MetaData), NewProp_LobbyChatMsg_MetaData) }; // 1018201494
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatUpdate_MetaData), NewProp_LobbyChatUpdate_MetaData) }; // 2012909219
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyDataUpdate_MetaData), NewProp_LobbyDataUpdate_MetaData) }; // 3803071175
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyEnter_MetaData), NewProp_LobbyEnter_MetaData) }; // 3697649357
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyGameCreated_MetaData), NewProp_LobbyGameCreated_MetaData) }; // 202336777
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyInvite_MetaData), NewProp_LobbyInvite_MetaData) }; // 1099185834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyKicked_MetaData), NewProp_LobbyKicked_MetaData) }; // 1410585706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_FavoritesListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyChatUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyGameCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmaking_Statics::NewProp_LobbyKicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmaking_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamMatchmaking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmaking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMatchmaking_Statics::ClassParams = {
	&UOrionSteamMatchmaking::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamMatchmaking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmaking_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmaking_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMatchmaking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMatchmaking()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmaking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMatchmaking.OuterSingleton, Z_Construct_UClass_UOrionSteamMatchmaking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMatchmaking.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMatchmaking);
// ********** End Class UOrionSteamMatchmaking *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmaking_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamMatchmaking, UOrionSteamMatchmaking::StaticClass, TEXT("UOrionSteamMatchmaking"), &Z_Registration_Info_UClass_UOrionSteamMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMatchmaking), 3016503394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmaking_h__Script_OrionSteamSDKAPI_1200966117(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmaking_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmaking_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
