// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInventory/SteamInventoryTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamInventoryTypes_generated_h
#error "SteamInventoryTypes.generated.h already included, missing '#pragma once' in SteamInventoryTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamInventoryTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSteamInventoryEligiblePromoItemDefIDs;
struct FSteamInventoryFullUpdate;
struct FSteamInventoryRequestPricesResult;
struct FSteamInventoryResultReady;
struct FSteamInventoryStartPurchaseResult;

// ********** Begin ScriptStruct FSteamItemInstanceID **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamItemInstanceID;
// ********** End ScriptStruct FSteamItemInstanceID ************************************************

// ********** Begin ScriptStruct FSteamItemDef *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDef_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamItemDef;
// ********** End ScriptStruct FSteamItemDef *******************************************************

// ********** Begin ScriptStruct FSteamItemDetails *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamItemDetails;
// ********** End ScriptStruct FSteamItemDetails ***************************************************

// ********** Begin ScriptStruct FSteamInventoryResult *********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryResult;
// ********** End ScriptStruct FSteamInventoryResult ***********************************************

// ********** Begin ScriptStruct FSteamInventoryEligiblePromoItemDefIDs ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryEligiblePromoItemDefIDs;
// ********** End ScriptStruct FSteamInventoryEligiblePromoItemDefIDs ******************************

// ********** Begin ScriptStruct FSteamInventoryResultReady ****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryResultReady;
// ********** End ScriptStruct FSteamInventoryResultReady ******************************************

// ********** Begin ScriptStruct FSteamInventoryFullUpdate *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryFullUpdate;
// ********** End ScriptStruct FSteamInventoryFullUpdate *******************************************

// ********** Begin ScriptStruct FSteamInventoryRequestPricesResult ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryRequestPricesResult;
// ********** End ScriptStruct FSteamInventoryRequestPricesResult **********************************

// ********** Begin ScriptStruct FSteamInventoryStartPurchaseResult ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamInventoryStartPurchaseResult;
// ********** End ScriptStruct FSteamInventoryStartPurchaseResult **********************************

// ********** Begin Delegate FOnSteamInventoryResultReady ******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_277_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryResultReady_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReady, FSteamInventoryResultReady const& Data);


// ********** End Delegate FOnSteamInventoryResultReady ********************************************

// ********** Begin Delegate FOnSteamInventoryFullUpdate *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_278_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryFullUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdate, FSteamInventoryFullUpdate const& Data);


// ********** End Delegate FOnSteamInventoryFullUpdate *********************************************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResultDelegate **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_279_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, FSteamInventoryStartPurchaseResult const& Data);


// ********** End Delegate FOnSteamInventoryStartPurchaseResultDelegate ****************************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResultDelegate **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_280_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, FSteamInventoryRequestPricesResult const& Data);


// ********** End Delegate FOnSteamInventoryRequestPricesResultDelegate ****************************

// ********** Begin Delegate FOnSteamInventoryEligiblePromoItemDefIDs ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_281_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryEligiblePromoItemDefIDs_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data);


// ********** End Delegate FOnSteamInventoryEligiblePromoItemDefIDs ********************************

// ********** Begin Delegate FOnSteamInventoryDefinitionUpdate *************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_282_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryDefinitionUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdate);


// ********** End Delegate FOnSteamInventoryDefinitionUpdate ***************************************

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_283_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDs *******************************

// ********** Begin Delegate FOnSteamInventoryRequestPricesResult **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_284_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryRequestPricesResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryRequestPricesResult, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryRequestPricesResult ************************************

// ********** Begin Delegate FOnSteamInventoryStartPurchaseResult **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h_285_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamInventoryStartPurchaseResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryStartPurchaseResult, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamInventoryStartPurchaseResult ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInventory_SteamInventoryTypes_h

// ********** Begin Enum EOrionSteamItemFlags ******************************************************
#define FOREACH_ENUM_EORIONSTEAMITEMFLAGS(op) \
	op(ENoTrade) \
	op(ERemoved) \
	op(EConsumed) 
// ********** End Enum EOrionSteamItemFlags ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
