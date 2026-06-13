/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionBlueprintGraphToolset.h"
#include "ToolsetRegistry/ToolsetDefinition.h"

#include "OrionUMGToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionUMGHUDPanelSpec
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	FString PanelName;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	FString TitleText;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	TArray<FString> BodyLines;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	float PositionX = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	float PositionY = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	float Width = 320.0f;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	float Height = 180.0f;

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	FLinearColor BackgroundColor = FLinearColor(0.02f, 0.07f, 0.08f, 0.82f);

	UPROPERTY(BlueprintReadWrite, Category="UMG")
	FLinearColor AccentColor = FLinearColor(0.22f, 0.88f, 0.74f, 1.0f);
};

UCLASS(BlueprintType, Hidden)
class UOrionUMGToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="UMG")
	static FOrionToolResult AddArtTextTitle(
		const FString& WidgetBlueprintPath,
		const FString& TitleText,
		const FString& ParentWidgetName = TEXT(""),
		const FString& ContainerWidgetName = TEXT("MCP_ArtTitle_EmberZone"),
		float PositionX = 0.0f,
		float PositionY = 80.0f,
		float Width = 900.0f,
		float Height = 160.0f,
		int32 FontSize = 72,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="UMG")
	static FOrionToolResult ApplyThemedHUDLayout(
		const FString& WidgetBlueprintPath,
		const FString& ParentWidgetName,
		const FString& LayoutWidgetName,
		const TArray<FOrionUMGHUDPanelSpec>& Panels,
		bool bRemoveExistingLayout = true,
		bool bSave = true);

	UFUNCTION(meta=(AICallable), Category="UMG")
	static FOrionToolResult RepairWidgetVariableGuidMap(
		const FString& WidgetBlueprintPath,
		bool bCompile = false,
		bool bSave = true);
};
