// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInventory/SteamInventoryAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamInventoryAsyncActions_generated_h
#error "SteamInventoryAsyncActions.generated.h already included, missing '#pragma once' in SteamInventoryAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamInventoryAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
class UOrionSteamInventoryAsyncActionRequestPricesResult;
class UOrionSteamInventoryAsyncActionStartPurchaseResult;
struct FSteamID;
struct FSteamInventoryEligiblePromoItemDefIDs;
struct FSteamInventoryRequestPricesResult;
struct FSteamInventoryStartPurchaseResult;
struct FSteamItemDef;

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_16_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate ******************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate *********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_17_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate ***********************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate *********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_18_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate ***********************

// ********** Begin Class UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs ****
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&) = delete; \
	UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) \
	NO_API virtual ~UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_23_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;

// ********** End Class UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs ******

// ********** Begin Class UOrionSteamInventoryAsyncActionRequestPricesResult ***********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamInventoryAsyncActionRequestPricesResult(); \
	friend struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionRequestPricesResult, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamInventoryAsyncActionRequestPricesResult)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamInventoryAsyncActionRequestPricesResult(UOrionSteamInventoryAsyncActionRequestPricesResult&&) = delete; \
	UOrionSteamInventoryAsyncActionRequestPricesResult(const UOrionSteamInventoryAsyncActionRequestPricesResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamInventoryAsyncActionRequestPricesResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamInventoryAsyncActionRequestPricesResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamInventoryAsyncActionRequestPricesResult) \
	NO_API virtual ~UOrionSteamInventoryAsyncActionRequestPricesResult();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_51_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamInventoryAsyncActionRequestPricesResult;

// ********** End Class UOrionSteamInventoryAsyncActionRequestPricesResult *************************

// ********** Begin Class UOrionSteamInventoryAsyncActionStartPurchaseResult ***********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPurchaseAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamInventoryAsyncActionStartPurchaseResult(); \
	friend struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionStartPurchaseResult, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamInventoryAsyncActionStartPurchaseResult)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamInventoryAsyncActionStartPurchaseResult(UOrionSteamInventoryAsyncActionStartPurchaseResult&&) = delete; \
	UOrionSteamInventoryAsyncActionStartPurchaseResult(const UOrionSteamInventoryAsyncActionStartPurchaseResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamInventoryAsyncActionStartPurchaseResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamInventoryAsyncActionStartPurchaseResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamInventoryAsyncActionStartPurchaseResult) \
	NO_API virtual ~UOrionSteamInventoryAsyncActionStartPurchaseResult();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_78_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamInventoryAsyncActionStartPurchaseResult;

// ********** End Class UOrionSteamInventoryAsyncActionStartPurchaseResult *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
