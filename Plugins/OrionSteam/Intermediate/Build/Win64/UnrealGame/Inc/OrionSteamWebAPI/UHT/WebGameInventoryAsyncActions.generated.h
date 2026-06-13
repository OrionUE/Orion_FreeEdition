// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInventory/WebGameInventoryAsyncActions.h"

#ifdef ORIONSTEAMWEBAPI_WebGameInventoryAsyncActions_generated_h
#error "WebGameInventoryAsyncActions.generated.h already included, missing '#pragma once' in WebGameInventoryAsyncActions.h"
#endif
#define ORIONSTEAMWEBAPI_WebGameInventoryAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails;
class UOrionSteamWebAPIAsyncActionGetUserHistory;
class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand;
class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory;

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails *********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHistoryCommandDetailsAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetHistoryCommandDetails(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails(const UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_14_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails;

// ********** End Class UOrionSteamWebAPIAsyncActionGetHistoryCommandDetails ***********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUserHistory *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserHistoryAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUserHistory(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetUserHistory, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUserHistory_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetUserHistory)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetUserHistory(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetUserHistory(UOrionSteamWebAPIAsyncActionGetUserHistory&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetUserHistory(const UOrionSteamWebAPIAsyncActionGetUserHistory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetUserHistory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetUserHistory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetUserHistory) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetUserHistory();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_36_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetUserHistory;

// ********** End Class UOrionSteamWebAPIAsyncActionGetUserHistory *********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand ************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHistoryExecuteCommandAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionHistoryExecuteCommand(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionHistoryExecuteCommand_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionHistoryExecuteCommand(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionHistoryExecuteCommand(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand&&) = delete; \
	UOrionSteamWebAPIAsyncActionHistoryExecuteCommand(const UOrionSteamWebAPIAsyncActionHistoryExecuteCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionHistoryExecuteCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionHistoryExecuteCommand) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionHistoryExecuteCommand();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_58_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand;

// ********** End Class UOrionSteamWebAPIAsyncActionHistoryExecuteCommand **************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory ***********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSupportGetAssetHistoryAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionSupportGetAssetHistory(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSupportGetAssetHistory_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionSupportGetAssetHistory(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionSupportGetAssetHistory(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory&&) = delete; \
	UOrionSteamWebAPIAsyncActionSupportGetAssetHistory(const UOrionSteamWebAPIAsyncActionSupportGetAssetHistory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionSupportGetAssetHistory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionSupportGetAssetHistory) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionSupportGetAssetHistory();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_79_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory;

// ********** End Class UOrionSteamWebAPIAsyncActionSupportGetAssetHistory *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_GameInventory_WebGameInventoryAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
