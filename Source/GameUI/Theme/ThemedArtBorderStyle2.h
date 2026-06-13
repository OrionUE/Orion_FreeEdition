/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/Border.h"
#include "Theme/UIThemeInterface.h"

#include "ThemedArtBorderStyle2.generated.h"

class UUIThemeData;

UCLASS(Blueprintable, BlueprintType)
class GAMEUI_API UThemedArtBorderStyle2 : public UBorder, public IUIThemeInterface
{
	GENERATED_BODY()

public:
	UThemedArtBorderStyle2(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintNativeEvent, Category="UI Theme", meta=(DisplayName="Tick"))
	void BP_Tick(const FGeometry& MyGeometry, float InDeltaTime);
	virtual void BP_Tick_Implementation(const FGeometry& MyGeometry, float InDeltaTime);

	void HandleSlateTick(const FGeometry& AllottedGeometry, float InDeltaTime);
	virtual void ApplyTheme_Implementation(UUIThemeData* Theme) override;

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

private:
	UFUNCTION()
	void HandleThemeChanged(UUIThemeData* NewTheme);

	void BindThemeChanged();
	void UnbindThemeChanged();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	FLinearColor BorderThemeColor;

private:
	bool bThemeChangedBound = false;
};
