// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/SteamGameServerStatsTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamGameServerStatsTypes_generated_h
#error "SteamGameServerStatsTypes.generated.h already included, missing '#pragma once' in SteamGameServerStatsTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamGameServerStatsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGSStatsReceived;
struct FGSStatsStored;
struct FGSStatsUnloaded;

// ********** Begin ScriptStruct FGSStatsReceived **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsReceived_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSStatsReceived;
// ********** End ScriptStruct FGSStatsReceived ****************************************************

// ********** Begin ScriptStruct FGSStatsStored ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsStored_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSStatsStored;
// ********** End ScriptStruct FGSStatsStored ******************************************************

// ********** Begin ScriptStruct FGSStatsUnloaded **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSStatsUnloaded;
// ********** End ScriptStruct FGSStatsUnloaded ****************************************************

// ********** Begin Delegate FOnServerRequestUserStats *********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_84_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnServerRequestUserStats_DelegateWrapper(const FScriptDelegate& OnServerRequestUserStats, FGSStatsReceived const& Data, bool bWasSuccessful);


// ********** End Delegate FOnServerRequestUserStats ***********************************************

// ********** Begin Delegate FOnServerStoreUserStats ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_85_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& Data, bool bWasSuccessful);


// ********** End Delegate FOnServerStoreUserStats *************************************************

// ********** Begin Delegate FOnGSStatsUnloaded ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_86_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& Data);


// ********** End Delegate FOnGSStatsUnloaded ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStatsTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
