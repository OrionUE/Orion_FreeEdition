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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPlaybackStatusHasChanged;
struct FVolumeHasChanged;

// ********** Begin ScriptStruct FPlaybackStatusHasChanged *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FPlaybackStatusHasChanged;
// ********** End ScriptStruct FPlaybackStatusHasChanged *******************************************

// ********** Begin ScriptStruct FVolumeHasChanged *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FVolumeHasChanged;
// ********** End ScriptStruct FVolumeHasChanged ***************************************************

// ********** Begin Delegate FOnPlaybackStatusHasChanged *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_68_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data);


// ********** End Delegate FOnPlaybackStatusHasChanged *********************************************

// ********** Begin Delegate FOnVolumeHasChanged ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusicTypes_h_69_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data);


// ********** End Delegate FOnVolumeHasChanged *****************************************************

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
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();
// ********** End Enum ESteamAudioPlaybackStatus ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
