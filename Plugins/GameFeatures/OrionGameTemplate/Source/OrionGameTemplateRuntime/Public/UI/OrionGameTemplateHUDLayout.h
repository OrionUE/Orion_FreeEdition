/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Math/MathFwd.h"
#include "GameHUDLayout.h"
#include "Game/OrionGameTemplateTypes.h"

#include "OrionGameTemplateHUDLayout.generated.h"

class UOrionGameTemplateGameplayComponent;
class UOrionGameTemplatePlayerGameplayComponent;
class UBorder;
class UCanvasPanel;
class UProgressBar;
class UTextBlock;
class UVerticalBox;
class UWidget;
struct FAnchors;
struct FGeometry;
struct FLinearColor;

UCLASS(Blueprintable, Meta=(DisplayName="Orion Game Template HUD Layout"))
class UOrionGameTemplateHUDLayout : public UGameHUDLayout
{
	GENERATED_BODY()

public:
	UOrionGameTemplateHUDLayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	FOrionGameTemplateTeamState GetTeamState() const;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	FOrionGameTemplatePlayerState GetTemplatePlayerState() const;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	FText GetObjectiveText() const;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	FText GetInventorySummaryText() const;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	FText GetPlayerProgressText() const;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|UI")
	float GetBeaconProgress() const;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION()
	void HandleTeamStateChanged(const FOrionGameTemplateTeamState& NewTeamState);

	UFUNCTION()
	void HandlePlayerStateChanged(const FOrionGameTemplatePlayerState& NewPlayerState);

	UFUNCTION(BlueprintImplementableEvent, Category="OrionGameTemplate|UI", DisplayName="On Team State Changed")
	void K2_OnTeamStateChanged(const FOrionGameTemplateTeamState& NewTeamState);

	UFUNCTION(BlueprintImplementableEvent, Category="OrionGameTemplate|UI", DisplayName="On Player State Changed")
	void K2_OnPlayerStateChanged(const FOrionGameTemplatePlayerState& NewPlayerState);

	UOrionGameTemplateGameplayComponent* FindTemplateGameComponent() const;
	UOrionGameTemplatePlayerGameplayComponent* FindTemplatePlayerComponent() const;
	void TryBindTemplateGameComponent();
	void TryBindTemplatePlayerComponent();
	void EnsureDemoHudWidgets();
	void RefreshTeamStateWidgets();
	void RefreshPlayerStateWidgets();
	UCanvasPanel* FindOrCreateRootCanvas();
	UTextBlock* CreateLabelText(FName WidgetName, const FText& Text, int32 FontSize, const FLinearColor& Color) const;
	UBorder* CreatePanelBorder(FName WidgetName, UVerticalBox*& OutBox) const;
	void AddCanvasChild(UCanvasPanel* Canvas, UWidget* Child, const FVector2D& Position, const FVector2D& Size, const FAnchors& Anchors, const FVector2D& Alignment) const;

protected:
	UPROPERTY(Transient, BlueprintReadOnly, Category="OrionGameTemplate|UI")
	FOrionGameTemplateTeamState CachedTeamState;

	UPROPERTY(Transient, BlueprintReadOnly, Category="OrionGameTemplate|UI")
	FOrionGameTemplatePlayerState CachedTemplatePlayerState;

	UPROPERTY(Transient)
	TObjectPtr<UOrionGameTemplateGameplayComponent> CachedTemplateGameComponent;

	UPROPERTY(Transient)
	TObjectPtr<UOrionGameTemplatePlayerGameplayComponent> CachedTemplatePlayerComponent;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> WoodText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> OreText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> EnemyText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> StructureText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> TradeText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> PalText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> PlayerProgressText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> InventoryText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> PlayerBuildTradeText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> ObjectiveText;

	UPROPERTY(Transient)
	TObjectPtr<UTextBlock> HintText;

	UPROPERTY(Transient)
	TObjectPtr<UProgressBar> BeaconProgressBar;

	bool bDemoHudWidgetsReady = false;
};
