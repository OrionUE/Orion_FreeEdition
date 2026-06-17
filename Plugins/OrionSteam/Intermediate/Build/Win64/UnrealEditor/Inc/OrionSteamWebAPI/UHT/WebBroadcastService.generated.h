// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BroadcastService/WebBroadcastService.h"

#ifdef ORIONSTEAMWEBAPI_WebBroadcastService_generated_h
#error "WebBroadcastService.generated.h already included, missing '#pragma once' in WebBroadcastService.h"
#endif
#define ORIONSTEAMWEBAPI_WebBroadcastService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebBroadcastService *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostGameDataFrame);


struct Z_Construct_UClass_UWebBroadcastService_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebBroadcastService(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebBroadcastService_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebBroadcastService(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebBroadcastService, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebBroadcastService) \
	DECLARE_SERIALIZER(UWebBroadcastService)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebBroadcastService(UWebBroadcastService&&) = delete; \
	UWebBroadcastService(const UWebBroadcastService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBroadcastService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBroadcastService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebBroadcastService) \
	NO_API virtual ~UWebBroadcastService();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebBroadcastService;

// ********** End Class UWebBroadcastService *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
