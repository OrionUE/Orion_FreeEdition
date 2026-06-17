// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamAppsTypes_generated_h
#error "SteamAppsTypes.generated.h already included, missing '#pragma once' in SteamAppsTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamAppsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDLCInstalled;
struct FFileDetailsResult;
struct FTimedTrialStatus;

// ********** Begin ScriptStruct FTimedTrialStatus *************************************************
struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTimedTrialStatus(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimedTrialStatus_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTimedTrialStatus(ETypeConstructPhase::Inner); }


struct FTimedTrialStatus;
// ********** End ScriptStruct FTimedTrialStatus ***************************************************

// ********** Begin ScriptStruct FFileDetailsResult ************************************************
struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FFileDetailsResult(ETypeConstructPhase::Inner); }


struct FFileDetailsResult;
// ********** End ScriptStruct FFileDetailsResult **************************************************

// ********** Begin ScriptStruct FDLCInstalled *****************************************************
struct Z_Construct_UScriptStruct_FDLCInstalled_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDLCInstalled(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDLCInstalled(ETypeConstructPhase::Inner); }


struct FDLCInstalled;
// ********** End ScriptStruct FDLCInstalled *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h

// ********** Begin Enum ESteamBetaBranchFlags *****************************************************
#define FOREACH_ENUM_ESTEAMBETABRANCHFLAGS(op) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_None) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Default) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Available) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Private) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Selected) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Installed) 

enum class ESteamBetaBranchFlags : uint8;
template<> struct TIsUEnumClass<ESteamBetaBranchFlags> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamBetaBranchFlags>();
// ********** End Enum ESteamBetaBranchFlags *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
