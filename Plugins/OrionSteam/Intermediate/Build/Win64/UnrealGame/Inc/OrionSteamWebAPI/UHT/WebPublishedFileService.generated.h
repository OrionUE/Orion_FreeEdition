// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PublishedFileService/WebPublishedFileService.h"

#ifdef ORIONSTEAMWEBAPI_WebPublishedFileService_generated_h
#error "WebPublishedFileService.generated.h already included, missing '#pragma once' in WebPublishedFileService.h"
#endif
#define ORIONSTEAMWEBAPI_WebPublishedFileService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebPublishedFileService *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTags); \
	DECLARE_FUNCTION(execUpdateIncompatibleStatus); \
	DECLARE_FUNCTION(execUpdateBanStatus); \
	DECLARE_FUNCTION(execSetDeveloperMetadata); \
	DECLARE_FUNCTION(execQueryFiles);


struct Z_Construct_UClass_UWebPublishedFileService_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPublishedFileService(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebPublishedFileService_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebPublishedFileService(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebPublishedFileService, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebPublishedFileService) \
	DECLARE_SERIALIZER(UWebPublishedFileService)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebPublishedFileService(UWebPublishedFileService&&) = delete; \
	UWebPublishedFileService(const UWebPublishedFileService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPublishedFileService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPublishedFileService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPublishedFileService) \
	NO_API virtual ~UWebPublishedFileService();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebPublishedFileService;

// ********** End Class UWebPublishedFileService ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedFileService_WebPublishedFileService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
