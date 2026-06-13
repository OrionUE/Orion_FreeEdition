// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSharedTypes.h"

#ifdef ORIONSTEAMSHARED_OrionSteamSharedTypes_generated_h
#error "OrionSteamSharedTypes.generated.h already included, missing '#pragma once' in OrionSteamSharedTypes.h"
#endif
#define ORIONSTEAMSHARED_OrionSteamSharedTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FOrionSteamAudioInputDeviceInfo;

// ********** Begin ScriptStruct FOnlineUserPresenceOrionSteamBlueprint ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineUserPresenceOrionSteamBlueprint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOnlineUserPresenceOrionSteamBlueprint;
// ********** End ScriptStruct FOnlineUserPresenceOrionSteamBlueprint ******************************

// ********** Begin ScriptStruct FOrionSteamAudioInputDeviceInfo ***********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOrionSteamAudioInputDeviceInfo;
// ********** End ScriptStruct FOrionSteamAudioInputDeviceInfo *************************************

// ********** Begin ScriptStruct FOnlineFriendOrionSteamBlueprint **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOnlineFriendOrionSteamBlueprint;
// ********** End ScriptStruct FOnlineFriendOrionSteamBlueprint ************************************

// ********** Begin ScriptStruct FSteamSessionSetting **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics; \
	ORIONSTEAMSHARED_API static class UScriptStruct* StaticStruct();


struct FSteamSessionSetting;
// ********** End ScriptStruct FSteamSessionSetting ************************************************

// ********** Begin Delegate FOnOrionSteamAudioInputDevicesObtained ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h_212_DELEGATE \
ORIONSTEAMSHARED_API void FOnOrionSteamAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnOrionSteamAudioInputDevicesObtained, TArray<FOrionSteamAudioInputDeviceInfo> const& AvailableDevices);


// ********** End Delegate FOnOrionSteamAudioInputDevicesObtained **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedTypes_h

// ********** Begin Enum ESteamLobbyDistanceFilter *************************************************
#define FOREACH_ENUM_ESTEAMLOBBYDISTANCEFILTER(op) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar) \
	op(ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide) 

enum class ESteamLobbyDistanceFilter : uint8;
template<> struct TIsUEnumClass<ESteamLobbyDistanceFilter> { enum { Value = true }; };
template<> ORIONSTEAMSHARED_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>();
// ********** End Enum ESteamLobbyDistanceFilter ***************************************************

// ********** Begin Enum EOnlineFriendOrionSteamPresenceState **************************************
#define FOREACH_ENUM_EONLINEFRIENDORIONSTEAMPRESENCESTATE(op) \
	op(EOnlineFriendOrionSteamPresenceState::Offline) \
	op(EOnlineFriendOrionSteamPresenceState::Online) \
	op(EOnlineFriendOrionSteamPresenceState::Away) \
	op(EOnlineFriendOrionSteamPresenceState::ExtendedAway) \
	op(EOnlineFriendOrionSteamPresenceState::DoNotDisturb) \
	op(EOnlineFriendOrionSteamPresenceState::Unknown) 

enum class EOnlineFriendOrionSteamPresenceState : uint8;
template<> struct TIsUEnumClass<EOnlineFriendOrionSteamPresenceState> { enum { Value = true }; };
template<> ORIONSTEAMSHARED_API UEnum* StaticEnum<EOnlineFriendOrionSteamPresenceState>();
// ********** End Enum EOnlineFriendOrionSteamPresenceState ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
