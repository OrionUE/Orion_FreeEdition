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
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAppsGetAppList;

// ********** Begin ScriptStruct FOrionSteamJson ***************************************************
struct Z_Construct_UScriptStruct_FOrionSteamJson_Statics;
ORIONSTEAMWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamJson(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrionSteamJson_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOrionSteamJson(ETypeConstructPhase::Inner); }


struct FOrionSteamJson;
// ********** End ScriptStruct FOrionSteamJson *****************************************************

// ********** Begin ScriptStruct FWebAppsGetAppList ************************************************
struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics;
ORIONSTEAMWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_SteamWebTypes_h_383_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWebAppsGetAppList(ETypeConstructPhase::Inner); }


struct FWebAppsGetAppList;
// ********** End ScriptStruct FWebAppsGetAppList **************************************************

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
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubsystemWeb>();
// ********** End Enum ESubsystemWeb ***************************************************************

// ********** Begin Enum ESteamValueType ***********************************************************
#define FOREACH_ENUM_ESTEAMVALUETYPE(op) \
	op(ESteamValueType::STRING) \
	op(ESteamValueType::NUMBER) \
	op(ESteamValueType::BOOL) 

enum class ESteamValueType : uint8;
template<> struct TIsUEnumClass<ESteamValueType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamValueType>();
// ********** End Enum ESteamValueType *************************************************************

// ********** Begin Enum ESteamJsonResult **********************************************************
#define FOREACH_ENUM_ESTEAMJSONRESULT(op) \
	op(ESteamJsonResult::Found) \
	op(ESteamJsonResult::NotFound) 

enum class ESteamJsonResult : uint8;
template<> struct TIsUEnumClass<ESteamJsonResult> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamJsonResult>();
// ********** End Enum ESteamJsonResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
