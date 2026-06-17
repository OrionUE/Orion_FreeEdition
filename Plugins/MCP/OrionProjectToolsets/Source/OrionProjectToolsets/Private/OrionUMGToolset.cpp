/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionUMGToolset.h"

#include "Animation/WidgetAnimation.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "OrionProjectToolsetUtils.h"
#include "ScopedTransaction.h"
#include "Styling/CoreStyle.h"
#include "WidgetBlueprint.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionUMGToolset)

namespace UE::OrionProjectToolsets::UMG
{
static UWidgetBlueprint* LoadWidgetBlueprint(const FString& WidgetBlueprintPath, FString& OutError)
{
	UObject* Object = LoadObjectFromPath(WidgetBlueprintPath, OutError);
	if (UWidgetBlueprint* WidgetBlueprint = Cast<UWidgetBlueprint>(Object))
	{
		return WidgetBlueprint;
	}

	OutError = FString::Printf(TEXT("Object '%s' is not a WidgetBlueprint."), *WidgetBlueprintPath);
	return nullptr;
}

static UWidget* FindParentWidget(UWidgetBlueprint* WidgetBlueprint, const FString& ParentWidgetName, FString& OutError)
{
	if (!WidgetBlueprint || !WidgetBlueprint->WidgetTree)
	{
		OutError = TEXT("WidgetBlueprint has no WidgetTree.");
		return nullptr;
	}

	if (ParentWidgetName.IsEmpty())
	{
		if (!WidgetBlueprint->WidgetTree->RootWidget)
		{
			OutError = TEXT("WidgetBlueprint has no root widget.");
		}
		return WidgetBlueprint->WidgetTree->RootWidget;
	}

	UWidget* ParentWidget = WidgetBlueprint->WidgetTree->FindWidget(FName(*ParentWidgetName));
	if (!ParentWidget)
	{
		OutError = FString::Printf(TEXT("Parent widget '%s' was not found."), *ParentWidgetName);
	}
	return ParentWidget;
}

static void RemoveExistingWidget(UWidgetBlueprint* WidgetBlueprint, const FString& WidgetName)
{
	if (!WidgetBlueprint || !WidgetBlueprint->WidgetTree || WidgetName.IsEmpty())
	{
		return;
	}

	UWidget* ExistingWidget = WidgetBlueprint->WidgetTree->FindWidget(FName(*WidgetName));
	if (!ExistingWidget)
	{
		return;
	}

	ExistingWidget->Modify();
	if (UPanelWidget* ExistingParent = ExistingWidget->GetParent())
	{
		ExistingParent->Modify();
		ExistingParent->RemoveChild(ExistingWidget);
	}
}

static void ConfigureContainerSlot(UWidget* Widget, float PositionX, float PositionY, float Width, float Height)
{
	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Widget->Slot))
	{
		CanvasSlot->Modify();
		CanvasSlot->SetAnchors(FAnchors(0.5f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(0.5f, 0.0f));
		CanvasSlot->SetPosition(FVector2D(PositionX, PositionY));
		CanvasSlot->SetSize(FVector2D(Width, Height));
		return;
	}

	if (UOverlaySlot* OverlaySlot = Cast<UOverlaySlot>(Widget->Slot))
	{
		OverlaySlot->Modify();
		OverlaySlot->SetHorizontalAlignment(HAlign_Center);
		OverlaySlot->SetVerticalAlignment(VAlign_Top);
		OverlaySlot->SetPadding(FMargin(0.0f, PositionY, 0.0f, 0.0f));
		return;
	}

	if (UVerticalBoxSlot* VerticalBoxSlot = Cast<UVerticalBoxSlot>(Widget->Slot))
	{
		VerticalBoxSlot->Modify();
		VerticalBoxSlot->SetHorizontalAlignment(HAlign_Center);
		VerticalBoxSlot->SetVerticalAlignment(VAlign_Top);
		VerticalBoxSlot->SetPadding(FMargin(0.0f, PositionY, 0.0f, 0.0f));
	}
}

