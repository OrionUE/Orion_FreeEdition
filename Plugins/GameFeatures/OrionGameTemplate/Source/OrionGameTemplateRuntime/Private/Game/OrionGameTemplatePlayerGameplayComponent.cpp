/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplatePlayerGameplayComponent.h"

#include "Game/OrionGameTemplateGameplayComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Player/CorePlayerController.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplatePlayerGameplayComponent)

UOrionGameTemplatePlayerGameplayComponent::UOrionGameTemplatePlayerGameplayComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void UOrionGameTemplatePlayerGameplayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, TemplatePlayerState);
}

int32 UOrionGameTemplatePlayerGameplayComponent::GetItemQuantity(EOrionGameTemplateItemType ItemType) const
{
	const int32 StackIndex = FindInventoryStackIndex(ItemType);
	return TemplatePlayerState.Inventory.IsValidIndex(StackIndex) ? TemplatePlayerState.Inventory[StackIndex].Quantity : 0;
}

bool UOrionGameTemplatePlayerGameplayComponent::AddItem(EOrionGameTemplateItemType ItemType, int32 Quantity)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || Quantity <= 0)
	{
		return false;
	}

	const int32 StackIndex = FindInventoryStackIndex(ItemType);
	if (TemplatePlayerState.Inventory.IsValidIndex(StackIndex))
	{
		TemplatePlayerState.Inventory[StackIndex].Quantity += Quantity;
	}
	else
	{
		FOrionGameTemplateItemStack NewStack;
		NewStack.ItemType = ItemType;
		NewStack.Quantity = Quantity;
		TemplatePlayerState.Inventory.Add(NewStack);
	}

	BroadcastTemplatePlayerStateChanged();
	return true;
}

bool UOrionGameTemplatePlayerGameplayComponent::RemoveItem(EOrionGameTemplateItemType ItemType, int32 Quantity)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || Quantity <= 0)
	{
		return false;
	}

	const int32 StackIndex = FindInventoryStackIndex(ItemType);
	if (!TemplatePlayerState.Inventory.IsValidIndex(StackIndex) || TemplatePlayerState.Inventory[StackIndex].Quantity < Quantity)
	{
		return false;
	}

	TemplatePlayerState.Inventory[StackIndex].Quantity -= Quantity;
	if (TemplatePlayerState.Inventory[StackIndex].Quantity <= 0)
	{
		TemplatePlayerState.Inventory.RemoveAt(StackIndex);
	}

	BroadcastTemplatePlayerStateChanged();
	return true;
}

void UOrionGameTemplatePlayerGameplayComponent::AddCredits(int32 Credits)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || Credits <= 0)
	{
		return;
	}

	TemplatePlayerState.Progress.Credits += Credits;
	BroadcastTemplatePlayerStateChanged();
}

bool UOrionGameTemplatePlayerGameplayComponent::SpendCredits(int32 Credits)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || Credits <= 0 || TemplatePlayerState.Progress.Credits < Credits)
	{
		return false;
	}

	TemplatePlayerState.Progress.Credits -= Credits;
	BroadcastTemplatePlayerStateChanged();
	return true;
}

void UOrionGameTemplatePlayerGameplayComponent::GrantExperience(int32 ExperienceAmount)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || ExperienceAmount <= 0)
	{
		return;
	}

	TemplatePlayerState.Progress.Experience += ExperienceAmount;
	while (TemplatePlayerState.Progress.Experience >= TemplatePlayerState.Progress.ExperienceToNextLevel)
	{
		TemplatePlayerState.Progress.Experience -= TemplatePlayerState.Progress.ExperienceToNextLevel;
		TemplatePlayerState.Progress.Level += 1;
		TemplatePlayerState.Progress.Credits += 5;
		TemplatePlayerState.Progress.ExperienceToNextLevel = 100 + (TemplatePlayerState.Progress.Level - 1) * 50;
	}

	BroadcastTemplatePlayerStateChanged();
}

