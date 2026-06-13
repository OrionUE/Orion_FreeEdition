/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Theme/ThemedArtBorderStyle2.h"

#include "Components/BorderSlot.h"
#include "Theme/UIThemeBlueprintLibrary.h"
#include "Theme/UIThemeData.h"
#include "Theme/UIThemeSubsystem.h"
#include "Widgets/Layout/SBorder.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ThemedArtBorderStyle2)

class SThemedArtBorderStyle2 : public SBorder
{
public:
	SLATE_BEGIN_ARGS(SThemedArtBorderStyle2)
		: _Owner(nullptr)
		, _FlipForRightToLeftFlowDirection(false)
	{
	}
		SLATE_ARGUMENT(TWeakObjectPtr<UThemedArtBorderStyle2>, Owner)
		SLATE_ARGUMENT(bool, FlipForRightToLeftFlowDirection)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs)
	{
		Owner = InArgs._Owner;

		SBorder::Construct(SBorder::FArguments()
			.FlipForRightToLeftFlowDirection(InArgs._FlipForRightToLeftFlowDirection));
	}

	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override
	{
		SBorder::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

		if (UThemedArtBorderStyle2* OwnerWidget = Owner.Get())
		{
			OwnerWidget->HandleSlateTick(AllottedGeometry, InDeltaTime);
		}
	}

private:
	TWeakObjectPtr<UThemedArtBorderStyle2> Owner;
};

UThemedArtBorderStyle2::UThemedArtBorderStyle2(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UThemedArtBorderStyle2::BP_Tick_Implementation(const FGeometry& MyGeometry, float InDeltaTime)
{
}

void UThemedArtBorderStyle2::HandleSlateTick(const FGeometry& AllottedGeometry, float InDeltaTime)
{
	if (IsDesignTime())
	{
		return;
	}

	const FVector2D LocalSize = AllottedGeometry.GetLocalSize();
	if (LocalSize.X <= 0.0f || LocalSize.Y <= 0.0f)
	{
		return;
	}

	BP_Tick(AllottedGeometry, InDeltaTime);
}

TSharedRef<SWidget> UThemedArtBorderStyle2::RebuildWidget()
{
	MyBorder = SNew(SThemedArtBorderStyle2)
		.Owner(this)
		.FlipForRightToLeftFlowDirection(bFlipForRightToLeftFlowDirection);

	if (GetChildrenCount() > 0)
	{
		Cast<UBorderSlot>(GetContentSlot())->BuildSlot(MyBorder.ToSharedRef());
	}

	return MyBorder.ToSharedRef();
}

void UThemedArtBorderStyle2::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	BindThemeChanged();
	IUIThemeInterface::Execute_ApplyTheme(this, UUIThemeBlueprintLibrary::GetCurrentUITheme(this));
}

void UThemedArtBorderStyle2::ReleaseSlateResources(bool bReleaseChildren)
{
	UnbindThemeChanged();

	Super::ReleaseSlateResources(bReleaseChildren);
}

void UThemedArtBorderStyle2::HandleThemeChanged(UUIThemeData* NewTheme)
{
	IUIThemeInterface::Execute_ApplyTheme(this, NewTheme);
}

void UThemedArtBorderStyle2::BindThemeChanged()
{
	if (bThemeChangedBound)
	{
		return;
	}

	if (!UUIThemeBlueprintLibrary::GetUIThemeSubsystem(this))
	{
		return;
	}

	FUIThemeChangedDelegate ThemeChangedDelegate;
	ThemeChangedDelegate.BindDynamic(this, &ThisClass::HandleThemeChanged);
	UUIThemeBlueprintLibrary::BindOnUIThemeChanged(this, ThemeChangedDelegate);

	bThemeChangedBound = true;
}

void UThemedArtBorderStyle2::UnbindThemeChanged()
{
	if (!bThemeChangedBound)
	{
		return;
	}

	if (UUIThemeSubsystem* ThemeSubsystem = UUIThemeBlueprintLibrary::GetUIThemeSubsystem(this))
	{
		ThemeSubsystem->OnThemeChanged.RemoveDynamic(this, &ThisClass::HandleThemeChanged);
	}

	bThemeChangedBound = false;
}

void UThemedArtBorderStyle2::ApplyTheme_Implementation(UUIThemeData* Theme)
{
	if (!Theme)
	{
		return;
	}

	BorderThemeColor = Theme->MainThemeColor;
	BorderThemeColor.A = 0.55f;
	SetBrushColor(BorderThemeColor);
}