static UTextBlock* AddTitleLayer(
	UWidgetTree* WidgetTree,
	UCanvasPanel* Container,
	const FName& LayerName,
	const FString& TitleText,
	float Width,
	float Height,
	const FVector2D& Position,
	int32 FontSize,
	const FLinearColor& Color,
	const FVector2D& ShadowOffset,
	const FLinearColor& ShadowColor,
	float Angle)
{
	UTextBlock* TextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), LayerName);
	TextBlock->SetText(FText::FromString(TitleText));
	TextBlock->SetJustification(ETextJustify::Center);
	TextBlock->SetAutoWrapText(false);
	TextBlock->SetColorAndOpacity(FSlateColor(Color));
	TextBlock->SetShadowOffset(ShadowOffset);
	TextBlock->SetShadowColorAndOpacity(ShadowColor);
	TextBlock->SetRenderTransformAngle(Angle);

	FSlateFontInfo FontInfo = FCoreStyle::GetDefaultFontStyle(TEXT("Bold"), FontSize);
	FontInfo.OutlineSettings.OutlineSize = 1;
	FontInfo.OutlineSettings.OutlineColor = FLinearColor(0.18f, 0.03f, 0.01f, 0.95f);
	TextBlock->SetFont(FontInfo);

	UCanvasPanelSlot* Slot = Container->AddChildToCanvas(TextBlock);
	Slot->SetAnchors(FAnchors(0.5f, 0.5f));
	Slot->SetAlignment(FVector2D(0.5f, 0.5f));
	Slot->SetPosition(Position);
	Slot->SetSize(FVector2D(Width, Height));

	return TextBlock;
}

static UTextBlock* CreateHUDTextBlock(
	UWidgetTree* WidgetTree,
	const FName& WidgetName,
	const FString& Text,
	int32 FontSize,
	const FLinearColor& Color,
	ETextJustify::Type Justification)
{
	UTextBlock* TextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), WidgetName);
	TextBlock->SetText(FText::FromString(Text));
	TextBlock->SetJustification(Justification);
	TextBlock->SetAutoWrapText(true);
	TextBlock->SetColorAndOpacity(FSlateColor(Color));
	TextBlock->SetShadowOffset(FVector2D(1.0f, 1.0f));
	TextBlock->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.65f));

	FSlateFontInfo FontInfo = FCoreStyle::GetDefaultFontStyle(TEXT("Regular"), FontSize);
	TextBlock->SetFont(FontInfo);
	return TextBlock;
}

static void AddThemedHUDPanel(UWidgetTree* WidgetTree, UCanvasPanel* LayoutCanvas, const FOrionUMGHUDPanelSpec& PanelSpec, int32 PanelIndex)
{
	const FString SafePanelName = PanelSpec.PanelName.IsEmpty() ?
		FString::Printf(TEXT("MCP_HUDPanel_%02d"), PanelIndex) :
		PanelSpec.PanelName;

	UBorder* PanelBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), FName(*SafePanelName));
	PanelBorder->SetBrushColor(PanelSpec.BackgroundColor);
	PanelBorder->SetPadding(FMargin(14.0f, 12.0f, 14.0f, 12.0f));

	UCanvasPanelSlot* PanelSlot = LayoutCanvas->AddChildToCanvas(PanelBorder);
	PanelSlot->SetAnchors(FAnchors(0.0f, 0.0f));
	PanelSlot->SetAlignment(FVector2D(0.0f, 0.0f));
	PanelSlot->SetPosition(FVector2D(PanelSpec.PositionX, PanelSpec.PositionY));
	PanelSlot->SetSize(FVector2D(PanelSpec.Width, PanelSpec.Height));

	UVerticalBox* PanelBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), FName(*(SafePanelName + TEXT("_Box"))));
	PanelBorder->SetContent(PanelBox);

	if (!PanelSpec.TitleText.IsEmpty())
	{
		UTextBlock* TitleText = CreateHUDTextBlock(
			WidgetTree,
			FName(*(SafePanelName + TEXT("_Title"))),
			PanelSpec.TitleText,
			18,
			PanelSpec.AccentColor,
			ETextJustify::Left);

		UVerticalBoxSlot* TitleSlot = PanelBox->AddChildToVerticalBox(TitleText);
		TitleSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 8.0f));
	}

	for (int32 LineIndex = 0; LineIndex < PanelSpec.BodyLines.Num(); ++LineIndex)
	{
		UTextBlock* BodyText = CreateHUDTextBlock(
			WidgetTree,
			FName(*(SafePanelName + FString::Printf(TEXT("_Line_%02d"), LineIndex))),
			PanelSpec.BodyLines[LineIndex],
			15,
			FLinearColor(0.78f, 0.88f, 0.88f, 1.0f),
			ETextJustify::Left);

		UVerticalBoxSlot* BodySlot = PanelBox->AddChildToVerticalBox(BodyText);
		BodySlot->SetPadding(FMargin(0.0f, 2.0f, 0.0f, 2.0f));
	}
}

