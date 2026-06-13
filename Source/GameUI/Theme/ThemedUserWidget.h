/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Blueprint/UserWidget.h"
#include "Theme/UIThemeInterface.h"

#include "ThemedUserWidget.generated.h"

class UUIThemeData;
class UUIThemeSubsystem;

UCLASS(Abstract, Blueprintable, BlueprintType)
class GAMEUI_API UThemedUserWidget : public UUserWidget, public IUIThemeInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="UI Theme")
	UUIThemeData* GetCurrentTheme() const { return CurrentTheme; }

	virtual void ApplyTheme_Implementation(UUIThemeData* Theme) override;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

private:
	UFUNCTION()
	void HandleThemeChanged(UUIThemeData* NewTheme);

	UUIThemeSubsystem* GetThemeSubsystem() const;

private:
	UPROPERTY(Transient)
	TObjectPtr<UUIThemeData> CurrentTheme;
};
