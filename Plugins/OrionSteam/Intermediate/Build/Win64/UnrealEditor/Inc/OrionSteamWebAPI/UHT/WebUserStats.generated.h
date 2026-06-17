// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUserStats/WebUserStats.h"

#ifdef ORIONSTEAMWEBAPI_WebUserStats_generated_h
#error "WebUserStats.generated.h already included, missing '#pragma once' in WebUserStats.h"
#endif
#define ORIONSTEAMWEBAPI_WebUserStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebUserStats ************************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserStatsForGame); \
	DECLARE_FUNCTION(execGetUserStatsForGame); \
	DECLARE_FUNCTION(execGetSchemaForGame); \
	DECLARE_FUNCTION(execGetPlayerAchievements); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetGlobalStatsForGame); \
	DECLARE_FUNCTION(execGetGlobalAchievementPercentagesForApp);


struct Z_Construct_UClass_UWebUserStats_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebUserStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebUserStats_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebUserStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebUserStats, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebUserStats) \
	DECLARE_SERIALIZER(UWebUserStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebUserStats(UWebUserStats&&) = delete; \
	UWebUserStats(const UWebUserStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebUserStats) \
	NO_API virtual ~UWebUserStats();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_12_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebUserStats;

// ********** End Class UWebUserStats **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUserStats_WebUserStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
