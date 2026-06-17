// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamAppsAsyncActions_generated_h
#error "SteamAppsAsyncActions.generated.h already included, missing '#pragma once' in SteamAppsAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamAppsAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamAppsAsyncActionGetFileDetails;
struct FFileDetailsResult;

// ********** Begin Class UOrionSteamAppsAsyncActionGetFileDetails *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


struct Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamAppsAsyncActionGetFileDetails, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamAppsAsyncActionGetFileDetails) \
	DECLARE_SERIALIZER(UOrionSteamAppsAsyncActionGetFileDetails)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamAppsAsyncActionGetFileDetails(UOrionSteamAppsAsyncActionGetFileDetails&&) = delete; \
	UOrionSteamAppsAsyncActionGetFileDetails(const UOrionSteamAppsAsyncActionGetFileDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamAppsAsyncActionGetFileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamAppsAsyncActionGetFileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamAppsAsyncActionGetFileDetails) \
	NO_API virtual ~UOrionSteamAppsAsyncActionGetFileDetails();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_20_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamAppsAsyncActionGetFileDetails;

// ********** End Class UOrionSteamAppsAsyncActionGetFileDetails ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_SteamAppsAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
