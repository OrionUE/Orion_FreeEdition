// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettings.h"

#ifdef ORIONSTEAMSDKAPI_SteamParentalSettings_generated_h
#error "SteamParentalSettings.generated.h already included, missing '#pragma once' in SteamParentalSettings.h"
#endif
#define ORIONSTEAMSDKAPI_SteamParentalSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamParentalSettings;
enum class ESteamParentalFeature : uint8;

// ********** Begin Class UOrionSteamParentalSettings **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBIsFeatureInBlockList); \
	DECLARE_FUNCTION(execBIsFeatureBlocked); \
	DECLARE_FUNCTION(execBIsAppInBlockList); \
	DECLARE_FUNCTION(execBIsAppBlocked); \
	DECLARE_FUNCTION(execBIsParentalLockLocked); \
	DECLARE_FUNCTION(execBIsParentalLockEnabled); \
	DECLARE_FUNCTION(execGetSteamParentalSettings);


struct Z_Construct_UClass_UOrionSteamParentalSettings_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamParentalSettings(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamParentalSettings_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamParentalSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamParentalSettings, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamParentalSettings) \
	DECLARE_SERIALIZER(UOrionSteamParentalSettings)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamParentalSettings(UOrionSteamParentalSettings&&) = delete; \
	UOrionSteamParentalSettings(const UOrionSteamParentalSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamParentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamParentalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamParentalSettings)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamParentalSettings;

// ********** End Class UOrionSteamParentalSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParentalSettings_SteamParentalSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