static UWidgetBlueprint* LoadWidgetBlueprintWithoutCompile(const FString& WidgetBlueprintPath, FString& OutError)
{
	using namespace UE::OrionProjectToolsets;

	const FString ObjectPath = NormalizeObjectPath(WidgetBlueprintPath);
	UObject* LoadedObject = StaticLoadObject(
		UWidgetBlueprint::StaticClass(),
		nullptr,
		*ObjectPath,
		nullptr,
		LOAD_NoWarn | LOAD_DisableCompileOnLoad);

	UWidgetBlueprint* WidgetBlueprint = Cast<UWidgetBlueprint>(LoadedObject);
	if (!WidgetBlueprint)
	{
		OutError = FString::Printf(TEXT("Failed to load WidgetBlueprint '%s' with compile-on-load disabled."), *ObjectPath);
	}
	return WidgetBlueprint;
}

static void GatherLiveWidgetVariableNames(UWidgetBlueprint* WidgetBlueprint, TSet<FName>& OutNames)
{
	if (!WidgetBlueprint)
	{
		return;
	}

	if (WidgetBlueprint->WidgetTree)
	{
		WidgetBlueprint->ForEachSourceWidget([&OutNames](const UWidget* Widget)
		{
			if (Widget && !Widget->GetFName().IsNone())
			{
				OutNames.Add(Widget->GetFName());
			}
		});
	}

	for (const UWidgetAnimation* Animation : WidgetBlueprint->Animations)
	{
		if (Animation && !Animation->GetFName().IsNone())
		{
			OutNames.Add(Animation->GetFName());
		}
	}
}
}

FOrionToolResult UOrionUMGToolset::AddArtTextTitle(
	const FString& WidgetBlueprintPath,
	const FString& TitleText,
	const FString& ParentWidgetName,
	const FString& ContainerWidgetName,
	float PositionX,
	float PositionY,
	float Width,
	float Height,
	int32 FontSize,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::UMG;

	FString Error;
	UWidgetBlueprint* WidgetBlueprint = LoadWidgetBlueprint(WidgetBlueprintPath, Error);
	if (!WidgetBlueprint)
	{
		return MakeResult(false, Error, WidgetBlueprintPath);
	}

	if (TitleText.IsEmpty())
	{
		return MakeResult(false, TEXT("TitleText is empty."), WidgetBlueprint->GetPathName());
	}

	UWidget* ParentWidget = FindParentWidget(WidgetBlueprint, ParentWidgetName, Error);
	UPanelWidget* ParentPanel = Cast<UPanelWidget>(ParentWidget);
	if (!ParentPanel)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("Parent widget is not a panel widget.") : Error, WidgetBlueprint->GetPathName());
	}

	const FString SafeContainerName = ContainerWidgetName.IsEmpty() ? TEXT("MCP_ArtTitle_EmberZone") : ContainerWidgetName;
	const FScopedTransaction Transaction(NSLOCTEXT("OrionUMGToolset", "AddArtTextTitle", "Add Art Text Title"));
	WidgetBlueprint->Modify();
	WidgetBlueprint->WidgetTree->Modify();
	ParentPanel->Modify();

	RemoveExistingWidget(WidgetBlueprint, SafeContainerName);

	UCanvasPanel* Container = WidgetBlueprint->WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName(*SafeContainerName));
	ParentPanel->AddChild(Container);
	ConfigureContainerSlot(Container, PositionX, PositionY, Width, Height);

	AddTitleLayer(
		WidgetBlueprint->WidgetTree,
		Container,
		FName(*(SafeContainerName + TEXT("_Glow"))),
		TitleText,
		Width,
		Height,
		FVector2D(4.0f, 7.0f),
		FontSize + 10,
		FLinearColor(1.0f, 0.18f, 0.02f, 0.34f),
		FVector2D(0.0f, 0.0f),
		FLinearColor(1.0f, 0.28f, 0.02f, 0.65f),
		-2.0f);

	AddTitleLayer(
		WidgetBlueprint->WidgetTree,
		Container,
		FName(*(SafeContainerName + TEXT("_Shadow"))),
		TitleText,
		Width,
		Height,
		FVector2D(7.0f, 9.0f),
		FontSize + 2,
		FLinearColor(0.05f, 0.01f, 0.005f, 0.92f),
		FVector2D(3.0f, 5.0f),
		FLinearColor(0.0f, 0.0f, 0.0f, 0.85f),
		-2.0f);

	AddTitleLayer(
		WidgetBlueprint->WidgetTree,
		Container,
		FName(*(SafeContainerName + TEXT("_WarmRim"))),
		TitleText,
		Width,
		Height,
		FVector2D(-3.0f, -3.0f),
		FontSize,
		FLinearColor(1.0f, 0.33f, 0.05f, 0.48f),
		FVector2D(1.0f, 2.0f),
		FLinearColor(0.58f, 0.07f, 0.01f, 0.70f),
		-2.0f);

	AddTitleLayer(
		WidgetBlueprint->WidgetTree,
		Container,
		FName(*(SafeContainerName + TEXT("_Main"))),
		TitleText,
		Width,
		Height,
		FVector2D(0.0f, 0.0f),
		FontSize,
		FLinearColor(1.0f, 0.78f, 0.36f, 1.0f),
		FVector2D(3.0f, 4.0f),
		FLinearColor(0.28f, 0.02f, 0.0f, 0.92f),
		-2.0f);

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(WidgetBlueprint);
	FKismetEditorUtilities::CompileBlueprint(WidgetBlueprint);

	if (WidgetBlueprint->Status == BS_Error)
	{
		return MakeResult(false, TEXT("Widget Blueprint compilation failed."), WidgetBlueprint->GetPathName());
	}

	if (bSave)
	{
		if (!SaveLoadedAsset(WidgetBlueprint, false, Error))
		{
			return MakeResult(false, Error, WidgetBlueprint->GetPathName());
		}
	}

	return MakeResult(true, TEXT("Art text title added."), WidgetBlueprint->GetPathName());
}

