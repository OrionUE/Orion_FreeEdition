/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Game/OrionGameTemplateTypes.h"
#include "Player/OrionPlayerGameplayComponent.h"

#include "OrionGameTemplatePlayerGameplayComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOrionGameTemplatePlayerGameplayComponent : public UOrionPlayerGameplayComponent
{
	GENERATED_BODY()

public:
	UOrionGameTemplatePlayerGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Player")
	const FOrionGameTemplatePlayerState& GetTemplatePlayerState() const { return TemplatePlayerState; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Player")
	int32 GetItemQuantity(EOrionGameTemplateItemType ItemType) const;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	bool AddItem(EOrionGameTemplateItemType ItemType, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	bool RemoveItem(EOrionGameTemplateItemType ItemType, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	void AddCredits(int32 Credits);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	bool SpendCredits(int32 Credits);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	void GrantExperience(int32 ExperienceAmount);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	void NotifyStructureBuilt();

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Player")
	void NotifyTradeCompleted();

	UFUNCTION(Server, Reliable, BlueprintCallable, Category="OrionGameTemplate|Player")
	void ServerRequestBuild(EOrionGameTemplateStructureType StructureType);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category="OrionGameTemplate|Player")
	void ServerRequestTrade(EOrionGameTemplateTradeOfferType TradeOfferType);

	UPROPERTY(BlueprintAssignable, Category="OrionGameTemplate|Player")
	FOrionGameTemplatePlayerStateChanged OnTemplatePlayerStateChanged;

protected:
	virtual void OnPlayerInitialized() override;
	virtual void OnPlayerLogout() override;

	UFUNCTION()
	void OnRep_TemplatePlayerState();

	void InitializeDefaultPlayerState();
	void BroadcastTemplatePlayerStateChanged();
	int32 FindInventoryStackIndex(EOrionGameTemplateItemType ItemType) const;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_TemplatePlayerState, BlueprintReadOnly, Category="OrionGameTemplate|Player")
	FOrionGameTemplatePlayerState TemplatePlayerState;
};
