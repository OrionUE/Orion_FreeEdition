// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSDKAPI/OrionSteamUserLibrary.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamUserLibrary_generated_h
#error "OrionSteamUserLibrary.generated.h already included, missing '#pragma once' in OrionSteamUserLibrary.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamUserLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FOrionSteamId;

// ********** Begin Class UOrionSteamUserLibrary ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeUserIdFromString); \
	DECLARE_FUNCTION(execGetLocalUserId);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserLibrary_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamUserLibrary(); \
	friend struct Z_Construct_UClass_UOrionSteamUserLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamUserLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamUserLibrary)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserLibrary(UOrionSteamUserLibrary&&) = delete; \
	UOrionSteamUserLibrary(const UOrionSteamUserLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserLibrary) \
	NO_API virtual ~UOrionSteamUserLibrary();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserLibrary;

// ********** End Class UOrionSteamUserLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUserLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
