// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusicTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamMusicTypes_generated_h
#error "SteamMusicTypes.generated.h already included, missing '#pragma once' in SteamMusicTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMusicTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlaybackStatusHasChanged;
struct FVolumeHasChanged;

// ********** Begin ScriptStruct FPlaybackStatusHasChanged *****************************************
struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPlaybackStatusHasChanged(ETypeConstructPhase::Inner); }


struct FPlaybackStatusHasChanged;
// ********** End ScriptStruct FPlaybackStatusHasChanged *******************************************

// ********** Begin ScriptStruct FVolumeHasChanged *************************************************
struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVolumeHasChanged_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FVolumeHasChanged(ETypeConstructPhase::Inner); }


struct FVolumeHasChanged;
// ********** End ScriptStruct FVolumeHasChanged ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h

// ********** Begin Enum ESteamAudioPlaybackStatus *************************************************
#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> struct TIsUEnumClass<ESteamAudioPlaybackStatus> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();
// ********** End Enum ESteamAudioPlaybackStatus ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
