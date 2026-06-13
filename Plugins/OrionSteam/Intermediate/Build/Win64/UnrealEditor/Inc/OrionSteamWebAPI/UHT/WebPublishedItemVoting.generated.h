// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PublishedItemVoting/WebPublishedItemVoting.h"

#ifdef ORIONSTEAMWEBAPI_WebPublishedItemVoting_generated_h
#error "WebPublishedItemVoting.generated.h already included, missing '#pragma once' in WebPublishedItemVoting.h"
#endif
#define ORIONSTEAMWEBAPI_WebPublishedItemVoting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebPublishedItemVoting **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUserVoteSummary); \
	DECLARE_FUNCTION(execItemVoteSummary);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPublishedItemVoting(); \
	friend struct Z_Construct_UClass_UWebPublishedItemVoting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebPublishedItemVoting, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebPublishedItemVoting_NoRegister) \
	DECLARE_SERIALIZER(UWebPublishedItemVoting)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebPublishedItemVoting(UWebPublishedItemVoting&&) = delete; \
	UWebPublishedItemVoting(const UWebPublishedItemVoting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPublishedItemVoting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPublishedItemVoting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPublishedItemVoting) \
	NO_API virtual ~UWebPublishedItemVoting();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebPublishedItemVoting;

// ********** End Class UWebPublishedItemVoting ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
