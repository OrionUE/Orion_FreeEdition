/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "WebInventoryServiceTypes.generated.h"

UENUM(Blueprintable)
enum class EModifyItemPropertyType : uint8
{
	STRING,
	BOOL,
	INT,
	FLOAT,
	REMOVE
};

USTRUCT(BlueprintType)
struct FModifyItemsItem
{
	GENERATED_BODY()

public:
	FModifyItemsItem()
		: ModifyItemPropertyType(EModifyItemPropertyType::INT)
		, PropertyValueBool(false)
		, PropertyValueInt(0)
		, PropertyValueFloat(0)
		, PropertyValueRemove(false)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString ItemId;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString PropertyName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	EModifyItemPropertyType ModifyItemPropertyType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	FString PropertyValueString;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool PropertyValueBool;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	int32 PropertyValueInt;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	int32 PropertyValueFloat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Data")
	bool PropertyValueRemove;
};