FOrionToolResult UOrionUMGToolset::ApplyThemedHUDLayout(
	const FString& WidgetBlueprintPath,
	const FString& ParentWidgetName,
	const FString& LayoutWidgetName,
	const TArray<FOrionUMGHUDPanelSpec>& Panels,
	bool bRemoveExistingLayout,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::UMG;

	FString Error;
	UWidgetBlueprint* WidgetBlueprint = LoadWidgetBlueprint(WidgetBlueprintPath, Error);
	if (!WidgetBlueprint)
	{
		return MakeResult(false, Error, WidgetBlueprintPath);
	}

	if (Panels.IsEmpty())
	{
		return MakeResult(false, TEXT("Panels array is empty."), WidgetBlueprint->GetPathName());
	}

	UWidget* ParentWidget = FindParentWidget(WidgetBlueprint, ParentWidgetName, Error);
	UPanelWidget* ParentPanel = Cast<UPanelWidget>(ParentWidget);
	if (!ParentPanel)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("Parent widget is not a panel widget.") : Error, WidgetBlueprint->GetPathName());
	}

	const FString SafeLayoutName = LayoutWidgetName.IsEmpty() ? TEXT("MCP_ThemedHUDLayout") : LayoutWidgetName;
	const FScopedTransaction Transaction(NSLOCTEXT("OrionUMGToolset", "ApplyThemedHUDLayout", "Apply Themed HUD Layout"));
	WidgetBlueprint->Modify();
	WidgetBlueprint->WidgetTree->Modify();
	ParentPanel->Modify();

	if (bRemoveExistingLayout)
	{
		RemoveExistingWidget(WidgetBlueprint, SafeLayoutName);
	}

	UCanvasPanel* LayoutCanvas = WidgetBlueprint->WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), FName(*SafeLayoutName));
	ParentPanel->AddChild(LayoutCanvas);

	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(LayoutCanvas->Slot))
	{
		CanvasSlot->SetAnchors(FAnchors(0.0f, 0.0f, 1.0f, 1.0f));
		CanvasSlot->SetOffsets(FMargin(0.0f));
	}

	for (int32 PanelIndex = 0; PanelIndex < Panels.Num(); ++PanelIndex)
	{
		AddThemedHUDPanel(WidgetBlueprint->WidgetTree, LayoutCanvas, Panels[PanelIndex], PanelIndex);
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(WidgetBlueprint);
	FKismetEditorUtilities::CompileBlueprint(WidgetBlueprint);

	if (WidgetBlueprint->Status == BS_Error)
	{
		return MakeResult(false, TEXT("Widget Blueprint compilation failed."), WidgetBlueprint->GetPathName());
	}

	if (bSave)
	{
		if (!SaveLoadedAsset(WidgetBlueprint, false, Error))
		{
			return MakeResult(false, Error, WidgetBlueprint->GetPathName());
		}
	}

	return MakeResult(true, FString::Printf(TEXT("Themed HUD layout applied with %d panel(s)."), Panels.Num()), WidgetBlueprint->GetPathName());
}

