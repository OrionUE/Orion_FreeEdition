// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

#ifdef ORIONSTEAMWEBAPI_OrionSteamWebAPIAsync_generated_h
#error "OrionSteamWebAPIAsync.generated.h already included, missing '#pragma once' in OrionSteamWebAPIAsync.h"
#endif
#define ORIONSTEAMWEBAPI_OrionSteamWebAPIAsync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnOrionSteamWebAPIFailure ********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_18_DELEGATE \
ORIONSTEAMWEBAPI_API void FOnOrionSteamWebAPIFailure_DelegateWrapper(const FMulticastScriptDelegate& OnOrionSteamWebAPIFailure);


// ********** End Delegate FOnOrionSteamWebAPIFailure **********************************************

// ********** Begin Class UOrionSteamWebAPIAsyncAction *********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncAction(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncAction)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncAction(UOrionSteamWebAPIAsyncAction&&) = delete; \
	UOrionSteamWebAPIAsyncAction(const UOrionSteamWebAPIAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncAction)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_107_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncAction;

// ********** End Class UOrionSteamWebAPIAsyncAction ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPIAsync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
