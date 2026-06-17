// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshots.h"

#ifdef ORIONSTEAMSDKAPI_SteamScreenshots_generated_h
#error "SteamScreenshots.generated.h already included, missing '#pragma once' in SteamScreenshots.h"
#endif
#define ORIONSTEAMSDKAPI_SteamScreenshots_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamScreenshots;
enum class ESteamVRScreenshotType : uint8;
struct FPublishedFileID;
struct FScreenshotHandle;
struct FSteamID;

// ********** Begin Class UOrionSteamScreenshots ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary); \
	DECLARE_FUNCTION(execGetSteamScreenshots);


struct Z_Construct_UClass_UOrionSteamScreenshots_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamScreenshots(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamScreenshots_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamScreenshots(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamScreenshots, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamScreenshots) \
	DECLARE_SERIALIZER(UOrionSteamScreenshots)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamScreenshots(UOrionSteamScreenshots&&) = delete; \
	UOrionSteamScreenshots(const UOrionSteamScreenshots&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamScreenshots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamScreenshots)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamScreenshots;

// ********** End Class UOrionSteamScreenshots *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshots_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
