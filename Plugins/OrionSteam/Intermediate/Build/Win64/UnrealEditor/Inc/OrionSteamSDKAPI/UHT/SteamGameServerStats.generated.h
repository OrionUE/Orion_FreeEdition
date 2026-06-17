// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/SteamGameServerStats.h"

#ifdef ORIONSTEAMSDKAPI_SteamGameServerStats_generated_h
#error "SteamGameServerStats.generated.h already included, missing '#pragma once' in SteamGameServerStats.h"
#endif
#define ORIONSTEAMSDKAPI_SteamGameServerStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamGameServerStats;
struct FSteamID;

// ********** Begin Class UOrionSteamGameServerStats ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execServerStoreUserStats); \
	DECLARE_FUNCTION(execServerRequestUserStats); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement); \
	DECLARE_FUNCTION(execGetSteamGameServerStats);


struct Z_Construct_UClass_UOrionSteamGameServerStats_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameServerStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamGameServerStats_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamGameServerStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamGameServerStats, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamGameServerStats) \
	DECLARE_SERIALIZER(UOrionSteamGameServerStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamGameServerStats(UOrionSteamGameServerStats&&) = delete; \
	UOrionSteamGameServerStats(const UOrionSteamGameServerStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamGameServerStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamGameServerStats;

// ********** End Class UOrionSteamGameServerStats *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
