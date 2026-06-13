/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystems/GameInstanceSubsystem.h"
#include "Theme/UIThemeData.h"

#include "UIThemeSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIThemeChanged, UUIThemeData*, NewTheme);

UCLASS(Config=Game, DefaultConfig)
class GAMEUI_API UUIThemeSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable, Category="UI Theme")
	void SetTheme(UUIThemeData* NewTheme);

	UFUNCTION(BlueprintPure, Category="UI Theme")
	UUIThemeData* GetCurrentTheme() const { return CurrentTheme; }

	UFUNCTION(BlueprintPure, Category="UI Theme")
	UUIThemeData* GetDefaultTheme() const { return DefaultTheme.Get(); }

public:
	UPROPERTY(BlueprintAssignable, Category="UI Theme")
	FOnUIThemeChanged OnThemeChanged;

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Config, Category="UI Theme", meta=(AllowPrivateAccess="true"))
	TSoftObjectPtr<UUIThemeData> DefaultTheme;

	UPROPERTY(BlueprintReadOnly, Category="UI Theme", meta=(AllowPrivateAccess="true"))
	TObjectPtr<UUIThemeData> CurrentTheme;
};
