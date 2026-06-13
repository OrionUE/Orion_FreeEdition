/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "ToolsetRegistry/ToolsetDefinition.h"

#include "OrionBlueprintGraphToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionToolResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Result")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString AssetPath;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintPinTypeSpec
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString Category = TEXT("wildcard");

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString SubCategory;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString SubCategoryObjectPath;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	bool bIsArray = false;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	bool bIsSet = false;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	bool bIsMap = false;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString ValueCategory;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString ValueSubCategory;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString ValueSubCategoryObjectPath;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	bool bIsReference = false;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	bool bIsConst = false;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintPinSelector
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString NodeGuid;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString PinName;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString Direction;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	int32 PinIndex = -1;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintPinInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString Direction;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString Type;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	FString DefaultValue;

	UPROPERTY(BlueprintReadWrite, Category="Pin")
	int32 LinkCount = 0;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintNodeInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Node")
	FString Guid;

	UPROPERTY(BlueprintReadWrite, Category="Node")
	FString Title;

	UPROPERTY(BlueprintReadWrite, Category="Node")
	FString ClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Node")
	int32 NodePosX = 0;

	UPROPERTY(BlueprintReadWrite, Category="Node")
	int32 NodePosY = 0;

	UPROPERTY(BlueprintReadWrite, Category="Node")
	TArray<FOrionBlueprintPinInfo> Pins;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintGraphInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Graph")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="Graph")
	FString SchemaClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Graph")
	int32 NodeCount = 0;

	UPROPERTY(BlueprintReadWrite, Category="Graph")
	TArray<FOrionBlueprintNodeInfo> Nodes;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintVariableInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	FString Type;

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	FString DefaultValue;

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	FString Category;

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	bool bInstanceEditable = false;

	UPROPERTY(BlueprintReadWrite, Category="Variable")
	bool bExposeOnSpawn = false;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintFunctionInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Function")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="Function")
	FString OwnerClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Function")
	bool bImplementedInBlueprint = false;

	UPROPERTY(BlueprintReadWrite, Category="Function")
	bool bCanOverride = false;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintDescription
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	FString ParentClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	FString GeneratedClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	FString Status;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	TArray<FOrionBlueprintGraphInfo> Graphs;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	TArray<FOrionBlueprintVariableInfo> Variables;

	UPROPERTY(BlueprintReadWrite, Category="Blueprint")
	TArray<FOrionBlueprintFunctionInfo> Functions;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintNodeResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Result")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString GraphName;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FOrionBlueprintNodeInfo Node;
};

USTRUCT(BlueprintType)
struct FOrionBlueprintCompileResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Result")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="Result")
	FString Status;
};

UCLASS(BlueprintType, Hidden)
class UOrionBlueprintGraphToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintDescription DescribeBlueprint(const FString& BlueprintPath, bool bIncludeNodes = true);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult CreateGraph(const FString& BlueprintPath, const FString& GraphName, const FString& GraphType = TEXT("EventGraph"), bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult DeleteGraph(const FString& BlueprintPath, const FString& GraphName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RenameGraph(const FString& BlueprintPath, const FString& GraphName, const FString& NewGraphName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult AddFunctionGraph(const FString& BlueprintPath, const FString& FunctionName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult AddFunctionPin(const FString& BlueprintPath, const FString& FunctionName, const FString& PinName, const FOrionBlueprintPinTypeSpec& PinType, const FString& Direction = TEXT("Input"), const FString& DefaultValue = TEXT(""), bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult AddFunctionOverrideGraph(const FString& BlueprintPath, const FString& FunctionOwnerClassPath, const FString& FunctionName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult SpawnNodeByClass(const FString& BlueprintPath, const FString& GraphName, const FString& NodeClassPath, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddCallFunctionNode(const FString& BlueprintPath, const FString& GraphName, const FString& FunctionOwnerClassPath, const FString& FunctionName, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddCustomEventNode(const FString& BlueprintPath, const FString& GraphName, const FString& EventName, const TArray<FString>& OutputPinNames, const TArray<FOrionBlueprintPinTypeSpec>& OutputPinTypes, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddEventOverrideNode(const FString& BlueprintPath, const FString& GraphName, const FString& EventOwnerClassPath, const FString& EventName, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddVariableNode(const FString& BlueprintPath, const FString& GraphName, const FString& VariableName, bool bSetter = false, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddBranchNode(const FString& BlueprintPath, const FString& GraphName, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddSequenceNode(const FString& BlueprintPath, const FString& GraphName, int32 AdditionalThenPins = 0, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddCastNode(const FString& BlueprintPath, const FString& GraphName, const FString& TargetClassPath, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddConstructObjectNode(const FString& BlueprintPath, const FString& GraphName, const FString& ClassPath, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddCreateWidgetNode(const FString& BlueprintPath, const FString& GraphName, const FString& WidgetClassPath, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddDelegateNode(const FString& BlueprintPath, const FString& GraphName, const FString& DelegateOwnerClassPath, const FString& DelegateName, const FString& NodeKind = TEXT("Add"), int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddRerouteNode(const FString& BlueprintPath, const FString& GraphName, int32 NodePosX = 0, int32 NodePosY = 0, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintNodeResult AddCommentNode(const FString& BlueprintPath, const FString& GraphName, const FString& CommentText, int32 NodePosX = 0, int32 NodePosY = 0, int32 NodeWidth = 400, int32 NodeHeight = 200);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult MoveNode(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, int32 NodePosX, int32 NodePosY);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RemoveNode(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult ConnectPins(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& FirstPin, const FOrionBlueprintPinSelector& SecondPin, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult DisconnectPin(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& Pin, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetPinDefaultValue(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& Pin, const FString& DefaultValue, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult AddMemberVariable(const FString& BlueprintPath, const FString& VariableName, const FOrionBlueprintPinTypeSpec& PinType, const FString& DefaultValue = TEXT(""), bool bInstanceEditable = false, bool bExposeOnSpawn = false, const FString& Category = TEXT("Default"), bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RemoveMemberVariable(const FString& BlueprintPath, const FString& VariableName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RenameMemberVariable(const FString& BlueprintPath, const FString& VariableName, const FString& NewVariableName, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetMemberVariableDefault(const FString& BlueprintPath, const FString& VariableName, const FString& DefaultValue, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetMemberVariableMetadata(const FString& BlueprintPath, const FString& VariableName, const FString& MetadataKey, const FString& MetadataValue, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetMemberVariableFlags(const FString& BlueprintPath, const FString& VariableName, bool bInstanceEditable, bool bExposeOnSpawn, const FString& Category = TEXT(""), bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetBlueprintDefaultProperty(const FString& BlueprintPath, const FString& PropertyPath, const FString& ValueText, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SetNodeProperty(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, const FString& PropertyPath, const FString& ValueText, bool bCompile = false);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintCompileResult CompileBlueprint(const FString& BlueprintPath);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RemoveInvalidMacroInstanceNodes(const FString& BlueprintPath, bool bCompile = false, bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult RepairInvalidMigrationNodes(const FString& BlueprintPath, bool bCompile = false, bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionToolResult SaveAsset(const FString& AssetPath, bool bOnlyIfIsDirty = true);

	UFUNCTION(meta=(AICallable), Category="BlueprintGraph")
	static FOrionBlueprintCompileResult ValidateBlueprint(const FString& BlueprintPath);
};
