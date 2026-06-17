// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshotsTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamScreenshotsTypes_generated_h
#error "SteamScreenshotsTypes.generated.h already included, missing '#pragma once' in SteamScreenshotsTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamScreenshotsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotReady;
struct FScreenshotRequested;

// ********** Begin ScriptStruct FScreenshotHandle *************************************************
struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshotsTypes_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotHandle_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FScreenshotHandle(ETypeConstructPhase::Inner); }


struct FScreenshotHandle;
// ********** End ScriptStruct FScreenshotHandle ***************************************************

// ********** Begin ScriptStruct FScreenshotReady **************************************************
struct Z_Construct_UScriptStruct_FScreenshotReady_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshotsTypes_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotReady_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FScreenshotReady(ETypeConstructPhase::Inner); }


struct FScreenshotReady;
// ********** End ScriptStruct FScreenshotReady ****************************************************

// ********** Begin ScriptStruct FScreenshotRequested **********************************************
struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshotsTypes_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScreenshotRequested_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FScreenshotRequested(ETypeConstructPhase::Inner); }


struct FScreenshotRequested;
// ********** End ScriptStruct FScreenshotRequested ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamScreenshots_SteamScreenshotsTypes_h

// ********** Begin Enum ESteamVRScreenshotType ****************************************************
#define FOREACH_ENUM_ESTEAMVRSCREENSHOTTYPE(op) \
	op(ESteamVRScreenshotType::None) \
	op(ESteamVRScreenshotType::Mono) \
	op(ESteamVRScreenshotType::Stereo) \
	op(ESteamVRScreenshotType::MonoCubemap) \
	op(ESteamVRScreenshotType::MonoPanorama) \
	op(ESteamVRScreenshotType::StereoPanorama) 

enum class ESteamVRScreenshotType : uint8;
template<> struct TIsUEnumClass<ESteamVRScreenshotType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamVRScreenshotType>();
// ********** End Enum ESteamVRScreenshotType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
