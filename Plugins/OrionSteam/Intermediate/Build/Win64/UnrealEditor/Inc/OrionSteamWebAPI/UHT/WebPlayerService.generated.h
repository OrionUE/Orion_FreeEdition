// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerService/WebPlayerService.h"

#ifdef ORIONSTEAMWEBAPI_WebPlayerService_generated_h
#error "WebPlayerService.generated.h already included, missing '#pragma once' in WebPlayerService.h"
#endif
#define ORIONSTEAMWEBAPI_WebPlayerService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebPlayerService ********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlayingSharedGame); \
	DECLARE_FUNCTION(execGetCommunityBadgeProgress); \
	DECLARE_FUNCTION(execGetBadges); \
	DECLARE_FUNCTION(execGetSteamLevel); \
	DECLARE_FUNCTION(execGetOwnedGames); \
	DECLARE_FUNCTION(execGetRecentlyPlayedGames);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPlayerService(); \
	friend struct Z_Construct_UClass_UWebPlayerService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebPlayerService, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebPlayerService_NoRegister) \
	DECLARE_SERIALIZER(UWebPlayerService)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebPlayerService(UWebPlayerService&&) = delete; \
	UWebPlayerService(const UWebPlayerService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPlayerService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPlayerService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPlayerService) \
	NO_API virtual ~UWebPlayerService();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebPlayerService;

// ********** End Class UWebPlayerService **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PlayerService_WebPlayerService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
