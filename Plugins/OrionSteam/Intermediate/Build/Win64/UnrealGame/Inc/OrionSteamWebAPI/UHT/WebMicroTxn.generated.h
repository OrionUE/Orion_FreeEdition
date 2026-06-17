// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MicroTxn/WebMicroTxn.h"

#ifdef ORIONSTEAMWEBAPI_WebMicroTxn_generated_h
#error "WebMicroTxn.generated.h already included, missing '#pragma once' in WebMicroTxn.h"
#endif
#define ORIONSTEAMWEBAPI_WebMicroTxn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebMicroTxn *************************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeTransactionID); \
	DECLARE_FUNCTION(execRefundTxn); \
	DECLARE_FUNCTION(execQueryTxn); \
	DECLARE_FUNCTION(execProcessAgreement); \
	DECLARE_FUNCTION(execInitTxn); \
	DECLARE_FUNCTION(execGetUserInfo); \
	DECLARE_FUNCTION(execGetUserAgreementInfo); \
	DECLARE_FUNCTION(execGetReport); \
	DECLARE_FUNCTION(execFinalizeTxn); \
	DECLARE_FUNCTION(execCancelAgreement); \
	DECLARE_FUNCTION(execAdjustAgreement);


struct Z_Construct_UClass_UWebMicroTxn_Statics;
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebMicroTxn(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWebMicroTxn_Statics; \
	friend ORIONSTEAMWEBAPI_API UClass* ::Z_Construct_UClass_UWebMicroTxn(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWebMicroTxn, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebMicroTxn) \
	DECLARE_SERIALIZER(UWebMicroTxn)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebMicroTxn(UWebMicroTxn&&) = delete; \
	UWebMicroTxn(const UWebMicroTxn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebMicroTxn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebMicroTxn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebMicroTxn) \
	NO_API virtual ~UWebMicroTxn();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebMicroTxn;

// ********** End Class UWebMicroTxn ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_MicroTxn_WebMicroTxn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
