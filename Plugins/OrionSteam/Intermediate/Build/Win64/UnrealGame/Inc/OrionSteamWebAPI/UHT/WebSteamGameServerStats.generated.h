// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/WebSteamGameServerStats.h"

#ifdef ORIONSTEAMWEBAPI_WebSteamGameServerStats_generated_h
#error "WebSteamGameServerStats.generated.h already included, missing '#pragma once' in WebSteamGameServerStats.h"
#endif
#define ORIONSTEAMWEBAPI_WebSteamGameServerStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebSteamGameServerStats *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameServerPlayerStatsForGame);


struct Z_Construct_UClass_UWebSteamGameServerStats_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebSteamGameServerStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebSteamGameServerStats_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebSteamGameServerStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebSteamGameServerStats, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebSteamGameServerStats) \
	DECLARE_SERIALIZER(UWebSteamGameServerStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebSteamGameServerStats(UWebSteamGameServerStats&&) = delete; \
	UWebSteamGameServerStats(const UWebSteamGameServerStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamGameServerStats) \
	NO_API virtual ~UWebSteamGameServerStats();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebSteamGameServerStats;

// ********** End Class UWebSteamGameServerStats ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamGameServerStats_WebSteamGameServerStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
