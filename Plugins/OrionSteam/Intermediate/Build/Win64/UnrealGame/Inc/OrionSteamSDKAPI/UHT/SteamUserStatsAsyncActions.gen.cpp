// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/SteamUserStatsAsyncActions.h"
#include "SteamTypes.h"
#include "SteamUserStats/SteamUserStatsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUserStatsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDataRequest();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDisplayType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardSortMethod();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardUploadScoreMethod();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRequestCurrentStatsData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFindLeaderboardAsyncDelegate ***************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3031507632
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnFindLeaderboardAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindLeaderboardAsyncDelegate, FLeaderboardFindResult const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnFindLeaderboardAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFindLeaderboardAsyncDelegate *****************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntriesAsyncDelegate ****************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 468363623
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntriesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesAsyncDelegate, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadLeaderboardEntriesAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestGlobalStatsAsyncDelegate ************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3162533213
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestGlobalStatsAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalStatsAsyncDelegate, FGlobalStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestGlobalStatsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestGlobalStatsAsyncDelegate **************************************

// ********** Begin Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate *******************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3463798574
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalAchievementPercentagesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalAchievementPercentagesAsyncDelegate, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalAchievementPercentagesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate *********************

// ********** Begin Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate *****************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4227424771
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetNumberOfCurrentPlayersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetNumberOfCurrentPlayersAsyncDelegate, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetNumberOfCurrentPlayersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate *******************************

// ********** Begin Delegate FOnUploadLeaderboardScoreAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1202693631
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUploadLeaderboardScoreAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLeaderboardScoreAsyncDelegate, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnUploadLeaderboardScoreAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUploadLeaderboardScoreAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUploadLeaderboardScoreAsyncDelegate **********************************

// ********** Begin Delegate FOnFindOrCreateLeaderboardAsyncDelegate *******************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1869339816
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindOrCreateLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindOrCreateLeaderboardAsyncDelegate, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindOrCreateLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFindOrCreateLeaderboardAsyncDelegate *********************************

// ********** Begin Delegate FOnRequestUserStatsAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3987286585
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestUserStatsAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserStatsAsyncDelegate, FRequestUserStatsData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestUserStatsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestUserStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestUserStatsAsyncDelegate ****************************************

// ********** Begin Delegate FOnRequestCurrentStatsAsyncDelegate ***********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms
	{
		FRequestCurrentStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestCurrentStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 530590814
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestCurrentStatsAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestCurrentStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestCurrentStatsAsyncDelegate, FRequestCurrentStatsData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms
	{
		FRequestCurrentStatsData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestCurrentStatsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestCurrentStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestCurrentStatsAsyncDelegate *************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate ********************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2836748039
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntriesForUsersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesForUsersAsyncDelegate, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesForUsersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate **********************

// ********** Begin Delegate FOnAttachLeaderboardUGCAsyncDelegate **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2943664811
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttachLeaderboardUGCAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAttachLeaderboardUGCAsyncDelegate, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnAttachLeaderboardUGCAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnAttachLeaderboardUGCAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttachLeaderboardUGCAsyncDelegate ************************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindLeaderboard Function FindLeaderboardAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString LeaderboardName;
		float Timeout;
		UOrionSteamUserStatsAsyncActionFindLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name.\n\x09 * You must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\n\x09 * each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 *\n\x09 * @param\x09LeaderboardName\x09\x09The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09 * @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Find Leaderboard" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a leaderboard by name.\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\neach leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param       LeaderboardName         The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n@param       Timeout                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard, nullptr, "FindLeaderboardAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::OrionSteamUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionFindLeaderboard::execFindLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionFindLeaderboard**)Z_Param__Result=UOrionSteamUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionFindLeaderboard Function FindLeaderboardAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindLeaderboard Function HandleCallback ***
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3031507632
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::OrionSteamUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionFindLeaderboard::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardFindResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionFindLeaderboard Function HandleCallback *****

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindLeaderboard ***************************
void UOrionSteamUserStatsAsyncActionFindLeaderboard::StaticRegisterNativesUOrionSteamUserStatsAsyncActionFindLeaderboard()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionFindLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindLeaderboardAsync", &UOrionSteamUserStatsAsyncActionFindLeaderboard::execFindLeaderboardAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionFindLeaderboard::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard;
UClass* UOrionSteamUserStatsAsyncActionFindLeaderboard::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionFindLeaderboard;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionFindLeaderboard"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionFindLeaderboard,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionFindLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionFindLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionFindLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync, "FindLeaderboardAsync" }, // 2429800386
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindLeaderboard_HandleCallback, "HandleCallback" }, // 2509016632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionFindLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionFindLeaderboard, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindLeaderboardAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2297164084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionFindLeaderboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionFindLeaderboard::UOrionSteamUserStatsAsyncActionFindLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionFindLeaderboard);
UOrionSteamUserStatsAsyncActionFindLeaderboard::~UOrionSteamUserStatsAsyncActionFindLeaderboard() {}
// ********** End Class UOrionSteamUserStatsAsyncActionFindLeaderboard *****************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries Function DownloadLeaderboardEntriesAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDataRequest Request;
		int32 RangeStart;
		int32 RangeEnd;
		float Timeout;
		UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Fetches a series of leaderboard entries for a specified leaderboard.\n\x09 * You can ask for more entries than exist, then this will return as many as do exist.\n\x09 * If you want to download entries for an arbitrary set of users, such as all of\n\x09 * the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09Request\x09\x09\x09\x09The type of Data request to make.\n\x09 * @param\x09RangeStart\x09\x09\x09The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09 * @param\x09RangeEnd\x09\x09\x09The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09 * @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Leaderboard Entries" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of\nthe users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\n@param       SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       Request                         The type of Data request to make.\n@param       RangeStart                      The index to start downloading entries relative to eLeaderboardDataRequest.\n@param       RangeEnd                        The last index to retrieve entries for relative to eLeaderboardDataRequest.\n@param       Timeout                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Request_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Request;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, Request), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 1445457992
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "DownloadLeaderboardEntriesAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_Request);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries**)Z_Param__Result=UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_Request),Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries Function DownloadLeaderboardEntriesAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 468363623
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoresDownloaded,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries ****************
void UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadLeaderboardEntriesAsync", &UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries;
UClass* UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionDownloadLeaderboardEntries"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync, "DownloadLeaderboardEntriesAsync" }, // 274345600
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback, "HandleCallback" }, // 2804432486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3014786715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries);
UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::~UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries() {}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries ******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3162533213
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::execHandleCallback)
{
	P_GET_STRUCT_REF(FGlobalStatsReceived,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats Function RequestGlobalStatsAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms
	{
		UObject* WorldContextObject;
		int32 HistoryDays;
		float Timeout;
		UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously fetches global stats Data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param\x09HistoryDays\x09\x09How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Global Stats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously fetches global stats Data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\n@param       HistoryDays             How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, nullptr, "RequestGlobalStatsAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::execRequestGlobalStatsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats**)Z_Param__Result=UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(Z_Param_WorldContextObject,Z_Param_HistoryDays,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats Function RequestGlobalStatsAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats ****************
void UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::execHandleCallback },
		{ "RequestGlobalStatsAsync", &UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::execRequestGlobalStatsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats;
UClass* UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionDownloadRequestGlobalStats"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback, "HandleCallback" }, // 3097685472
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync, "RequestGlobalStatsAsync" }, // 362751434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalStatsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1451662126
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats);
UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::~UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats() {}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats ******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3463798574
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback)
{
	P_GET_STRUCT_REF(FGlobalAchievementPercentagesReady,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages Function RequestGlobalAchievementPercentagesAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously fetch the Data for the percentage of players who have received each achievement for the current game globally.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Global Achievement Percentages" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously fetch the Data for the percentage of players who have received each achievement for the current game globally.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "RequestGlobalAchievementPercentagesAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages**)Z_Param__Result=UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages Function RequestGlobalAchievementPercentagesAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages *******
void UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback },
		{ "RequestGlobalAchievementPercentagesAsync", &UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages;
UClass* UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback, "HandleCallback" }, // 191360726
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync, "RequestGlobalAchievementPercentagesAsync" }, // 1264293631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1574927258
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages);
UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::~UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages() {}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages *********