FOrionToolResult UOrionUMGToolset::RepairWidgetVariableGuidMap(const FString& WidgetBlueprintPath, bool bCompile, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::UMG;

	FString Error;
	UWidgetBlueprint* WidgetBlueprint = LoadWidgetBlueprintWithoutCompile(WidgetBlueprintPath, Error);
	if (!WidgetBlueprint)
	{
		return MakeResult(false, Error, WidgetBlueprintPath);
	}

	TSet<FName> LiveVariableNames;
	GatherLiveWidgetVariableNames(WidgetBlueprint, LiveVariableNames);

	TArray<FString> RemovedVariables;
	TArray<FString> RepairedVariables;
	TMap<FGuid, FName> GuidToVariableNameMap;
	bool bChanged = false;

	WidgetBlueprint->Modify();
	for (auto It = WidgetBlueprint->WidgetVariableNameToGuidMap.CreateIterator(); It; ++It)
	{
		const FName VariableName = It.Key();
		FGuid& VariableGuid = It.Value();

		if (!LiveVariableNames.Contains(VariableName))
		{
			RemovedVariables.Add(VariableName.ToString());
			It.RemoveCurrent();
			bChanged = true;
			continue;
		}

		if (!VariableGuid.IsValid() || GuidToVariableNameMap.Contains(VariableGuid))
		{
			VariableGuid = FGuid::NewGuid();
			RepairedVariables.Add(VariableName.ToString());
			bChanged = true;
		}

		GuidToVariableNameMap.Add(VariableGuid, VariableName);
	}

	for (const FName& VariableName : LiveVariableNames)
	{
		if (!WidgetBlueprint->WidgetVariableNameToGuidMap.Contains(VariableName))
		{
			WidgetBlueprint->WidgetVariableNameToGuidMap.Add(VariableName, FGuid::NewGuid());
			RepairedVariables.Add(VariableName.ToString());
			bChanged = true;
		}
	}

	if (!bChanged)
	{
		if (bSave)
		{
			if (!SaveLoadedAsset(WidgetBlueprint, false, Error))
			{
				return MakeResult(false, Error, WidgetBlueprint->GetPathName());
			}
		}
		return MakeResult(true, TEXT("Widget variable GUID map is already valid."), WidgetBlueprint->GetPathName());
	}

	FBlueprintEditorUtils::MarkBlueprintAsModified(WidgetBlueprint);
	WidgetBlueprint->MarkPackageDirty();

	if (bCompile)
	{
		FKismetEditorUtilities::CompileBlueprint(WidgetBlueprint);
		if (WidgetBlueprint->Status == BS_Error)
		{
			return MakeResult(false, TEXT("Widget variable GUID map repaired, but Widget Blueprint compilation failed."), WidgetBlueprint->GetPathName());
		}
	}

	if (bSave)
	{
		if (!SaveLoadedAsset(WidgetBlueprint, false, Error))
		{
			return MakeResult(false, Error, WidgetBlueprint->GetPathName());
		}
	}

	FString Message = FString::Printf(
		TEXT("Widget variable GUID map repaired. Removed %d stale variable(s), repaired or added %d GUID(s)."),
		RemovedVariables.Num(),
		RepairedVariables.Num());
	if (!RemovedVariables.IsEmpty())
	{
		Message += FString::Printf(TEXT(" Removed: %s."), *FString::Join(RemovedVariables, TEXT(", ")));
	}

	return MakeResult(true, Message, WidgetBlueprint->GetPathName());
}
