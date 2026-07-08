/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "CoreTypes.h"
#include "OrionToolsetTypes.h"
#include "ToolsetRegistry/ToolsetDefinition.h"
#include "UObject/ObjectMacros.h"

#include "OrionLocalizationToolset.generated.h"

USTRUCT(BlueprintType)
struct FOrionLocalizationCultureInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString CultureName;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bIsNativeCulture = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	int32 WordCount = 0;
};

USTRUCT(BlueprintType)
struct FOrionLocalizationTargetInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bIsEngineTarget = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString NativeCulture;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString ConflictStatus;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FOrionLocalizationCultureInfo> Cultures;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString ConfigDirectory;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString DataDirectory;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FString> ConfigPaths;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FString> OutputPaths;
};

USTRUCT(BlueprintType)
struct FOrionLocalizationTargetsResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FOrionLocalizationTargetInfo> Targets;
};

USTRUCT(BlueprintType)
struct FOrionLocalizationCommandletStepResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString TargetName;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bIsEngineTarget = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Operation;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString CultureName;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString ConfigPath;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FString> OutputPaths;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	int32 ReturnCode = -1;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	float DurationSeconds = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString ProcessArguments;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString LogTail;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bLogTruncated = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Message;
};

USTRUCT(BlueprintType)
struct FOrionLocalizationCommandletResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	FString Operation;

	UPROPERTY(BlueprintReadWrite, Category="Localization")
	TArray<FOrionLocalizationCommandletStepResult> Steps;
};

UCLASS(BlueprintType, Hidden)
class UOrionLocalizationToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(meta=(AICallable), Category="Localization")
	static FOrionToolResult OpenLocalizationDashboard();

	UFUNCTION(meta=(AICallable), Category="Localization")
	static FOrionLocalizationTargetsResult ListLocalizationTargets(const FString& TargetSet = TEXT("Game"));

	UFUNCTION(meta=(AICallable), Category="Localization")
	static FOrionLocalizationCommandletResult RunLocalizationOperation(
		const FString& Operation,
		const FString& TargetName = TEXT(""),
		const FString& TargetSet = TEXT("Game"),
		const FString& CultureName = TEXT(""),
		const FString& PathOverride = TEXT(""),
		int32 TimeoutSeconds = 1800);
};
