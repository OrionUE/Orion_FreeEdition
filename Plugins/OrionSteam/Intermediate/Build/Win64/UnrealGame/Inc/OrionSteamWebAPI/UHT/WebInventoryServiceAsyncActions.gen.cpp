// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryService/WebInventoryServiceAsyncActions.h"
#include "InventoryService/WebInventoryServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebInventoryServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister();
ORIONSTEAMWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddItem Function AddItemAsync ****************
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		TArray<int32> ItemdefId;
		FString ItemPropsJson;
		TArray<int32> ItemQuantity;
		FString SteamId;
		bool bNotify;
		FString RequestId;
		bool bTradeRestriction;
		UOrionSteamWebAPIAsyncActionAddItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\x09 *\n\x09 * Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\n\x09 * This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\x09 *\n\x09 * Player notification of a new item, if any, is best handled by the game client.\n\x09 * Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\x09 *\n\x09 * The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\n\x09 * If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\x09 *\n\x09 * If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09ItemdefId (int64)\x09List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09 * @param\x09ItemPropsJson\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n\x09 * @param\x09RequestId (int64)\x09Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n\x09 * @param\x09""bTradeRestriction\x09Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.\n\x09 */" },
#endif
		{ "DisplayName", "Add Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\nItems of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\nThis call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\nPlayer notification of a new item, if any, is best handled by the game client.\nCalls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\nThe optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\nIf the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\nIf the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The ID of the application associated with the item.\n@param       ItemdefId (int64)       List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param       ItemPropsJson\n@param       SteamId                         SteamID of the player to receive the items.\n@param       bNotify                         Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n@param       RequestId (int64)       Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n@param       bTradeRestriction       Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static void NewProp_bTradeRestriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTradeRestriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId_Inner = { "ItemdefId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, ItemdefId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity_Inner = { "ItemQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, ItemQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bTradeRestriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ItemQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem, nullptr, "AddItemAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::OrionSteamWebAPIAsyncActionAddItem_eventAddItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionAddItem::execAddItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(int32,Z_Param_ItemdefId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_TARRAY(int32,Z_Param_ItemQuantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bNotify);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_GET_UBOOL(Z_Param_bTradeRestriction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionAddItem**)Z_Param__Result=UOrionSteamWebAPIAsyncActionAddItem::AddItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_ItemQuantity,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId,Z_Param_bTradeRestriction);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionAddItem Function AddItemAsync ******************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddItem **************************************
void UOrionSteamWebAPIAsyncActionAddItem::StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddItem()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionAddItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemAsync", &UOrionSteamWebAPIAsyncActionAddItem::execAddItemAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem;
UClass* UOrionSteamWebAPIAsyncActionAddItem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionAddItem;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionAddItem"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionAddItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionAddItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionAddItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddItem_AddItemAsync, "AddItemAsync" }, // 1455380132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionAddItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionAddItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionAddItem::UOrionSteamWebAPIAsyncActionAddItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionAddItem);
UOrionSteamWebAPIAsyncActionAddItem::~UOrionSteamWebAPIAsyncActionAddItem() {}
// ********** End Class UOrionSteamWebAPIAsyncActionAddItem ****************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddPromoItem Function AddPromoItemAsync ******
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 ItemdefId;
		FString ItemPropsJson;
		FString SteamId;
		bool bNotify;
		FString RequestId;
		UOrionSteamWebAPIAsyncActionAddPromoItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a promo item to a user's inventory\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\n\x09 * @param\x09ItemdefId (int64)\n\x09 * @param\x09ItemPropsJson\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09Should notify the user that the item was added to their Steam Inventory.\n\x09 * @param\x09RequestId (int64)\n\x09 */" },
#endif
		{ "DisplayName", "Add Promo Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a promo item to a user's inventory\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId\n@param       ItemdefId (int64)\n@param       ItemPropsJson\n@param       SteamId                         SteamID of the player to receive the items.\n@param       bNotify                         Should notify the user that the item was added to their Steam Inventory.\n@param       RequestId (int64)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ItemPropsJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem, nullptr, "AddPromoItemAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::OrionSteamWebAPIAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionAddPromoItem::execAddPromoItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemdefId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bNotify);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionAddPromoItem**)Z_Param__Result=UOrionSteamWebAPIAsyncActionAddPromoItem::AddPromoItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_SteamId,Z_Param_bNotify,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionAddPromoItem Function AddPromoItemAsync ********

// ********** Begin Class UOrionSteamWebAPIAsyncActionAddPromoItem *********************************
void UOrionSteamWebAPIAsyncActionAddPromoItem::StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddPromoItem()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionAddPromoItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPromoItemAsync", &UOrionSteamWebAPIAsyncActionAddPromoItem::execAddPromoItemAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem;
UClass* UOrionSteamWebAPIAsyncActionAddPromoItem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionAddPromoItem;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionAddPromoItem"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionAddPromoItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionAddPromoItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionAddPromoItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionAddPromoItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionAddPromoItem_AddPromoItemAsync, "AddPromoItemAsync" }, // 2793974718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionAddPromoItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionAddPromoItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionAddPromoItem::UOrionSteamWebAPIAsyncActionAddPromoItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionAddPromoItem);
UOrionSteamWebAPIAsyncActionAddPromoItem::~UOrionSteamWebAPIAsyncActionAddPromoItem() {}
// ********** End Class UOrionSteamWebAPIAsyncActionAddPromoItem ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsumeItem Function ConsumeItemAsync ********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString ItemID;
		FString Quantity;
		FString SteamId;
		FString RequestId;
		UOrionSteamWebAPIAsyncActionConsumeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Marks an item as wholly or partially consumed. This action cannot be reversed.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\n\x09 * @param\x09ItemID\x09\x09\x09\x09Item ID to be consumed\n\x09 * @param\x09Quantity\x09\x09\x09""Amount of the given item stack to be consumed\n\x09 * @param\x09SteamId\n\x09 * @param\x09RequestId (int64)\n\x09 */" },
#endif
		{ "DisplayName", "Consume Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId\n@param       ItemID                          Item ID to be consumed\n@param       Quantity                        Amount of the given item stack to be consumed\n@param       SteamId\n@param       RequestId (int64)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem, nullptr, "ConsumeItemAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::OrionSteamWebAPIAsyncActionConsumeItem_eventConsumeItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionConsumeItem::execConsumeItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Quantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionConsumeItem**)Z_Param__Result=UOrionSteamWebAPIAsyncActionConsumeItem::ConsumeItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ItemID,Z_Param_Quantity,Z_Param_SteamId,Z_Param_RequestId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionConsumeItem Function ConsumeItemAsync **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsumeItem **********************************
void UOrionSteamWebAPIAsyncActionConsumeItem::StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsumeItem()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionConsumeItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsumeItemAsync", &UOrionSteamWebAPIAsyncActionConsumeItem::execConsumeItemAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem;
UClass* UOrionSteamWebAPIAsyncActionConsumeItem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionConsumeItem;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionConsumeItem"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsumeItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionConsumeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionConsumeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionConsumeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsumeItem_ConsumeItemAsync, "ConsumeItemAsync" }, // 3804681836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionConsumeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionConsumeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionConsumeItem::UOrionSteamWebAPIAsyncActionConsumeItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionConsumeItem);
UOrionSteamWebAPIAsyncActionConsumeItem::~UOrionSteamWebAPIAsyncActionConsumeItem() {}
// ********** End Class UOrionSteamWebAPIAsyncActionConsumeItem ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionExchangeItem Function ExchangeItemAsync ******
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int64> MaterialsItemId;
		TArray<int32> MaterialsQuantity;
		int64 OutputItemdefId;
		UOrionSteamWebAPIAsyncActionExchangeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\x09 *\n\x09 * The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\x09 *\n\x09 * See the Inventory Service Schema documentation for more detail on crafting recipes.\n\x09 * The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\x09 *\n\x09 * If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09SteamId\x09\x09\x09\x09SteamID of the player that owns the items.\n\x09 * @param\x09MaterialsItemId\x09\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09 * @param\x09MaterialsQuantity\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09 * @param\x09OutputItemdefId\x09\x09The ItemDef of the item to be created.\n\x09 */" },
#endif
		{ "DisplayName", "Exchange Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\n@param       Key                                     Steamworks Web API publisher authentication Key.\n@param       AppId                           The ID of the application associated with the item.\n@param       SteamId                         SteamID of the player that owns the items.\n@param       MaterialsItemId         The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n@param       MaterialsQuantity       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n@param       OutputItemdefId         The ItemDef of the item to be created." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaterialsItemId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialsQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutputItemdefId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId_Inner = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, MaterialsItemId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity_Inner = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, MaterialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_OutputItemdefId = { "OutputItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, OutputItemdefId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_MaterialsQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_OutputItemdefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem, nullptr, "ExchangeItemAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::OrionSteamWebAPIAsyncActionExchangeItem_eventExchangeItemAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionExchangeItem::execExchangeItemAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int64,Z_Param_MaterialsItemId);
	P_GET_TARRAY(int32,Z_Param_MaterialsQuantity);
	P_GET_PROPERTY(FInt64Property,Z_Param_OutputItemdefId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionExchangeItem**)Z_Param__Result=UOrionSteamWebAPIAsyncActionExchangeItem::ExchangeItemAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_MaterialsItemId,Z_Param_MaterialsQuantity,Z_Param_OutputItemdefId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionExchangeItem Function ExchangeItemAsync ********

// ********** Begin Class UOrionSteamWebAPIAsyncActionExchangeItem *********************************
void UOrionSteamWebAPIAsyncActionExchangeItem::StaticRegisterNativesUOrionSteamWebAPIAsyncActionExchangeItem()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionExchangeItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExchangeItemAsync", &UOrionSteamWebAPIAsyncActionExchangeItem::execExchangeItemAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem;
UClass* UOrionSteamWebAPIAsyncActionExchangeItem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionExchangeItem;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionExchangeItem"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionExchangeItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionExchangeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionExchangeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionExchangeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionExchangeItem_ExchangeItemAsync, "ExchangeItemAsync" }, // 290074183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionExchangeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionExchangeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionExchangeItem::UOrionSteamWebAPIAsyncActionExchangeItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionExchangeItem);
UOrionSteamWebAPIAsyncActionExchangeItem::~UOrionSteamWebAPIAsyncActionExchangeItem() {}
// ********** End Class UOrionSteamWebAPIAsyncActionExchangeItem ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetInventory Function GetInventoryAsync ******
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		UOrionSteamWebAPIAsyncActionGetInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetInventory is used to retrieve a user's inventory.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09SteamId\x09\x09""64-bit Steam ID of the user whos inventory you are requesting.\n\x09 */" },
#endif
		{ "DisplayName", "Get Inventory" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           The ID of the application associated with the item.\n@param       SteamId         64-bit Steam ID of the user whos inventory you are requesting." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory, nullptr, "GetInventoryAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::OrionSteamWebAPIAsyncActionGetInventory_eventGetInventoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetInventory::execGetInventoryAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetInventory**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetInventory::GetInventoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetInventory Function GetInventoryAsync ********

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetInventory *********************************
void UOrionSteamWebAPIAsyncActionGetInventory::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetInventory()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryAsync", &UOrionSteamWebAPIAsyncActionGetInventory::execGetInventoryAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory;
UClass* UOrionSteamWebAPIAsyncActionGetInventory::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetInventory;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetInventory"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetInventory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetInventory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetInventory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetInventory_GetInventoryAsync, "GetInventoryAsync" }, // 1727158159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetInventory::UOrionSteamWebAPIAsyncActionGetInventory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetInventory);
UOrionSteamWebAPIAsyncActionGetInventory::~UOrionSteamWebAPIAsyncActionGetInventory() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetInventory ***********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetItemDefs Function GetItemDefsAsync ********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString ModifiedSince;
		TArray<int32> ItemdefIDs;
		TArray<int32> WorkshopIDs;
		int32 CacheMaxAgeSeconds;
		UOrionSteamWebAPIAsyncActionGetItemDefs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ItemdefIDs, WorkshopIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetInventory is used to retrieve a user's inventory.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09ModifiedSince\x09\x09\x09Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n\x09 * @param\x09ItemdefIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by itemdefid\n\x09 * @param\x09WorkshopIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by workshopid\n\x09 * @param\x09""CacheMaxAgeSeconds\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09 */" },
#endif
		{ "DisplayName", "Get Item Defs" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       AppId                                   The ID of the application associated with the item.\n@param       ModifiedSince                   Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n@param       ItemdefIDs                              Use to retrieve just specific itemdefs by itemdefid\n@param       WorkshopIDs                             Use to retrieve just specific itemdefs by workshopid\n@param       CacheMaxAgeSeconds              Allow stale data to be returned for the specified number of seconds." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModifiedSince;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkshopIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ModifiedSince = { "ModifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ModifiedSince), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs_Inner = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, WorkshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ModifiedSince,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorkshopIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_CacheMaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs, nullptr, "GetItemDefsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::OrionSteamWebAPIAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetItemDefs::execGetItemDefsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModifiedSince);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_TARRAY(int32,Z_Param_WorkshopIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_CacheMaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetItemDefs**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetItemDefs::GetItemDefsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_ModifiedSince,Z_Param_ItemdefIDs,Z_Param_WorkshopIDs,Z_Param_CacheMaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetItemDefs Function GetItemDefsAsync **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetItemDefs **********************************
void UOrionSteamWebAPIAsyncActionGetItemDefs::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetItemDefs()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetItemDefs::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemDefsAsync", &UOrionSteamWebAPIAsyncActionGetItemDefs::execGetItemDefsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs;
UClass* UOrionSteamWebAPIAsyncActionGetItemDefs::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetItemDefs;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetItemDefs"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetItemDefs,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetItemDefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetItemDefs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetItemDefs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetItemDefs_GetItemDefsAsync, "GetItemDefsAsync" }, // 2939612766
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetItemDefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetItemDefs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetItemDefs::UOrionSteamWebAPIAsyncActionGetItemDefs() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetItemDefs);
UOrionSteamWebAPIAsyncActionGetItemDefs::~UOrionSteamWebAPIAsyncActionGetItemDefs() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetItemDefs ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPriceSheet Function GetPriceSheetAsync ****
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 Currency;
		UOrionSteamWebAPIAsyncActionGetPriceSheet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Inventory Service price sheet\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 */" },
#endif
		{ "DisplayName", "Get Price Sheet" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Inventory Service price sheet\n\n@param       Key                     Steamworks Web API publisher authentication Key." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet, nullptr, "GetPriceSheetAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::OrionSteamWebAPIAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPriceSheet::execGetPriceSheetAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPriceSheet**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPriceSheet::GetPriceSheetAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPriceSheet Function GetPriceSheetAsync ******

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPriceSheet ********************************
void UOrionSteamWebAPIAsyncActionGetPriceSheet::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPriceSheet()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPriceSheet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPriceSheetAsync", &UOrionSteamWebAPIAsyncActionGetPriceSheet::execGetPriceSheetAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet;
UClass* UOrionSteamWebAPIAsyncActionGetPriceSheet::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPriceSheet;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPriceSheet"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPriceSheet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPriceSheet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPriceSheet\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPriceSheet\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPriceSheet_GetPriceSheetAsync, "GetPriceSheetAsync" }, // 451965460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPriceSheet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPriceSheet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPriceSheet::UOrionSteamWebAPIAsyncActionGetPriceSheet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPriceSheet);
UOrionSteamWebAPIAsyncActionGetPriceSheet::~UOrionSteamWebAPIAsyncActionGetPriceSheet() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPriceSheet **********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsolidate Function ConsolidateAsync ********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
		UOrionSteamWebAPIAsyncActionConsolidate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Consolidate items of the given type within an user's inventory.\n\x09 *\n\x09 * Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\n\x09 * The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09SteamId\n\x09 * @param\x09ItemdefIDs\n\x09 * @param\x09""bForce\n\x09 */" },
#endif
		{ "DisplayName", "Consolidate" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consolidate items of the given type within an user's inventory.\n\nWhenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\nThe Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           The ID of the application associated with the item.\n@param       SteamId\n@param       ItemdefIDs\n@param       bForce" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate, nullptr, "ConsolidateAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::OrionSteamWebAPIAsyncActionConsolidate_eventConsolidateAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionConsolidate::execConsolidateAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionConsolidate**)Z_Param__Result=UOrionSteamWebAPIAsyncActionConsolidate::ConsolidateAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionConsolidate Function ConsolidateAsync **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionConsolidate **********************************
void UOrionSteamWebAPIAsyncActionConsolidate::StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsolidate()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionConsolidate::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsolidateAsync", &UOrionSteamWebAPIAsyncActionConsolidate::execConsolidateAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate;
UClass* UOrionSteamWebAPIAsyncActionConsolidate::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionConsolidate;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionConsolidate"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionConsolidate,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionConsolidate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionConsolidate\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionConsolidate\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionConsolidate_ConsolidateAsync, "ConsolidateAsync" }, // 4174385215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionConsolidate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionConsolidate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionConsolidate::UOrionSteamWebAPIAsyncActionConsolidate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionConsolidate);
UOrionSteamWebAPIAsyncActionConsolidate::~UOrionSteamWebAPIAsyncActionConsolidate() {}
// ********** End Class UOrionSteamWebAPIAsyncActionConsolidate ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetQuantity Function GetQuantityAsync ********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		TArray<int32> ItemdefIDs;
		bool bForce;
		UOrionSteamWebAPIAsyncActionGetQuantity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the total number of available items of the given type\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09SteamId\n\x09 * @param\x09ItemdefIDs\x09List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09 * @param\x09""bForce\n\x09 */" },
#endif
		{ "DisplayName", "Get Quantity" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           The ID of the application associated with the item.\n@param       SteamId\n@param       ItemdefIDs      List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param       bForce" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ItemdefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity, nullptr, "GetQuantityAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::OrionSteamWebAPIAsyncActionGetQuantity_eventGetQuantityAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetQuantity::execGetQuantityAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetQuantity**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetQuantity::GetQuantityAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ItemdefIDs,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetQuantity Function GetQuantityAsync **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetQuantity **********************************
void UOrionSteamWebAPIAsyncActionGetQuantity::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetQuantity()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetQuantity::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetQuantityAsync", &UOrionSteamWebAPIAsyncActionGetQuantity::execGetQuantityAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity;
UClass* UOrionSteamWebAPIAsyncActionGetQuantity::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetQuantity;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetQuantity"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetQuantity,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetQuantity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetQuantity\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetQuantity\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetQuantity_GetQuantityAsync, "GetQuantityAsync" }, // 354325856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetQuantity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetQuantity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetQuantity::UOrionSteamWebAPIAsyncActionGetQuantity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetQuantity);
UOrionSteamWebAPIAsyncActionGetQuantity::~UOrionSteamWebAPIAsyncActionGetQuantity() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetQuantity ************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionModifyItems Function ModifyItemsAsync ********
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		FString SteamId;
		FModifyItemsItem Updates;
		UOrionSteamWebAPIAsyncActionModifyItems* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|InventoryService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the total number of available items of the given type\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09""AppId\x09\x09The ID of the application associated with the item.\n\x09 * @param\x09SteamId\x09\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09 * @param\x09Updates\x09\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\x09 */" },
#endif
		{ "DisplayName", "Modify Items" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       AppId           The ID of the application associated with the item.\n@param       SteamId         The steamid of the user who owns the items. Must be specified in the input_json parameter.\n@param       Updates         The list of items and properties being modified. Must be specified in the input_json parameter." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Updates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Updates = { "Updates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, Updates), Z_Construct_UScriptStruct_FModifyItemsItem, METADATA_PARAMS(0, nullptr) }; // 4043433498
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_Updates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems, nullptr, "ModifyItemsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::OrionSteamWebAPIAsyncActionModifyItems_eventModifyItemsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionModifyItems::execModifyItemsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_STRUCT(FModifyItemsItem,Z_Param_Updates);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionModifyItems**)Z_Param__Result=UOrionSteamWebAPIAsyncActionModifyItems::ModifyItemsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Updates);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionModifyItems Function ModifyItemsAsync **********

// ********** Begin Class UOrionSteamWebAPIAsyncActionModifyItems **********************************
void UOrionSteamWebAPIAsyncActionModifyItems::StaticRegisterNativesUOrionSteamWebAPIAsyncActionModifyItems()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionModifyItems::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyItemsAsync", &UOrionSteamWebAPIAsyncActionModifyItems::execModifyItemsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems;
UClass* UOrionSteamWebAPIAsyncActionModifyItems::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionModifyItems;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionModifyItems"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionModifyItems,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionModifyItems::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionModifyItems\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionModifyItems\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionModifyItems_ModifyItemsAsync, "ModifyItemsAsync" }, // 777227865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionModifyItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionModifyItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionModifyItems::UOrionSteamWebAPIAsyncActionModifyItems() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionModifyItems);
UOrionSteamWebAPIAsyncActionModifyItems::~UOrionSteamWebAPIAsyncActionModifyItems() {}
// ********** End Class UOrionSteamWebAPIAsyncActionModifyItems ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddItem, UOrionSteamWebAPIAsyncActionAddItem::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionAddItem"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionAddItem), 1213987085U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem, UOrionSteamWebAPIAsyncActionAddPromoItem::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionAddPromoItem"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionAddPromoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionAddPromoItem), 2829560105U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsumeItem, UOrionSteamWebAPIAsyncActionConsumeItem::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionConsumeItem"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsumeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionConsumeItem), 1272493584U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionExchangeItem, UOrionSteamWebAPIAsyncActionExchangeItem::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionExchangeItem"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionExchangeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionExchangeItem), 4093187093U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetInventory, UOrionSteamWebAPIAsyncActionGetInventory::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetInventory"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetInventory), 1613373932U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs, UOrionSteamWebAPIAsyncActionGetItemDefs::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetItemDefs"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetItemDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetItemDefs), 2725757305U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet, UOrionSteamWebAPIAsyncActionGetPriceSheet::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPriceSheet"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPriceSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPriceSheet), 2520821585U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionConsolidate, UOrionSteamWebAPIAsyncActionConsolidate::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionConsolidate"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionConsolidate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionConsolidate), 1482264423U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetQuantity, UOrionSteamWebAPIAsyncActionGetQuantity::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetQuantity"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetQuantity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetQuantity), 3570323103U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionModifyItems, UOrionSteamWebAPIAsyncActionModifyItems::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionModifyItems"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionModifyItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionModifyItems), 965630151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_OrionSteamWebAPI_700276638(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
