// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServers.h"

#ifdef ORIONSTEAMSDKAPI_SteamMatchmakingServers_generated_h
#error "SteamMatchmakingServers.generated.h already included, missing '#pragma once' in SteamMatchmakingServers.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMatchmakingServers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamMatchmakingServers;
class UServerFilter;

// ********** Begin Class UOrionSteamMatchmakingServers ********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerRules); \
	DECLARE_FUNCTION(execPingServer); \
	DECLARE_FUNCTION(execRequestSpectatorServerList); \
	DECLARE_FUNCTION(execRequestLANServerList); \
	DECLARE_FUNCTION(execRequestInternetServerList); \
	DECLARE_FUNCTION(execRequestHistoryServerList); \
	DECLARE_FUNCTION(execRequestFriendsServerList); \
	DECLARE_FUNCTION(execRequestFavoritesServerList); \
	DECLARE_FUNCTION(execGetSteamMatchmakingServers);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamMatchmakingServers(); \
	friend struct Z_Construct_UClass_UOrionSteamMatchmakingServers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingServers, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingServers_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingServers)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingServers(UOrionSteamMatchmakingServers&&) = delete; \
	UOrionSteamMatchmakingServers(const UOrionSteamMatchmakingServers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingServers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingServers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamMatchmakingServers)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingServers;

// ********** End Class UOrionSteamMatchmakingServers **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
