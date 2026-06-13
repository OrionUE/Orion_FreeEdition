// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheatReporting/WebCheatReportingAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebCheatReportingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportPlayerCheating Function ReportPlayerCheatingAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString SteamIdReporter;
		FString AppData;
		bool bHeuristic;
		bool bDetection;
		bool bPlayerReport;
		bool bNoReportID;
		int32 GameMode;
		int32 SuspicionStartTime;
		int32 Severity;
		UOrionSteamWebAPIAsyncActionReportPlayerCheating* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09 *\n\x09 * It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09 * @param\x09SteamIdReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09 * @param\x09""AppData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09 * @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09 * @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09 * @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09 * @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09 * @param\x09GameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09 * @param\x09SuspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09 * @param\x09Severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09 */" },
#endif
		{ "DisplayName", "Report Player Cheating" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The App ID for the game.\n@param       SteamId                         The Steam ID of the user who is being reported for cheating.\n@param       SteamIdReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param       AppData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param       bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param       bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param       bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param       bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param       GameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param       SuspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param       Severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdReporter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppData;
	static void NewProp_bHeuristic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
	static void NewProp_bDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetection;
	static void NewProp_bPlayerReport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
	static void NewProp_bNoReportID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoReportID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuspicionStartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamIdReporter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bHeuristic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bPlayerReport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bNoReportID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, GameMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SuspicionStartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Severity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamIdReporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SuspicionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating, nullptr, "ReportPlayerCheatingAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::OrionSteamWebAPIAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdReporter);
	P_GET_PROPERTY(FStrProperty,Z_Param_AppData);
	P_GET_UBOOL(Z_Param_bHeuristic);
	P_GET_UBOOL(Z_Param_bDetection);
	P_GET_UBOOL(Z_Param_bPlayerReport);
	P_GET_UBOOL(Z_Param_bNoReportID);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_SuspicionStartTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_Severity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionReportPlayerCheating**)Z_Param__Result=UOrionSteamWebAPIAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_SteamIdReporter,Z_Param_AppData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_GameMode,Z_Param_SuspicionStartTime,Z_Param_Severity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionReportPlayerCheating Function ReportPlayerCheatingAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportPlayerCheating *************************
void UOrionSteamWebAPIAsyncActionReportPlayerCheating::StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportPlayerCheating()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionReportPlayerCheating::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportPlayerCheatingAsync", &UOrionSteamWebAPIAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating;
UClass* UOrionSteamWebAPIAsyncActionReportPlayerCheating::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionReportPlayerCheating;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionReportPlayerCheating"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportPlayerCheating,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionReportPlayerCheating::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionReportPlayerCheating\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionReportPlayerCheating\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync, "ReportPlayerCheatingAsync" }, // 4075501213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionReportPlayerCheating>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionReportPlayerCheating::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionReportPlayerCheating::UOrionSteamWebAPIAsyncActionReportPlayerCheating() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionReportPlayerCheating);
UOrionSteamWebAPIAsyncActionReportPlayerCheating::~UOrionSteamWebAPIAsyncActionReportPlayerCheating() {}
// ********** End Class UOrionSteamWebAPIAsyncActionReportPlayerCheating ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan Function RequestPlayerGameBanAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ReportID;
		FString CheatDescription;
		int32 Duration;
		bool bDelayBan;
		UOrionSteamWebAPIAsyncActionRequestPlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests a game ban on a specific player.\n\x09 *\n\x09 * This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09ReportID\x09\x09\x09The reportid originally used to report cheating.\n\x09 * @param\x09""CheatDescription\x09Text describing cheating infraction.\n\x09 * @param\x09""Duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09 * @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09 */" },
#endif
		{ "DisplayName", "Request Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                         The Steam ID of the user who is being reported for cheating.\n@param       AppId                           The App ID for the game.\n@param       ReportID                        The reportid originally used to report cheating.\n@param       CheatDescription        Text describing cheating infraction.\n@param       Duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param       bDelayBan                       Delay the ban according to default ban delay rules." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static void NewProp_bDelayBan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReportID = { "ReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReportID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, CheatDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms*)Obj)->bDelayBan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_CheatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan, nullptr, "RequestPlayerGameBanAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::OrionSteamWebAPIAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReportID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatDescription);
	P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bDelayBan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ReportID,Z_Param_CheatDescription,Z_Param_Duration,Z_Param_bDelayBan);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan Function RequestPlayerGameBanAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan *************************
void UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestPlayerGameBan()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestPlayerGameBanAsync", &UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan;
UClass* UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRequestPlayerGameBan;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRequestPlayerGameBan"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestPlayerGameBan,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRequestPlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRequestPlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync, "RequestPlayerGameBanAsync" }, // 3225444343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRequestPlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::UOrionSteamWebAPIAsyncActionRequestPlayerGameBan() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan);
UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::~UOrionSteamWebAPIAsyncActionRequestPlayerGameBan() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan Function RemovePlayerGameBanAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionRemovePlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a game ban on a player.\n\x09 *\n\x09 * This is used if a Game ban is determined to be a false positive.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09 * @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09 */" },
#endif
		{ "DisplayName", "Remove Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The Steam ID of the user to remove the game ban on.\n@param       AppId                   The App ID for the game." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan, nullptr, "RemovePlayerGameBanAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::OrionSteamWebAPIAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan Function RemovePlayerGameBanAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan **************************
void UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRemovePlayerGameBan()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemovePlayerGameBanAsync", &UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan;
UClass* UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRemovePlayerGameBan;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRemovePlayerGameBan"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRemovePlayerGameBan,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRemovePlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRemovePlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync, "RemovePlayerGameBanAsync" }, // 1924215848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRemovePlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::UOrionSteamWebAPIAsyncActionRemovePlayerGameBan() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan);
UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::~UOrionSteamWebAPIAsyncActionRemovePlayerGameBan() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan ****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCheatingReports Function GetCheatingReportsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 TimeEnd;
		int32 TimeBegin;
		FString ReportIdmin;
		bool bIncludeReports;
		bool bIncludeBans;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetCheatingReports* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of cheating reports submitted for this app.\n\x09 *\n\x09 * Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09TimeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09 * @param\x09TimeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09 * @param\x09ReportIdmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09 * @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09 * @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09 * @param\x09SteamId\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09 */" },
#endif
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The App ID for the game.\n@param       TimeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param       TimeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param       ReportIdmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param       bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param       bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param       SteamId                         (Optional) Query just for this Steam ID." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportIdmin;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportIdmin = { "ReportIdmin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReportIdmin), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportIdmin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::OrionSteamWebAPIAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReportIdmin);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetCheatingReports**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_TimeEnd,Z_Param_TimeBegin,Z_Param_ReportIdmin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCheatingReports Function GetCheatingReportsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCheatingReports ***************************
void UOrionSteamWebAPIAsyncActionGetCheatingReports::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCheatingReports()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetCheatingReports::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCheatingReportsAsync", &UOrionSteamWebAPIAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports;
UClass* UOrionSteamWebAPIAsyncActionGetCheatingReports::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetCheatingReports;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetCheatingReports"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCheatingReports,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetCheatingReports::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 2504976348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetCheatingReports>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetCheatingReports::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetCheatingReports::UOrionSteamWebAPIAsyncActionGetCheatingReports() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetCheatingReports);
UOrionSteamWebAPIAsyncActionGetCheatingReports::~UOrionSteamWebAPIAsyncActionGetCheatingReports() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCheatingReports *****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportCheatData Function ReportCheatDataAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PathAndFileName;
		FString WebCheatURL;
		FString TimeNow;
		FString TimeStarted;
		FString TimeStopped;
		FString CheatName;
		int32 GameProcessId;
		int32 CheatProcessId;
		FString CheatParam1;
		FString CheatParam2;
		UOrionSteamWebAPIAsyncActionReportCheatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09 *\n\x09 * This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09PathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09 * @param\x09WebCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09 * @param\x09TimeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09 * @param\x09TimeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09 * @param\x09TimeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09 * @param\x09""CheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09 * @param\x09GameProcessId\x09\x09\x09Process ID of the running game.\n\x09 * @param\x09""CheatProcessId\x09\x09\x09Process ID of the cheat process that ran.\n\x09 * @param\x09""CheatParam1\x09(int64)\x09\x09""Extra cheat data.\n\x09 * @param\x09""CheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09 */" },
#endif
		{ "DisplayName", "Report Cheat Data" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 The Steam ID of the user to remove the game ban on.\n@param       AppId                                   The App ID for the game.\n@param       PathAndFileName                 Path and file name of the cheat executable.\n@param       WebCheatURL                             Web url where the cheat was found and downloaded.\n@param       TimeNow                                 Local system time now. 64 bit windows system time.\n@param       TimeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param       TimeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param       CheatName                               Descriptive name for the cheat.\n@param       GameProcessId                   Process ID of the running game.\n@param       CheatProcessId                  Process ID of the cheat process that ran.\n@param       CheatParam1     (int64)         Extra cheat data.\n@param       CheatParam2     (int64)         Extra cheat data." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathAndFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WebCheatURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeNow;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeStarted;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeStopped;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameProcessId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheatProcessId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatParam1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatParam2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, PathAndFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WebCheatURL = { "WebCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WebCheatURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeNow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStarted), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStopped), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, GameProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_PathAndFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WebCheatURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_GameProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData, nullptr, "ReportCheatDataAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::OrionSteamWebAPIAsyncActionReportCheatData_eventReportCheatDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionReportCheatData::execReportCheatDataAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PathAndFileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_WebCheatURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeNow);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeStarted);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeStopped);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameProcessId);
	P_GET_PROPERTY(FIntProperty,Z_Param_CheatProcessId);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam1);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionReportCheatData**)Z_Param__Result=UOrionSteamWebAPIAsyncActionReportCheatData::ReportCheatDataAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PathAndFileName,Z_Param_WebCheatURL,Z_Param_TimeNow,Z_Param_TimeStarted,Z_Param_TimeStopped,Z_Param_CheatName,Z_Param_GameProcessId,Z_Param_CheatProcessId,Z_Param_CheatParam1,Z_Param_CheatParam2);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionReportCheatData Function ReportCheatDataAsync **

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportCheatData ******************************
void UOrionSteamWebAPIAsyncActionReportCheatData::StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportCheatData()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionReportCheatData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportCheatDataAsync", &UOrionSteamWebAPIAsyncActionReportCheatData::execReportCheatDataAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData;
UClass* UOrionSteamWebAPIAsyncActionReportCheatData::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionReportCheatData;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionReportCheatData"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportCheatData,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionReportCheatData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionReportCheatData\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionReportCheatData\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionReportCheatData_ReportCheatDataAsync, "ReportCheatDataAsync" }, // 1147627501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionReportCheatData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionReportCheatData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionReportCheatData::UOrionSteamWebAPIAsyncActionReportCheatData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionReportCheatData);
UOrionSteamWebAPIAsyncActionReportCheatData::~UOrionSteamWebAPIAsyncActionReportCheatData() {}
// ********** End Class UOrionSteamWebAPIAsyncActionReportCheatData ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser Function RequestVacStatusForUserAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionId;
		UOrionSteamWebAPIAsyncActionRequestVacStatusForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09 *\n\x09 * This is used before a user enters matchmaking or joins a game.\n\x09 * If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\n\x09 * Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\n\x09 * The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\n\x09 * It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09 */" },
