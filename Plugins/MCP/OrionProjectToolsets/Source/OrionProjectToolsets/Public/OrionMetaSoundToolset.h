/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionToolsetTypes.h"
#include "ToolsetRegistry/ToolsetDefinition.h"

#include "OrionMetaSoundToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionMetaSoundNodeResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString NodeId;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString VertexId;
};

USTRUCT(BlueprintType)
struct FOrionMetaSoundVertexInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString VertexId;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString DataType;
};

USTRUCT(BlueprintType)
struct FOrionMetaSoundNodeInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString NodeId;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString NodeName;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString ClassName;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	TArray<FOrionMetaSoundVertexInfo> Inputs;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	TArray<FOrionMetaSoundVertexInfo> Outputs;
};

USTRUCT(BlueprintType)
struct FOrionMetaSoundDescription
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	FString RootClassName;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	TArray<FString> Interfaces;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	TArray<FOrionMetaSoundNodeInfo> Nodes;

	UPROPERTY(BlueprintReadWrite, Category="MetaSound")
	int32 EdgeCount = 0;
};

UCLASS(BlueprintType, Hidden)
class UOrionMetaSoundToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionMetaSoundDescription DescribeAsset(const FString& MetaSoundPath);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult CreateSourceAsset(
		const FString& PackagePath,
		const FString& AssetName,
		const FString& OutputFormat = TEXT("Mono"),
		bool bIsOneShot = true,
		bool bAddProjectAcousticsInterface = false,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult CreatePatchAsset(
		const FString& PackagePath,
		const FString& AssetName,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult AddInterface(
		const FString& MetaSoundPath,
		const FString& InterfaceName,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionMetaSoundNodeResult AddGraphInput(
		const FString& MetaSoundPath,
		const FString& InputName,
		const FString& DataType,
		const FString& LiteralType = TEXT("None"),
		const FString& LiteralValue = TEXT(""),
		bool bIsConstructorInput = false,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionMetaSoundNodeResult AddGraphOutput(
		const FString& MetaSoundPath,
		const FString& OutputName,
		const FString& DataType,
		const FString& LiteralType = TEXT("None"),
		const FString& LiteralValue = TEXT(""),
		bool bIsConstructorOutput = false,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionMetaSoundNodeResult AddNodeByClassName(
		const FString& MetaSoundPath,
		const FString& Namespace,
		const FString& Name,
		const FString& Variant = TEXT(""),
		int32 MajorVersion = 1,
		float LocationX = 0.0f,
		float LocationY = 0.0f,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult SetNodeInputDefault(
		const FString& MetaSoundPath,
		const FString& NodeId,
		const FString& InputName,
		const FString& LiteralType,
		const FString& LiteralValue,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult ConnectNodes(
		const FString& MetaSoundPath,
		const FString& SourceNodeId,
		const FString& SourceOutputName,
		const FString& DestinationNodeId,
		const FString& DestinationInputName,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult ConnectGraphInputToNode(
		const FString& MetaSoundPath,
		const FString& GraphInputName,
		const FString& DestinationNodeId,
		const FString& DestinationInputName,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult ConnectNodeToGraphOutput(
		const FString& MetaSoundPath,
		const FString& SourceNodeId,
		const FString& SourceOutputName,
		const FString& GraphOutputName,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="MetaSound")
	static FOrionToolResult RemoveNode(
		const FString& MetaSoundPath,
		const FString& NodeId,
		bool bRemoveUnusedDependencies = true,
		bool bSave = true);
};
