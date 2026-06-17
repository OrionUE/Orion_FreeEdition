// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVideo/SteamVideoTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamVideoTypes_generated_h
#error "SteamVideoTypes.generated.h already included, missing '#pragma once' in SteamVideoTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamVideoTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetOPFSettingsResult;
struct FGetVideoURLResult;

// ********** Begin ScriptStruct FGetOPFSettingsResult *********************************************
struct Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetOPFSettingsResult(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideoTypes_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGetOPFSettingsResult(ETypeConstructPhase::Inner); }


struct FGetOPFSettingsResult;
// ********** End ScriptStruct FGetOPFSettingsResult ***********************************************

// ********** Begin ScriptStruct FGetVideoURLResult ************************************************
struct Z_Construct_UScriptStruct_FGetVideoURLResult_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetVideoURLResult(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideoTypes_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetVideoURLResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGetVideoURLResult(ETypeConstructPhase::Inner); }


struct FGetVideoURLResult;
// ********** End ScriptStruct FGetVideoURLResult **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamVideo_SteamVideoTypes_h

// ********** Begin Enum ESteamBroadcastUploadResult ***********************************************
#define FOREACH_ENUM_ESTEAMBROADCASTUPLOADRESULT(op) \
	op(ESteamBroadcastUploadResult::None) \
	op(ESteamBroadcastUploadResult::OK) \
	op(ESteamBroadcastUploadResult::InitFailed) \
	op(ESteamBroadcastUploadResult::FrameFailed) \
	op(ESteamBroadcastUploadResult::Timeout) \
	op(ESteamBroadcastUploadResult::BandwidthExceeded) \
	op(ESteamBroadcastUploadResult::LowFPS) \
	op(ESteamBroadcastUploadResult::MissingKeyFrames) \
	op(ESteamBroadcastUploadResult::NoConnection) \
	op(ESteamBroadcastUploadResult::RelayFailed) \
	op(ESteamBroadcastUploadResult::SettingsChanged) \
	op(ESteamBroadcastUploadResult::MissingAudio) \
	op(ESteamBroadcastUploadResult::TooFarBehind) \
	op(ESteamBroadcastUploadResult::TranscodeBehind) 

enum class ESteamBroadcastUploadResult : uint8;
template<> struct TIsUEnumClass<ESteamBroadcastUploadResult> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamBroadcastUploadResult>();
// ********** End Enum ESteamBroadcastUploadResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
