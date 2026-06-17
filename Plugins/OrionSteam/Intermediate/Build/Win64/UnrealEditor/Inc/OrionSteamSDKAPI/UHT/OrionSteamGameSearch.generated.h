// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameSearch/OrionSteamGameSearch.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamGameSearch_generated_h
#error "OrionSteamGameSearch.generated.h already included, missing '#pragma once' in OrionSteamGameSearch.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamGameSearch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamGameSearch;
enum class ESteamGameSearchErrorCode : uint8;
enum class ESteamPlayerResult : uint8;
struct FSteamID;

// ********** Begin Class UOrionSteamGameSearch ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSubmitPlayerResult); \
	DECLARE_FUNCTION(execCancelRequestPlayersForGame); \
	DECLARE_FUNCTION(execHostConfirmGameStart); \
	DECLARE_FUNCTION(execRequestPlayersForGame); \
	DECLARE_FUNCTION(execSetConnectionDetails); \
	DECLARE_FUNCTION(execSetGameHostParams); \
	DECLARE_FUNCTION(execEndGameSearch); \
	DECLARE_FUNCTION(execRetrieveConnectionDetails); \
	DECLARE_FUNCTION(execDeclineGame); \
	DECLARE_FUNCTION(execAcceptGame); \
	DECLARE_FUNCTION(execSearchForGameSolo); \
	DECLARE_FUNCTION(execSearchForGameWithLobby); \
	DECLARE_FUNCTION(execAddGameSearchParams); \
	DECLARE_FUNCTION(execGetSteamGameSearch);


struct Z_Construct_UClass_UOrionSteamGameSearch_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameSearch(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamGameSearch_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamGameSearch(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamGameSearch, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamGameSearch) \
	DECLARE_SERIALIZER(UOrionSteamGameSearch)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamGameSearch(UOrionSteamGameSearch&&) = delete; \
	UOrionSteamGameSearch(const UOrionSteamGameSearch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamGameSearch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamGameSearch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamGameSearch)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_17_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamGameSearch;

// ********** End Class UOrionSteamGameSearch ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