// ********** Begin Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Number Of Current Players" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayersAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers**)Z_Param__Result=UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4227424771
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::execHandleCallback)
{
	P_GET_STRUCT_REF(FNumberOfCurrentPlayers,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers *****************
void UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticRegisterNativesUOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumberOfCurrentPlayersAsync", &UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers;
UClass* UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync, "GetNumberOfCurrentPlayersAsync" }, // 1085341421
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback, "HandleCallback" }, // 1180939613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 829894584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers);
UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::~UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers() {}
// ********** End Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers *******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1202693631
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoreUploaded,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore Function UploadLeaderboardScoreAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
		int32 Score;
		TArray<int32> ScoreDetails;
		float Timeout;
		UOrionSteamUserStatsAsyncActionUploadLeaderboardScore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreaterefterm", "scoreDetails" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Uploads a user score to a specified leaderboard.\n\x09 * Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\n\x09 * you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09 * Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09UploadScoreMethod\x09\x09""Do you want to force the score to change, or keep the previous score if it was better?\n\x09 * @param\x09Score\x09\x09\x09\x09\x09The score to upload.\n\x09 * @param\x09ScoreDetails\x09\x09\x09Optional: Array containing the details surrounding the unlocking of this score.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Upload Leaderboard Score" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\nyou could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param       SteamLeaderboard                A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       UploadScoreMethod               Do you want to force the score to change, or keep the previous score if it was better?\n@param       Score                                   The score to upload.\n@param       ScoreDetails                    Optional: Array containing the details surrounding the unlocking of this score.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, UploadScoreMethod), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(0, nullptr) }; // 3378268265
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, nullptr, "UploadLeaderboardScoreAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::OrionSteamUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(int32,Z_Param_ScoreDetails);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore**)Z_Param__Result=UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore Function UploadLeaderboardScoreAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore ********************
void UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::StaticRegisterNativesUOrionSteamUserStatsAsyncActionUploadLeaderboardScore()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback },
		{ "UploadLeaderboardScoreAsync", &UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore;
UClass* UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionUploadLeaderboardScore;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionUploadLeaderboardScore"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionUploadLeaderboardScore,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionUploadLeaderboardScore\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionUploadLeaderboardScore\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_HandleCallback, "HandleCallback" }, // 69194965
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync, "UploadLeaderboardScoreAsync" }, // 582924384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionUploadLeaderboardScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2793127905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore);
UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::~UOrionSteamUserStatsAsyncActionUploadLeaderboardScore() {}
// ********** End Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore **********************

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString LeaderboardName;
		ESteamLeaderboardSortMethod SortMethod;
		ESteamLeaderboardDisplayType DisplayType;
		float Timeout;
		UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name, it will create it if it's not yet created.\n\x09 * You must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\n\x09 * game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 * Leaderboards created with this function will not automatically show up in the Steam Community.\n\x09 * You must manually set the Community Name field in the App Admin panel of the Steamworks website.\n\x09 * As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\n\x09 * website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09 * You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\n\x09 * for eLeaderboardDisplayType as this is undefined behavior.\n\x09 *\n\x09 * @param\x09LeaderboardName\x09\x09The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09 * @param\x09SortMethod\x09\x09\x09The sort order of the new leaderboard if it's created.\n\x09 * @param\x09""DisplayType\x09\x09\x09The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09 * @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Find or Create Leaderboard" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\nYou must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\ngame session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community.\nYou must manually set the Community Name field in the App Admin panel of the Steamworks website.\nAs such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\nwebsite and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\nfor eLeaderboardDisplayType as this is undefined behavior.\n\n@param       LeaderboardName         The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param       SortMethod                      The sort order of the new leaderboard if it's created.\n@param       DisplayType                     The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n@param       Timeout                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 3259148328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 3402575181
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
	P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType),Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1869339816
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback)
{
	P_GET_STRUCT_REF(FFindOrCreateLeaderboardData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard *******************
void UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindOrCreateLeaderboardAsync", &UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard;
UClass* UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionFindOrCreateLeaderboard"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 2255288343
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback, "HandleCallback" }, // 1387923699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4196315758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard);
UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::~UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard() {}
// ********** End Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard *********************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestUserStats Function HandleCallback **
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3987286585
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestUserStats::execHandleCallback)
{
	P_GET_STRUCT_REF(FRequestUserStatsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestUserStats Function HandleCallback ****

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestUserStats Function RequestUserStatsAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		UOrionSteamUserStatsAsyncActionRequestUserStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously downloads stats and achievements for the specified user from the server.\n\x09 * These stats are not automatically updated; you'll need to call this function again to refresh any Data that may have change.\n\x09 * To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\n\x09 * UserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\n\x09 * The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the user to request stats for.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Stats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\nThese stats are not automatically updated; you'll need to call this function again to refresh any Data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\nUserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param       SteamID         The Steam ID of the user to request stats for.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats, nullptr, "RequestUserStatsAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::OrionSteamUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestUserStats::execRequestUserStatsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionRequestUserStats**)Z_Param__Result=UOrionSteamUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestUserStats Function RequestUserStatsAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestUserStats **************************
void UOrionSteamUserStatsAsyncActionRequestUserStats::StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestUserStats()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionRequestUserStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionRequestUserStats::execHandleCallback },
		{ "RequestUserStatsAsync", &UOrionSteamUserStatsAsyncActionRequestUserStats::execRequestUserStatsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats;
UClass* UOrionSteamUserStatsAsyncActionRequestUserStats::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionRequestUserStats;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionRequestUserStats"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestUserStats,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionRequestUserStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionRequestUserStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionRequestUserStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_HandleCallback, "HandleCallback" }, // 2304625133
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync, "RequestUserStatsAsync" }, // 425214358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionRequestUserStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionRequestUserStats, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserStatsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2195533407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionRequestUserStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionRequestUserStats::UOrionSteamUserStatsAsyncActionRequestUserStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionRequestUserStats);
UOrionSteamUserStatsAsyncActionRequestUserStats::~UOrionSteamUserStatsAsyncActionRequestUserStats() {}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestUserStats ****************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestCurrentStats Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms
	{
		FRequestCurrentStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FRequestCurrentStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 530590814
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::OrionSteamUserStatsAsyncActionRequestCurrentStats_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestCurrentStats::execHandleCallback)
{
	P_GET_STRUCT_REF(FRequestCurrentStatsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestCurrentStats Function HandleCallback *

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestCurrentStats Function RequestCurrentStatsAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		UOrionSteamUserStatsAsyncActionRequestCurrentStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Note: this call is no longer required as it is managed by the Steam client\n\x09 * The game stats and achievements will be synchronized with Steam before\n\x09 * the game process begins.\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "Deprecated", "" },
		{ "DisplayName", "Request Current Stats (Async)" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Note: this call is no longer required as it is managed by the Steam client\nThe game stats and achievements will be synchronized with Steam before\nthe game process begins." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats, nullptr, "RequestCurrentStatsAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::OrionSteamUserStatsAsyncActionRequestCurrentStats_eventRequestCurrentStatsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionRequestCurrentStats::execRequestCurrentStatsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionRequestCurrentStats**)Z_Param__Result=UOrionSteamUserStatsAsyncActionRequestCurrentStats::RequestCurrentStatsAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestCurrentStats Function RequestCurrentStatsAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestCurrentStats ***********************
void UOrionSteamUserStatsAsyncActionRequestCurrentStats::StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestCurrentStats()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionRequestCurrentStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionRequestCurrentStats::execHandleCallback },
		{ "RequestCurrentStatsAsync", &UOrionSteamUserStatsAsyncActionRequestCurrentStats::execRequestCurrentStatsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats;
UClass* UOrionSteamUserStatsAsyncActionRequestCurrentStats::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionRequestCurrentStats;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionRequestCurrentStats"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionRequestCurrentStats,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionRequestCurrentStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionRequestCurrentStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionRequestCurrentStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_HandleCallback, "HandleCallback" }, // 958903631
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionRequestCurrentStats_RequestCurrentStatsAsync, "RequestCurrentStatsAsync" }, // 3102418593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionRequestCurrentStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionRequestCurrentStats, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestCurrentStatsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2621507287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionRequestCurrentStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionRequestCurrentStats::UOrionSteamUserStatsAsyncActionRequestCurrentStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionRequestCurrentStats);
UOrionSteamUserStatsAsyncActionRequestCurrentStats::~UOrionSteamUserStatsAsyncActionRequestCurrentStats() {}
// ********** End Class UOrionSteamUserStatsAsyncActionRequestCurrentStats *************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function DownloadLeaderboardEntriesForUsersAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		TArray<FSteamID> Users;
		float Timeout;
		UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\x09 * A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\n\x09 * If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09Users\x09\x09\x09\x09""An array of Steam IDs to get the leaderboard entries for.\n\x09 * @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Leaderboard Entries for Users" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\nA maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\nIf you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param       SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       Users                           An array of Steam IDs to get the leaderboard entries for.\n@param       Timeout                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Users;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "DownloadLeaderboardEntriesForUsersAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_TARRAY(FSteamID,Z_Param_Users);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers**)Z_Param__Result=UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,Z_Param_Users,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function DownloadLeaderboardEntriesForUsersAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2836748039
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoresDownloadedForUsers,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers ********
void UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadLeaderboardEntriesForUsersAsync", &UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
UClass* UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync, "DownloadLeaderboardEntriesForUsersAsync" }, // 1853553802
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback, "HandleCallback" }, // 1778933298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 130299784
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers);
UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::~UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers() {}
// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers **********

