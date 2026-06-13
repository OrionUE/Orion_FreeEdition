// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamWebAPI/SteamWebTypes.h"

#ifdef ORIONSTEAMWEBAPI_SteamWebTypes_generated_h
#error "SteamWebTypes.generated.h already included, missing '#pragma once' in SteamWebTypes.h"
#endif
#define ORIONSTEAMWEBAPI_SteamWebTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FWebAppsGetAppList;

// ********** Begin Delegate FOnOrionSteamWebAPICallback *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_17_DELEGATE \
ORIONSTEAMWEBAPI_API void FOnOrionSteamWebAPICallback_DelegateWrapper(const FScriptDelegate& OnOrionSteamWebAPICallback, const FString& data, bool bWasSuccessful);


// ********** End Delegate FOnOrionSteamWebAPICallback *********************************************

// ********** Begin Delegate FOnOrionSteamWebAPIAsyncCallback **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_18_DELEGATE \
ORIONSTEAMWEBAPI_API void FOnOrionSteamWebAPIAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnOrionSteamWebAPIAsyncCallback, const FString& data, bool bWasSuccessful);


// ********** End Delegate FOnOrionSteamWebAPIAsyncCallback ****************************************

// ********** Begin ScriptStruct FOrionSteamJson ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrionSteamJson_Statics; \
	ORIONSTEAMWEBAPI_API static class UScriptStruct* StaticStruct();


struct FOrionSteamJson;
// ********** End ScriptStruct FOrionSteamJson *****************************************************

// ********** Begin ScriptStruct FWebAppsGetAppList ************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_383_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics; \
	ORIONSTEAMWEBAPI_API static class UScriptStruct* StaticStruct();


struct FWebAppsGetAppList;
// ********** End ScriptStruct FWebAppsGetAppList **************************************************

// ********** Begin Delegate FOnOrionSteamWebAPIAppListCallback ************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_391_DELEGATE \
ORIONSTEAMWEBAPI_API void FOnOrionSteamWebAPIAppListCallback_DelegateWrapper(const FScriptDelegate& OnOrionSteamWebAPIAppListCallback, TArray<FWebAppsGetAppList> const& Data, bool bWasSuccessful);


// ********** End Delegate FOnOrionSteamWebAPIAppListCallback **************************************

// ********** Begin Delegate FOnOrionSteamWebAPIAppListAsyncCallback *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_392_DELEGATE \
ORIONSTEAMWEBAPI_API void FOnOrionSteamWebAPIAppListAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnOrionSteamWebAPIAppListAsyncCallback, TArray<FWebAppsGetAppList> const& data, bool bWasSuccessful);


// ********** End Delegate FOnOrionSteamWebAPIAppListAsyncCallback *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h

// ********** Begin Enum ESubsystemWeb *************************************************************
#define FOREACH_ENUM_ESUBSYSTEMWEB(op) \
	op(ESubsystemWeb::OrionSteamWebAPI) \
	op(ESubsystemWeb::Apps) \
	op(ESubsystemWeb::Broadcast) \
	op(ESubsystemWeb::CheatReporting) \
	op(ESubsystemWeb::Community) \
	op(ESubsystemWeb::Econ) \
	op(ESubsystemWeb::EconMarket) \
	op(ESubsystemWeb::Economy) \
	op(ESubsystemWeb::GameInventory) \
	op(ESubsystemWeb::GameNotifications) \
	op(ESubsystemWeb::GameServers) \
	op(ESubsystemWeb::GameServerStats) \
	op(ESubsystemWeb::Inventory) \
	op(ESubsystemWeb::LobbyMatchmaking) \
	op(ESubsystemWeb::Leaderboards) \
	op(ESubsystemWeb::MicroTxn) \
	op(ESubsystemWeb::News) \
	op(ESubsystemWeb::PlayerService) \
	op(ESubsystemWeb::PublishedFile) \
	op(ESubsystemWeb::PublishedItemSearch) \
	op(ESubsystemWeb::PublishedItemVoting) \
	op(ESubsystemWeb::RemoteStorage) \
	op(ESubsystemWeb::User) \
	op(ESubsystemWeb::UserAuth) \
	op(ESubsystemWeb::UserStats) \
	op(ESubsystemWeb::Workshop) 

enum class ESubsystemWeb : uint8;
template<> struct TIsUEnumClass<ESubsystemWeb> { enum { Value = true }; };
template<> ORIONSTEAMWEBAPI_API UEnum* StaticEnum<ESubsystemWeb>();
// ********** End Enum ESubsystemWeb ***************************************************************

// ********** Begin Enum ESteamValueType ***********************************************************
#define FOREACH_ENUM_ESTEAMVALUETYPE(op) \
	op(ESteamValueType::STRING) \
	op(ESteamValueType::NUMBER) \
	op(ESteamValueType::BOOL) 

enum class ESteamValueType : uint8;
template<> struct TIsUEnumClass<ESteamValueType> { enum { Value = true }; };
template<> ORIONSTEAMWEBAPI_API UEnum* StaticEnum<ESteamValueType>();
// ********** End Enum ESteamValueType *************************************************************

// ********** Begin Enum ESteamJsonResult **********************************************************
#define FOREACH_ENUM_ESTEAMJSONRESULT(op) \
	op(ESteamJsonResult::Found) \
	op(ESteamJsonResult::NotFound) 

enum class ESteamJsonResult : uint8;
template<> struct TIsUEnumClass<ESteamJsonResult> { enum { Value = true }; };
template<> ORIONSTEAMWEBAPI_API UEnum* StaticEnum<ESteamJsonResult>();
// ********** End Enum ESteamJsonResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
