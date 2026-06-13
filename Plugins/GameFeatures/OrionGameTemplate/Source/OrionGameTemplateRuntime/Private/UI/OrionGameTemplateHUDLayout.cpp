/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI/OrionGameTemplateHUDLayout.h"

#include "Blueprint/WidgetTree.h"
#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Game/OrionGameTemplateGameplayComponent.h"
#include "Game/OrionGameTemplatePlayerGameplayComponent.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerController.h"
#include "Styling/SlateColor.h"
#include "UObject/SoftObjectPath.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateHUDLayout)

#define LOCTEXT_NAMESPACE "OrionGameTemplateHUD"

namespace
{
FText GetTemplateItemDisplayName(EOrionGameTemplateItemType ItemType)
{
	switch (ItemType)
	{
	case EOrionGameTemplateItemType::Wood:
		return LOCTEXT("ItemWood", "Wood");

	case EOrionGameTemplateItemType::Ore:
		return LOCTEXT("ItemOre", "Ore");

	case EOrionGameTemplateItemType::WildCrystal:
		return LOCTEXT("ItemWildCrystal", "Wild Crystal");

	case EOrionGameTemplateItemType::Ration:
		return LOCTEXT("ItemRation", "Ration");

	case EOrionGameTemplateItemType::BeaconCore:
		return LOCTEXT("ItemBeaconCore", "Beacon Core");

	default:
		return LOCTEXT("ItemUnknown", "Unknown");
	}
}
}

UOrionGameTemplateHUDLayout::UOrionGameTemplateHUDLayout(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InputConfig = EWidgetInputMode::GameAndMenu;
	EscapeMenuClass = TSoftClassPtr<UCommonActivatableWidget>(FSoftObjectPath(TEXT("/Game/UI/Menu/GameMenu/W_GameMenu.W_GameMenu_C")));
}

FOrionGameTemplateTeamState UOrionGameTemplateHUDLayout::GetTeamState() const
{
	if (const UOrionGameTemplateGameplayComponent* TemplateGame = FindTemplateGameComponent())
	{
		return TemplateGame->GetTeamState();
	}

	return CachedTeamState;
}

FOrionGameTemplatePlayerState UOrionGameTemplateHUDLayout::GetTemplatePlayerState() const
{
	if (const UOrionGameTemplatePlayerGameplayComponent* TemplatePlayer = FindTemplatePlayerComponent())
	{
		return TemplatePlayer->GetTemplatePlayerState();
	}

	return CachedTemplatePlayerState;
}

FText UOrionGameTemplateHUDLayout::GetObjectiveText() const
{
	const FOrionGameTemplateTeamState TeamState = GetTeamState();
	if (TeamState.bObjectiveComplete)
	{
		return LOCTEXT("ObjectiveComplete", "Beacon online - team extraction ready");
	}

	if (TeamState.bBeaconReady)
	{
		return LOCTEXT("ObjectiveBeaconReady", "Return to the workbench and craft the beacon");
	}

	return LOCTEXT("ObjectiveGather", "Gather, trade, build a camp, defeat cube guards, then power the beacon");
}

FText UOrionGameTemplateHUDLayout::GetInventorySummaryText() const
{
	const FOrionGameTemplatePlayerState PlayerState = GetTemplatePlayerState();
	if (PlayerState.Inventory.Num() == 0)
	{
		return LOCTEXT("InventoryEmpty", "Inventory: empty");
	}

	TArray<FString> InventoryEntries;
	for (const FOrionGameTemplateItemStack& ItemStack : PlayerState.Inventory)
	{
		if (ItemStack.Quantity <= 0)
		{
			continue;
		}

		InventoryEntries.Add(FString::Printf(TEXT("%s x%d"), *GetTemplateItemDisplayName(ItemStack.ItemType).ToString(), ItemStack.Quantity));
	}

	if (InventoryEntries.Num() == 0)
	{
		return LOCTEXT("InventoryEmptyAfterFilter", "Inventory: empty");
	}

	return FText::FromString(FString::Printf(TEXT("Inventory: %s"), *FString::Join(InventoryEntries, TEXT("  |  "))));
}

FText UOrionGameTemplateHUDLayout::GetPlayerProgressText() const
{
	const FOrionGameTemplatePlayerState PlayerState = GetTemplatePlayerState();
	return FText::Format(
		LOCTEXT("PlayerProgressFormat", "Level {0}   XP {1}/{2}   Credits {3}"),
		PlayerState.Progress.Level,
		PlayerState.Progress.Experience,
		PlayerState.Progress.ExperienceToNextLevel,
		PlayerState.Progress.Credits);
}

