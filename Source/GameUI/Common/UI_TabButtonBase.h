/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UI_TabListWidgetBase.h"
#include "Foundation/UI_ButtonBase.h"

#include "UI_TabButtonBase.generated.h"

class UCommonLazyImage;

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick, DisplayName="Tab Button Base"))
class GAMEUI_API UUI_TabButtonBase : public UUI_ButtonBase, public IUI_TabButtonInterface
{
	GENERATED_BODY()

public:
	void SetIconBrush(const FSlateBrush& Brush);

protected:
	UFUNCTION()
	virtual void SetTabLabelInfo_Implementation(const FTabDescriptor& TabLabelInfo) override;

private:
	UPROPERTY(meta=(BindWidgetOptional))
	TObjectPtr<UCommonLazyImage> LazyImage_Icon;
};
