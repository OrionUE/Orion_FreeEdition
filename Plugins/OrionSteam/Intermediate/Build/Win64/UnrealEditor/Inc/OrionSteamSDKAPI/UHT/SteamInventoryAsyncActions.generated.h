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
#include "UObject/ReflectedTypeAccessors.h"
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

// ********** Begin Class UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs ****
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) \
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


struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_54_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionRequestPricesResult, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionRequestPricesResult) \
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


struct Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryAsyncActions_h_81_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamInventoryAsyncActionStartPurchaseResult, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInventoryAsyncActionStartPurchaseResult) \
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
