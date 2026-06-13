// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheatReporting/WebCheatReporting.h"

#ifdef ORIONSTEAMWEBAPI_WebCheatReporting_generated_h
#error "WebCheatReporting.generated.h already included, missing '#pragma once' in WebCheatReporting.h"
#endif
#define ORIONSTEAMWEBAPI_WebCheatReporting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebCheatReporting *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndSecureMultiplayerSession); \
	DECLARE_FUNCTION(execStartSecureMultiplayerSession); \
	DECLARE_FUNCTION(execRequestVacStatusForUser); \
	DECLARE_FUNCTION(execReportCheatData); \
	DECLARE_FUNCTION(execGetCheatingReports); \
	DECLARE_FUNCTION(execRemovePlayerGameBan); \
	DECLARE_FUNCTION(execRequestPlayerGameBan); \
	DECLARE_FUNCTION(execReportPlayerCheating);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebCheatReporting(); \
	friend struct Z_Construct_UClass_UWebCheatReporting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebCheatReporting, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebCheatReporting_NoRegister) \
	DECLARE_SERIALIZER(UWebCheatReporting)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebCheatReporting(UWebCheatReporting&&) = delete; \
	UWebCheatReporting(const UWebCheatReporting&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebCheatReporting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebCheatReporting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebCheatReporting) \
	NO_API virtual ~UWebCheatReporting();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebCheatReporting;

// ********** End Class UWebCheatReporting *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReporting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