float UOrionGameTemplateHUDLayout::GetBeaconProgress() const
{
	const UOrionGameTemplateGameplayComponent* TemplateGame = FindTemplateGameComponent();
	if (!TemplateGame)
	{
		return 0.0f;
	}

	const FOrionGameTemplateTeamState TeamState = TemplateGame->GetTeamState();
	const float WoodProgress = static_cast<float>(TeamState.Wood) / FMath::Max(TemplateGame->GetWoodGoal(), 1);
	const float OreProgress = static_cast<float>(TeamState.Ore) / FMath::Max(TemplateGame->GetOreGoal(), 1);
	const float EnemyProgress = static_cast<float>(TeamState.EnemiesDefeated) / FMath::Max(TemplateGame->GetEnemyGoal(), 1);
	const float StructureProgress = static_cast<float>(TeamState.StructuresBuilt) / FMath::Max(TemplateGame->GetStructureGoal(), 1);
	const float TradeProgress = static_cast<float>(TeamState.TradesCompleted) / FMath::Max(TemplateGame->GetTradeGoal(), 1);
	return FMath::Clamp((WoodProgress + OreProgress + EnemyProgress + StructureProgress + TradeProgress) / 5.0f, 0.0f, 1.0f);
}

void UOrionGameTemplateHUDLayout::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	TryBindTemplateGameComponent();
	TryBindTemplatePlayerComponent();
}

void UOrionGameTemplateHUDLayout::NativeConstruct()
{
	Super::NativeConstruct();

	EnsureDemoHudWidgets();
	TryBindTemplateGameComponent();
	TryBindTemplatePlayerComponent();
	RefreshTeamStateWidgets();
	RefreshPlayerStateWidgets();
}

void UOrionGameTemplateHUDLayout::NativeDestruct()
{
	if (CachedTemplateGameComponent)
	{
		CachedTemplateGameComponent->OnTeamStateChanged.RemoveDynamic(this, &ThisClass::HandleTeamStateChanged);
		CachedTemplateGameComponent = nullptr;
	}

	if (CachedTemplatePlayerComponent)
	{
		CachedTemplatePlayerComponent->OnTemplatePlayerStateChanged.RemoveDynamic(this, &ThisClass::HandlePlayerStateChanged);
		CachedTemplatePlayerComponent = nullptr;
	}

	Super::NativeDestruct();
}

void UOrionGameTemplateHUDLayout::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	TryBindTemplateGameComponent();
	TryBindTemplatePlayerComponent();
	RefreshTeamStateWidgets();
	RefreshPlayerStateWidgets();
}

void UOrionGameTemplateHUDLayout::HandleTeamStateChanged(const FOrionGameTemplateTeamState& NewTeamState)
{
	CachedTeamState = NewTeamState;
	RefreshTeamStateWidgets();
	K2_OnTeamStateChanged(NewTeamState);
}

void UOrionGameTemplateHUDLayout::HandlePlayerStateChanged(const FOrionGameTemplatePlayerState& NewPlayerState)
{
	CachedTemplatePlayerState = NewPlayerState;
	RefreshPlayerStateWidgets();
	K2_OnPlayerStateChanged(NewPlayerState);
}

UOrionGameTemplateGameplayComponent* UOrionGameTemplateHUDLayout::FindTemplateGameComponent() const
{
	if (CachedTemplateGameComponent)
	{
		return CachedTemplateGameComponent;
	}

	const UWorld* World = GetWorld();
	const AGameStateBase* GameState = World ? World->GetGameState() : nullptr;
	return GameState ? GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>() : nullptr;
}

UOrionGameTemplatePlayerGameplayComponent* UOrionGameTemplateHUDLayout::FindTemplatePlayerComponent() const
{
	if (CachedTemplatePlayerComponent)
	{
		return CachedTemplatePlayerComponent;
	}

	const APlayerController* OwningPlayer = GetOwningPlayer();
	return OwningPlayer ? OwningPlayer->FindComponentByClass<UOrionGameTemplatePlayerGameplayComponent>() : nullptr;
}

void UOrionGameTemplateHUDLayout::TryBindTemplateGameComponent()
{
	if (CachedTemplateGameComponent)
	{
		return;
	}

	CachedTemplateGameComponent = FindTemplateGameComponent();
	if (CachedTemplateGameComponent)
	{
		CachedTeamState = CachedTemplateGameComponent->GetTeamState();
		CachedTemplateGameComponent->OnTeamStateChanged.AddDynamic(this, &ThisClass::HandleTeamStateChanged);
	}
}

