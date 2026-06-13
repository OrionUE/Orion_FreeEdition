// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSDKAPI/OrionSteamGameMode.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamGameMode_generated_h
#error "OrionSteamGameMode.generated.h already included, missing '#pragma once' in OrionSteamGameMode.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOrionSteamGameMode ******************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_AOrionSteamGameMode_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrionSteamGameMode(); \
	friend struct Z_Construct_UClass_AOrionSteamGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_AOrionSteamGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AOrionSteamGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_AOrionSteamGameMode_NoRegister) \
	DECLARE_SERIALIZER(AOrionSteamGameMode)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrionSteamGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOrionSteamGameMode(AOrionSteamGameMode&&) = delete; \
	AOrionSteamGameMode(const AOrionSteamGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrionSteamGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrionSteamGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrionSteamGameMode) \
	NO_API virtual ~AOrionSteamGameMode();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_12_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOrionSteamGameMode;

// ********** End Class AOrionSteamGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
