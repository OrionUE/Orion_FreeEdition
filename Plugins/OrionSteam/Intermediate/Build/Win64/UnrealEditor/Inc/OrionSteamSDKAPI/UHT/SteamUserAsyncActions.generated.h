// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUserAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamUserAsyncActions_generated_h
#error "SteamUserAsyncActions.generated.h already included, missing '#pragma once' in SteamUserAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamUserAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamUserAsyncActionRequestEncryptedAppTicket;
class UOrionSteamUserAsyncActionRequestStoreAuthURL;
struct FEncryptedAppTicketResponse;
struct FStoreAuthURLResponse;

// ********** Begin Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


struct Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserAsyncActionRequestEncryptedAppTicket, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket) \
	DECLARE_SERIALIZER(UOrionSteamUserAsyncActionRequestEncryptedAppTicket)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserAsyncActionRequestEncryptedAppTicket(UOrionSteamUserAsyncActionRequestEncryptedAppTicket&&) = delete; \
	UOrionSteamUserAsyncActionRequestEncryptedAppTicket(const UOrionSteamUserAsyncActionRequestEncryptedAppTicket&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserAsyncActionRequestEncryptedAppTicket) \
	NO_API virtual ~UOrionSteamUserAsyncActionRequestEncryptedAppTicket();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_21_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserAsyncActionRequestEncryptedAppTicket;

// ********** End Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket ************************

// ********** Begin Class UOrionSteamUserAsyncActionRequestStoreAuthURL ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


struct Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserAsyncActionRequestStoreAuthURL, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL) \
	DECLARE_SERIALIZER(UOrionSteamUserAsyncActionRequestStoreAuthURL)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserAsyncActionRequestStoreAuthURL(UOrionSteamUserAsyncActionRequestStoreAuthURL&&) = delete; \
	UOrionSteamUserAsyncActionRequestStoreAuthURL(const UOrionSteamUserAsyncActionRequestStoreAuthURL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserAsyncActionRequestStoreAuthURL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserAsyncActionRequestStoreAuthURL) \
	NO_API virtual ~UOrionSteamUserAsyncActionRequestStoreAuthURL();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_50_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserAsyncActionRequestStoreAuthURL;

// ********** End Class UOrionSteamUserAsyncActionRequestStoreAuthURL ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