void UOrionGameTemplateHUDLayout::TryBindTemplatePlayerComponent()
{
	if (CachedTemplatePlayerComponent)
	{
		return;
	}

	CachedTemplatePlayerComponent = FindTemplatePlayerComponent();
	if (CachedTemplatePlayerComponent)
	{
		CachedTemplatePlayerState = CachedTemplatePlayerComponent->GetTemplatePlayerState();
		CachedTemplatePlayerComponent->OnTemplatePlayerStateChanged.AddDynamic(this, &ThisClass::HandlePlayerStateChanged);
	}
}

void UOrionGameTemplateHUDLayout::EnsureDemoHudWidgets()
{
	if (bDemoHudWidgetsReady || !WidgetTree)
	{
		return;
	}

	UCanvasPanel* RootCanvas = FindOrCreateRootCanvas();
	if (!RootCanvas)
	{
		return;
	}

	UVerticalBox* ResourceBox = nullptr;
	UBorder* ResourcePanel = CreatePanelBorder(TEXT("DemoResourcePanel"), ResourceBox);
	AddCanvasChild(RootCanvas, ResourcePanel, FVector2D(48.0, 118.0), FVector2D(330.0, 210.0), FAnchors(0.0f, 0.0f), FVector2D(0.0, 0.0));
	ResourceBox->AddChildToVerticalBox(CreateLabelText(TEXT("DemoResourceTitle"), LOCTEXT("ResourceTitle", "TEAM CACHE"), 18, FLinearColor(0.32f, 0.92f, 0.82f, 1.0f)));
	WoodText = CreateLabelText(TEXT("DemoWoodText"), FText::GetEmpty(), 20, FLinearColor(0.92f, 0.78f, 0.42f, 1.0f));
	OreText = CreateLabelText(TEXT("DemoOreText"), FText::GetEmpty(), 20, FLinearColor(0.74f, 0.88f, 1.0f, 1.0f));
	EnemyText = CreateLabelText(TEXT("DemoEnemyText"), FText::GetEmpty(), 20, FLinearColor(1.0f, 0.55f, 0.42f, 1.0f));
	StructureText = CreateLabelText(TEXT("DemoStructureText"), FText::GetEmpty(), 20, FLinearColor(0.70f, 1.0f, 0.66f, 1.0f));
	TradeText = CreateLabelText(TEXT("DemoTradeText"), FText::GetEmpty(), 20, FLinearColor(0.88f, 0.74f, 1.0f, 1.0f));
	ResourceBox->AddChildToVerticalBox(WoodText);
	ResourceBox->AddChildToVerticalBox(OreText);
	ResourceBox->AddChildToVerticalBox(EnemyText);
	ResourceBox->AddChildToVerticalBox(StructureText);
	ResourceBox->AddChildToVerticalBox(TradeText);

	UVerticalBox* ObjectiveBox = nullptr;
	UBorder* ObjectivePanel = CreatePanelBorder(TEXT("DemoObjectivePanel"), ObjectiveBox);
	AddCanvasChild(RootCanvas, ObjectivePanel, FVector2D(-48.0, 38.0), FVector2D(540.0, 126.0), FAnchors(1.0f, 0.0f), FVector2D(1.0, 0.0));
	ObjectiveBox->AddChildToVerticalBox(CreateLabelText(TEXT("DemoObjectiveTitle"), LOCTEXT("ObjectiveTitle", "BEACON CONTRACT"), 18, FLinearColor(0.96f, 0.74f, 0.32f, 1.0f)));
	ObjectiveText = CreateLabelText(TEXT("DemoObjectiveText"), FText::GetEmpty(), 18, FLinearColor(0.91f, 0.96f, 0.92f, 1.0f));
	ObjectiveBox->AddChildToVerticalBox(ObjectiveText);
	BeaconProgressBar = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("DemoBeaconProgress"));
	BeaconProgressBar->SetFillColorAndOpacity(FLinearColor(0.16f, 0.86f, 0.68f, 1.0f));
	if (UVerticalBoxSlot* ProgressSlot = ObjectiveBox->AddChildToVerticalBox(BeaconProgressBar))
	{
		ProgressSlot->SetPadding(FMargin(0.0f, 8.0f, 0.0f, 0.0f));
	}

	UVerticalBox* PlayerBox = nullptr;
	UBorder* PlayerPanel = CreatePanelBorder(TEXT("DemoPlayerPanel"), PlayerBox);
	AddCanvasChild(RootCanvas, PlayerPanel, FVector2D(-48.0, -222.0), FVector2D(430.0, 160.0), FAnchors(1.0f, 1.0f), FVector2D(1.0, 1.0));
	PlayerBox->AddChildToVerticalBox(CreateLabelText(TEXT("DemoPlayerTitle"), LOCTEXT("PlayerTitle", "RANGER KIT"), 18, FLinearColor(0.32f, 0.92f, 0.82f, 1.0f)));
	PlayerProgressText = CreateLabelText(TEXT("DemoPlayerProgressText"), FText::GetEmpty(), 18, FLinearColor(0.96f, 0.88f, 0.55f, 1.0f));
	InventoryText = CreateLabelText(TEXT("DemoInventoryText"), FText::GetEmpty(), 16, FLinearColor(0.88f, 0.96f, 1.0f, 1.0f));
	PlayerBuildTradeText = CreateLabelText(TEXT("DemoPlayerBuildTradeText"), FText::GetEmpty(), 16, FLinearColor(0.78f, 1.0f, 0.72f, 1.0f));
	PlayerBox->AddChildToVerticalBox(PlayerProgressText);
	PlayerBox->AddChildToVerticalBox(InventoryText);
	PlayerBox->AddChildToVerticalBox(PlayerBuildTradeText);

	UVerticalBox* PartnerBox = nullptr;
	UBorder* PartnerPanel = CreatePanelBorder(TEXT("DemoPartnerPanel"), PartnerBox);
	AddCanvasChild(RootCanvas, PartnerPanel, FVector2D(48.0, -174.0), FVector2D(350.0, 126.0), FAnchors(0.0f, 1.0f), FVector2D(0.0, 1.0));
	PartnerBox->AddChildToVerticalBox(CreateLabelText(TEXT("DemoPartnerTitle"), LOCTEXT("PartnerTitle", "WILD PARTNER"), 18, FLinearColor(0.32f, 0.92f, 0.82f, 1.0f)));
	PalText = CreateLabelText(TEXT("DemoPalText"), FText::GetEmpty(), 19, FLinearColor(0.92f, 1.0f, 0.88f, 1.0f));
	HintText = CreateLabelText(TEXT("DemoHintText"), LOCTEXT("HintText", "Collect, trade at the bench, build a campfire, then submit the beacon."), 15, FLinearColor(0.72f, 0.82f, 0.86f, 1.0f));
	PartnerBox->AddChildToVerticalBox(PalText);
	PartnerBox->AddChildToVerticalBox(HintText);

	UHorizontalBox* SkillBar = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("DemoSkillBar"));
	AddCanvasChild(RootCanvas, SkillBar, FVector2D(0.0, -92.0), FVector2D(650.0, 64.0), FAnchors(0.5f, 1.0f), FVector2D(0.5, 1.0));
	const TArray<FText> SkillLabels =
	{
		LOCTEXT("AttackSkill", "LMB  Attack"),
		LOCTEXT("CollectSkill", "E  Collect"),
		LOCTEXT("BuildSkill", "B  Build"),
		LOCTEXT("TradeSkill", "R  Trade")
	};
	for (const FText& SkillLabel : SkillLabels)
	{
		UVerticalBox* SkillBox = nullptr;
		UBorder* SkillPanel = CreatePanelBorder(NAME_None, SkillBox);
		SkillBox->AddChildToVerticalBox(CreateLabelText(NAME_None, SkillLabel, 18, FLinearColor(0.98f, 0.83f, 0.46f, 1.0f)));
		if (UHorizontalBoxSlot* SkillSlot = SkillBar->AddChildToHorizontalBox(SkillPanel))
		{
			SkillSlot->SetPadding(FMargin(6.0f, 0.0f));
			SkillSlot->SetSize(FSlateChildSize(ESlateSizeRule::Fill));
		}
	}

	bDemoHudWidgetsReady = true;
}

