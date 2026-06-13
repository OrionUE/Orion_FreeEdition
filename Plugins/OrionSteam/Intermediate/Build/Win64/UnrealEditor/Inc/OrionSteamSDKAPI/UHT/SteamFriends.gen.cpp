// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamFriends/SteamFriends.h"
#include "SteamFriends/SteamFriendsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamFriends() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriends();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriends_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamActivateGameOverlayToWebPageMode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamChatEntryType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemProperty();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendFlags();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendRelationship();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamOverlayToStoreFlag();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPersonaState();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAvatarImageLoaded__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClanOfficerListResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCounts__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingList__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEquippedProfileItemsChanged__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFriendRichPresenceUpdate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedChatJoin__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedChatLeave__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedClanChatMsg__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedFriendChatMsg__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameLobbyJoinRequested__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameOverlayActivated__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameRichPresenceJoinRequested__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameServerChangeRequested__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCount__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowing__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoom__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomCompletionResult__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPersonaStateChange__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerList__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEquippedProfileItems__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamFriendsGroupID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlay **************************
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlay_Parms
	{
		FString Dialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to a specific dialog.\n\x09 *\n\x09 * @param\x09""Dialog\x09The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\".\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the Steam Overlay to a specific dialog.\n\n@param       Dialog  The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\"." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlay_Parms, Dialog), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::NewProp_Dialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlay", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::OrionSteamFriends_eventActivateGameOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::OrionSteamFriends_eventActivateGameOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlay(Z_Param_Dialog);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlay ****************************

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlayInvitedialog **************
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlayInvitedialog_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to open the invite dialog.\n\x09 *\n\x09 * Invitations sent from this dialog will be for the provided lobby.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby that selected users will be invited to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the Steam Overlay to open the invite dialog.\n\nInvitations sent from this dialog will be for the provided lobby.\n\n@param       SteamIDLobby    The Steam ID of the lobby that selected users will be invited to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayInvitedialog_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlayInvitedialog", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::OrionSteamFriends_eventActivateGameOverlayInvitedialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::OrionSteamFriends_eventActivateGameOverlayInvitedialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlayInvitedialog)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlayInvitedialog(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlayInvitedialog ****************

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlayInviteDialogConnectString *
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlayInviteDialogConnectString_Parms
	{
		FString ConnectString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayInviteDialogConnectString_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlayInviteDialogConnectString", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::OrionSteamFriends_eventActivateGameOverlayInviteDialogConnectString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::OrionSteamFriends_eventActivateGameOverlayInviteDialogConnectString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlayInviteDialogConnectString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlayInviteDialogConnectString(Z_Param_ConnectString);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlayInviteDialogConnectString ***

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlayToStore *******************
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlayToStore_Parms
	{
		int32 AppID;
		ESteamOverlayToStoreFlag Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to the Steam store page for the provided app.\n\x09 *\n\x09 * Using k_uAppIdInvalid brings the user to the front page of the Steam store.\n\x09 *\n\x09 * @param\x09""AppID\x09The app ID to show the store page of.\n\x09 * @param\x09""Flag\x09""Flags to modify the behavior when the page opens.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the Steam Overlay to the Steam store page for the provided app.\n\nUsing k_uAppIdInvalid brings the user to the front page of the Steam store.\n\n@param       AppID   The app ID to show the store page of.\n@param       Flag    Flags to modify the behavior when the page opens." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToStore_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToStore_Parms, Flag), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamOverlayToStoreFlag, METADATA_PARAMS(0, nullptr) }; // 2207394011
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlayToStore", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::OrionSteamFriends_eventActivateGameOverlayToStore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::OrionSteamFriends_eventActivateGameOverlayToStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlayToStore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlayToStore(Z_Param_AppID,ESteamOverlayToStoreFlag(Z_Param_Flag));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlayToStore *********************

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlayToUser ********************
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlayToUser_Parms
	{
		FString Dialog;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates Steam Overlay to a specific dialog.\n\x09 *\n\x09 * \"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\x09 * \"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\x09 * \"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\x09 * \"stats\" - Opens the overlay web browser to the specified user's stats.\n\x09 * \"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\x09 * \"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\x09 * \"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\x09 * \"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\x09 * \"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\x09 *\n\x09 * @param\x09""Dialog\x09\x09The dialog to open.\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the context to open this dialog to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates Steam Overlay to a specific dialog.\n\n\"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\"stats\" - Opens the overlay web browser to the specified user's stats.\n\"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\n@param       Dialog          The dialog to open.\n@param       SteamID         The Steam ID of the context to open this dialog to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToUser_Parms, Dialog), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlayToUser", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::OrionSteamFriends_eventActivateGameOverlayToUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::OrionSteamFriends_eventActivateGameOverlayToUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlayToUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlayToUser(Z_Param_Dialog,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlayToUser **********************

// ********** Begin Class UOrionSteamFriends Function ActivateGameOverlayToWebPage *****************
struct Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics
{
	struct OrionSteamFriends_eventActivateGameOverlayToWebPage_Parms
	{
		FString URL;
		ESteamActivateGameOverlayToWebPageMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates Steam Overlay web browser directly to the specified URL.\n\x09 *\n\x09 * @param\x09URL\x09\x09The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n\x09 * @param\x09Mode\x09(SDK 1.46+ only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates Steam Overlay web browser directly to the specified URL.\n\n@param       URL             The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n@param       Mode    (SDK 1.46+ only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventActivateGameOverlayToWebPage_Parms, Mode), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamActivateGameOverlayToWebPageMode, METADATA_PARAMS(0, nullptr) }; // 548570219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ActivateGameOverlayToWebPage", Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::OrionSteamFriends_eventActivateGameOverlayToWebPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::OrionSteamFriends_eventActivateGameOverlayToWebPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execActivateGameOverlayToWebPage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_ENUM(ESteamActivateGameOverlayToWebPageMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ActivateGameOverlayToWebPage(Z_Param_URL,ESteamActivateGameOverlayToWebPageMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ActivateGameOverlayToWebPage *******************

// ********** Begin Class UOrionSteamFriends Function BHasEquippedProfileItem **********************
struct Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics
{
	struct OrionSteamFriends_eventBHasEquippedProfileItem_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * After calling RequestEquippedProfileItems, returns true/false depending on whether a user has a ECommunityProfileItemType equipped or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After calling RequestEquippedProfileItems, returns true/false depending on whether a user has a ECommunityProfileItemType equipped or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventBHasEquippedProfileItem_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventBHasEquippedProfileItem_Parms, ItemType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2372522621
void Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventBHasEquippedProfileItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventBHasEquippedProfileItem_Parms), &Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "BHasEquippedProfileItem", Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::OrionSteamFriends_eventBHasEquippedProfileItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::OrionSteamFriends_eventBHasEquippedProfileItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execBHasEquippedProfileItem)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::BHasEquippedProfileItem(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function BHasEquippedProfileItem ************************

// ********** Begin Class UOrionSteamFriends Function ClearRichPresence ****************************
struct Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears all of the current user's Rich Presence key/values.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all of the current user's Rich Presence key/values." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ClearRichPresence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execClearRichPresence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::ClearRichPresence();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ClearRichPresence ******************************

// ********** Begin Class UOrionSteamFriends Function CloseClanChatWindowInSteam *******************
struct Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics
{
	struct OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Closes the specified Steam group chat room in the Steam UI.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to close.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes the specified Steam group chat room in the Steam UI.\n\n@param       SteamIDClanChat         The Steam ID of the Steam group chat room to close." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "CloseClanChatWindowInSteam", Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::OrionSteamFriends_eventCloseClanChatWindowInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execCloseClanChatWindowInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::CloseClanChatWindowInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function CloseClanChatWindowInSteam *********************

// ********** Begin Class UOrionSteamFriends Function DownloadClanActivityCounts *******************
struct Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics
{
	struct OrionSteamFriends_eventDownloadClanActivityCounts_Parms
	{
		FScriptDelegate Callback;
		TArray<FSteamID> SteamIDClans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\x09 *\n\x09 * After receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09 *\n\x09 * @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\nAfter receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param       SteamIDClans    A list of steam groups to get the updated data for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventDownloadClanActivityCounts_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCounts__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3336344607
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventDownloadClanActivityCounts_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "DownloadClanActivityCounts", Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::OrionSteamFriends_eventDownloadClanActivityCounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::OrionSteamFriends_eventDownloadClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execDownloadClanActivityCounts)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadClanActivityCounts(FOnDownloadClanActivityCounts(Z_Param_Out_Callback),Z_Param_SteamIDClans);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function DownloadClanActivityCounts *********************

// ********** Begin Class UOrionSteamFriends Function EnumerateFollowingList ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics
{
	struct OrionSteamFriends_eventEnumerateFollowingList_Parms
	{
		FScriptDelegate Callback;
		int32 StartIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the list of users that the current user is following.\n\x09 *\n\x09 * You can be following people that are not your friends.\n\x09 * Following allows you to receive updates when the person does things like\n\x09 * post a new piece of content to the Steam Workshop.\n\x09 *\n\x09 * @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the list of users that the current user is following.\n\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param       StartIndex      The index to start receiving followers from. This should be 0 on the initial call." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventEnumerateFollowingList_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1385628544
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventEnumerateFollowingList_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::NewProp_StartIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "EnumerateFollowingList", Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::OrionSteamFriends_eventEnumerateFollowingList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::OrionSteamFriends_eventEnumerateFollowingList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execEnumerateFollowingList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateFollowingList(FOnEnumerateFollowingList(Z_Param_Out_Callback),Z_Param_StartIndex);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function EnumerateFollowingList *************************

// ********** Begin Class UOrionSteamFriends Function GetChatMemberByIndex *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics
{
	struct OrionSteamFriends_eventGetChatMemberByIndex_Parms
	{
		FSteamID SteamIDClan;
		int32 User;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID at the given index in a Steam group chat.\n\x09 *\n\x09 * You must call GetClanChatMemberCount before calling this.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09This MUST be the same source used in the previous call to GetClanChatMemberCount!\n\x09 * @param\x09User\x09\x09\x09""An index between 0 and GetClanChatMemberCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID at the given index in a Steam group chat.\n\nYou must call GetClanChatMemberCount before calling this.\n\n@param       SteamIDClan             This MUST be the same source used in the previous call to GetClanChatMemberCount!\n@param       User                    An index between 0 and GetClanChatMemberCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetChatMemberByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetChatMemberByIndex_Parms, User), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetChatMemberByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::OrionSteamFriends_eventGetChatMemberByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::OrionSteamFriends_eventGetChatMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetChatMemberByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_User);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetChatMemberByIndex(Z_Param_SteamIDClan,Z_Param_User);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetChatMemberByIndex ***************************

// ********** Begin Class UOrionSteamFriends Function GetClanActivityCounts ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics
{
	struct OrionSteamFriends_eventGetClanActivityCounts_Parms
	{
		FSteamID SteamIDClan;
		int32 Online;
		int32 InGame;
		int32 Chatting;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the most recent information we have about what the users in a Steam Group are doing.\n\x09 *\n\x09 * This can only retrieve data that the local client knows about.\n\x09 * To refresh the data or get data from a group other than one that the current\n\x09 * user is a member of you must call DownloadClanActivityCounts.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the activity of.\n\x09 * @param\x09Online\x09\x09\x09Returns the number of members that are online.\n\x09 * @param\x09InGame\x09\x09\x09Returns the number members that are in game (excluding those with their status set to offline).\n\x09 * @param\x09""Chatting\x09\x09Returns the number of members in the group chat room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the most recent information we have about what the users in a Steam Group are doing.\n\nThis can only retrieve data that the local client knows about.\nTo refresh the data or get data from a group other than one that the current\nuser is a member of you must call DownloadClanActivityCounts.\n\n@param       SteamIDClan             The Steam group to get the activity of.\n@param       Online                  Returns the number of members that are online.\n@param       InGame                  Returns the number members that are in game (excluding those with their status set to offline).\n@param       Chatting                Returns the number of members in the group chat room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Online;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Chatting;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanActivityCounts_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanActivityCounts_Parms, Online), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanActivityCounts_Parms, InGame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_Chatting = { "Chatting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanActivityCounts_Parms, Chatting), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_Online,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_InGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_Chatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanActivityCounts", Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::OrionSteamFriends_eventGetClanActivityCounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::OrionSteamFriends_eventGetClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanActivityCounts)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Online);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InGame);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Chatting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::GetClanActivityCounts(Z_Param_SteamIDClan,Z_Param_Out_Online,Z_Param_Out_InGame,Z_Param_Out_Chatting);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanActivityCounts **************************

// ********** Begin Class UOrionSteamFriends Function GetClanByIndex *******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics
{
	struct OrionSteamFriends_eventGetClanByIndex_Parms
	{
		int32 Clan;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam group's Steam ID at the given index.\n\x09 *\n\x09 * You must call GetClanCount before calling this.\n\x09 *\n\x09 * @param\x09""Clan\x09""An index between 0 and GetClanCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam group's Steam ID at the given index.\n\nYou must call GetClanCount before calling this.\n\n@param       Clan    An index between 0 and GetClanCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::NewProp_Clan = { "Clan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanByIndex_Parms, Clan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::NewProp_Clan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::OrionSteamFriends_eventGetClanByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::OrionSteamFriends_eventGetClanByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetClanByIndex(Z_Param_Clan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanByIndex *********************************

// ********** Begin Class UOrionSteamFriends Function GetClanChatMemberCount ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics
{
	struct OrionSteamFriends_eventGetClanChatMemberCount_Parms
	{
		FSteamID SteamIDClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of users in a Steam group chat.\n\x09 *\n\x09 * Large steam groups cannot be iterated by the local user.\n\x09 * The current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\n\x09 * This is used for iteration, after calling this then GetChatMemberByIndex can\n\x09 * be used to get the Steam ID of each person in the chat.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the chat count of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of users in a Steam group chat.\n\nLarge steam groups cannot be iterated by the local user.\nThe current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetChatMemberByIndex can\nbe used to get the Steam ID of each person in the chat.\n\n@param       SteamIDClan             The Steam group to get the chat count of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMemberCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanChatMemberCount", Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::OrionSteamFriends_eventGetClanChatMemberCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::OrionSteamFriends_eventGetClanChatMemberCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanChatMemberCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetClanChatMemberCount(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanChatMemberCount *************************

// ********** Begin Class UOrionSteamFriends Function GetClanChatMessage ***************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics
{
	struct OrionSteamFriends_eventGetClanChatMessage_Parms
	{
		FSteamID SteamIDClanChat;
		int32 MessageID;
		FString Text;
		ESteamChatEntryType ChatEntryType;
		FSteamID SteamIDChatter;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the data from a Steam group chat room message.\n\x09 *\n\x09 * This should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09 * @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n\x09 * @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n\x09 * @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09 * @param\x09SteamIDChatter\x09\x09Returns the Steam ID of the user that sent the message.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the data from a Steam group chat room message.\n\nThis should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\n@param       SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param       MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n@param       Text                            The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n@param       ChatEntryType           Returns the type of chat entry that was received.\n@param       SteamIDChatter          Returns the Steam ID of the user that sent the message." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDChatter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, ChatEntryType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 1651998004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter = { "SteamIDChatter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, SteamIDChatter), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanChatMessage", Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::OrionSteamFriends_eventGetClanChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::OrionSteamFriends_eventGetClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanChatMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDChatter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType),Z_Param_Out_SteamIDChatter);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanChatMessage *****************************

// ********** Begin Class UOrionSteamFriends Function GetClanCount *********************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics
{
	struct OrionSteamFriends_eventGetClanCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of Steam groups that the current user is a member of.\n\x09 *\n\x09 * This is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of Steam groups that the current user is a member of.\n\nThis is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanCount", Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::OrionSteamFriends_eventGetClanCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::OrionSteamFriends_eventGetClanCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetClanCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanCount ***********************************

// ********** Begin Class UOrionSteamFriends Function GetClanName **********************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics
{
	struct OrionSteamFriends_eventGetClanName_Parms
	{
		FSteamID SteamIDClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the display name for the specified Steam group; if the local client knows about it.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the name of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the display name for the specified Steam group; if the local client knows about it.\n\n@param       SteamIDClan             The Steam group to get the name of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanName_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanName", Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::OrionSteamFriends_eventGetClanName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::OrionSteamFriends_eventGetClanName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanName)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetClanName(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanName ************************************

// ********** Begin Class UOrionSteamFriends Function GetClanOfficerByIndex ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics
{
	struct OrionSteamFriends_eventGetClanOfficerByIndex_Parms
	{
		FSteamID SteamIDClan;
		int32 Officer;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the officer at the given index in a Steam group.\n\x09 *\n\x09 * You must call GetClanOfficerCount before calling this.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09This must be the same steam group used in the previous call to GetClanOfficerCount!\n\x09 * @param\x09Officer\x09\x09\x09""An index between 0 and GetClanOfficerCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the officer at the given index in a Steam group.\n\nYou must call GetClanOfficerCount before calling this.\n\n@param       SteamIDClan             This must be the same steam group used in the previous call to GetClanOfficerCount!\n@param       Officer                 An index between 0 and GetClanOfficerCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Officer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOfficerByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_Officer = { "Officer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOfficerByIndex_Parms, Officer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_Officer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanOfficerByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::OrionSteamFriends_eventGetClanOfficerByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::OrionSteamFriends_eventGetClanOfficerByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanOfficerByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_Officer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetClanOfficerByIndex(Z_Param_SteamIDClan,Z_Param_Officer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanOfficerByIndex **************************

// ********** Begin Class UOrionSteamFriends Function GetClanOfficerCount **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics
{
	struct OrionSteamFriends_eventGetClanOfficerCount_Parms
	{
		FSteamID SteamIDClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of officers (administrators and moderators) in a specified Steam group.\n\x09 *\n\x09 * This also includes the owner of the Steam group.\n\x09 * This is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the officer count of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of officers (administrators and moderators) in a specified Steam group.\n\nThis also includes the owner of the Steam group.\nThis is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\n@param       SteamIDClan             The Steam group to get the officer count of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOfficerCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanOfficerCount", Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::OrionSteamFriends_eventGetClanOfficerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::OrionSteamFriends_eventGetClanOfficerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanOfficerCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetClanOfficerCount(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanOfficerCount ****************************

// ********** Begin Class UOrionSteamFriends Function GetClanOwner *********************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics
{
	struct OrionSteamFriends_eventGetClanOwner_Parms
	{
		FSteamID SteamIDClan;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the owner of a Steam Group.\n\x09 *\n\x09 * You must call RequestClanOfficerList before this to get the required data!\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to get the owner for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the owner of a Steam Group.\n\nYou must call RequestClanOfficerList before this to get the required data!\n\n@param       SteamIDClan             The Steam ID of the Steam group to get the owner for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOwner_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanOwner", Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::OrionSteamFriends_eventGetClanOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::OrionSteamFriends_eventGetClanOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetClanOwner(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanOwner ***********************************

// ********** Begin Class UOrionSteamFriends Function GetClanTag ***********************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics
{
	struct OrionSteamFriends_eventGetClanTag_Parms
	{
		FSteamID SteamIDClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\x09 *\n\x09 * The Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters.\n\x09 * In some games this will appear next to the name of group members.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the tag of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\nThe Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters.\nIn some games this will appear next to the name of group members.\n\n@param       SteamIDClan             The Steam group to get the tag of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanTag_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetClanTag", Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::OrionSteamFriends_eventGetClanTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::OrionSteamFriends_eventGetClanTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetClanTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetClanTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetClanTag)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetClanTag(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetClanTag *************************************

// ********** Begin Class UOrionSteamFriends Function GetCoplayFriend ******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics
{
	struct OrionSteamFriends_eventGetCoplayFriend_Parms
	{
		int32 CoplayFriend;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the recently played with user at the given index.\n\x09 *\n\x09 * You must call GetCoplayFriendCount before calling this.\n\x09 *\n\x09 * @param\x09""CoplayFriend\x09\x09""An index between 0 and GetCoplayFriendCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the recently played with user at the given index.\n\nYou must call GetCoplayFriendCount before calling this.\n\n@param       CoplayFriend            An index between 0 and GetCoplayFriendCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoplayFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend = { "CoplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetCoplayFriend_Parms, CoplayFriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetCoplayFriend", Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::OrionSteamFriends_eventGetCoplayFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::OrionSteamFriends_eventGetCoplayFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetCoplayFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetCoplayFriend(Z_Param_CoplayFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetCoplayFriend ********************************

// ********** Begin Class UOrionSteamFriends Function GetCoplayFriendCount *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics
{
	struct OrionSteamFriends_eventGetCoplayFriendCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of players that the current users has recently played with, across all games.\n\x09 *\n\x09 * This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\n\x09 * These players are have been set with previous calls to SetPlayedWith.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of players that the current users has recently played with, across all games.\n\nThis is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\nThese players are have been set with previous calls to SetPlayedWith." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetCoplayFriendCount", Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::OrionSteamFriends_eventGetCoplayFriendCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::OrionSteamFriends_eventGetCoplayFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetCoplayFriendCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetCoplayFriendCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetCoplayFriendCount ***************************

// ********** Begin Class UOrionSteamFriends Function GetFollowerCount *****************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics
{
	struct OrionSteamFriends_eventGetFollowerCount_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of users following the specified user.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param       SteamID         The user to get the follower count for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFollowerCount_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3186351057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFollowerCount_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFollowerCount", Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::OrionSteamFriends_eventGetFollowerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::OrionSteamFriends_eventGetFollowerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFollowerCount)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFollowerCount(FOnGetFollowerCount(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFollowerCount *******************************

// ********** Begin Class UOrionSteamFriends Function GetFriendByIndex *****************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics
{
	struct OrionSteamFriends_eventGetFriendByIndex_Parms
	{
		int32 Ifriend;
		TArray<ESteamFriendFlags> Flags;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the user at the given index.\n\x09 *\n\x09 * You must call GetFriendCount before calling this.\n\x09 *\n\x09 * @param\x09Ifriend\x09\x09\x09""An index between 0 and GetFriendCount.\n\x09 * @param\x09""Flags\x09\x09""A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the user at the given index.\n\nYou must call GetFriendCount before calling this.\n\n@param       Ifriend                 An index between 0 and GetFriendCount.\n@param       Flags           A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendByIndex_Parms, Ifriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 2402471875
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendByIndex_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2402471875
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Ifriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::OrionSteamFriends_eventGetFriendByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::OrionSteamFriends_eventGetFriendByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetFriendByIndex(Z_Param_Ifriend,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendByIndex *******************************

// ********** Begin Class UOrionSteamFriends Function GetFriendCoplayGame **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics
{
	struct OrionSteamFriends_eventGetFriendCoplayGame_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the app ID of the game that user played with someone on their recently-played-with list.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the app ID of the game that user played with someone on their recently-played-with list.\n\n@param       SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCoplayGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendCoplayGame", Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::OrionSteamFriends_eventGetFriendCoplayGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::OrionSteamFriends_eventGetFriendCoplayGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendCoplayGame)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendCoplayGame(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendCoplayGame ****************************

// ********** Begin Class UOrionSteamFriends Function GetFriendCoplayTime **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics
{
	struct OrionSteamFriends_eventGetFriendCoplayTime_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the timestamp of when the user played with someone on their recently-played-with list.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the timestamp of when the user played with someone on their recently-played-with list.\n\n@param       SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCoplayTime_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendCoplayTime", Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::OrionSteamFriends_eventGetFriendCoplayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::OrionSteamFriends_eventGetFriendCoplayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendCoplayTime)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendCoplayTime(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendCoplayTime ****************************

// ********** Begin Class UOrionSteamFriends Function GetFriendCount *******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics
{
	struct OrionSteamFriends_eventGetFriendCount_Parms
	{
		TArray<ESteamFriendFlags> Flags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\x09 *\n\x09 * This can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\x09 *\n\x09 * @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\nThis can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\n@param       Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 2402471875
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCount_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2402471875
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendCount", Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::OrionSteamFriends_eventGetFriendCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::OrionSteamFriends_eventGetFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendCount)
{
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendCount(Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendCount *********************************

// ********** Begin Class UOrionSteamFriends Function GetFriendCountFromSource *********************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics
{
	struct OrionSteamFriends_eventGetFriendCountFromSource_Parms
	{
		FSteamID SteamIDSource;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\x09 *\n\x09 * Large Steam groups cannot be iterated by the local user.\n\x09 * If you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\n\x09 * This is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\x09 *\n\x09 * @param\x09SteamIDSource\x09The Steam group, chat room, lobby or game server to get the user count of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\nLarge Steam groups cannot be iterated by the local user.\nIf you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\nThis is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\n@param       SteamIDSource   The Steam group, chat room, lobby or game server to get the user count of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCountFromSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendCountFromSource", Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::OrionSteamFriends_eventGetFriendCountFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::OrionSteamFriends_eventGetFriendCountFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendCountFromSource)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendCountFromSource(Z_Param_SteamIDSource);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendCountFromSource ***********************

// ********** Begin Class UOrionSteamFriends Function GetFriendFromSourceByIndex *******************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics
{
	struct OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms
	{
		FSteamID SteamIDSource;
		int32 Ifriend;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\x09 *\n\x09 * You must call GetFriendCountFromSource before calling this.\n\x09 *\n\x09 * @param\x09SteamIDSource\x09\x09This MUST be the same source used in the previous call to GetFriendCountFromSource!\n\x09 * @param\x09Ifriend\x09\x09\x09\x09""An index between 0 and GetFriendCountFromSource.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\nYou must call GetFriendCountFromSource before calling this.\n\n@param       SteamIDSource           This MUST be the same source used in the previous call to GetFriendCountFromSource!\n@param       Ifriend                         An index between 0 and GetFriendCountFromSource." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms, Ifriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendFromSourceByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::OrionSteamFriends_eventGetFriendFromSourceByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendFromSourceByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamFriends::GetFriendFromSourceByIndex(Z_Param_SteamIDSource,Z_Param_Ifriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendFromSourceByIndex *********************

// ********** Begin Class UOrionSteamFriends Function GetFriendGamePlayed **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics
{
	struct OrionSteamFriends_eventGetFriendGamePlayed_Parms
	{
		FSteamID SteamIDFriend;
		FSteamGameID GameID;
		FString GameIP;
		int32 ConnectionPort;
		int32 QueryPort;
		FSteamID SteamIDLobby;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the specified friend is in a game, and gets info about the game if they are.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09 * @param\x09GameID\x09\x09\x09\x09Game information\n\x09 * @param\x09GameIP\x09\x09\x09\x09Game information\n\x09 * @param\x09""ConnectionPort\x09\x09Game information\n\x09 * @param\x09QueryPort\x09\x09\x09Game information\n\x09 * @param\x09SteamIDLobby\x09\x09Game information\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified friend is in a game, and gets info about the game if they are.\n\n@param       SteamIDFriend           The Steam ID of the other user.\n@param       GameID                          Game information\n@param       GameIP                          Game information\n@param       ConnectionPort          Game information\n@param       QueryPort                       Game information\n@param       SteamIDLobby            Game information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1837921192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_GameIP = { "GameIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, GameIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendGamePlayed_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_GameIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendGamePlayed", Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::OrionSteamFriends_eventGetFriendGamePlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::OrionSteamFriends_eventGetFriendGamePlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendGamePlayed)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_STRUCT_REF(FSteamGameID,Z_Param_Out_GameID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::GetFriendGamePlayed(Z_Param_SteamIDFriend,Z_Param_Out_GameID,Z_Param_Out_GameIP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendGamePlayed ****************************

// ********** Begin Class UOrionSteamFriends Function GetFriendMessage *****************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics
{
	struct OrionSteamFriends_eventGetFriendMessage_Parms
	{
		FSteamID SteamIDFriend;
		int32 MessageID;
		FString Text;
		ESteamChatEntryType ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the data from a Steam friends message.\n\x09 *\n\x09 * This should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the friend that sent this message.\n\x09 * @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n\x09 * @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into.\n\x09 * @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the data from a Steam friends message.\n\nThis should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\n@param       SteamIDFriend           The Steam ID of the friend that sent this message.\n@param       MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n@param       Text                            The buffer where the chat message will be copied into.\n@param       ChatEntryType           Returns the type of chat entry that was received." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendMessage_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendMessage_Parms, ChatEntryType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 1651998004
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendMessage", Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::OrionSteamFriends_eventGetFriendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::OrionSteamFriends_eventGetFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendMessage(Z_Param_SteamIDFriend,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendMessage *******************************

// ********** Begin Class UOrionSteamFriends Function GetFriendPersonaName *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics
{
	struct OrionSteamFriends_eventGetFriendPersonaName_Parms
	{
		FSteamID SteamIDFriend;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the specified user's persona (display) name.\n\x09 *\n\x09 * This will only be known to the current user if the other user is in their friends list, on the same game server,\n\x09 * in a chat room or lobby, or in a small Steam group with the local user.\n\x09 * Upon on first joining a lobby, chat room, or game server the current user will not known the name\n\x09 * of the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\n\x09 * To get the persona name of the current user use GetPersonaName.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the specified user's persona (display) name.\n\nThis will only be known to the current user if the other user is in their friends list, on the same game server,\nin a chat room or lobby, or in a small Steam group with the local user.\nUpon on first joining a lobby, chat room, or game server the current user will not known the name\nof the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\nTo get the persona name of the current user use GetPersonaName.\n\n@param       SteamIDFriend   The Steam ID of the other user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaName_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendPersonaName", Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::OrionSteamFriends_eventGetFriendPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::OrionSteamFriends_eventGetFriendPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendPersonaName)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetFriendPersonaName(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendPersonaName ***************************

// ********** Begin Class UOrionSteamFriends Function GetFriendPersonaNameHistory ******************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics
{
	struct OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms
	{
		FSteamID SteamIDFriend;
		int32 PersonaName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets one of the previous display names for the specified user.\n\x09 *\n\x09 * This only works for display names that the current user has seen on the local computer.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09 * @param\x09PersonaName\x09\x09\x09The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets one of the previous display names for the specified user.\n\nThis only works for display names that the current user has seen on the local computer.\n\n@param       SteamIDFriend           The Steam ID of the other user.\n@param       PersonaName                     The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PersonaName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName = { "PersonaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms, PersonaName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendPersonaNameHistory", Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::OrionSteamFriends_eventGetFriendPersonaNameHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendPersonaNameHistory)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_PersonaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetFriendPersonaNameHistory(Z_Param_SteamIDFriend,Z_Param_PersonaName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendPersonaNameHistory ********************

// ********** Begin Class UOrionSteamFriends Function GetFriendPersonaState ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics
{
	struct OrionSteamFriends_eventGetFriendPersonaState_Parms
	{
		FSteamID SteamIDFriend;
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current status of the specified user.\n\x09 *\n\x09 * This will only be known to the current user if the other user is in their friends list,\n\x09 * on the same game server, in a chat room or lobby, or in a small Steam group with the local user.\n\x09 * To get the state of the current user use GetPersonaState.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current status of the specified user.\n\nThis will only be known to the current user if the other user is in their friends list,\non the same game server, in a chat room or lobby, or in a small Steam group with the local user.\nTo get the state of the current user use GetPersonaState.\n\n@param       SteamIDFriend   The Steam ID of the other user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaState_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 3423516250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendPersonaState", Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::OrionSteamFriends_eventGetFriendPersonaState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::OrionSteamFriends_eventGetFriendPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendPersonaState)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=UOrionSteamFriends::GetFriendPersonaState(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendPersonaState **************************

// ********** Begin Class UOrionSteamFriends Function GetFriendRelationship ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics
{
	struct OrionSteamFriends_eventGetFriendRelationship_Parms
	{
		FSteamID SteamIDFriend;
		ESteamFriendRelationship ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a relationship to a specified user.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a relationship to a specified user.\n\n@param       SteamIDFriend   The Steam ID of the other user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRelationship_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendRelationship, METADATA_PARAMS(0, nullptr) }; // 2220727298
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendRelationship", Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::OrionSteamFriends_eventGetFriendRelationship_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::OrionSteamFriends_eventGetFriendRelationship_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendRelationship)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamFriendRelationship*)Z_Param__Result=UOrionSteamFriends::GetFriendRelationship(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendRelationship **************************

// ********** Begin Class UOrionSteamFriends Function GetFriendRichPresence ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics
{
	struct OrionSteamFriends_eventGetFriendRichPresence_Parms
	{
		FSteamID SteamIDFriend;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a Rich Presence value from a specified friend.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The friend to get the Rich Presence value for.\n\x09 * @param\x09Key\x09\x09\x09\x09The Rich Presence key to request.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a Rich Presence value from a specified friend.\n\n@param       SteamIDFriend   The friend to get the Rich Presence value for.\n@param       Key                             The Rich Presence key to request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresence_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendRichPresence", Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::OrionSteamFriends_eventGetFriendRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::OrionSteamFriends_eventGetFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendRichPresence)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetFriendRichPresence(Z_Param_SteamIDFriend,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendRichPresence **************************

// ********** Begin Class UOrionSteamFriends Function GetFriendRichPresenceKeyByIndex **************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics
{
	struct OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms
	{
		FSteamID SteamIDFriend;
		int32 Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a Rich Presence key by index.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n\x09 * @param\x09Key\x09\x09\x09\x09""An index between 0 and GetFriendRichPresenceKeyCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a Rich Presence key by index.\n\n@param       SteamIDFriend   This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n@param       Key                             An index between 0 and GetFriendRichPresenceKeyCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendRichPresenceKeyByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::OrionSteamFriends_eventGetFriendRichPresenceKeyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendRichPresenceKeyByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetFriendRichPresenceKeyByIndex(Z_Param_SteamIDFriend,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendRichPresenceKeyByIndex ****************

// ********** Begin Class UOrionSteamFriends Function GetFriendRichPresenceKeyCount ****************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics
{
	struct OrionSteamFriends_eventGetFriendRichPresenceKeyCount_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of Rich Presence keys that are set on the specified user.\n\x09 *\n\x09 * This is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\n\x09 * This is typically only ever used for debugging purposes.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user to get the Rich Presence Key Count of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of Rich Presence keys that are set on the specified user.\n\nThis is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\nThis is typically only ever used for debugging purposes.\n\n@param       SteamIDFriend   The Steam ID of the user to get the Rich Presence Key Count of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresenceKeyCount_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendRichPresenceKeyCount", Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::OrionSteamFriends_eventGetFriendRichPresenceKeyCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::OrionSteamFriends_eventGetFriendRichPresenceKeyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendRichPresenceKeyCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendRichPresenceKeyCount(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendRichPresenceKeyCount ******************

// ********** Begin Class UOrionSteamFriends Function GetFriendsGroupCount *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics
{
	struct OrionSteamFriends_eventGetFriendsGroupCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of friends groups (tags) the user has created.\n\x09 *\n\x09 * This is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\n\x09 * This is not to be confused with Steam groups. Those can be obtained with GetClanCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of friends groups (tags) the user has created.\n\nThis is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\nThis is not to be confused with Steam groups. Those can be obtained with GetClanCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendsGroupCount", Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::OrionSteamFriends_eventGetFriendsGroupCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::OrionSteamFriends_eventGetFriendsGroupCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendsGroupCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendsGroupCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendsGroupCount ***************************

// ********** Begin Class UOrionSteamFriends Function GetFriendsGroupIDByIndex *********************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics
{
	struct OrionSteamFriends_eventGetFriendsGroupIDByIndex_Parms
	{
		int32 FriendGroup;
		FSteamFriendsGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the friends group ID for the given index.\n\x09 *\n\x09 * @param\x09""FriendGroup\x09\x09""An index between 0 and GetFriendsGroupCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the friends group ID for the given index.\n\n@param       FriendGroup             An index between 0 and GetFriendsGroupCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FriendGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup = { "FriendGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupIDByIndex_Parms, FriendGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 3359074190
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendsGroupIDByIndex", Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::OrionSteamFriends_eventGetFriendsGroupIDByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::OrionSteamFriends_eventGetFriendsGroupIDByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendsGroupIDByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FriendGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamFriendsGroupID*)Z_Param__Result=UOrionSteamFriends::GetFriendsGroupIDByIndex(Z_Param_FriendGroup);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendsGroupIDByIndex ***********************

// ********** Begin Class UOrionSteamFriends Function GetFriendsGroupMembersCount ******************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics
{
	struct OrionSteamFriends_eventGetFriendsGroupMembersCount_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of friends in a given friends group.\n\x09 *\n\x09 * This should be called before getting the list of friends with GetFriendsGroupMembersList.\n\x09 *\n\x09 * @param\x09""FriendsGroupID\x09\x09The friends group ID to get the number of friends in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of friends in a given friends group.\n\nThis should be called before getting the list of friends with GetFriendsGroupMembersList.\n\n@param       FriendsGroupID          The friends group ID to get the number of friends in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupMembersCount_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 3359074190
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendsGroupMembersCount", Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::OrionSteamFriends_eventGetFriendsGroupMembersCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::OrionSteamFriends_eventGetFriendsGroupMembersCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendsGroupMembersCount)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendsGroupMembersCount(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendsGroupMembersCount ********************

// ********** Begin Class UOrionSteamFriends Function GetFriendsGroupMembersList *******************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics
{
	struct OrionSteamFriends_eventGetFriendsGroupMembersList_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		TArray<FSteamID> SteamIDMembers;
		int32 MembersCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of friends in the given friends group.\n\x09 *\n\x09 * If fewer friends exist than requested those positions' Steam IDs will be invalid.\n\x09 * You must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\x09 *\n\x09 * @param\x09""FriendsGroupID\x09\x09The friends group ID to get the members list of.\n\x09 * @param\x09SteamIDMembers\x09\x09Returns the Steam IDs of the friends by setting them in this array.\n\x09 * @param\x09MembersCount\x09\x09This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of friends in the given friends group.\n\nIf fewer friends exist than requested those positions' Steam IDs will be invalid.\nYou must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\n@param       FriendsGroupID          The friends group ID to get the members list of.\n@param       SteamIDMembers          Returns the Steam IDs of the friends by setting them in this array.\n@param       MembersCount            This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDMembers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MembersCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupMembersList_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 3359074190
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupMembersList_Parms, SteamIDMembers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount = { "MembersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupMembersList_Parms, MembersCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendsGroupMembersList", Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::OrionSteamFriends_eventGetFriendsGroupMembersList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::OrionSteamFriends_eventGetFriendsGroupMembersList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendsGroupMembersList)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_GET_TARRAY_REF(FSteamID,Z_Param_Out_SteamIDMembers);
	P_GET_PROPERTY(FIntProperty,Z_Param_MembersCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::GetFriendsGroupMembersList(Z_Param_FriendsGroupID,Z_Param_Out_SteamIDMembers,Z_Param_MembersCount);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendsGroupMembersList *********************

// ********** Begin Class UOrionSteamFriends Function GetFriendsGroupName **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics
{
	struct OrionSteamFriends_eventGetFriendsGroupName_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the name for the given friends group.\n\x09 *\n\x09 * @param\x09""FriendsGroupID\x09\x09The friends group ID to get the name of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name for the given friends group.\n\n@param       FriendsGroupID          The friends group ID to get the name of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupName_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 3359074190
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendsGroupName", Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::OrionSteamFriends_eventGetFriendsGroupName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::OrionSteamFriends_eventGetFriendsGroupName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendsGroupName)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetFriendsGroupName(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendsGroupName ****************************

// ********** Begin Class UOrionSteamFriends Function GetFriendSteamLevel **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics
{
	struct OrionSteamFriends_eventGetFriendSteamLevel_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Steam level of the specified user.\n\x09 *\n\x09 * You can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam level of the specified user.\n\nYou can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\n@param       SteamIDFriend   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendSteamLevel_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetFriendSteamLevel", Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::OrionSteamFriends_eventGetFriendSteamLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::OrionSteamFriends_eventGetFriendSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetFriendSteamLevel)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetFriendSteamLevel(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetFriendSteamLevel ****************************

// ********** Begin Class UOrionSteamFriends Function GetLargeFriendAvatar *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics
{
	struct OrionSteamFriends_eventGetLargeFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a handle to the large (128*128px) avatar for the specified user.\n\x09 *\n\x09 * You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09 * This only works for users that the local user knows about. They will automatically know about their friends,\n\x09 * people on leaderboards they've requested, or people in the same source as them\n\x09 * (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09 * RequestUserInformation to cache the avatar locally.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a handle to the large (128*128px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param       SteamIDFriend   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetLargeFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetLargeFriendAvatar", Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::OrionSteamFriends_eventGetLargeFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::OrionSteamFriends_eventGetLargeFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetLargeFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriends::GetLargeFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetLargeFriendAvatar ***************************

// ********** Begin Class UOrionSteamFriends Function GetMediumFriendAvatar ************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics
{
	struct OrionSteamFriends_eventGetMediumFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a handle to the large (64*64px) avatar for the specified user.\n\x09 *\n\x09 * You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09 * This only works for users that the local user knows about. They will automatically know about their friends,\n\x09 * people on leaderboards they've requested, or people in the same source as them\n\x09 * (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09 * RequestUserInformation to cache the avatar locally.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a handle to the large (64*64px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param       SteamIDFriend   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetMediumFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetMediumFriendAvatar", Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::OrionSteamFriends_eventGetMediumFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::OrionSteamFriends_eventGetMediumFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetMediumFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriends::GetMediumFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetMediumFriendAvatar **************************

// ********** Begin Class UOrionSteamFriends Function GetPersonaName *******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics
{
	struct OrionSteamFriends_eventGetPersonaName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current users persona (display) name.\n\x09 *\n\x09 * This is the same name that is displayed the users community profile page.\n\x09 * To get the persona name of other users use GetFriendPersonaName.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPersonaName", Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::OrionSteamFriends_eventGetPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::OrionSteamFriends_eventGetPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPersonaName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetPersonaName();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPersonaName *********************************

// ********** Begin Class UOrionSteamFriends Function GetPersonaName_Pure **************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics
{
	struct OrionSteamFriends_eventGetPersonaName_Pure_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current users persona (display) name.\n\x09 *\n\x09 * This is the same name that is displayed the users community profile page.\n\x09 * To get the persona name of other users use GetFriendPersonaName.\n\x09 */" },
#endif
		{ "DisplayName", "Get Persona Name (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPersonaName_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPersonaName_Pure", Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::OrionSteamFriends_eventGetPersonaName_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::OrionSteamFriends_eventGetPersonaName_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPersonaName_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetPersonaName_Pure();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPersonaName_Pure ****************************

// ********** Begin Class UOrionSteamFriends Function GetPersonaState ******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics
{
	struct OrionSteamFriends_eventGetPersonaState_Parms
	{
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the friend status of the current user.\n\x09 *\n\x09 * To get the state of other users use GetFriendPersonaState.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 3423516250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPersonaState", Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::OrionSteamFriends_eventGetPersonaState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::OrionSteamFriends_eventGetPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPersonaState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=UOrionSteamFriends::GetPersonaState();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPersonaState ********************************

// ********** Begin Class UOrionSteamFriends Function GetPersonaState_Pure *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics
{
	struct OrionSteamFriends_eventGetPersonaState_Pure_Parms
	{
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the friend status of the current user.\n\x09 *\n\x09 * To get the state of other users use GetFriendPersonaState.\n\x09 */" },
#endif
		{ "DisplayName", "Get Persona State (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPersonaState_Pure_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 3423516250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPersonaState_Pure", Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::OrionSteamFriends_eventGetPersonaState_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::OrionSteamFriends_eventGetPersonaState_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPersonaState_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=UOrionSteamFriends::GetPersonaState_Pure();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPersonaState_Pure ***************************

// ********** Begin Class UOrionSteamFriends Function GetPlayerNickname ****************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics
{
	struct OrionSteamFriends_eventGetPlayerNickname_Parms
	{
		FSteamID steamIDPlayer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the nickname that the current user has set for the specified user.\n\x09 *\n\x09 * @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param       steamIDPlayer   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPlayerNickname_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPlayerNickname", Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::OrionSteamFriends_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::OrionSteamFriends_eventGetPlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPlayerNickname)
{
	P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetPlayerNickname(Z_Param_steamIDPlayer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPlayerNickname ******************************

// ********** Begin Class UOrionSteamFriends Function GetPlayerNickname_Pure ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics
{
	struct OrionSteamFriends_eventGetPlayerNickname_Pure_Parms
	{
		FSteamID steamIDPlayer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the nickname that the current user has set for the specified user.\n\x09 *\n\x09 * @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "DisplayName", "Get Player Nickname (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param       steamIDPlayer   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPlayerNickname_Pure_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetPlayerNickname_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetPlayerNickname_Pure", Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::OrionSteamFriends_eventGetPlayerNickname_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::OrionSteamFriends_eventGetPlayerNickname_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetPlayerNickname_Pure)
{
	P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetPlayerNickname_Pure(Z_Param_steamIDPlayer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetPlayerNickname_Pure *************************

// ********** Begin Class UOrionSteamFriends Function GetProfileItemPropertyString *****************
struct Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics
{
	struct OrionSteamFriends_eventGetProfileItemPropertyString_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		ESteamCommunityProfileItemProperty Prop;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a string property given a ECommunityProfileItemType and ECommunityProfileItemProperty\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a string property given a ECommunityProfileItemType and ECommunityProfileItemProperty" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Prop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Prop;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyString_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyString_Parms, ItemType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2372522621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyString_Parms, Prop), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 3997753637
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_Prop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_Prop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetProfileItemPropertyString", Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::OrionSteamFriends_eventGetProfileItemPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::OrionSteamFriends_eventGetProfileItemPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetProfileItemPropertyString)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_GET_ENUM(ESteamCommunityProfileItemProperty,Z_Param_Prop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriends::GetProfileItemPropertyString(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType),ESteamCommunityProfileItemProperty(Z_Param_Prop));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetProfileItemPropertyString *******************

// ********** Begin Class UOrionSteamFriends Function GetProfileItemPropertyUint *******************
struct Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics
{
	struct OrionSteamFriends_eventGetProfileItemPropertyUint_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		ESteamCommunityProfileItemProperty Prop;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns an unsigned integer property given a ECommunityProfileItemType and ECommunityProfileItemProperty\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an unsigned integer property given a ECommunityProfileItemType and ECommunityProfileItemProperty" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Prop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Prop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyUint_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyUint_Parms, ItemType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2372522621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyUint_Parms, Prop), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamCommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 3997753637
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetProfileItemPropertyUint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetProfileItemPropertyUint", Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::OrionSteamFriends_eventGetProfileItemPropertyUint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::OrionSteamFriends_eventGetProfileItemPropertyUint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetProfileItemPropertyUint)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_GET_ENUM(ESteamCommunityProfileItemProperty,Z_Param_Prop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriends::GetProfileItemPropertyUint(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType),ESteamCommunityProfileItemProperty(Z_Param_Prop));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetProfileItemPropertyUint *********************

// ********** Begin Class UOrionSteamFriends Function GetSmallFriendAvatar *************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics
{
	struct OrionSteamFriends_eventGetSmallFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a handle to the large (32*32px) avatar for the specified user.\n\x09 *\n\x09 * You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09 * This only works for users that the local user knows about. They will automatically know about their friends,\n\x09 * people on leaderboards they've requested, or people in the same source as them\n\x09 * (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09 * RequestUserInformation to cache the avatar locally.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a handle to the large (32*32px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param       SteamIDFriend   The Steam ID of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetSmallFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetSmallFriendAvatar", Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::OrionSteamFriends_eventGetSmallFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::OrionSteamFriends_eventGetSmallFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetSmallFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriends::GetSmallFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetSmallFriendAvatar ***************************

// ********** Begin Class UOrionSteamFriends Function GetSteamFriends ******************************
struct Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics
{
	struct OrionSteamFriends_eventGetSteamFriends_Parms
	{
		UOrionSteamFriends* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventGetSteamFriends_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriends_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "GetSteamFriends", Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::OrionSteamFriends_eventGetSteamFriends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::OrionSteamFriends_eventGetSteamFriends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execGetSteamFriends)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriends**)Z_Param__Result=UOrionSteamFriends::GetSteamFriends();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function GetSteamFriends ********************************

// ********** Begin Class UOrionSteamFriends Function HasFriend ************************************
struct Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics
{
	struct OrionSteamFriends_eventHasFriend_Parms
	{
		FSteamID SteamIDFriend;
		TArray<ESteamFriendFlags> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam user to check the friend status of.\n\x09 * @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\n@param       SteamIDFriend   The Steam user to check the friend status of.\n@param       Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventHasFriend_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 2402471875
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventHasFriend_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2402471875
void Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventHasFriend_Parms), &Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "HasFriend", Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::OrionSteamFriends_eventHasFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::OrionSteamFriends_eventHasFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_HasFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_HasFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execHasFriend)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::HasFriend(Z_Param_SteamIDFriend,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function HasFriend **************************************

// ********** Begin Class UOrionSteamFriends Function InviteUserToGame *****************************
struct Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics
{
	struct OrionSteamFriends_eventInviteUserToGame_Parms
	{
		FSteamID SteamIDFriend;
		FString ConnectString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Invites a friend or clan member to the current game using a special invite string.\n\x09 *\n\x09 * If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\n\x09 * If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the friend to invite.\n\x09 * @param\x09""ConnectString\x09""A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invites a friend or clan member to the current game using a special invite string.\n\nIf the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\nIf the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\n@param       SteamIDFriend   The Steam ID of the friend to invite.\n@param       ConnectString   A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventInviteUserToGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventInviteUserToGame_Parms), &Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "InviteUserToGame", Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::OrionSteamFriends_eventInviteUserToGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::OrionSteamFriends_eventInviteUserToGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execInviteUserToGame)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::InviteUserToGame(Z_Param_SteamIDFriend,Z_Param_ConnectString);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function InviteUserToGame *******************************

// ********** Begin Class UOrionSteamFriends Function IsClanChatAdmin ******************************
struct Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics
{
	struct OrionSteamFriends_eventIsClanChatAdmin_Parms
	{
		FSteamID SteamIDClanChat;
		FSteamID steamIDUser;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if a user in the Steam group chat room is an admin.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09 * @param\x09steamIDUser\x09\x09\x09The Steam ID of the user to check the admin status of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a user in the Steam group chat room is an admin.\n\n@param       SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param       steamIDUser                     The Steam ID of the user to check the admin status of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsClanChatAdmin_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsClanChatAdmin_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsClanChatAdmin", Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::OrionSteamFriends_eventIsClanChatAdmin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::OrionSteamFriends_eventIsClanChatAdmin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsClanChatAdmin)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::IsClanChatAdmin(Z_Param_SteamIDClanChat,Z_Param_steamIDUser);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsClanChatAdmin ********************************

// ********** Begin Class UOrionSteamFriends Function IsClanChatWindowOpenInSteam ******************
struct Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics
{
	struct OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Steam Group chat room is open in the Steam UI.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to check.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Steam Group chat room is open in the Steam UI.\n\n@param       SteamIDClanChat         The Steam ID of the Steam group chat room to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsClanChatWindowOpenInSteam", Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::OrionSteamFriends_eventIsClanChatWindowOpenInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsClanChatWindowOpenInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::IsClanChatWindowOpenInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsClanChatWindowOpenInSteam ********************

// ********** Begin Class UOrionSteamFriends Function IsClanOfficialGameGroup **********************
struct Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics
{
	struct OrionSteamFriends_eventIsClanOfficialGameGroup_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Steam group is an official game group/community hub.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Steam group is an official game group/community hub.\n\n@param       SteamIDClan             The Steam ID of the Steam group." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsClanOfficialGameGroup_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsClanOfficialGameGroup", Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::OrionSteamFriends_eventIsClanOfficialGameGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::OrionSteamFriends_eventIsClanOfficialGameGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsClanOfficialGameGroup)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::IsClanOfficialGameGroup(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsClanOfficialGameGroup ************************

// ********** Begin Class UOrionSteamFriends Function IsClanPublic *********************************
struct Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics
{
	struct OrionSteamFriends_eventIsClanPublic_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Steam group is public.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Steam group is public.\n\n@param       SteamIDClan             The Steam ID of the Steam group." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsClanPublic_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventIsClanPublic_Parms), &Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsClanPublic", Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::OrionSteamFriends_eventIsClanPublic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::OrionSteamFriends_eventIsClanPublic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsClanPublic)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::IsClanPublic(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsClanPublic ***********************************

// ********** Begin Class UOrionSteamFriends Function IsFollowing **********************************
struct Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics
{
	struct OrionSteamFriends_eventIsFollowing_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the current user is following the specified user.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param       SteamID         The Steam ID of the check if we are following." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsFollowing_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2939033793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsFollowing_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsFollowing", Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::OrionSteamFriends_eventIsFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::OrionSteamFriends_eventIsFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsFollowing)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsFollowing(FOnIsFollowing(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsFollowing ************************************

// ********** Begin Class UOrionSteamFriends Function IsUserInSource *******************************
struct Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics
{
	struct OrionSteamFriends_eventIsUserInSource_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The user to check if they are in the source.\n\x09 * @param\x09SteamIDSource\x09The source to check for the user.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\n@param       SteamIDUser             The user to check if they are in the source.\n@param       SteamIDSource   The source to check for the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsUserInSource_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventIsUserInSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventIsUserInSource_Parms), &Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "IsUserInSource", Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::OrionSteamFriends_eventIsUserInSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::OrionSteamFriends_eventIsUserInSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execIsUserInSource)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::IsUserInSource(Z_Param_SteamIDUser,Z_Param_SteamIDSource);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function IsUserInSource *********************************

// ********** Begin Class UOrionSteamFriends Function JoinClanChatRoom *****************************
struct Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics
{
	struct OrionSteamFriends_eventJoinClanChatRoom_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows the user to join Steam group (clan) chats right within the game.\n\x09 *\n\x09 * The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09 * You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\n\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param       SteamIDClan             The Steam ID of the Steam group to join." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventJoinClanChatRoom_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoom__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4187261057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventJoinClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "JoinClanChatRoom", Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::OrionSteamFriends_eventJoinClanChatRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::OrionSteamFriends_eventJoinClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execJoinClanChatRoom)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinClanChatRoom(FOnJoinClanChatRoom(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function JoinClanChatRoom *******************************

// ********** Begin Class UOrionSteamFriends Function LeaveClanChatRoom ****************************
struct Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics
{
	struct OrionSteamFriends_eventLeaveClanChatRoom_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group chat to leave.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\n@param       SteamIDClan             The Steam ID of the Steam group chat to leave." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventLeaveClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "LeaveClanChatRoom", Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::OrionSteamFriends_eventLeaveClanChatRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::OrionSteamFriends_eventLeaveClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execLeaveClanChatRoom)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::LeaveClanChatRoom(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function LeaveClanChatRoom ******************************

// ********** Begin Class UOrionSteamFriends Function OpenClanChatWindowInSteam ********************
struct Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics
{
	struct OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Opens the specified Steam group chat room in the Steam UI.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to open.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens the specified Steam group chat room in the Steam UI.\n\n@param       SteamIDClanChat         The Steam ID of the Steam group chat room to open." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "OpenClanChatWindowInSteam", Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::OrionSteamFriends_eventOpenClanChatWindowInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execOpenClanChatWindowInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::OpenClanChatWindowInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function OpenClanChatWindowInSteam **********************

// ********** Begin Class UOrionSteamFriends Function RegisterProtocolInOverlayBrowser *************
struct Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics
{
	struct OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms
	{
		FString Protocol;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\n\x09 * to your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\n\x09 * ActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\nto your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\nActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms, Protocol), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms), &Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "RegisterProtocolInOverlayBrowser", Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::OrionSteamFriends_eventRegisterProtocolInOverlayBrowser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execRegisterProtocolInOverlayBrowser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::RegisterProtocolInOverlayBrowser(Z_Param_Protocol);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function RegisterProtocolInOverlayBrowser ***************

// ********** Begin Class UOrionSteamFriends Function ReplyToFriendMessage *************************
struct Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics
{
	struct OrionSteamFriends_eventReplyToFriendMessage_Parms
	{
		FSteamID SteamIDFriend;
		FString MsgToSend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sends a message to a Steam friend.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09\x09The Steam ID of the friend to send the message to.\n\x09 * @param\x09MsgToSend\x09\x09\x09The UTF-8 formatted message to send.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a message to a Steam friend.\n\n@param       SteamIDFriend           The Steam ID of the friend to send the message to.\n@param       MsgToSend                       The UTF-8 formatted message to send." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MsgToSend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventReplyToFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend = { "MsgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventReplyToFriendMessage_Parms, MsgToSend), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "ReplyToFriendMessage", Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::OrionSteamFriends_eventReplyToFriendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::OrionSteamFriends_eventReplyToFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execReplyToFriendMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_MsgToSend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::ReplyToFriendMessage(Z_Param_SteamIDFriend,Z_Param_MsgToSend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function ReplyToFriendMessage ***************************

// ********** Begin Class UOrionSteamFriends Function RequestClanOfficerList ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics
{
	struct OrionSteamFriends_eventRequestClanOfficerList_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests information about a Steam group officers (administrators and moderators).\n\x09 *\n\x09 * You can only ask about Steam groups that a user is a member of.\n\x09 * This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\n\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param       SteamIDClan             The Steam group to get the officers list for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestClanOfficerList_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2987867975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestClanOfficerList_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "RequestClanOfficerList", Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::OrionSteamFriends_eventRequestClanOfficerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::OrionSteamFriends_eventRequestClanOfficerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execRequestClanOfficerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestClanOfficerList(FOnRequestClanOfficerList(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function RequestClanOfficerList *************************

// ********** Begin Class UOrionSteamFriends Function RequestEquippedProfileItems ******************
struct Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics
{
	struct OrionSteamFriends_eventRequestEquippedProfileItems_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Steam Community items equipped by a user on their profile\n\x09 * You can register for EquippedProfileItemsChanged_t to know when a friend has changed their equipped profile items\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steam Community items equipped by a user on their profile\nYou can register for EquippedProfileItemsChanged_t to know when a friend has changed their equipped profile items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestEquippedProfileItems_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestEquippedProfileItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4195636514
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestEquippedProfileItems_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "RequestEquippedProfileItems", Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::OrionSteamFriends_eventRequestEquippedProfileItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::OrionSteamFriends_eventRequestEquippedProfileItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execRequestEquippedProfileItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEquippedProfileItems(FOnRequestEquippedProfileItems(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function RequestEquippedProfileItems ********************

// ********** Begin Class UOrionSteamFriends Function RequestFriendRichPresence ********************
struct Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics
{
	struct OrionSteamFriends_eventRequestFriendRichPresence_Parms
	{
		FSteamID SteamIDFriend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests Rich Presence data from a specific user.\n\x09 *\n\x09 * This is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\n\x09 * This function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\x09 *\n\x09 * @param\x09SteamIDFriend\x09The Steam ID of the user to request the rich presence of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests Rich Presence data from a specific user.\n\nThis is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\nThis function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\n@param       SteamIDFriend   The Steam ID of the user to request the rich presence of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "RequestFriendRichPresence", Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::OrionSteamFriends_eventRequestFriendRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::OrionSteamFriends_eventRequestFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execRequestFriendRichPresence)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::RequestFriendRichPresence(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function RequestFriendRichPresence **********************

// ********** Begin Class UOrionSteamFriends Function RequestUserInformation ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics
{
	struct OrionSteamFriends_eventRequestUserInformation_Parms
	{
		FSteamID SteamIDUser;
		bool bRequireNameOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the persona name and optionally the avatar of a specified user.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09\x09The user to request the information of.\n\x09 * @param\x09""bRequireNameOnly\x09Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\n@param       SteamIDUser                     The user to request the information of.\n@param       bRequireNameOnly        Retrieve the Persona name only (true)? Or both the name and the avatar (false)?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventRequestUserInformation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((OrionSteamFriends_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "RequestUserInformation", Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::OrionSteamFriends_eventRequestUserInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::OrionSteamFriends_eventRequestUserInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execRequestUserInformation)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::RequestUserInformation(Z_Param_SteamIDUser,Z_Param_bRequireNameOnly);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function RequestUserInformation *************************

// ********** Begin Class UOrionSteamFriends Function SendClanChatMessage **************************
struct Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics
{
	struct OrionSteamFriends_eventSendClanChatMessage_Parms
	{
		FSteamID SteamIDClanChat;
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sends a message to a Steam group chat room.\n\x09 *\n\x09 * @param\x09SteamIDClanChat\x09\x09The Steam ID of the group chat to send the message to.\n\x09 * @param\x09Text\x09\x09\x09\x09The UTF-8 formatted message to send. This can be up to 2048 characters long.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a message to a Steam group chat room.\n\n@param       SteamIDClanChat         The Steam ID of the group chat to send the message to.\n@param       Text                            The UTF-8 formatted message to send. This can be up to 2048 characters long." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSendClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSendClanChatMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "SendClanChatMessage", Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::OrionSteamFriends_eventSendClanChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::OrionSteamFriends_eventSendClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execSendClanChatMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::SendClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function SendClanChatMessage ****************************

// ********** Begin Class UOrionSteamFriends Function SetInGameVoiceSpeaking ***********************
struct Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics
{
	struct OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms
	{
		FSteamID SteamIDUser;
		bool bSpeaking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Let Steam know that the user is currently using voice chat in game.\n\x09 *\n\x09 * This will suppress the microphone for all voice communication in the Steam UI.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09Unused.\n\x09 * @param\x09""bSpeaking\x09\x09""Did the user start speaking in game (true) or stopped speaking in game (false)?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Let Steam know that the user is currently using voice chat in game.\n\nThis will suppress the microphone for all voice communication in the Steam UI.\n\n@param       SteamIDUser             Unused.\n@param       bSpeaking               Did the user start speaking in game (true) or stopped speaking in game (false)?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bSpeaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
{
	((OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "SetInGameVoiceSpeaking", Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::OrionSteamFriends_eventSetInGameVoiceSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execSetInGameVoiceSpeaking)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bSpeaking);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::SetInGameVoiceSpeaking(Z_Param_SteamIDUser,Z_Param_bSpeaking);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function SetInGameVoiceSpeaking *************************

// ********** Begin Class UOrionSteamFriends Function SetListenForFriendsMessages ******************
struct Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics
{
	struct OrionSteamFriends_eventSetListenForFriendsMessages_Parms
	{
		bool bInterceptEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Listens for Steam friends chat messages.\n\x09 *\n\x09 * You can then show these chats inline in the game.\n\x09 * For example with a Blizzard style chat message system or the chat system in Dota 2.\n\x09 * After enabling this you will receive GameConnectedFriendChatMsg_t\n\x09 * Callbacks when ever the user receives a chat message.\n\x09 * You can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\x09 *\n\x09 * @param\x09""bInterceptEnabled\x09Turn friends message interception on (true) or off (false)?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for Steam friends chat messages.\n\nYou can then show these chats inline in the game.\nFor example with a Blizzard style chat message system or the chat system in Dota 2.\nAfter enabling this you will receive GameConnectedFriendChatMsg_t\nCallbacks when ever the user receives a chat message.\nYou can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\n@param       bInterceptEnabled       Turn friends message interception on (true) or off (false)?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInterceptEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
{
	((OrionSteamFriends_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "SetListenForFriendsMessages", Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::OrionSteamFriends_eventSetListenForFriendsMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::OrionSteamFriends_eventSetListenForFriendsMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execSetListenForFriendsMessages)
{
	P_GET_UBOOL(Z_Param_bInterceptEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function SetListenForFriendsMessages ********************

// ********** Begin Class UOrionSteamFriends Function SetPlayedWith ********************************
struct Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics
{
	struct OrionSteamFriends_eventSetPlayedWith_Parms
	{
		FSteamID SteamIDUserPlayedWith;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mark a target user as 'played with'.\n\x09 *\n\x09 * The current user must be in game with the other player for the association to work.\n\x09 *\n\x09 * @param\x09SteamIDUserPlayedWith\x09The other user that we have played with.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mark a target user as 'played with'.\n\nThe current user must be in game with the other player for the association to work.\n\n@param       SteamIDUserPlayedWith   The other user that we have played with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserPlayedWith;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith = { "SteamIDUserPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSetPlayedWith_Parms, SteamIDUserPlayedWith), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "SetPlayedWith", Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::OrionSteamFriends_eventSetPlayedWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::OrionSteamFriends_eventSetPlayedWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execSetPlayedWith)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUserPlayedWith);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamFriends::SetPlayedWith(Z_Param_SteamIDUserPlayedWith);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function SetPlayedWith **********************************

// ********** Begin Class UOrionSteamFriends Function SetRichPresence ******************************
struct Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics
{
	struct OrionSteamFriends_eventSetRichPresence_Parms
	{
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\x09 *\n\x09 * Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\x09 *\n\x09 * @param\x09Key\x09\x09The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n\x09 * @param\x09Value\x09The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\nEach user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\n@param       Key             The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n@param       Value   The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSetRichPresence_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriends_eventSetRichPresence_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamFriends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriends_eventSetRichPresence_Parms), &Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriends, nullptr, "SetRichPresence", Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::OrionSteamFriends_eventSetRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::OrionSteamFriends_eventSetRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriends::execSetRichPresence)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamFriends::SetRichPresence(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriends Function SetRichPresence ********************************

// ********** Begin Class UOrionSteamFriends *******************************************************
void UOrionSteamFriends::StaticRegisterNativesUOrionSteamFriends()
{
	UClass* Class = UOrionSteamFriends::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateGameOverlay", &UOrionSteamFriends::execActivateGameOverlay },
		{ "ActivateGameOverlayInvitedialog", &UOrionSteamFriends::execActivateGameOverlayInvitedialog },
		{ "ActivateGameOverlayInviteDialogConnectString", &UOrionSteamFriends::execActivateGameOverlayInviteDialogConnectString },
		{ "ActivateGameOverlayToStore", &UOrionSteamFriends::execActivateGameOverlayToStore },
		{ "ActivateGameOverlayToUser", &UOrionSteamFriends::execActivateGameOverlayToUser },
		{ "ActivateGameOverlayToWebPage", &UOrionSteamFriends::execActivateGameOverlayToWebPage },
		{ "BHasEquippedProfileItem", &UOrionSteamFriends::execBHasEquippedProfileItem },
		{ "ClearRichPresence", &UOrionSteamFriends::execClearRichPresence },
		{ "CloseClanChatWindowInSteam", &UOrionSteamFriends::execCloseClanChatWindowInSteam },
		{ "DownloadClanActivityCounts", &UOrionSteamFriends::execDownloadClanActivityCounts },
		{ "EnumerateFollowingList", &UOrionSteamFriends::execEnumerateFollowingList },
		{ "GetChatMemberByIndex", &UOrionSteamFriends::execGetChatMemberByIndex },
		{ "GetClanActivityCounts", &UOrionSteamFriends::execGetClanActivityCounts },
		{ "GetClanByIndex", &UOrionSteamFriends::execGetClanByIndex },
		{ "GetClanChatMemberCount", &UOrionSteamFriends::execGetClanChatMemberCount },
		{ "GetClanChatMessage", &UOrionSteamFriends::execGetClanChatMessage },
		{ "GetClanCount", &UOrionSteamFriends::execGetClanCount },
		{ "GetClanName", &UOrionSteamFriends::execGetClanName },
		{ "GetClanOfficerByIndex", &UOrionSteamFriends::execGetClanOfficerByIndex },
		{ "GetClanOfficerCount", &UOrionSteamFriends::execGetClanOfficerCount },
		{ "GetClanOwner", &UOrionSteamFriends::execGetClanOwner },
		{ "GetClanTag", &UOrionSteamFriends::execGetClanTag },
		{ "GetCoplayFriend", &UOrionSteamFriends::execGetCoplayFriend },
		{ "GetCoplayFriendCount", &UOrionSteamFriends::execGetCoplayFriendCount },
		{ "GetFollowerCount", &UOrionSteamFriends::execGetFollowerCount },
		{ "GetFriendByIndex", &UOrionSteamFriends::execGetFriendByIndex },
		{ "GetFriendCoplayGame", &UOrionSteamFriends::execGetFriendCoplayGame },
		{ "GetFriendCoplayTime", &UOrionSteamFriends::execGetFriendCoplayTime },
		{ "GetFriendCount", &UOrionSteamFriends::execGetFriendCount },
		{ "GetFriendCountFromSource", &UOrionSteamFriends::execGetFriendCountFromSource },
		{ "GetFriendFromSourceByIndex", &UOrionSteamFriends::execGetFriendFromSourceByIndex },
		{ "GetFriendGamePlayed", &UOrionSteamFriends::execGetFriendGamePlayed },
		{ "GetFriendMessage", &UOrionSteamFriends::execGetFriendMessage },
		{ "GetFriendPersonaName", &UOrionSteamFriends::execGetFriendPersonaName },
		{ "GetFriendPersonaNameHistory", &UOrionSteamFriends::execGetFriendPersonaNameHistory },
		{ "GetFriendPersonaState", &UOrionSteamFriends::execGetFriendPersonaState },
		{ "GetFriendRelationship", &UOrionSteamFriends::execGetFriendRelationship },
		{ "GetFriendRichPresence", &UOrionSteamFriends::execGetFriendRichPresence },
		{ "GetFriendRichPresenceKeyByIndex", &UOrionSteamFriends::execGetFriendRichPresenceKeyByIndex },
		{ "GetFriendRichPresenceKeyCount", &UOrionSteamFriends::execGetFriendRichPresenceKeyCount },
		{ "GetFriendsGroupCount", &UOrionSteamFriends::execGetFriendsGroupCount },
		{ "GetFriendsGroupIDByIndex", &UOrionSteamFriends::execGetFriendsGroupIDByIndex },
		{ "GetFriendsGroupMembersCount", &UOrionSteamFriends::execGetFriendsGroupMembersCount },
		{ "GetFriendsGroupMembersList", &UOrionSteamFriends::execGetFriendsGroupMembersList },
		{ "GetFriendsGroupName", &UOrionSteamFriends::execGetFriendsGroupName },
		{ "GetFriendSteamLevel", &UOrionSteamFriends::execGetFriendSteamLevel },
		{ "GetLargeFriendAvatar", &UOrionSteamFriends::execGetLargeFriendAvatar },
		{ "GetMediumFriendAvatar", &UOrionSteamFriends::execGetMediumFriendAvatar },
		{ "GetPersonaName", &UOrionSteamFriends::execGetPersonaName },
		{ "GetPersonaName_Pure", &UOrionSteamFriends::execGetPersonaName_Pure },
		{ "GetPersonaState", &UOrionSteamFriends::execGetPersonaState },
		{ "GetPersonaState_Pure", &UOrionSteamFriends::execGetPersonaState_Pure },
		{ "GetPlayerNickname", &UOrionSteamFriends::execGetPlayerNickname },
		{ "GetPlayerNickname_Pure", &UOrionSteamFriends::execGetPlayerNickname_Pure },
		{ "GetProfileItemPropertyString", &UOrionSteamFriends::execGetProfileItemPropertyString },
		{ "GetProfileItemPropertyUint", &UOrionSteamFriends::execGetProfileItemPropertyUint },
		{ "GetSmallFriendAvatar", &UOrionSteamFriends::execGetSmallFriendAvatar },
		{ "GetSteamFriends", &UOrionSteamFriends::execGetSteamFriends },
		{ "HasFriend", &UOrionSteamFriends::execHasFriend },
		{ "InviteUserToGame", &UOrionSteamFriends::execInviteUserToGame },
		{ "IsClanChatAdmin", &UOrionSteamFriends::execIsClanChatAdmin },
		{ "IsClanChatWindowOpenInSteam", &UOrionSteamFriends::execIsClanChatWindowOpenInSteam },
		{ "IsClanOfficialGameGroup", &UOrionSteamFriends::execIsClanOfficialGameGroup },
		{ "IsClanPublic", &UOrionSteamFriends::execIsClanPublic },
		{ "IsFollowing", &UOrionSteamFriends::execIsFollowing },
		{ "IsUserInSource", &UOrionSteamFriends::execIsUserInSource },
		{ "JoinClanChatRoom", &UOrionSteamFriends::execJoinClanChatRoom },
		{ "LeaveClanChatRoom", &UOrionSteamFriends::execLeaveClanChatRoom },
		{ "OpenClanChatWindowInSteam", &UOrionSteamFriends::execOpenClanChatWindowInSteam },
		{ "RegisterProtocolInOverlayBrowser", &UOrionSteamFriends::execRegisterProtocolInOverlayBrowser },
		{ "ReplyToFriendMessage", &UOrionSteamFriends::execReplyToFriendMessage },
		{ "RequestClanOfficerList", &UOrionSteamFriends::execRequestClanOfficerList },
		{ "RequestEquippedProfileItems", &UOrionSteamFriends::execRequestEquippedProfileItems },
		{ "RequestFriendRichPresence", &UOrionSteamFriends::execRequestFriendRichPresence },
		{ "RequestUserInformation", &UOrionSteamFriends::execRequestUserInformation },
		{ "SendClanChatMessage", &UOrionSteamFriends::execSendClanChatMessage },
		{ "SetInGameVoiceSpeaking", &UOrionSteamFriends::execSetInGameVoiceSpeaking },
		{ "SetListenForFriendsMessages", &UOrionSteamFriends::execSetListenForFriendsMessages },
		{ "SetPlayedWith", &UOrionSteamFriends::execSetPlayedWith },
		{ "SetRichPresence", &UOrionSteamFriends::execSetRichPresence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriends;
UClass* UOrionSteamFriends::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriends;
	if (!Z_Registration_Info_UClass_UOrionSteamFriends.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriends"),
			Z_Registration_Info_UClass_UOrionSteamFriends.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriends,
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
	return Z_Registration_Info_UClass_UOrionSteamFriends.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriends_NoRegister()
{
	return UOrionSteamFriends::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriends_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamFriends/SteamFriends.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarImageLoaded_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatJoin_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatLeave_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedClanChatMsg_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameLobbyJoinRequested_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverlayActivated_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerChangeRequested_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaStateChange_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinClanChatRoomCompletionResult_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClanOfficerListResponse_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadClanActivityCountsResult_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedProfileItemsChanged_MetaData[] = {
		{ "Category", "OrionSteam|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarImageLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendRichPresenceUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatJoin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatLeave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedClanChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedFriendChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameLobbyJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOverlayActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameRichPresenceJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameServerChangeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PersonaStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinClanChatRoomCompletionResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClanOfficerListResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadClanActivityCountsResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EquippedProfileItemsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 4126749890
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInvitedialog, "ActivateGameOverlayInvitedialog" }, // 3665895676
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayInviteDialogConnectString, "ActivateGameOverlayInviteDialogConnectString" }, // 2562587102
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 1517332777
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 2502535283
		{ &Z_Construct_UFunction_UOrionSteamFriends_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 3372080050
		{ &Z_Construct_UFunction_UOrionSteamFriends_BHasEquippedProfileItem, "BHasEquippedProfileItem" }, // 3684404694
		{ &Z_Construct_UFunction_UOrionSteamFriends_ClearRichPresence, "ClearRichPresence" }, // 1953835585
		{ &Z_Construct_UFunction_UOrionSteamFriends_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 1358709763
		{ &Z_Construct_UFunction_UOrionSteamFriends_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 3302784903
		{ &Z_Construct_UFunction_UOrionSteamFriends_EnumerateFollowingList, "EnumerateFollowingList" }, // 764682193
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 4118652047
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanActivityCounts, "GetClanActivityCounts" }, // 1099286716
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanByIndex, "GetClanByIndex" }, // 1630686264
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 287239253
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanChatMessage, "GetClanChatMessage" }, // 1196925545
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanCount, "GetClanCount" }, // 2649049222
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanName, "GetClanName" }, // 3100707931
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 4086447069
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanOfficerCount, "GetClanOfficerCount" }, // 2802783568
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanOwner, "GetClanOwner" }, // 2702756169
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetClanTag, "GetClanTag" }, // 1079816420
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriend, "GetCoplayFriend" }, // 1854579660
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 592014340
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFollowerCount, "GetFollowerCount" }, // 2589398563
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendByIndex, "GetFriendByIndex" }, // 1036937023
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 2436217474
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 1036241563
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendCount, "GetFriendCount" }, // 419347681
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 698501432
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 3082602687
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 2145743319
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendMessage, "GetFriendMessage" }, // 2053946403
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 1042204569
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 2423569452
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 1898985252
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendRelationship, "GetFriendRelationship" }, // 974272068
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresence, "GetFriendRichPresence" }, // 1709523065
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 3858693433
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 3097407943
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupCount, "GetFriendsGroupCount" }, // 457122894
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupIDByIndex, "GetFriendsGroupIDByIndex" }, // 1999016827
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersCount, "GetFriendsGroupMembersCount" }, // 881525051
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 1656022185
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendsGroupName, "GetFriendsGroupName" }, // 851915507
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 3132562465
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 1955500972
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 2798408206
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName, "GetPersonaName" }, // 3247456692
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPersonaName_Pure, "GetPersonaName_Pure" }, // 1986316502
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState, "GetPersonaState" }, // 3951578916
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPersonaState_Pure, "GetPersonaState_Pure" }, // 2788967295
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname, "GetPlayerNickname" }, // 1323579984
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetPlayerNickname_Pure, "GetPlayerNickname_Pure" }, // 3931257160
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyString, "GetProfileItemPropertyString" }, // 2173137667
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetProfileItemPropertyUint, "GetProfileItemPropertyUint" }, // 3694491782
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 3279214414
		{ &Z_Construct_UFunction_UOrionSteamFriends_GetSteamFriends, "GetSteamFriends" }, // 3178881639
		{ &Z_Construct_UFunction_UOrionSteamFriends_HasFriend, "HasFriend" }, // 1960111288
		{ &Z_Construct_UFunction_UOrionSteamFriends_InviteUserToGame, "InviteUserToGame" }, // 1875154456
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsClanChatAdmin, "IsClanChatAdmin" }, // 172201306
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 2372649391
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 1726390354
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsClanPublic, "IsClanPublic" }, // 507252044
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsFollowing, "IsFollowing" }, // 1316165435
		{ &Z_Construct_UFunction_UOrionSteamFriends_IsUserInSource, "IsUserInSource" }, // 1533674735
		{ &Z_Construct_UFunction_UOrionSteamFriends_JoinClanChatRoom, "JoinClanChatRoom" }, // 2748143025
		{ &Z_Construct_UFunction_UOrionSteamFriends_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 1269829853
		{ &Z_Construct_UFunction_UOrionSteamFriends_OpenClanChatWindowInSteam, "OpenClanChatWindowInSteam" }, // 3334050549
		{ &Z_Construct_UFunction_UOrionSteamFriends_RegisterProtocolInOverlayBrowser, "RegisterProtocolInOverlayBrowser" }, // 1826733740
		{ &Z_Construct_UFunction_UOrionSteamFriends_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 1871956343
		{ &Z_Construct_UFunction_UOrionSteamFriends_RequestClanOfficerList, "RequestClanOfficerList" }, // 7480221
		{ &Z_Construct_UFunction_UOrionSteamFriends_RequestEquippedProfileItems, "RequestEquippedProfileItems" }, // 1931008001
		{ &Z_Construct_UFunction_UOrionSteamFriends_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 1602664173
		{ &Z_Construct_UFunction_UOrionSteamFriends_RequestUserInformation, "RequestUserInformation" }, // 1687481772
		{ &Z_Construct_UFunction_UOrionSteamFriends_SendClanChatMessage, "SendClanChatMessage" }, // 2625881754
		{ &Z_Construct_UFunction_UOrionSteamFriends_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 689426859
		{ &Z_Construct_UFunction_UOrionSteamFriends_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 1335095355
		{ &Z_Construct_UFunction_UOrionSteamFriends_SetPlayedWith, "SetPlayedWith" }, // 2497112785
		{ &Z_Construct_UFunction_UOrionSteamFriends_SetRichPresence, "SetRichPresence" }, // 96680417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriends>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_AvatarImageLoaded = { "AvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, AvatarImageLoaded), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarImageLoaded_MetaData), NewProp_AvatarImageLoaded_MetaData) }; // 1046030134
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_FriendRichPresenceUpdate = { "FriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, FriendRichPresenceUpdate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendRichPresenceUpdate_MetaData), NewProp_FriendRichPresenceUpdate_MetaData) }; // 399148600
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedChatJoin = { "GameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameConnectedChatJoin), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedChatJoin_MetaData), NewProp_GameConnectedChatJoin_MetaData) }; // 3899185820
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedChatLeave = { "GameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameConnectedChatLeave), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedChatLeave_MetaData), NewProp_GameConnectedChatLeave_MetaData) }; // 2062111483
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedClanChatMsg = { "GameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameConnectedClanChatMsg), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedClanChatMsg_MetaData), NewProp_GameConnectedClanChatMsg_MetaData) }; // 1705244125
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedFriendChatMsg = { "GameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedFriendChatMsg_MetaData), NewProp_GameConnectedFriendChatMsg_MetaData) }; // 4053851027
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameLobbyJoinRequested = { "GameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameLobbyJoinRequested), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameLobbyJoinRequested_MetaData), NewProp_GameLobbyJoinRequested_MetaData) }; // 3539574156
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameOverlayActivated = { "GameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameOverlayActivated), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverlayActivated_MetaData), NewProp_GameOverlayActivated_MetaData) }; // 3793011751
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameRichPresenceJoinRequested = { "GameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameRichPresenceJoinRequested_MetaData), NewProp_GameRichPresenceJoinRequested_MetaData) }; // 2059987179
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameServerChangeRequested = { "GameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, GameServerChangeRequested), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerChangeRequested_MetaData), NewProp_GameServerChangeRequested_MetaData) }; // 4128969645
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, PersonaStateChange), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaStateChange_MetaData), NewProp_PersonaStateChange_MetaData) }; // 766933775
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_JoinClanChatRoomCompletionResult = { "JoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, JoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinClanChatRoomCompletionResult_MetaData), NewProp_JoinClanChatRoomCompletionResult_MetaData) }; // 523709279
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_ClanOfficerListResponse = { "ClanOfficerListResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, ClanOfficerListResponse), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnClanOfficerListResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClanOfficerListResponse_MetaData), NewProp_ClanOfficerListResponse_MetaData) }; // 4097025483
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_DownloadClanActivityCountsResult = { "DownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, DownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadClanActivityCountsResult_MetaData), NewProp_DownloadClanActivityCountsResult_MetaData) }; // 1699192394
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_EquippedProfileItemsChanged = { "EquippedProfileItemsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriends, EquippedProfileItemsChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEquippedProfileItemsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedProfileItemsChanged_MetaData), NewProp_EquippedProfileItemsChanged_MetaData) }; // 3101128185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_AvatarImageLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_FriendRichPresenceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedChatJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedChatLeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedClanChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameConnectedFriendChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameLobbyJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameOverlayActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameRichPresenceJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_GameServerChangeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_PersonaStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_JoinClanChatRoomCompletionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_ClanOfficerListResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_DownloadClanActivityCountsResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriends_Statics::NewProp_EquippedProfileItemsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriends_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriends_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriends_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriends_Statics::ClassParams = {
	&UOrionSteamFriends::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriends_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriends_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriends_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriends_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriends()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriends.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriends.OuterSingleton, Z_Construct_UClass_UOrionSteamFriends_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriends.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriends);
// ********** End Class UOrionSteamFriends *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriends_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamFriends, UOrionSteamFriends::StaticClass, TEXT("UOrionSteamFriends"), &Z_Registration_Info_UClass_UOrionSteamFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriends), 452626590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriends_h__Script_OrionSteamSDKAPI_443937103(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriends_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriends_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
