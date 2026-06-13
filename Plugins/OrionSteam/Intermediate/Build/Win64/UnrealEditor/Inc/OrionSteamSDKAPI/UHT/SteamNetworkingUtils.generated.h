// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworkingUtils/SteamNetworkingUtils.h"

#ifdef ORIONSTEAMSDKAPI_SteamNetworkingUtils_generated_h
#error "SteamNetworkingUtils.generated.h already included, missing '#pragma once' in SteamNetworkingUtils.h"
#endif
#define ORIONSTEAMSDKAPI_SteamNetworkingUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamNetworkingUtils;
struct FSteamNetworkPingLocation;

// ********** Begin Class UOrionSteamNetworkingUtils ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess); \
	DECLARE_FUNCTION(execGetSteamNetworkingUtils);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamNetworkingUtils(); \
	friend struct Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamNetworkingUtils, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamNetworkingUtils)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamNetworkingUtils(UOrionSteamNetworkingUtils&&) = delete; \
	UOrionSteamNetworkingUtils(const UOrionSteamNetworkingUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamNetworkingUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamNetworkingUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamNetworkingUtils)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamNetworkingUtils;

// ********** End Class UOrionSteamNetworkingUtils *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
