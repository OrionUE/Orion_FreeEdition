/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "UIThemeBlueprintLibrary.generated.h"

class UUIThemeData;
class UUIThemeSubsystem;

DECLARE_DYNAMIC_DELEGATE_OneParam(FUIThemeChangedDelegate, UUIThemeData*, NewTheme);

UCLASS()
class GAMEUI_API UUIThemeBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="UI Theme", meta=(WorldContext="WorldContextObject"))
	static UUIThemeSubsystem* GetUIThemeSubsystem(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="UI Theme", meta=(WorldContext="WorldContextObject"))
	static UUIThemeData* GetCurrentUITheme(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="UI Theme", meta=(WorldContext="WorldContextObject"))
	static void SetCurrentUITheme(const UObject* WorldContextObject, UUIThemeData* NewTheme);

	UFUNCTION(BlueprintCallable, Category="UI Theme", meta=(WorldContext="WorldContextObject", AutoCreateRefTerm="Delegate"))
	static void BindOnUIThemeChanged(const UObject* WorldContextObject, const FUIThemeChangedDelegate& Delegate);
};
