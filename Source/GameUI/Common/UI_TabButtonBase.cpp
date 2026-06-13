/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_TabButtonBase.h"

#include "CommonLazyImage.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_TabButtonBase)

void UUI_TabButtonBase::SetIconBrush(const FSlateBrush& Brush)
{
	if (LazyImage_Icon)
	{
		LazyImage_Icon->SetBrush(Brush);
	}
}

void UUI_TabButtonBase::SetTabLabelInfo_Implementation(const FTabDescriptor& TabLabelInfo)
{
	SetButtonText(TabLabelInfo.TabText);
	SetIconBrush(TabLabelInfo.IconBrush);
}
