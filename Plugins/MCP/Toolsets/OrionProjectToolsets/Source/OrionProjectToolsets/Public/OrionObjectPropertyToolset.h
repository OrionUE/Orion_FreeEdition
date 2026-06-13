/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "ToolsetRegistry/ToolsetDefinition.h"

#include "OrionObjectPropertyToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionObjectPropertyInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Path;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Type;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Value;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Category;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString OwnerClassPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	bool bEditable = false;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	bool bBlueprintVisible = false;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	bool bArray = false;
};

USTRUCT(BlueprintType)
struct FOrionObjectPropertyDescription
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString RequestedPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString InspectedObjectPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString InspectedClassPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	TArray<FOrionObjectPropertyInfo> Properties;
};

USTRUCT(BlueprintType)
struct FOrionObjectPropertyValueResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString RequestedPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString InspectedObjectPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString PropertyPath;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Type;

	UPROPERTY(BlueprintReadWrite, Category="ObjectProperties")
	FString Value;
};

UCLASS(BlueprintType, Hidden)
class UOrionObjectPropertyToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="ObjectProperties")
	static FOrionObjectPropertyDescription DescribeLoadedAssetProperties(
		const FString& ObjectPath,
		bool bInspectBlueprintCDO = true,
		bool bIncludeInherited = true,
		bool bIncludeNonEditable = false,
		int32 MaxValueLength = 512);

	UFUNCTION(meta=(AICallable), Category="ObjectProperties")
	static FOrionObjectPropertyValueResult GetObjectPropertyValue(
		const FString& ObjectPath,
		const FString& PropertyPath,
		bool bInspectBlueprintCDO = true);
};