UCanvasPanel* UOrionGameTemplateHUDLayout::FindOrCreateRootCanvas()
{
	if (!WidgetTree)
	{
		return nullptr;
	}

	if (UCanvasPanel* ExistingCanvas = Cast<UCanvasPanel>(WidgetTree->RootWidget))
	{
		return ExistingCanvas;
	}

	UCanvasPanel* RootCanvas = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RuntimeRootCanvas"));
	WidgetTree->RootWidget = RootCanvas;
	return RootCanvas;
}

UTextBlock* UOrionGameTemplateHUDLayout::CreateLabelText(FName WidgetName, const FText& Text, int32 FontSize, const FLinearColor& Color) const
{
	UTextBlock* TextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), WidgetName);
	TextBlock->SetText(Text);
	TextBlock->SetColorAndOpacity(FSlateColor(Color));
	TextBlock->SetShadowOffset(FVector2D(1.0, 1.0));
	TextBlock->SetShadowColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 0.75f));
	FSlateFontInfo Font = TextBlock->GetFont();
	Font.Size = FontSize;
	TextBlock->SetFont(Font);
	return TextBlock;
}

UBorder* UOrionGameTemplateHUDLayout::CreatePanelBorder(FName WidgetName, UVerticalBox*& OutBox) const
{
	UBorder* Border = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), WidgetName);
	Border->SetBrushColor(FLinearColor(0.018f, 0.056f, 0.060f, 0.82f));
	Border->SetPadding(FMargin(14.0f, 12.0f));

	OutBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), NAME_None);
	Border->SetContent(OutBox);
	return Border;
}

