// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Leaderboards/WebLeaderboards.h"

#ifdef ORIONSTEAMWEBAPI_WebLeaderboards_generated_h
#error "WebLeaderboards.generated.h already included, missing '#pragma once' in WebLeaderboards.h"
#endif
#define ORIONSTEAMWEBAPI_WebLeaderboards_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebLeaderboards *********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLeaderboardScore); \
	DECLARE_FUNCTION(execResetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboardsForGame); \
	DECLARE_FUNCTION(execGetLeaderboardEntries); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execDeleteLeaderboard);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebLeaderboards(); \
	friend struct Z_Construct_UClass_UWebLeaderboards_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebLeaderboards, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebLeaderboards_NoRegister) \
	DECLARE_SERIALIZER(UWebLeaderboards)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebLeaderboards(UWebLeaderboards&&) = delete; \
	UWebLeaderboards(const UWebLeaderboards&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebLeaderboards); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebLeaderboards); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebLeaderboards) \
	NO_API virtual ~UWebLeaderboards();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebLeaderboards;

// ********** End Class UWebLeaderboards ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_Leaderboards_WebLeaderboards_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
