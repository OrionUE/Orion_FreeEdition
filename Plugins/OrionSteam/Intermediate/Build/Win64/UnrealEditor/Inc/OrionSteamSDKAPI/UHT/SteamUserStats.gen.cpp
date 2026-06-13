// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/SteamUserStats.h"
#include "SteamTypes.h"
#include "SteamUserStats/SteamUserStatsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUserStats() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStats();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStats_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDataRequest();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDisplayType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardSortMethod();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardUploadScoreMethod();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGC__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntries__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboard__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboard__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayers__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentages__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScore__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserAchievementIconFetched__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserAchievementStored__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsReceived__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsStored__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsUnloaded__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamUserStats Function AttachLeaderboardUGC ***********************
struct Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics
{
	struct OrionSteamUserStats_eventAttachLeaderboardUGC_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		FSteamUGCHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09 *\n\x09 * This content could be a replay of the user achieving the score or a ghost to race against. The attached Handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09 * Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09Handle\x09\x09\x09\x09Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\n\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached Handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       Handle                          Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventAttachLeaderboardUGC_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGC__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 768774415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventAttachLeaderboardUGC_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventAttachLeaderboardUGC_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 4209419894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "AttachLeaderboardUGC", Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::OrionSteamUserStats_eventAttachLeaderboardUGC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::OrionSteamUserStats_eventAttachLeaderboardUGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execAttachLeaderboardUGC)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachLeaderboardUGC(FOnAttachLeaderboardUGC(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function AttachLeaderboardUGC *************************

// ********** Begin Class UOrionSteamUserStats Function ClearAchievement ***************************
struct Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics
{
	struct OrionSteamUserStats_eventClearAchievement_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the unlock status of an achievement.\n\x09 *\n\x09 * This is primarily only ever used for testing.\n\x09 * ou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state so it is quite cheap.\n\x09 * To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the Achievement to reset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the unlock status of an achievement.\n\nThis is primarily only ever used for testing.\nou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state so it is quite cheap.\nTo send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param       Name    The 'API Name' of the Achievement to reset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventClearAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventClearAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "ClearAchievement", Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::OrionSteamUserStats_eventClearAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::OrionSteamUserStats_eventClearAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execClearAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::ClearAchievement(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function ClearAchievement *****************************

// ********** Begin Class UOrionSteamUserStats Function DownloadLeaderboardEntries *****************
struct Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics
{
	struct OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDataRequest DataRequest;
		int32 RangeStart;
		int32 RangeEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Fetches a series of leaderboard entries for a specified leaderboard.\n\x09 *\n\x09 * You can ask for more entries than exist, then this will return as many as do exist.\n\x09 * If you want to download entries for an arbitrary set of users, such as all of\n\x09 * the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09""DataRequest\x09\x09\x09The type of data request to make.\n\x09 * @param\x09RangeStart\x09\x09\x09The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09 * @param\x09RangeEnd\x09\x09\x09The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\n\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of\nthe users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       DataRequest                     The type of data request to make.\n@param       RangeStart                      The index to start downloading entries relative to eLeaderboardDataRequest.\n@param       RangeEnd                        The last index to retrieve entries for relative to eLeaderboardDataRequest." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataRequest_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntries__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 669543978
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms, DataRequest), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 1445457992
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "DownloadLeaderboardEntries", Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::OrionSteamUserStats_eventDownloadLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execDownloadLeaderboardEntries)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_DataRequest);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadLeaderboardEntries(FOnDownloadLeaderboardEntries(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_DataRequest),Z_Param_RangeStart,Z_Param_RangeEnd);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function DownloadLeaderboardEntries *******************

// ********** Begin Class UOrionSteamUserStats Function DownloadLeaderboardEntriesForUsers *********
struct Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics
{
	struct OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		TArray<FSteamID> Users;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\x09 *\n\x09 * A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\n\x09 * If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09Users\x09\x09\x09\x09""An array of Steam IDs to get the leaderboard entries for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\nA maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\nIf you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       Users                           An array of Steam IDs to get the leaderboard entries for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Users;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3922782343
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "DownloadLeaderboardEntriesForUsers", Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::OrionSteamUserStats_eventDownloadLeaderboardEntriesForUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execDownloadLeaderboardEntriesForUsers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_TARRAY(FSteamID,Z_Param_Users);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadLeaderboardEntriesForUsers(FOnDownloadLeaderboardEntriesForUsers(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Users);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function DownloadLeaderboardEntriesForUsers ***********

// ********** Begin Class UOrionSteamUserStats Function FindLeaderboard ****************************
struct Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics
{
	struct OrionSteamUserStats_eventFindLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString LeaderboardName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name.\n\x09 *\n\x09 * You must call either this or FindOrCreateLeaderboard to obtain the leaderboard Handle which is valid for the game session for\n\x09 * each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 *\n\x09 * @param\x09LeaderboardName\x09\x09The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a leaderboard by name.\n\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard Handle which is valid for the game session for\neach leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param       LeaderboardName         The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboard__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1655826986
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "FindLeaderboard", Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::OrionSteamUserStats_eventFindLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::OrionSteamUserStats_eventFindLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execFindLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindLeaderboard(FOnFindLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function FindLeaderboard ******************************

// ********** Begin Class UOrionSteamUserStats Function FindOrCreateLeaderboard ********************
struct Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics
{
	struct OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString LeaderboardName;
		ESteamLeaderboardSortMethod SortMethod;
		ESteamLeaderboardDisplayType DisplayType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name, it will create it if it's not yet created.\n\x09 *\n\x09 * You must call either this or FindLeaderboard to obtain the leaderboard Handle which is valid for the\n\x09 * game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 * Leaderboards created with this function will not automatically show up in the Steam Community.\n\x09 * You must manually set the Community Name field in the App Admin panel of the Steamworks website.\n\x09 * As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\n\x09 * website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09 * You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\n\x09 * for eLeaderboardDisplayType as this is undefined behavior.\n\x09 *\n\x09 * @param\x09LeaderboardName\x09\x09The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09 * @param\x09SortMethod\x09\x09\x09The sort order of the new leaderboard if it's created.\n\x09 * @param\x09""DisplayType\x09\x09\x09The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\n\nYou must call either this or FindLeaderboard to obtain the leaderboard Handle which is valid for the\ngame session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community.\nYou must manually set the Community Name field in the App Admin panel of the Steamworks website.\nAs such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\nwebsite and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\nfor eLeaderboardDisplayType as this is undefined behavior.\n\n@param       LeaderboardName         The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param       SortMethod                      The sort order of the new leaderboard if it's created.\n@param       DisplayType                     The display type (used by the Steam Community web site) of the new leaderboard if it's created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboard__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1803490979
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms, SortMethod), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 3259148328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms, DisplayType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 3402575181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "FindOrCreateLeaderboard", Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::OrionSteamUserStats_eventFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execFindOrCreateLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
	P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindOrCreateLeaderboard(FOnFindOrCreateLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function FindOrCreateLeaderboard **********************

// ********** Begin Class UOrionSteamUserStats Function GetAchievement *****************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics
{
	struct OrionSteamUserStats_eventGetAchievement_Parms
	{
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 *\n\x09 * The equivalent function for other users is GetUserAchievement.\n\x09 *\n\x09 * @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09""bAchieved\x09Returns the unlock status of the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for other users is GetUserAchievement.\n\n@param       Name            The 'API Name' of the achievement.\n@param       bAchieved       Returns the unlock status of the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievement", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::OrionSteamUserStats_eventGetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::OrionSteamUserStats_eventGetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetAchievement(Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievement *******************************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementAchievedPercent **************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics
{
	struct OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms
	{
		FString Name;
		float Percent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the percentage of users who have unlocked the specified achievement.\n\x09 *\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09Percent\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the percentage of users who have unlocked the specified achievement.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param       Name            The 'API Name' of the achievement.\n@param       Percent         Variable to return the percentage of people that have unlocked this achievement from 0 to 100." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementAchievedPercent", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::OrionSteamUserStats_eventGetAchievementAchievedPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementAchievedPercent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetAchievementAchievedPercent(Z_Param_Name,Z_Param_Out_Percent);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementAchievedPercent ****************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementAndUnlockTime ****************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics
{
	struct OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms
	{
		FString Name;
		bool bAchieved;
		int32 UnlockTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the achievement status, and the time it was unlocked if unlocked.\n\x09 *\n\x09 * If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09 * The equivalent function for other users is GetUserAchievementAndUnlockTime.\n\x09 *\n\x09 * @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09""bAchieved\x09Returns whether the current user has unlocked the achievement.\n\x09 * @param\x09UnlockTime\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for other users is GetUserAchievementAndUnlockTime.\n\n@param       Name            The 'API Name' of the achievement.\n@param       bAchieved       Returns whether the current user has unlocked the achievement.\n@param       UnlockTime      Returns the time that the unchievement was unlocked; if pbAchieved is true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementAndUnlockTime", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::OrionSteamUserStats_eventGetAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementAndUnlockTime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetAchievementAndUnlockTime(Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementAndUnlockTime ******************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementDisplayAttribute *************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics
{
	struct OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms
	{
		FString Name;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\x09 *\n\x09 * This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\x09 *\n\x09 * This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\x09 *\n\x09 * @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09Key\x09\x09\x09The 'key' to get a value for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\nThis receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\nThis localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\n@param       Name            The 'API Name' of the achievement.\n@param       Key                     The 'key' to get a value for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementDisplayAttribute", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::OrionSteamUserStats_eventGetAchievementDisplayAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementDisplayAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUserStats::GetAchievementDisplayAttribute(Z_Param_Name,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementDisplayAttribute ***************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementIcon *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics
{
	struct OrionSteamUserStats_eventGetAchievementIcon_Parms
	{
		FString Name;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the icon for an achievement.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the icon for an achievement.\n\n@param       Name    The 'API Name' of the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementIcon_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementIcon", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::OrionSteamUserStats_eventGetAchievementIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::OrionSteamUserStats_eventGetAchievementIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementIcon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamUserStats::GetAchievementIcon(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementIcon ***************************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementName *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics
{
	struct OrionSteamUserStats_eventGetAchievementName_Parms
	{
		int32 Achievement;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\x09 *\n\x09 * This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\n\x09 * In general games should not need these functions as they should have the list of achievements compiled into them.\n\x09 *\n\x09 * @param\x09""Achievement\x09\x09\x09index of the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\nThis function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\nIn general games should not need these functions as they should have the list of achievements compiled into them.\n\n@param       Achievement                     index of the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Achievement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementName_Parms, Achievement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::NewProp_Achievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementName", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::OrionSteamUserStats_eventGetAchievementName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::OrionSteamUserStats_eventGetAchievementName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Achievement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUserStats::GetAchievementName(Z_Param_Achievement);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementName ***************************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementProgressLimits ***************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics
{
	struct OrionSteamUserStats_eventGetAchievementProgressLimits_Parms
	{
		FString Name;
		int32 MinProgress;
		int32 MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * For achievements that have related Progress stats, use this to query what the bounds of that progress are.\n\x09 * You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\n\x09 * have been made, to show a progress notification to the user.\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For achievements that have related Progress stats, use this to query what the bounds of that progress are.\nYou may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\nhave been made, to show a progress notification to the user.\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimits_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimits_Parms, MinProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimits_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievementProgressLimits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievementProgressLimits_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementProgressLimits", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::OrionSteamUserStats_eventGetAchievementProgressLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::OrionSteamUserStats_eventGetAchievementProgressLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementProgressLimits)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinProgress);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetAchievementProgressLimits(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementProgressLimits *****************

// ********** Begin Class UOrionSteamUserStats Function GetAchievementProgressLimitsFloat **********
struct Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics
{
	struct OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms
	{
		FString Name;
		float MinProgress;
		float MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * For achievements that have related Progress stats, use this to query what the bounds of that progress are.\n\x09 * You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\n\x09 * have been made, to show a progress notification to the user.\n\x09 *\n\x09 * Notes: Only available in UE4.27+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For achievements that have related Progress stats, use this to query what the bounds of that progress are.\nYou may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\nhave been made, to show a progress notification to the user.\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms, MinProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetAchievementProgressLimitsFloat", Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::OrionSteamUserStats_eventGetAchievementProgressLimitsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetAchievementProgressLimitsFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinProgress);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetAchievementProgressLimitsFloat(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetAchievementProgressLimitsFloat ************

// ********** Begin Class UOrionSteamUserStats Function GetDownloadedLeaderboardEntry **************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics
{
	struct OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms
	{
		FSteamLeaderboardEntries LeaderboardEntries;
		int32 Index;
		FSteamLeaderboardEntry LeaderboardEntry;
		TArray<int32> Details;
		TArray<int32> outDetails;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Details" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the data for a single leaderboard entry.\n\x09 *\n\x09 * You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\n\x09 * Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t Handle will become invalid.\n\x09 * Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\x09 *\n\x09 * @param\x09LeaderboardEntries\x09\x09""A leaderboard entries Handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n\x09 * @param\x09Index\x09\x09\x09\x09\x09The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n\x09 * @param\x09LeaderboardEntry\x09\x09Variable where the entry will be returned to.\n\x09 * @param\x09""Details\x09\x09\x09\x09\x09""A preallocated array where the details of this entry get returned into.\n\x09 * @param outDetails\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the data for a single leaderboard entry.\n\nYou should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\nOnce you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t Handle will become invalid.\nOptionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\n@param       LeaderboardEntries              A leaderboard entries Handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n@param       Index                                   The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n@param       LeaderboardEntry                Variable where the entry will be returned to.\n@param       Details                                 A preallocated array where the details of this entry get returned into.\n@param outDetails" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FIntPropertyParams NewProp_outDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outDetails;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(0, nullptr) }; // 3169836424
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry = { "LeaderboardEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntry), Z_Construct_UScriptStruct_FSteamLeaderboardEntry, METADATA_PARAMS(0, nullptr) }; // 2371108054
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner = { "outDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails = { "outDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, outDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetDownloadedLeaderboardEntry", Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::OrionSteamUserStats_eventGetDownloadedLeaderboardEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetDownloadedLeaderboardEntry)
{
	P_GET_STRUCT(FSteamLeaderboardEntries,Z_Param_LeaderboardEntries);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FSteamLeaderboardEntry,Z_Param_Out_LeaderboardEntry);
	P_GET_TARRAY(int32,Z_Param_Details);
	P_GET_TARRAY_REF(int32,Z_Param_Out_outDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetDownloadedLeaderboardEntry(Z_Param_LeaderboardEntries,Z_Param_Index,Z_Param_Out_LeaderboardEntry,Z_Param_Details,Z_Param_Out_outDetails);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetDownloadedLeaderboardEntry ****************

// ********** Begin Class UOrionSteamUserStats Function GetGlobalStatFloat *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics
{
	struct OrionSteamUserStats_eventGetGlobalStatFloat_Parms
	{
		FString StatName;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the lifetime totals for an aggregated stat.\n\x09 *\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09StatName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param       StatName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data            The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatFloat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetGlobalStatFloat", Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::OrionSteamUserStats_eventGetGlobalStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::OrionSteamUserStats_eventGetGlobalStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetGlobalStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetGlobalStatFloat(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetGlobalStatFloat ***************************

// ********** Begin Class UOrionSteamUserStats Function GetGlobalStatHistoryFloat ******************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics
{
	struct OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms
	{
		FString StatName;
		int32 HistoryDays;
		TArray<float> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the daily history for an aggregated stat.\n\x09 *\n\x09 * pData will be filled with daily values, starting with today.\n\x09 * So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09StatName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09HistoryDays\x09\x09The total size in bytes of the pData array.\n\x09 * @param\x09""Data\x09\x09\x09""Array that the daily history will be returned into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param       StatName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       HistoryDays             The total size in bytes of the pData array.\n@param       Data                    Array that the daily history will be returned into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetGlobalStatHistoryFloat", Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::OrionSteamUserStats_eventGetGlobalStatHistoryFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetGlobalStatHistoryFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_TARRAY_REF(float,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetGlobalStatHistoryFloat(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetGlobalStatHistoryFloat ********************

// ********** Begin Class UOrionSteamUserStats Function GetGlobalStatHistoryInt ********************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics
{
	struct OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms
	{
		FString StatName;
		int32 HistoryDays;
		TArray<int32> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the daily history for an aggregated stat.\n\x09 *\n\x09 * pData will be filled with daily values, starting with today.\n\x09 * So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09StatName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09HistoryDays\x09\x09The total size in bytes of the pData array.\n\x09 * @param\x09""Data\x09\x09\x09""Array that the daily history will be returned into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param       StatName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       HistoryDays             The total size in bytes of the pData array.\n@param       Data                    Array that the daily history will be returned into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetGlobalStatHistoryInt", Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::OrionSteamUserStats_eventGetGlobalStatHistoryInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetGlobalStatHistoryInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetGlobalStatHistoryInt(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetGlobalStatHistoryInt **********************

// ********** Begin Class UOrionSteamUserStats Function GetGlobalStatInt ***************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics
{
	struct OrionSteamUserStats_eventGetGlobalStatInt_Parms
	{
		FString StatName;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the lifetime totals for an aggregated stat.\n\x09 *\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09StatName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param       StatName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data            The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatInt_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetGlobalStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetGlobalStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetGlobalStatInt_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetGlobalStatInt", Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::OrionSteamUserStats_eventGetGlobalStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::OrionSteamUserStats_eventGetGlobalStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetGlobalStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetGlobalStatInt(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetGlobalStatInt *****************************

// ********** Begin Class UOrionSteamUserStats Function GetLeaderboardDisplayType ******************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics
{
	struct OrionSteamUserStats_eventGetLeaderboardDisplayType_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDisplayType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the display type of a leaderboard Handle.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the display type of a leaderboard Handle.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardDisplayType_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 3402575181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetLeaderboardDisplayType", Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::OrionSteamUserStats_eventGetLeaderboardDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::OrionSteamUserStats_eventGetLeaderboardDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetLeaderboardDisplayType)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamLeaderboardDisplayType*)Z_Param__Result=UOrionSteamUserStats::GetLeaderboardDisplayType(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetLeaderboardDisplayType ********************

// ********** Begin Class UOrionSteamUserStats Function GetLeaderboardEntryCount *******************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics
{
	struct OrionSteamUserStats_eventGetLeaderboardEntryCount_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the total number of entries in a leaderboard.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of entries in a leaderboard.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardEntryCount_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetLeaderboardEntryCount", Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::OrionSteamUserStats_eventGetLeaderboardEntryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::OrionSteamUserStats_eventGetLeaderboardEntryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetLeaderboardEntryCount)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetLeaderboardEntryCount(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetLeaderboardEntryCount *********************

// ********** Begin Class UOrionSteamUserStats Function GetLeaderboardName *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics
{
	struct OrionSteamUserStats_eventGetLeaderboardName_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the name of a leaderboard Handle.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the name of a leaderboard Handle.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardName_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetLeaderboardName", Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::OrionSteamUserStats_eventGetLeaderboardName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::OrionSteamUserStats_eventGetLeaderboardName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetLeaderboardName)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUserStats::GetLeaderboardName(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetLeaderboardName ***************************

// ********** Begin Class UOrionSteamUserStats Function GetLeaderboardSortMethod *******************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics
{
	struct OrionSteamUserStats_eventGetLeaderboardSortMethod_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardSortMethod ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the sort order of a leaderboard Handle.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the sort order of a leaderboard Handle.\n\n@param       SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardSortMethod_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 3259148328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetLeaderboardSortMethod", Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::OrionSteamUserStats_eventGetLeaderboardSortMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::OrionSteamUserStats_eventGetLeaderboardSortMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetLeaderboardSortMethod)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamLeaderboardSortMethod*)Z_Param__Result=UOrionSteamUserStats::GetLeaderboardSortMethod(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetLeaderboardSortMethod *********************

// ********** Begin Class UOrionSteamUserStats Function GetMostAchievedAchievementInfo *************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics
{
	struct OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms
	{
		FString Name;
		float Percent;
		bool bAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the info on the most achieved achievement for the game.\n\x09 *\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09Name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09 * @param\x09Percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 * @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the info on the most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param       Name                    String buffer to return the 'API Name' of the achievement into.\n@param       Percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param       bAchieved               Variable to return whether the current user has unlocked this achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetMostAchievedAchievementInfo", Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::OrionSteamUserStats_eventGetMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetMostAchievedAchievementInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetMostAchievedAchievementInfo(Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetMostAchievedAchievementInfo ***************

// ********** Begin Class UOrionSteamUserStats Function GetNextMostAchievedAchievementInfo *********
struct Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics
{
	struct OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms
	{
		int32 IteratorPrevious;
		FString Name;
		float Percent;
		bool bAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the info on the next most achieved achievement for the game.\n\x09 *\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09Name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09 * @param\x09Percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 * @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the info on the next most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param       Name                    String buffer to return the 'API Name' of the achievement into.\n@param       Percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param       bAchieved               Variable to return whether the current user has unlocked this achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IteratorPrevious;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious = { "IteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, IteratorPrevious), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetNextMostAchievedAchievementInfo", Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::OrionSteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetNextMostAchievedAchievementInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IteratorPrevious);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetNextMostAchievedAchievementInfo(Z_Param_IteratorPrevious,Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetNextMostAchievedAchievementInfo ***********

// ********** Begin Class UOrionSteamUserStats Function GetNumAchievements *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics
{
	struct OrionSteamUserStats_eventGetNumAchievements_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\x09 *\n\x09 * This is used for iterating through all of the achievements with GetAchievementName.\n\x09 * In general games should not need these functions because they should have a list of existing achievements compiled into them.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\nThis is used for iterating through all of the achievements with GetAchievementName.\nIn general games should not need these functions because they should have a list of existing achievements compiled into them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetNumAchievements", Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::OrionSteamUserStats_eventGetNumAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::OrionSteamUserStats_eventGetNumAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetNumAchievements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUserStats::GetNumAchievements();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetNumAchievements ***************************

// ********** Begin Class UOrionSteamUserStats Function GetNumberOfCurrentPlayers ******************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics
{
	struct OrionSteamUserStats_eventGetNumberOfCurrentPlayers_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetNumberOfCurrentPlayers_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1513122462
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetNumberOfCurrentPlayers", Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::OrionSteamUserStats_eventGetNumberOfCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::OrionSteamUserStats_eventGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetNumberOfCurrentPlayers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNumberOfCurrentPlayers(FOnGetNumberOfCurrentPlayers(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetNumberOfCurrentPlayers ********************

// ********** Begin Class UOrionSteamUserStats Function GetStatFloat *******************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics
{
	struct OrionSteamUserStats_eventGetStatFloat_Parms
	{
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param       Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetStatFloat", Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::OrionSteamUserStats_eventGetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::OrionSteamUserStats_eventGetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetStatFloat(Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetStatFloat *********************************

// ********** Begin Class UOrionSteamUserStats Function GetStatInt *********************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics
{
	struct OrionSteamUserStats_eventGetStatInt_Parms
	{
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param       Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetStatInt_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetStatInt", Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::OrionSteamUserStats_eventGetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::OrionSteamUserStats_eventGetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetStatInt(Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetStatInt ***********************************

// ********** Begin Class UOrionSteamUserStats Function GetSteamUserStats **************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics
{
	struct OrionSteamUserStats_eventGetSteamUserStats_Parms
	{
		UOrionSteamUserStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetSteamUserStats_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetSteamUserStats", Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::OrionSteamUserStats_eventGetSteamUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::OrionSteamUserStats_eventGetSteamUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetSteamUserStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStats**)Z_Param__Result=UOrionSteamUserStats::GetSteamUserStats();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetSteamUserStats ****************************

// ********** Begin Class UOrionSteamUserStats Function GetUserAchievement *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics
{
	struct OrionSteamUserStats_eventGetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 *\n\x09 * The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\n@param       SteamIDUser             The Steam ID of the user to get the achievement for.\n@param       Name                    The 'API Name' of the achievement.\n@param       bAchieved               Returns the unlock status of the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetUserAchievement", Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::OrionSteamUserStats_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::OrionSteamUserStats_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetUserAchievement ***************************

// ********** Begin Class UOrionSteamUserStats Function GetUserAchievementAndUnlockTime ************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics
{
	struct OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		int32 UnlockTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the achievement status, and the time it was unlocked if unlocked.\n\x09 *\n\x09 * If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09 * The equivalent function for the local user is GetAchievementAndUnlockTime.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09 * @param\x09UnlockTime\x09\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for the local user is GetAchievementAndUnlockTime.\n\n@param       SteamIDUser             The Steam ID of the user to get the achievement for.\n@param       Name                    The 'API Name' of the achievement.\n@param       bAchieved               Returns the unlock status of the achievement.\n@param       UnlockTime              Returns the time that the unchievement was unlocked; if pbAchieved is true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetUserAchievementAndUnlockTime", Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::OrionSteamUserStats_eventGetUserAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetUserAchievementAndUnlockTime)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetUserAchievementAndUnlockTime(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetUserAchievementAndUnlockTime **************

// ********** Begin Class UOrionSteamUserStats Function GetUserStatFloat ***************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics
{
	struct OrionSteamUserStats_eventGetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09The Steam ID of the user to get the stat for.\n\x09 * @param\x09Name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param       SteamIDUser     The Steam ID of the user to get the stat for.\n@param       Name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data            The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetUserStatFloat", Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::OrionSteamUserStats_eventGetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::OrionSteamUserStats_eventGetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetUserStatFloat *****************************

// ********** Begin Class UOrionSteamUserStats Function GetUserStatInteger *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics
{
	struct OrionSteamUserStats_eventGetUserStatInteger_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09The Steam ID of the user to get the stat for.\n\x09 * @param\x09Name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param       SteamIDUser     The Steam ID of the user to get the stat for.\n@param       Name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data            The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatInteger_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatInteger_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventGetUserStatInteger_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventGetUserStatInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventGetUserStatInteger_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "GetUserStatInteger", Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::OrionSteamUserStats_eventGetUserStatInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::OrionSteamUserStats_eventGetUserStatInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execGetUserStatInteger)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::GetUserStatInteger(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function GetUserStatInteger ***************************

// ********** Begin Class UOrionSteamUserStats Function IndicateAchievementProgress ****************
struct Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics
{
	struct OrionSteamUserStats_eventIndicateAchievementProgress_Parms
	{
		FString Name;
		int32 CurrentProgress;
		int32 MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shows the user a pop-up notification with the current progress of an achievement.\n\x09 *\n\x09 * Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\x09 *\n\x09 * @param\x09The 'API Name' of the achievement.\n\x09 * @param\x09The current progress.\n\x09 * @param\x09The progress required to unlock the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows the user a pop-up notification with the current progress of an achievement.\n\nCalling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\n@param       The 'API Name' of the achievement.\n@param       The current progress.\n@param       The progress required to unlock the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventIndicateAchievementProgress_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventIndicateAchievementProgress_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventIndicateAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "IndicateAchievementProgress", Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::OrionSteamUserStats_eventIndicateAchievementProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::OrionSteamUserStats_eventIndicateAchievementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execIndicateAchievementProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::IndicateAchievementProgress(Z_Param_Name,Z_Param_CurrentProgress,Z_Param_MaxProgress);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function IndicateAchievementProgress ******************

// ********** Begin Class UOrionSteamUserStats Function RequestCurrentStats ************************
struct Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics
{
	struct OrionSteamUserStats_eventRequestCurrentStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously request the user's current stats and achievements from the server.\n\x09 *\n\x09 * You must always call this first to get the initial status of stats and achievements.\n\x09 * Only after the resulting Callback comes back can you start calling the rest of the stats and achievement functions for the current user.\n\x09 * The equivalent function for other users is RequestUserStats.\n\x09 */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously request the user's current stats and achievements from the server.\n\nYou must always call this first to get the initial status of stats and achievements.\nOnly after the resulting Callback comes back can you start calling the rest of the stats and achievement functions for the current user.\nThe equivalent function for other users is RequestUserStats." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "RequestCurrentStats", Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::OrionSteamUserStats_eventRequestCurrentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::OrionSteamUserStats_eventRequestCurrentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execRequestCurrentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::RequestCurrentStats();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function RequestCurrentStats **************************

// ********** Begin Class UOrionSteamUserStats Function RequestGlobalAchievementPercentages ********
struct Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics
{
	struct OrionSteamUserStats_eventRequestGlobalAchievementPercentages_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!" },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventRequestGlobalAchievementPercentages_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentages__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2416546547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "RequestGlobalAchievementPercentages", Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::OrionSteamUserStats_eventRequestGlobalAchievementPercentages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::OrionSteamUserStats_eventRequestGlobalAchievementPercentages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execRequestGlobalAchievementPercentages)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestGlobalAchievementPercentages(FOnRequestGlobalAchievementPercentages(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function RequestGlobalAchievementPercentages **********

// ********** Begin Class UOrionSteamUserStats Function RequestGlobalStats *************************
struct Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics
{
	struct OrionSteamUserStats_eventRequestGlobalStats_Parms
	{
		FScriptDelegate Callback;
		int32 HistoryDays;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09 *\n\x09 * @param\x09HistoryDays\x09\x09How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\n@param       HistoryDays             How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventRequestGlobalStats_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2447482551
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventRequestGlobalStats_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "RequestGlobalStats", Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::OrionSteamUserStats_eventRequestGlobalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::OrionSteamUserStats_eventRequestGlobalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execRequestGlobalStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestGlobalStats(FOnRequestGlobalStats(Z_Param_Out_Callback),Z_Param_HistoryDays);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function RequestGlobalStats ***************************

// ********** Begin Class UOrionSteamUserStats Function RequestUserStats ***************************
struct Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics
{
	struct OrionSteamUserStats_eventRequestUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously downloads stats and achievements for the specified user from the server.\n\x09 *\n\x09 * These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\n\x09 * To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\n\x09 * UserStatsUnloaded_t Callback is sent. After receiving this Callback the user's stats will be unavailable until this function is called again.\n\x09 * The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the user to request stats for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\nUserStatsUnloaded_t Callback is sent. After receiving this Callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param       SteamID         The Steam ID of the user to request stats for." },
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
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3224539388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventRequestUserStats_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "RequestUserStats", Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::OrionSteamUserStats_eventRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::OrionSteamUserStats_eventRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execRequestUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUserStats(FOnRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function RequestUserStats *****************************

// ********** Begin Class UOrionSteamUserStats Function ResetAllStats ******************************
struct Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics
{
	struct OrionSteamUserStats_eventResetAllStats_Parms
	{
		bool bAchievementsToo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the current users stats and, optionally achievements.\n\x09 *\n\x09 * This automatically calls StoreStats to persist the changes to the server.\n\x09 * This should typically only be used for testing purposes during development.\n\x09 * Ensure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\x09 *\n\x09 * @param\x09""bAchievementsToo\x09""Also reset the user's achievements?\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the current users stats and, optionally achievements.\n\nThis automatically calls StoreStats to persist the changes to the server.\nThis should typically only be used for testing purposes during development.\nEnsure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\n@param       bAchievementsToo        Also reset the user's achievements?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAchievementsToo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventResetAllStats_Parms*)Obj)->bAchievementsToo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "ResetAllStats", Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::OrionSteamUserStats_eventResetAllStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::OrionSteamUserStats_eventResetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execResetAllStats)
{
	P_GET_UBOOL(Z_Param_bAchievementsToo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::ResetAllStats(Z_Param_bAchievementsToo);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function ResetAllStats ********************************

// ********** Begin Class UOrionSteamUserStats Function SetAchievement *****************************
struct Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics
{
	struct OrionSteamUserStats_eventSetAchievement_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unlocks an achievement.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 * You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\n\x09 * This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the Achievement to unlock.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlocks an achievement.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nYou can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\nThis call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param       Name    The 'API Name' of the Achievement to unlock." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventSetAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventSetAchievement_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "SetAchievement", Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::OrionSteamUserStats_eventSetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::OrionSteamUserStats_eventSetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execSetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::SetAchievement(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function SetAchievement *******************************

// ********** Begin Class UOrionSteamUserStats Function SetStatFloat *******************************
struct Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics
{
	struct OrionSteamUserStats_eventSetStatFloat_Parms
	{
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param       Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventSetStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventSetStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventSetStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "SetStatFloat", Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::OrionSteamUserStats_eventSetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::OrionSteamUserStats_eventSetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execSetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::SetStatFloat(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function SetStatFloat *********************************

// ********** Begin Class UOrionSteamUserStats Function SetStatInt *********************************
struct Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics
{
	struct OrionSteamUserStats_eventSetStatInt_Parms
	{
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the current user.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param       Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventSetStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventSetStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventSetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventSetStatInt_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "SetStatInt", Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::OrionSteamUserStats_eventSetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::OrionSteamUserStats_eventSetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execSetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::SetStatInt(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function SetStatInt ***********************************

// ********** Begin Class UOrionSteamUserStats Function StoreStats *********************************
struct Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics
{
	struct OrionSteamUserStats_eventStoreStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send the changed stats and achievements data to the server for permanent storage.\n\x09 *\n\x09 * If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09 * This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\n\x09 * You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09 * This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\n\x09 * If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\x09 *\n\x09 * You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nThis call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventStoreStats_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "StoreStats", Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::OrionSteamUserStats_eventStoreStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::OrionSteamUserStats_eventStoreStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_StoreStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_StoreStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execStoreStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::StoreStats();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function StoreStats ***********************************

// ********** Begin Class UOrionSteamUserStats Function UpdateAvgRateStat **************************
struct Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics
{
	struct OrionSteamUserStats_eventUpdateAvgRateStat_Parms
	{
		FString Name;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates an AVGRATE stat with new values.\n\x09 *\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param\x09Name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""CountThisSession\x09The value accumulation since the last call to this function.\n\x09 * @param\x09SessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an AVGRATE stat with new values.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param       Name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       CountThisSession        The value accumulation since the last call to this function.\n@param       SessionLength           The amount of time in seconds since the last call to this function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUpdateAvgRateStat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUpdateAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUpdateAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUserStats_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStats_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "UpdateAvgRateStat", Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::OrionSteamUserStats_eventUpdateAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::OrionSteamUserStats_eventUpdateAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execUpdateAvgRateStat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUserStats::UpdateAvgRateStat(Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function UpdateAvgRateStat ****************************

// ********** Begin Class UOrionSteamUserStats Function UploadLeaderboardScore *********************
struct Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics
{
	struct OrionSteamUserStats_eventUploadLeaderboardScore_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
		int32 Score;
		TArray<int32> ScoreDetails;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback, scoreDetails" },
		{ "Category", "OrionSteam|UserStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Uploads a user score to a specified leaderboard.\n\x09 *\n\x09 * Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\n\x09 * you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09 * Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09UploadScoreMethod\x09\x09""Do you want to force the score to change, or keep the previous score if it was better?\n\x09 * @param\x09Score\x09\x09\x09\x09\x09The score to upload.\n\x09 * @param\x09ScoreDetails\x09\x09\x09Optional: Array containing the details surrounding the unlocking of this score.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\n\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\nyou could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param       SteamLeaderboard                A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       UploadScoreMethod               Do you want to force the score to change, or keep the previous score if it was better?\n@param       Score                                   The score to upload.\n@param       ScoreDetails                    Optional: Array containing the details surrounding the unlocking of this score." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUploadLeaderboardScore_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScore__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1306641962
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUploadLeaderboardScore_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUploadLeaderboardScore_Parms, UploadScoreMethod), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(0, nullptr) }; // 3378268265
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUploadLeaderboardScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStats_eventUploadLeaderboardScore_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStats, nullptr, "UploadLeaderboardScore", Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::OrionSteamUserStats_eventUploadLeaderboardScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::OrionSteamUserStats_eventUploadLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStats::execUploadLeaderboardScore)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(int32,Z_Param_ScoreDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UploadLeaderboardScore(FOnUploadLeaderboardScore(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStats Function UploadLeaderboardScore ***********************

// ********** Begin Class UOrionSteamUserStats *****************************************************
void UOrionSteamUserStats::StaticRegisterNativesUOrionSteamUserStats()
{
	UClass* Class = UOrionSteamUserStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachLeaderboardUGC", &UOrionSteamUserStats::execAttachLeaderboardUGC },
		{ "ClearAchievement", &UOrionSteamUserStats::execClearAchievement },
		{ "DownloadLeaderboardEntries", &UOrionSteamUserStats::execDownloadLeaderboardEntries },
		{ "DownloadLeaderboardEntriesForUsers", &UOrionSteamUserStats::execDownloadLeaderboardEntriesForUsers },
		{ "FindLeaderboard", &UOrionSteamUserStats::execFindLeaderboard },
		{ "FindOrCreateLeaderboard", &UOrionSteamUserStats::execFindOrCreateLeaderboard },
		{ "GetAchievement", &UOrionSteamUserStats::execGetAchievement },
		{ "GetAchievementAchievedPercent", &UOrionSteamUserStats::execGetAchievementAchievedPercent },
		{ "GetAchievementAndUnlockTime", &UOrionSteamUserStats::execGetAchievementAndUnlockTime },
		{ "GetAchievementDisplayAttribute", &UOrionSteamUserStats::execGetAchievementDisplayAttribute },
		{ "GetAchievementIcon", &UOrionSteamUserStats::execGetAchievementIcon },
		{ "GetAchievementName", &UOrionSteamUserStats::execGetAchievementName },
		{ "GetAchievementProgressLimits", &UOrionSteamUserStats::execGetAchievementProgressLimits },
		{ "GetAchievementProgressLimitsFloat", &UOrionSteamUserStats::execGetAchievementProgressLimitsFloat },
		{ "GetDownloadedLeaderboardEntry", &UOrionSteamUserStats::execGetDownloadedLeaderboardEntry },
		{ "GetGlobalStatFloat", &UOrionSteamUserStats::execGetGlobalStatFloat },
		{ "GetGlobalStatHistoryFloat", &UOrionSteamUserStats::execGetGlobalStatHistoryFloat },
		{ "GetGlobalStatHistoryInt", &UOrionSteamUserStats::execGetGlobalStatHistoryInt },
		{ "GetGlobalStatInt", &UOrionSteamUserStats::execGetGlobalStatInt },
		{ "GetLeaderboardDisplayType", &UOrionSteamUserStats::execGetLeaderboardDisplayType },
		{ "GetLeaderboardEntryCount", &UOrionSteamUserStats::execGetLeaderboardEntryCount },
		{ "GetLeaderboardName", &UOrionSteamUserStats::execGetLeaderboardName },
		{ "GetLeaderboardSortMethod", &UOrionSteamUserStats::execGetLeaderboardSortMethod },
		{ "GetMostAchievedAchievementInfo", &UOrionSteamUserStats::execGetMostAchievedAchievementInfo },
		{ "GetNextMostAchievedAchievementInfo", &UOrionSteamUserStats::execGetNextMostAchievedAchievementInfo },
		{ "GetNumAchievements", &UOrionSteamUserStats::execGetNumAchievements },
		{ "GetNumberOfCurrentPlayers", &UOrionSteamUserStats::execGetNumberOfCurrentPlayers },
		{ "GetStatFloat", &UOrionSteamUserStats::execGetStatFloat },
		{ "GetStatInt", &UOrionSteamUserStats::execGetStatInt },
		{ "GetSteamUserStats", &UOrionSteamUserStats::execGetSteamUserStats },
		{ "GetUserAchievement", &UOrionSteamUserStats::execGetUserAchievement },
		{ "GetUserAchievementAndUnlockTime", &UOrionSteamUserStats::execGetUserAchievementAndUnlockTime },
		{ "GetUserStatFloat", &UOrionSteamUserStats::execGetUserStatFloat },
		{ "GetUserStatInteger", &UOrionSteamUserStats::execGetUserStatInteger },
		{ "IndicateAchievementProgress", &UOrionSteamUserStats::execIndicateAchievementProgress },
		{ "RequestCurrentStats", &UOrionSteamUserStats::execRequestCurrentStats },
		{ "RequestGlobalAchievementPercentages", &UOrionSteamUserStats::execRequestGlobalAchievementPercentages },
		{ "RequestGlobalStats", &UOrionSteamUserStats::execRequestGlobalStats },
		{ "RequestUserStats", &UOrionSteamUserStats::execRequestUserStats },
		{ "ResetAllStats", &UOrionSteamUserStats::execResetAllStats },
		{ "SetAchievement", &UOrionSteamUserStats::execSetAchievement },
		{ "SetStatFloat", &UOrionSteamUserStats::execSetStatFloat },
		{ "SetStatInt", &UOrionSteamUserStats::execSetStatInt },
		{ "StoreStats", &UOrionSteamUserStats::execStoreStats },
		{ "UpdateAvgRateStat", &UOrionSteamUserStats::execUpdateAvgRateStat },
		{ "UploadLeaderboardScore", &UOrionSteamUserStats::execUploadLeaderboardScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStats;
UClass* UOrionSteamUserStats::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStats;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStats"),
			Z_Registration_Info_UClass_UOrionSteamUserStats.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStats,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStats_NoRegister()
{
	return UOrionSteamUserStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserStats/SteamUserStats.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserAchievementIconFetched_MetaData[] = {
		{ "Category", "OrionSteam|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserAchievementStored_MetaData[] = {
		{ "Category", "OrionSteam|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsReceived_MetaData[] = {
		{ "Category", "OrionSteam|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsStored_MetaData[] = {
		{ "Category", "OrionSteam|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsUnloaded_MetaData[] = {
		{ "Category", "OrionSteam|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementIconFetched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStats_AttachLeaderboardUGC, "AttachLeaderboardUGC" }, // 945775572
		{ &Z_Construct_UFunction_UOrionSteamUserStats_ClearAchievement, "ClearAchievement" }, // 1518974052
		{ &Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 441016922
		{ &Z_Construct_UFunction_UOrionSteamUserStats_DownloadLeaderboardEntriesForUsers, "DownloadLeaderboardEntriesForUsers" }, // 1070254571
		{ &Z_Construct_UFunction_UOrionSteamUserStats_FindLeaderboard, "FindLeaderboard" }, // 3119216468
		{ &Z_Construct_UFunction_UOrionSteamUserStats_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 4043293161
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievement, "GetAchievement" }, // 1328316476
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 1126524085
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 3596690885
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 537535560
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementIcon, "GetAchievementIcon" }, // 2231655118
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementName, "GetAchievementName" }, // 2424538122
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimits, "GetAchievementProgressLimits" }, // 1923635705
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetAchievementProgressLimitsFloat, "GetAchievementProgressLimitsFloat" }, // 2116086539
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetDownloadedLeaderboardEntry, "GetDownloadedLeaderboardEntry" }, // 857645316
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 1006392780
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 3417153794
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatHistoryInt, "GetGlobalStatHistoryInt" }, // 1359318540
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetGlobalStatInt, "GetGlobalStatInt" }, // 2871491424
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 741186290
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 3166402698
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardName, "GetLeaderboardName" }, // 1373221393
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 2314260254
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 2415724962
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 2768248030
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetNumAchievements, "GetNumAchievements" }, // 495140233
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 2497651974
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetStatFloat, "GetStatFloat" }, // 1826149628
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetStatInt, "GetStatInt" }, // 710234104
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetSteamUserStats, "GetSteamUserStats" }, // 2441445437
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievement, "GetUserAchievement" }, // 1051105184
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 1959022306
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatFloat, "GetUserStatFloat" }, // 3739430811
		{ &Z_Construct_UFunction_UOrionSteamUserStats_GetUserStatInteger, "GetUserStatInteger" }, // 1731472152
		{ &Z_Construct_UFunction_UOrionSteamUserStats_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 813339395
		{ &Z_Construct_UFunction_UOrionSteamUserStats_RequestCurrentStats, "RequestCurrentStats" }, // 3071027265
		{ &Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalAchievementPercentages, "RequestGlobalAchievementPercentages" }, // 3651363720
		{ &Z_Construct_UFunction_UOrionSteamUserStats_RequestGlobalStats, "RequestGlobalStats" }, // 2072065522
		{ &Z_Construct_UFunction_UOrionSteamUserStats_RequestUserStats, "RequestUserStats" }, // 3250680508
		{ &Z_Construct_UFunction_UOrionSteamUserStats_ResetAllStats, "ResetAllStats" }, // 1702966813
		{ &Z_Construct_UFunction_UOrionSteamUserStats_SetAchievement, "SetAchievement" }, // 1781950228
		{ &Z_Construct_UFunction_UOrionSteamUserStats_SetStatFloat, "SetStatFloat" }, // 1340986675
		{ &Z_Construct_UFunction_UOrionSteamUserStats_SetStatInt, "SetStatInt" }, // 326782473
		{ &Z_Construct_UFunction_UOrionSteamUserStats_StoreStats, "StoreStats" }, // 463166874
		{ &Z_Construct_UFunction_UOrionSteamUserStats_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 2435782935
		{ &Z_Construct_UFunction_UOrionSteamUserStats_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 3667348475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserAchievementIconFetched = { "UserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStats, UserAchievementIconFetched), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserAchievementIconFetched__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserAchievementIconFetched_MetaData), NewProp_UserAchievementIconFetched_MetaData) }; // 4155652165
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserAchievementStored = { "UserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStats, UserAchievementStored), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserAchievementStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserAchievementStored_MetaData), NewProp_UserAchievementStored_MetaData) }; // 61136901
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsReceived = { "UserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStats, UserStatsReceived), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsReceived_MetaData), NewProp_UserStatsReceived_MetaData) }; // 465412061
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsStored = { "UserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStats, UserStatsStored), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsStored_MetaData), NewProp_UserStatsStored_MetaData) }; // 2504685739
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsUnloaded = { "UserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStats, UserStatsUnloaded), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUserStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsUnloaded_MetaData), NewProp_UserStatsUnloaded_MetaData) }; // 1741926860
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserAchievementIconFetched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserAchievementStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStats_Statics::NewProp_UserStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStats_Statics::ClassParams = {
	&UOrionSteamUserStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStats()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStats.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStats);
// ********** End Class UOrionSteamUserStats *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStats_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUserStats, UOrionSteamUserStats::StaticClass, TEXT("UOrionSteamUserStats"), &Z_Registration_Info_UClass_UOrionSteamUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStats), 2789439927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStats_h__Script_OrionSteamSDKAPI_2293789321(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStats_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStats_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
