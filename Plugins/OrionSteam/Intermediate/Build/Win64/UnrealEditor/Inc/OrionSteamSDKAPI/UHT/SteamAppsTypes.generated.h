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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FDLCInstalled;
struct FFileDetailsResult;
struct FTimedTrialStatus;

// ********** Begin ScriptStruct FTimedTrialStatus *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FTimedTrialStatus;
// ********** End ScriptStruct FTimedTrialStatus ***************************************************

// ********** Begin ScriptStruct FFileDetailsResult ************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FFileDetailsResult;
// ********** End ScriptStruct FFileDetailsResult **************************************************

// ********** Begin ScriptStruct FDLCInstalled *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FDLCInstalled;
// ********** End ScriptStruct FDLCInstalled *******************************************************

// ********** Begin Delegate FOnFileDetailsResult **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_113_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileDetailsResult ****************************************************

// ********** Begin Delegate FOnDLCInstalled *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_114_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data);


// ********** End Delegate FOnDLCInstalled *********************************************************

// ********** Begin Delegate FOnFileDetailsResultDelegate ******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_115_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data);


// ********** End Delegate FOnFileDetailsResultDelegate ********************************************

// ********** Begin Delegate FOnNewUrlLaunchParametersDelegate *************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_116_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate);


// ********** End Delegate FOnNewUrlLaunchParametersDelegate ***************************************

// ********** Begin Delegate FOnTimedTrialStatusDelegate *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsTypes_h_117_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTimedTrialStatusDelegate, FTimedTrialStatus const& Data);


// ********** End Delegate FOnTimedTrialStatusDelegate *********************************************

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
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamBetaBranchFlags>();
// ********** End Enum ESteamBetaBranchFlags *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