void UOrionGameTemplatePlayerGameplayComponent::NotifyStructureBuilt()
{
	if (!GetOwner() || !GetOwner()->HasAuthority())
	{
		return;
	}

	TemplatePlayerState.Progress.StructuresBuilt += 1;
	BroadcastTemplatePlayerStateChanged();
}

void UOrionGameTemplatePlayerGameplayComponent::NotifyTradeCompleted()
{
	if (!GetOwner() || !GetOwner()->HasAuthority())
	{
		return;
	}

	TemplatePlayerState.Progress.TradesCompleted += 1;
	BroadcastTemplatePlayerStateChanged();
}

void UOrionGameTemplatePlayerGameplayComponent::ServerRequestBuild_Implementation(EOrionGameTemplateStructureType StructureType)
{
	if (AGameStateBase* GameState = GetWorld() ? GetWorld()->GetGameState() : nullptr)
	{
		if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
		{
			TemplateGame->TryBuildStructure(PlayerController.Get(), StructureType, 520.0f);
		}
	}
}

void UOrionGameTemplatePlayerGameplayComponent::ServerRequestTrade_Implementation(EOrionGameTemplateTradeOfferType TradeOfferType)
{
	if (AGameStateBase* GameState = GetWorld() ? GetWorld()->GetGameState() : nullptr)
	{
		if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
		{
			TemplateGame->TryTradeNearestWorkbench(PlayerController.Get(), TradeOfferType, 420.0f);
		}
	}
}

void UOrionGameTemplatePlayerGameplayComponent::OnPlayerInitialized()
{
	Super::OnPlayerInitialized();

	if (GetOwner() && GetOwner()->HasAuthority())
	{
		InitializeDefaultPlayerState();

		if (AGameStateBase* GameState = GetWorld()->GetGameState())
		{
			if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
			{
				TemplateGame->HandlePlayerReady(PlayerController.Get());
			}
		}
	}

	SetPlayerInitializationCompleted();
}

void UOrionGameTemplatePlayerGameplayComponent::OnPlayerLogout()
{
	// Intentionally skip Super: the base implementation dispatches a Blueprint
	// event, which can be unsafe while PIE multiplayer worlds are tearing down.
}

void UOrionGameTemplatePlayerGameplayComponent::OnRep_TemplatePlayerState()
{
	BroadcastTemplatePlayerStateChanged();
}

void UOrionGameTemplatePlayerGameplayComponent::InitializeDefaultPlayerState()
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || TemplatePlayerState.Inventory.Num() > 0 || TemplatePlayerState.Progress.Credits > 0)
	{
		return;
	}

	TemplatePlayerState.Progress.Level = 1;
	TemplatePlayerState.Progress.Experience = 0;
	TemplatePlayerState.Progress.ExperienceToNextLevel = 100;
	TemplatePlayerState.Progress.Credits = 8;

	FOrionGameTemplateItemStack RationStack;
	RationStack.ItemType = EOrionGameTemplateItemType::Ration;
	RationStack.Quantity = 1;
	TemplatePlayerState.Inventory.Add(RationStack);

	BroadcastTemplatePlayerStateChanged();
}

void UOrionGameTemplatePlayerGameplayComponent::BroadcastTemplatePlayerStateChanged()
{
	OnTemplatePlayerStateChanged.Broadcast(TemplatePlayerState);

	if (AActor* OwnerActor = GetOwner())
	{
		OwnerActor->ForceNetUpdate();
	}
}

int32 UOrionGameTemplatePlayerGameplayComponent::FindInventoryStackIndex(EOrionGameTemplateItemType ItemType) const
{
	for (int32 Index = 0; Index < TemplatePlayerState.Inventory.Num(); ++Index)
	{
		if (TemplatePlayerState.Inventory[Index].ItemType == ItemType)
		{
			return Index;
		}
	}

	return INDEX_NONE;
}
