// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamTimeline/SteamTimelineTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamTimelineTypes_generated_h
#error "SteamTimelineTypes.generated.h already included, missing '#pragma once' in SteamTimelineTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamTimelineTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamTimelineEventRecordingExists;
struct FSteamTimelineGamePhaseRecordingExists;

// ********** Begin ScriptStruct FTimelineEventHandle **********************************************
struct Z_Construct_UScriptStruct_FTimelineEventHandle_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventHandle(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimelineEventHandle_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTimelineEventHandle(ETypeConstructPhase::Inner); }


struct FTimelineEventHandle;
// ********** End ScriptStruct FTimelineEventHandle ************************************************

// ********** Begin ScriptStruct FSteamTimelineEventRecordingExists ********************************
struct Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists(ETypeConstructPhase::Inner); }


struct FSteamTimelineEventRecordingExists;
// ********** End ScriptStruct FSteamTimelineEventRecordingExists **********************************

// ********** Begin ScriptStruct FSteamTimelineGamePhaseRecordingExists ****************************
struct Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists(ETypeConstructPhase::Inner); }


struct FSteamTimelineGamePhaseRecordingExists;
// ********** End ScriptStruct FSteamTimelineGamePhaseRecordingExists ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h

// ********** Begin Enum ESteamTimelineGameMode ****************************************************
#define FOREACH_ENUM_ESTEAMTIMELINEGAMEMODE(op) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Invalid) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Playing) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Staging) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Menus) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Max) 

enum class ESteamTimelineGameMode : uint8;
template<> struct TIsUEnumClass<ESteamTimelineGameMode> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamTimelineGameMode>();
// ********** End Enum ESteamTimelineGameMode ******************************************************

// ********** Begin Enum ESteamTimelineEventClipPriority *******************************************
#define FOREACH_ENUM_ESTEAMTIMELINEEVENTCLIPPRIORITY(op) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured) 

enum class ESteamTimelineEventClipPriority : uint8;
template<> struct TIsUEnumClass<ESteamTimelineEventClipPriority> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>();
// ********** End Enum ESteamTimelineEventClipPriority *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
