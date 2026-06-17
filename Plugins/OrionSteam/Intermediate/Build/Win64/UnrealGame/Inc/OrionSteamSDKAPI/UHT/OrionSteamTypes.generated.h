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
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOrionSteamId *****************************************************
struct Z_Construct_UScriptStruct_FOrionSteamId_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamId(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamTypes_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrionSteamId_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOrionSteamId(ETypeConstructPhase::Inner); }


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
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrionSteamPersonaState>();
// ********** End Enum EOrionSteamPersonaState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
