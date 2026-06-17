// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EconMarket/WebEconMarketService.h"

#ifdef ORIONSTEAMWEBAPI_WebEconMarketService_generated_h
#error "WebEconMarketService.generated.h already included, missing '#pragma once' in WebEconMarketService.h"
#endif
#define ORIONSTEAMWEBAPI_WebEconMarketService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebEconMarketService ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPopular); \
	DECLARE_FUNCTION(execGetAssetID); \
	DECLARE_FUNCTION(execCancelAppListingsForUser); \
	DECLARE_FUNCTION(execGetMarketEligibility);


struct Z_Construct_UClass_UWebEconMarketService_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebEconMarketService(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebEconMarketService_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebEconMarketService(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebEconMarketService, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebEconMarketService) \
	DECLARE_SERIALIZER(UWebEconMarketService)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebEconMarketService(UWebEconMarketService&&) = delete; \
	UWebEconMarketService(const UWebEconMarketService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebEconMarketService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebEconMarketService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebEconMarketService) \
	NO_API virtual ~UWebEconMarketService();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebEconMarketService;

// ********** End Class UWebEconMarketService ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_EconMarket_WebEconMarketService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
