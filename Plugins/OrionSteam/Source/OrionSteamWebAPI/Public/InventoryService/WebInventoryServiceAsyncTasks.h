/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "WebInventoryServiceTypes.h"
#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAddItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAddItem : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAddItem(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, TArray<int32> ItemdefId, FString ItemPropsJson, TArray<int32> ItemQuantity, FString SteamId, bool bNotify, FString RequestId, bool bTradeRestriction)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "AddItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemdefid", ItemdefId);
		m_RequestString.Add("itempropsjson", ItemPropsJson);
		m_RequestString.Add("itemquantity", ItemQuantity);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("notify", bNotify);
		m_RequestString.Add("requestid", RequestId);
		m_RequestString.Add("trade_restriction", bTradeRestriction);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAddItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAddPromoItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAddPromoItem : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAddPromoItem(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "AddPromoItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemdefid", ItemdefId);
		m_RequestString.Add("itempropsjson", ItemPropsJson);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("notify", bNotify);
		m_RequestString.Add("requestid", RequestId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAddPromoItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIConsumeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIConsumeItem : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIConsumeItem(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString ItemId, FString Quantity, FString SteamId, FString RequestId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "ConsumeItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemid", ItemId);
		m_RequestString.Add("quantity", Quantity);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("requestid", RequestId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIConsumeItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIExchangeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIExchangeItem : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIExchangeItem(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int64> MaterialsItemID, TArray<int32> MaterialsQuantity, int64 OutputItemdefId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "ExchangeItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("materialsitemid", MaterialsItemID);
		m_RequestString.Add("materialsquantity", MaterialsQuantity);
		m_RequestString.Add("outputitemdefid", OutputItemdefId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIExchangeItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetInventory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetInventory : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetInventory(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "GetInventory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetInventory() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetItemDefs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetItemDefs : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetItemDefs(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString ModifiedSince, TArray<int32> ItemdefIds, TArray<int32> WorkshopIds, int32 CacheMaxAgeSeconds)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "GetItemDefs", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("modifiedsince", ModifiedSince);
		m_RequestString.Add("itemdefids", ItemdefIds);
		m_RequestString.Add("workshopids", WorkshopIds);
		m_RequestString.Add("cache_max_age_seconds", CacheMaxAgeSeconds);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetItemDefs() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPriceSheet
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPriceSheet : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPriceSheet(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 Currency)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "GetPriceSheet", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("ecurrency", Currency);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPriceSheet() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIConsolidate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIConsolidate : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIConsolidate(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIds, bool bForce)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "Consolidate", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("itemdefid", ItemdefIds);
		m_RequestString.Add("force", bForce);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIConsolidate() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetQuantity
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetQuantity : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetQuantity(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIds, bool bForce)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "GetQuantity", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("itemdefid", ItemdefIds);
		m_RequestString.Add("force", bForce);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetQuantity() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIModifyItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIModifyItems : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIModifyItems(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FModifyItemsItem Updates)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IInventoryService", "ModifyItems", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);

		// Updates.ItemId = "4873539447519285099";
		// Updates.PropertyName = "my_prop";
		// Updates.PropertyValueString = "my_prop_value";

		TArray<TSharedPtr<FJsonValue>> Array;

		const TSharedPtr<FJsonObject> EnumValueObject = MakeShareable(new FJsonObject);
		EnumValueObject->SetStringField("itemid", Updates.ItemId);
		EnumValueObject->SetStringField("property_name", Updates.PropertyName);

		switch (Updates.ModifyItemPropertyType)
		{
		case EModifyItemPropertyType::STRING:
			EnumValueObject->SetStringField("property_value_string", Updates.PropertyValueString);
			break;
		case EModifyItemPropertyType::BOOL:
			EnumValueObject->SetBoolField("property_value_bool", Updates.PropertyValueBool);
			break;
		case EModifyItemPropertyType::INT:
			EnumValueObject->SetNumberField("property_value_int", Updates.PropertyValueInt);
			break;
		case EModifyItemPropertyType::FLOAT:
			EnumValueObject->SetNumberField("property_value_float", Updates.PropertyValueFloat);
			break;
		case EModifyItemPropertyType::REMOVE:
			EnumValueObject->SetNumberField("remove_property", true);
			break;
		}

		Array.Add(MakeShareable(new FJsonValueObject(EnumValueObject)));

		m_RequestString.AddStringField("steamid", *SteamId);
		m_RequestString.AddNumberField("timestamp", FDateTime::UtcNow().ToUnixTimestamp());
		m_RequestString.AddArrayField("updates", Array);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIModifyItems() = delete;
};