// ********** Begin Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC Function AttachLeaderboardUGCAsync 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics
{
	struct OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		FSteamUGCHandle Handle;
		float Timeout;
		UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|UserStats|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09 * This content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09 * Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param\x09Handle\x09\x09\x09\x09Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09 * @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Attach Leaderboard UGC" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param       SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param       Handle                          Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n@param       Timeout                         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 998943773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 4209419894
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, nullptr, "AttachLeaderboardUGCAsync", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::execAttachLeaderboardUGCAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC**)Z_Param__Result=UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,Z_Param_Handle,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC Function AttachLeaderboardUGCAsync 

// ********** Begin Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics
{
	struct OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2943664811
void Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::OrionSteamUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::execHandleCallback)
{
	P_GET_STRUCT_REF(FAttachLeaderboardUGCData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC Function HandleCallback 

// ********** Begin Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC **********************
void UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::StaticRegisterNativesUOrionSteamUserStatsAsyncActionAttachLeaderboardUGC()
{
	UClass* Class = UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachLeaderboardUGCAsync", &UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::execAttachLeaderboardUGCAsync },
		{ "HandleCallback", &UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC;
UClass* UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC;
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserStatsAsyncActionAttachLeaderboardUGC"),
			Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserStatsAsyncActionAttachLeaderboardUGC,
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
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_NoRegister()
{
	return UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync, "AttachLeaderboardUGCAsync" }, // 3859777164
		{ &Z_Construct_UFunction_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback, "HandleCallback" }, // 3516512279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2681122866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::ClassParams = {
	&UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton, Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton;
}
UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC);
UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::~UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC() {}
// ********** End Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard, UOrionSteamUserStatsAsyncActionFindLeaderboard::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionFindLeaderboard"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionFindLeaderboard), 4252482766U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries), 3433850646U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats), 880817303U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages), 4244912757U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers), 584444123U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, UOrionSteamUserStatsAsyncActionUploadLeaderboardScore::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionUploadLeaderboardScore"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore), 3660055118U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard), 647360535U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats, UOrionSteamUserStatsAsyncActionRequestUserStats::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionRequestUserStats"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionRequestUserStats), 671280049U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats, UOrionSteamUserStatsAsyncActionRequestCurrentStats::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionRequestCurrentStats"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionRequestCurrentStats), 420627784U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers), 2525653097U) },
		{ Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC::StaticClass, TEXT("UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC"), &Z_Registration_Info_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC), 2769097705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_OrionSteamSDKAPI_3960461901(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
