// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryService/WebInventoryServiceAsyncActions.h"

#ifdef ORIONSTEAMWEBAPI_WebInventoryServiceAsyncActions_generated_h
#error "WebInventoryServiceAsyncActions.generated.h already included, missing '#pragma once' in WebInventoryServiceAsyncActions.h"
#endif
#define ORIONSTEAMWEBAPI_WebInventoryServiceAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOrionSteamWebAPIAsyncActionAddItem;
class UOrionSteamWebAPIAsyncActionAddPromoItem;
class UOrionSteamWebAPIAsyncActionConsolidate;
class UOrionSteamWebAPIAsyncActionConsumeItem;
class UOrionSteamWebAPIAsyncActionExchangeItem;
class UOrionSteamWebAPIAsyncActionGetInventory;
class UOrionSteamWebAPIAsyncActionGetItemDefs;
class UOrionSteamWebAPIAsyncActionGetPriceSheet;
class UOrionSteamWebAPIAsyncActionGetQuantity;
class UOrionSteamWebAPIAsyncActionModifyItems;
struct FModifyItemsItem;

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddItem **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItemAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddItem(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionAddItem, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionAddItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionAddItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionAddItem(UOrionSteamWebAPIAsyncActionAddItem&&) = delete; \
	UOrionSteamWebAPIAsyncActionAddItem(const UOrionSteamWebAPIAsyncActionAddItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionAddItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionAddItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionAddItem) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionAddItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_15_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionAddItem;

// ********** End Class UOrionSteamWebAPIAsyncActionAddItem ****************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddPromoItem *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPromoItemAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddPromoItem(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionAddPromoItem, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionAddPromoItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionAddPromoItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionAddPromoItem(UOrionSteamWebAPIAsyncActionAddPromoItem&&) = delete; \
	UOrionSteamWebAPIAsyncActionAddPromoItem(const UOrionSteamWebAPIAsyncActionAddPromoItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionAddPromoItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionAddPromoItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionAddPromoItem) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionAddPromoItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_50_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionAddPromoItem;

// ********** End Class UOrionSteamWebAPIAsyncActionAddPromoItem ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsumeItem **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConsumeItemAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsumeItem(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionConsumeItem, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionConsumeItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionConsumeItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionConsumeItem(UOrionSteamWebAPIAsyncActionConsumeItem&&) = delete; \
	UOrionSteamWebAPIAsyncActionConsumeItem(const UOrionSteamWebAPIAsyncActionConsumeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionConsumeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionConsumeItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionConsumeItem) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionConsumeItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_73_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionConsumeItem;

// ********** End Class UOrionSteamWebAPIAsyncActionConsumeItem ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionExchangeItem *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExchangeItemAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionExchangeItem(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionExchangeItem, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionExchangeItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionExchangeItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionExchangeItem(UOrionSteamWebAPIAsyncActionExchangeItem&&) = delete; \
	UOrionSteamWebAPIAsyncActionExchangeItem(const UOrionSteamWebAPIAsyncActionExchangeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionExchangeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionExchangeItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionExchangeItem) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionExchangeItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_95_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionExchangeItem;

// ********** End Class UOrionSteamWebAPIAsyncActionExchangeItem ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetInventory *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInventoryAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetInventory(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetInventory, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetInventory)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetInventory(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetInventory(UOrionSteamWebAPIAsyncActionGetInventory&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetInventory(const UOrionSteamWebAPIAsyncActionGetInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetInventory) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetInventory();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_124_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetInventory;

// ********** End Class UOrionSteamWebAPIAsyncActionGetInventory ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetItemDefs **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemDefsAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetItemDefs(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetItemDefs, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetItemDefs)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetItemDefs(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetItemDefs(UOrionSteamWebAPIAsyncActionGetItemDefs&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetItemDefs(const UOrionSteamWebAPIAsyncActionGetItemDefs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetItemDefs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetItemDefs); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetItemDefs) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetItemDefs();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_143_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetItemDefs;

// ********** End Class UOrionSteamWebAPIAsyncActionGetItemDefs ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPriceSheet ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPriceSheetAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPriceSheet(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetPriceSheet, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetPriceSheet)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetPriceSheet(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetPriceSheet(UOrionSteamWebAPIAsyncActionGetPriceSheet&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetPriceSheet(const UOrionSteamWebAPIAsyncActionGetPriceSheet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetPriceSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetPriceSheet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetPriceSheet) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetPriceSheet();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_165_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetPriceSheet;

// ********** End Class UOrionSteamWebAPIAsyncActionGetPriceSheet **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsolidate **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConsolidateAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsolidate(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionConsolidate, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionConsolidate)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionConsolidate(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionConsolidate(UOrionSteamWebAPIAsyncActionConsolidate&&) = delete; \
	UOrionSteamWebAPIAsyncActionConsolidate(const UOrionSteamWebAPIAsyncActionConsolidate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionConsolidate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionConsolidate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionConsolidate) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionConsolidate();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_182_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionConsolidate;

// ********** End Class UOrionSteamWebAPIAsyncActionConsolidate ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetQuantity **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQuantityAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetQuantity(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetQuantity, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetQuantity)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetQuantity(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetQuantity(UOrionSteamWebAPIAsyncActionGetQuantity&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetQuantity(const UOrionSteamWebAPIAsyncActionGetQuantity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetQuantity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetQuantity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetQuantity) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetQuantity();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_206_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetQuantity;

// ********** End Class UOrionSteamWebAPIAsyncActionGetQuantity ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionModifyItems **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyItemsAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionModifyItems(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionModifyItems, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionModifyItems)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionModifyItems(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionModifyItems(UOrionSteamWebAPIAsyncActionModifyItems&&) = delete; \
	UOrionSteamWebAPIAsyncActionModifyItems(const UOrionSteamWebAPIAsyncActionModifyItems&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionModifyItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionModifyItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionModifyItems) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionModifyItems();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_227_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionModifyItems;

// ********** End Class UOrionSteamWebAPIAsyncActionModifyItems ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
