/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ButtonBase.h"

#include "UI_MapSelectEntryButton.generated.h"

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Map Select Entry Button Base"))
class GAMEUI_API UUI_MapSelectEntryButton : public UUI_ButtonBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure)
	const FPrimaryAssetId& GetExperienceLevelMetaDefinitionID() const { return ExperienceLevelMetaDefinitionID; }

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(AllowedTypes="OrionExperienceLevelMetaDefinition"))
	FPrimaryAssetId ExperienceLevelMetaDefinitionID;
};
