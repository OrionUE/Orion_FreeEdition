// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSDKAPI/OrionSteamTypes.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamTypes_generated_h
#error "OrionSteamTypes.generated.h already included, missing '#pragma once' in OrionSteamTypes.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOrionSteamId *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrionSteamId_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOrionSteamId;
// ********** End ScriptStruct FOrionSteamId *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h

// ********** Begin Enum EOrionSteamPersonaState ***************************************************
#define FOREACH_ENUM_EORIONSTEAMPERSONASTATE(op) \
	op(EOrionSteamPersonaState::Offline) \
	op(EOrionSteamPersonaState::Online) \
	op(EOrionSteamPersonaState::Busy) \
	op(EOrionSteamPersonaState::Away) \
	op(EOrionSteamPersonaState::Snooze) \
	op(EOrionSteamPersonaState::LookingToTrade) \
	op(EOrionSteamPersonaState::LookingToPlay) \
	op(EOrionSteamPersonaState::Max) 

enum class EOrionSteamPersonaState : uint8;
template<> struct TIsUEnumClass<EOrionSteamPersonaState> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamPersonaState>();
// ********** End Enum EOrionSteamPersonaState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
