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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSteamTimelineEventRecordingExists;
struct FSteamTimelineGamePhaseRecordingExists;

// ********** Begin ScriptStruct FTimelineEventHandle **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEventHandle_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FTimelineEventHandle;
// ********** End ScriptStruct FTimelineEventHandle ************************************************

// ********** Begin ScriptStruct FSteamTimelineEventRecordingExists ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamTimelineEventRecordingExists_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamTimelineEventRecordingExists;
// ********** End ScriptStruct FSteamTimelineEventRecordingExists **********************************

// ********** Begin ScriptStruct FSteamTimelineGamePhaseRecordingExists ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamTimelineGamePhaseRecordingExists_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamTimelineGamePhaseRecordingExists;
// ********** End ScriptStruct FSteamTimelineGamePhaseRecordingExists ******************************

// ********** Begin Delegate FOnSteamTimelineEventRecordingExists **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_122_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamTimelineEventRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineEventRecordingExists, FSteamTimelineEventRecordingExists const& Data);


// ********** End Delegate FOnSteamTimelineEventRecordingExists ************************************

// ********** Begin Delegate FOnSteamTimelineGamePhaseRecordingExists ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimelineTypes_h_123_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamTimelineGamePhaseRecordingExists_DelegateWrapper(const FMulticastScriptDelegate& OnSteamTimelineGamePhaseRecordingExists, FSteamTimelineGamePhaseRecordingExists const& Data);


// ********** End Delegate FOnSteamTimelineGamePhaseRecordingExists ********************************

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
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamTimelineGameMode>();
// ********** End Enum ESteamTimelineGameMode ******************************************************

// ********** Begin Enum ESteamTimelineEventClipPriority *******************************************
#define FOREACH_ENUM_ESTEAMTIMELINEEVENTCLIPPRIORITY(op) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured) 

enum class ESteamTimelineEventClipPriority : uint8;
template<> struct TIsUEnumClass<ESteamTimelineEventClipPriority> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>();
// ********** End Enum ESteamTimelineEventClipPriority *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
