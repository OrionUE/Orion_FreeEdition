// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettingsTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamParentalSettingsTypes_generated_h
#error "SteamParentalSettingsTypes.generated.h already included, missing '#pragma once' in SteamParentalSettingsTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamParentalSettingsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSteamParentalSettingsChanged *************************************
struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamParentalSettingsChanged(ETypeConstructPhase::Inner); }


struct FSteamParentalSettingsChanged;
// ********** End ScriptStruct FSteamParentalSettingsChanged ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettingsTypes_h

// ********** Begin Enum ESteamParentalFeature *****************************************************
#define FOREACH_ENUM_ESTEAMPARENTALFEATURE(op) \
	op(ESteamParentalFeature::k_EFeatureInvalid) \
	op(ESteamParentalFeature::k_EFeatureStore) \
	op(ESteamParentalFeature::k_EFeatureCommunity) \
	op(ESteamParentalFeature::k_EFeatureProfile) \
	op(ESteamParentalFeature::k_EFeatureFriends) \
	op(ESteamParentalFeature::k_EFeatureNews) \
	op(ESteamParentalFeature::k_EFeatureTrading) \
	op(ESteamParentalFeature::k_EFeatureSettings) \
	op(ESteamParentalFeature::k_EFeatureConsole) \
	op(ESteamParentalFeature::k_EFeatureBrowser) \
	op(ESteamParentalFeature::k_EFeatureParentalSetup) \
	op(ESteamParentalFeature::k_EFeatureLibrary) \
	op(ESteamParentalFeature::k_EFeatureTest) \
	op(ESteamParentalFeature::k_EFeatureSiteLicense) \
	op(ESteamParentalFeature::k_EFeatureKioskMode_Deprecated) \
	op(ESteamParentalFeature::k_EFeatureBlockAlways) \
	op(ESteamParentalFeature::k_EFeatureMax) 

enum class ESteamParentalFeature : uint8;
template<> struct TIsUEnumClass<ESteamParentalFeature> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamParentalFeature>();
// ********** End Enum ESteamParentalFeature *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