#endif
		{ "DisplayName", "Request VAC Status for User" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                         The Steam ID of the user.\n@param       AppId                           The App ID for the game.\n@param       SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser, nullptr, "RequestVacStatusForUserAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::OrionSteamWebAPIAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser**)Z_Param__Result=UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser Function RequestVacStatusForUserAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser **********************
void UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestVacStatusForUser()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestVacStatusForUserAsync", &UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser;
UClass* UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionRequestVacStatusForUser;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionRequestVacStatusForUser"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestVacStatusForUser,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionRequestVacStatusForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionRequestVacStatusForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync, "RequestVacStatusForUserAsync" }, // 4073545562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionRequestVacStatusForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::UOrionSteamWebAPIAsyncActionRequestVacStatusForUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser);
UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::~UOrionSteamWebAPIAsyncActionRequestVacStatusForUser() {}
// ********** End Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession Function StartSecureMultiplayerSessionAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tell the VAC servers that a secure multiplayer session has started.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09The Steam ID of the user.\n\x09 * @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09 */" },
#endif
		{ "DisplayName", "Start Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 The Steam ID of the user.\n@param       AppId                   The App ID for the game." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession, nullptr, "StartSecureMultiplayerSessionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession**)Z_Param__Result=UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession Function StartSecureMultiplayerSessionAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession ****************
void UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartSecureMultiplayerSessionAsync", &UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession;
UClass* UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionStartSecureMultiplayerSession"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync, "StartSecureMultiplayerSessionAsync" }, // 1271448062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession);
UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::~UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession() {}
// ********** End Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession ******************

// ********** Begin Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession Function EndSecureMultiplayerSessionAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionId;
		UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|CheatReporting|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tell the VAC servers that a secure multiplayer session has ended.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09 * @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09 */" },
#endif
		{ "DisplayName", "End Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       SteamId                         The Steam ID of the user.\n@param       AppId                           The App ID for the game.\n@param       SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession, nullptr, "EndSecureMultiplayerSessionAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession**)Z_Param__Result=UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession Function EndSecureMultiplayerSessionAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession ******************
void UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::StaticRegisterNativesUOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndSecureMultiplayerSessionAsync", &UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession;
UClass* UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionEndSecureMultiplayerSession"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync, "EndSecureMultiplayerSessionAsync" }, // 1913952545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession);
UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::~UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession() {}
// ********** End Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession ********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating, UOrionSteamWebAPIAsyncActionReportPlayerCheating::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionReportPlayerCheating"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionReportPlayerCheating), 3444031350U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan, UOrionSteamWebAPIAsyncActionRequestPlayerGameBan::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRequestPlayerGameBan"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan), 2088660098U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan, UOrionSteamWebAPIAsyncActionRemovePlayerGameBan::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRemovePlayerGameBan"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan), 3212589033U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports, UOrionSteamWebAPIAsyncActionGetCheatingReports::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetCheatingReports"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetCheatingReports), 3978899720U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData, UOrionSteamWebAPIAsyncActionReportCheatData::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionReportCheatData"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionReportCheatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionReportCheatData), 752968850U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser, UOrionSteamWebAPIAsyncActionRequestVacStatusForUser::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionRequestVacStatusForUser"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser), 3919442872U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession, UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession), 1477983859U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession, UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession), 3478033935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_OrionSteamWebAPI_3877396861(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
