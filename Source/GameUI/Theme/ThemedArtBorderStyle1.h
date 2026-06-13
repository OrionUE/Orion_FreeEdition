/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/Border.h"
#include "Theme/UIThemeInterface.h"

#include "ThemedArtBorderStyle1.generated.h"

class UUIThemeData;

UCLASS(Blueprintable, BlueprintType)
class GAMEUI_API UThemedArtBorderStyle1 : public UBorder, public IUIThemeInterface
{
	GENERATED_BODY()

public:
	UThemedArtBorderStyle1(const FObjectInitializer& ObjectInitializer);

	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void ApplyTheme_Implementation(UUIThemeData* Theme) override;

private:
	UFUNCTION()
	void HandleThemeChanged(UUIThemeData* NewTheme);

	void BindThemeChanged();
	void UnbindThemeChanged();

private:
	bool bThemeChangedBound = false;
};