void UOrionGameTemplateHUDLayout::AddCanvasChild(UCanvasPanel* Canvas, UWidget* Child, const FVector2D& Position, const FVector2D& Size, const FAnchors& Anchors, const FVector2D& Alignment) const
{
	if (!Canvas || !Child)
	{
		return;
	}

	UCanvasPanelSlot* CanvasSlot = Canvas->AddChildToCanvas(Child);
	CanvasSlot->SetAnchors(Anchors);
	CanvasSlot->SetAlignment(Alignment);
	CanvasSlot->SetPosition(Position);
	CanvasSlot->SetSize(Size);
}

void UOrionGameTemplateHUDLayout::RefreshTeamStateWidgets()
{
	if (!bDemoHudWidgetsReady)
	{
		return;
	}

	const FOrionGameTemplateTeamState TeamState = GetTeamState();
	const UOrionGameTemplateGameplayComponent* TemplateGame = FindTemplateGameComponent();
	const int32 WoodGoal = TemplateGame ? TemplateGame->GetWoodGoal() : 8;
	const int32 OreGoal = TemplateGame ? TemplateGame->GetOreGoal() : 4;
	const int32 EnemyGoal = TemplateGame ? TemplateGame->GetEnemyGoal() : 3;
	const int32 StructureGoal = TemplateGame ? TemplateGame->GetStructureGoal() : 1;
	const int32 TradeGoal = TemplateGame ? TemplateGame->GetTradeGoal() : 1;

	if (WoodText)
	{
		WoodText->SetText(FText::Format(LOCTEXT("WoodFormat", "Wood: {0}/{1}"), TeamState.Wood, WoodGoal));
	}
	if (OreText)
	{
		OreText->SetText(FText::Format(LOCTEXT("OreFormat", "Ore: {0}/{1}"), TeamState.Ore, OreGoal));
	}
	if (EnemyText)
	{
		EnemyText->SetText(FText::Format(LOCTEXT("EnemyFormat", "Guards defeated: {0}/{1}"), TeamState.EnemiesDefeated, EnemyGoal));
	}
	if (StructureText)
	{
		StructureText->SetText(FText::Format(LOCTEXT("StructureFormat", "Structures built: {0}/{1}"), TeamState.StructuresBuilt, StructureGoal));
	}
	if (TradeText)
	{
		TradeText->SetText(FText::Format(LOCTEXT("TradeFormat", "Trades completed: {0}/{1}"), TeamState.TradesCompleted, TradeGoal));
	}
	if (PalText)
	{
		PalText->SetText(FText::Format(LOCTEXT("PalFormat", "Partners online: {0}"), TeamState.ActivePals));
	}
	if (ObjectiveText)
	{
		ObjectiveText->SetText(GetObjectiveText());
	}
	if (BeaconProgressBar)
	{
		BeaconProgressBar->SetPercent(GetBeaconProgress());
	}
}

void UOrionGameTemplateHUDLayout::RefreshPlayerStateWidgets()
{
	if (!bDemoHudWidgetsReady)
	{
		return;
	}

	const FOrionGameTemplatePlayerState PlayerState = GetTemplatePlayerState();
	if (PlayerProgressText)
	{
		PlayerProgressText->SetText(GetPlayerProgressText());
	}
	if (InventoryText)
	{
		InventoryText->SetText(GetInventorySummaryText());
	}
	if (PlayerBuildTradeText)
	{
		PlayerBuildTradeText->SetText(FText::Format(
			LOCTEXT("PlayerBuildTradeFormat", "Personal craft {0}   Trades {1}"),
			PlayerState.Progress.StructuresBuilt,
			PlayerState.Progress.TradesCompleted));
	}
}

#undef LOCTEXT_NAMESPACE
