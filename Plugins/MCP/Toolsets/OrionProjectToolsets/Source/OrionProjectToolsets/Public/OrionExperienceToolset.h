/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionBlueprintGraphToolset.h"
#include "ToolsetRegistry/ToolsetDefinition.h"

#include "OrionExperienceToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionExperienceActionInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	int32 Index = INDEX_NONE;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString ObjectName;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString ClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString Summary;
};

USTRUCT(BlueprintType)
struct FOrionExperienceDescription
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString AssetPath;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	FString AssetClassPath;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	TArray<FString> GameFeaturesToEnable;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	TArray<FString> ActionSetPaths;

	UPROPERTY(BlueprintReadWrite, Category="Experience")
	TArray<FOrionExperienceActionInfo> Actions;
};

UCLASS(BlueprintType, Hidden)
class UOrionExperienceToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateExperienceBlueprintAsset(const FString& AssetPath, const FString& ParentClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateExperienceActionSetAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateAbilitySetAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateInputSystemConfigAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateInputMappingContextAsset(const FString& AssetPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateInputActionAsset(const FString& AssetPath, const FString& ValueType, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreatePawnDataAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreateBlueprintAsset(const FString& AssetPath, const FString& ParentClassOrBlueprintPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult ReparentBlueprintAsset(const FString& BlueprintPath, const FString& ParentClassOrBlueprintPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult CreatePawnBlueprintAsset(const FString& AssetPath, const FString& ParentClassOrBlueprintPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionExperienceDescription DescribeExperienceAsset(const FString& AssetPath);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetExperienceProperty(const FString& AssetPath, const FString& PropertyPath, const FString& ValueText, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetExperienceDefaultPawnData(const FString& ExperiencePath, const FString& PawnDataPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetExperiencePlayerAccountClass(const FString& ExperiencePath, const FString& PlayerAccountClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetWorldDefaultGameplayExperience(const FString& MapPath, const FString& ExperienceClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddGameFeatureDependency(const FString& AssetPath, const FString& GameFeatureName, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult RemoveGameFeatureDependency(const FString& AssetPath, const FString& GameFeatureName, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddActionSetToExperience(const FString& ExperiencePath, const FString& ActionSetPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddAbilitySetToPawnData(const FString& PawnDataPath, const FString& AbilitySetPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetPawnDataProperty(const FString& PawnDataPath, const FString& PropertyPath, const FString& ValueText, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetPawnDataPawnClass(const FString& PawnDataPath, const FString& PawnClassOrBlueprintPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetPawnDataInputConfig(const FString& PawnDataPath, const FString& InputConfigPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetPawnDataTagRelationshipMapping(const FString& PawnDataPath, const FString& TagRelationshipMappingPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddGameplayAbilityToAbilitySet(const FString& AbilitySetPath, const FString& AbilityClassPath, const FString& InputTag, int32 AbilityLevel = 1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult ClearGameplayAbilitiesFromAbilitySet(const FString& AbilitySetPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddAbilityInputActionToInputConfig(const FString& InputConfigPath, const FString& InputActionPath, const FString& InputTag, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddNativeInputActionToInputConfig(const FString& InputConfigPath, const FString& InputActionPath, const FString& InputTag, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddKeyMappingToInputMappingContext(const FString& InputMappingContextPath, const FString& InputActionPath, const FString& KeyName, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult RemoveActionSetFromExperience(const FString& ExperiencePath, const FString& ActionSetPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddAction(const FString& AssetPath, const FString& ActionClassPath, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult RemoveAction(const FString& AssetPath, int32 ActionIndex, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult MoveAction(const FString& AssetPath, int32 FromIndex, int32 ToIndex, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SetActionProperty(const FString& AssetPath, int32 ActionIndex, const FString& PropertyPath, const FString& ValueText, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddComponentActionEntry(const FString& AssetPath, const FString& ActorClassPath, const FString& ComponentClassPath, bool bClientComponent = true, bool bServerComponent = true, int32 AdditionFlags = 0, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddAbilitiesActionEntry(const FString& AssetPath, const FString& ActorClassPath, const TArray<FString>& AbilityClassPaths, const TArray<FString>& AttributeSetClassPaths, const TArray<FString>& AttributeInitializationDataPaths, const TArray<FString>& CoreAbilitySetPaths, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddInputBindingActionEntry(const FString& AssetPath, const TArray<FString>& InputConfigPaths, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddInputMappingActionEntry(const FString& AssetPath, const FString& InputMappingContextPath, int32 Priority = 0, bool bRegisterWithSettings = true, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddWidgetLayoutEntry(const FString& AssetPath, const FString& LayoutClassPath, const FString& LayerTag, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult AddWidgetEntry(const FString& AssetPath, const FString& WidgetClassPath, const FString& SlotTag, int32 ActionIndex = -1, bool bSave = false);

	UFUNCTION(meta=(AICallable), Category="Experience")
	static FOrionToolResult SaveExperienceAsset(const FString& AssetPath, bool bOnlyIfIsDirty = true);
};
