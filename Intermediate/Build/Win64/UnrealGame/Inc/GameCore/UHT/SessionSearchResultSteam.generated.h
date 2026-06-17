// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Session/SessionSearchResultSteam.h"

#ifdef GAMECORE_SessionSearchResultSteam_generated_h
#error "SessionSearchResultSteam.generated.h already included, missing '#pragma once' in SessionSearchResultSteam.h"
#endif
#define GAMECORE_SessionSearchResultSteam_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
struct FCoreSessionResult;
struct FSteamSessionResult;

// ********** Begin Class USessionSearchResultSteam ************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlueprintSessionResult); \
	DECLARE_FUNCTION(execGetSessionResult); \
	DECLARE_FUNCTION(execSetSessionResult); \
	DECLARE_FUNCTION(execGetCurrentPlayers);


struct Z_Construct_UClass_USessionSearchResultSteam_Statics;
GAMECORE_API UClass* Z_Construct_UClass_USessionSearchResultSteam(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_USessionSearchResultSteam_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_USessionSearchResultSteam(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USessionSearchResultSteam, UCommonSession_SearchResult, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_USessionSearchResultSteam) \
	DECLARE_SERIALIZER(USessionSearchResultSteam)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USessionSearchResultSteam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USessionSearchResultSteam(USessionSearchResultSteam&&) = delete; \
	USessionSearchResultSteam(const USessionSearchResultSteam&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USessionSearchResultSteam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USessionSearchResultSteam); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USessionSearchResultSteam) \
	NO_API ~USessionSearchResultSteam();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_16_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USessionSearchResultSteam;

// ********** End Class USessionSearchResultSteam **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionSearchResultSteam_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
