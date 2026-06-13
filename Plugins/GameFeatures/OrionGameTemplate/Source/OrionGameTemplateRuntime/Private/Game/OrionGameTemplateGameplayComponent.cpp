/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplateGameplayComponent.h"

#include "EngineUtils.h"
#include "Game/OrionGameTemplateBuildable.h"
#include "Game/OrionGameTemplateEnemy.h"
#include "Game/OrionGameTemplatePal.h"
#include "Game/OrionGameTemplatePlayerGameplayComponent.h"
#include "Game/OrionGameTemplateResourceNode.h"
#include "Game/OrionGameTemplateWorkbench.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateGameplayComponent)

UOrionGameTemplateGameplayComponent::UOrionGameTemplateGameplayComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void UOrionGameTemplateGameplayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, TeamState);
}

void UOrionGameTemplateGameplayComponent::HandlePlayerReady(AController* PlayerController)
{
	if (GetOwnerRole() != ROLE_Authority || !PlayerController)
	{
		return;
	}

	EnsurePalForController(PlayerController);
}

bool UOrionGameTemplateGameplayComponent::TryCollectNearestResource(AController* PlayerController, float InteractionRange, EOrionGameTemplateResourceType& OutResourceType, int32& OutCollectedAmount)
{
	OutResourceType = EOrionGameTemplateResourceType::Wood;
	OutCollectedAmount = 0;

	if (GetOwnerRole() != ROLE_Authority || !PlayerController)
	{
		return false;
	}

	AOrionGameTemplateResourceNode* ResourceNode = FindNearestResource(PlayerController, InteractionRange);
	if (!ResourceNode || !ResourceNode->TryCollect(PlayerController, OutCollectedAmount))
	{
		return false;
	}

	OutResourceType = ResourceNode->GetResourceType();
	if (OutResourceType == EOrionGameTemplateResourceType::Wood)
	{
		TeamState.Wood += OutCollectedAmount;
	}
	else
	{
		TeamState.Ore += OutCollectedAmount;
	}

	if (UOrionGameTemplatePlayerGameplayComponent* PlayerGameplay = FindPlayerGameplayComponent(PlayerController))
	{
		PlayerGameplay->AddItem(
			OutResourceType == EOrionGameTemplateResourceType::Wood ? EOrionGameTemplateItemType::Wood : EOrionGameTemplateItemType::Ore,
			OutCollectedAmount);
		PlayerGameplay->GrantExperience(OutCollectedAmount * 5);
	}

	UpdateObjectiveReadiness();
	BroadcastTeamStateChanged();
	return true;
}

bool UOrionGameTemplateGameplayComponent::TryAttackNearestEnemy(AController* PlayerController, float AttackRange, float DamageAmount)
{
	if (GetOwnerRole() != ROLE_Authority || !PlayerController)
	{
		return false;
	}

	AOrionGameTemplateEnemy* Enemy = FindNearestEnemy(PlayerController, AttackRange);
	if (!Enemy)
	{
		return false;
	}

	const bool bDamaged = Enemy->ApplyTemplateDamage(PlayerController, DamageAmount);
	if (AOrionGameTemplatePal* Pal = FindPalForController(PlayerController))
	{
		Pal->AssistAttack(Enemy, PalAssistDamage);
	}

	return bDamaged;
}

bool UOrionGameTemplateGameplayComponent::TryInteractNearestWorkbench(AController* PlayerController, float InteractionRange)
{
	if (GetOwnerRole() != ROLE_Authority || !PlayerController)
	{
		return false;
	}

	AOrionGameTemplateWorkbench* Workbench = FindNearestWorkbench(PlayerController, InteractionRange);
	return Workbench ? Workbench->TrySubmitObjective(PlayerController) : false;
}

bool UOrionGameTemplateGameplayComponent::TryBuildStructure(AController* PlayerController, EOrionGameTemplateStructureType StructureType, float BuildRange)
{
	if (GetOwnerRole() != ROLE_Authority || !PlayerController)
	{
		return false;
	}

	UOrionGameTemplatePlayerGameplayComponent* PlayerGameplay = FindPlayerGameplayComponent(PlayerController);
	if (!PlayerGameplay)
	{
		return false;
	}

	const int32 WoodCost = StructureType == EOrionGameTemplateStructureType::Campfire ? 4 : 6;
	const int32 OreCost = StructureType == EOrionGameTemplateStructureType::Campfire ? 1 : 3;
	if (PlayerGameplay->GetItemQuantity(EOrionGameTemplateItemType::Wood) < WoodCost ||
		PlayerGameplay->GetItemQuantity(EOrionGameTemplateItemType::Ore) < OreCost)
	{
		return false;
	}

	TSubclassOf<AOrionGameTemplateBuildable> BuildableSpawnClass = BuildableClass;
	if (!BuildableSpawnClass)
	{
		BuildableSpawnClass = AOrionGameTemplateBuildable::StaticClass();
	}

	const FVector BuildLocation = GetBuildLocation(PlayerController);
	const FVector SourceLocation = GetControllerLocation(PlayerController);
	if (FVector::DistSquared(SourceLocation, BuildLocation) > FMath::Square(BuildRange))
	{
		return false;
	}

	AOrionGameTemplateBuildable* Buildable = GetWorld()->SpawnActor<AOrionGameTemplateBuildable>(BuildableSpawnClass, BuildLocation, FRotator::ZeroRotator);
	if (!Buildable)
	{
		return false;
	}

	PlayerGameplay->RemoveItem(EOrionGameTemplateItemType::Wood, WoodCost);
	PlayerGameplay->RemoveItem(EOrionGameTemplateItemType::Ore, OreCost);
	PlayerGameplay->NotifyStructureBuilt();
	PlayerGameplay->GrantExperience(24);

	Buildable->InitializeBuildable(StructureType, PlayerController->PlayerState);

	TeamState.StructuresBuilt += 1;
	UpdateObjectiveReadiness();
	BroadcastTeamStateChanged();
	return true;
}

bool UOrionGameTemplateGameplayComponent::TryTradeNearestWorkbench(AController* PlayerController, EOrionGameTemplateTradeOfferType TradeOfferType, float InteractionRange)
{
	if (GetOwnerRole() != ROLE_Authority || !PlayerController || !FindNearestWorkbench(PlayerController, InteractionRange))
	{
		return false;
	}

	UOrionGameTemplatePlayerGameplayComponent* PlayerGameplay = FindPlayerGameplayComponent(PlayerController);
	if (!PlayerGameplay)
	{
		return false;
	}

	bool bTradeCompleted = false;
	switch (TradeOfferType)
	{
	case EOrionGameTemplateTradeOfferType::SellWood:
		if (PlayerGameplay->RemoveItem(EOrionGameTemplateItemType::Wood, 3))
		{
			PlayerGameplay->AddCredits(6);
			PlayerGameplay->GrantExperience(8);
			bTradeCompleted = true;
		}
		break;

	case EOrionGameTemplateTradeOfferType::SellOre:
		if (PlayerGameplay->RemoveItem(EOrionGameTemplateItemType::Ore, 2))
		{
			PlayerGameplay->AddCredits(8);
			PlayerGameplay->GrantExperience(10);
			bTradeCompleted = true;
		}
		break;

	case EOrionGameTemplateTradeOfferType::BuyRation:
		if (PlayerGameplay->SpendCredits(5))
		{
			PlayerGameplay->AddItem(EOrionGameTemplateItemType::Ration, 1);
			PlayerGameplay->GrantExperience(5);
			bTradeCompleted = true;
		}
		break;

	case EOrionGameTemplateTradeOfferType::BuyBeaconCore:
		if (PlayerGameplay->SpendCredits(12))
		{
			PlayerGameplay->AddItem(EOrionGameTemplateItemType::BeaconCore, 1);
			PlayerGameplay->GrantExperience(12);
			bTradeCompleted = true;
		}
		break;

	default:
		break;
	}

	if (!bTradeCompleted)
	{
		return false;
	}

	PlayerGameplay->NotifyTradeCompleted();
	TeamState.TradesCompleted += 1;
	UpdateObjectiveReadiness();
	BroadcastTeamStateChanged();
	return true;
}

bool UOrionGameTemplateGameplayComponent::TrySubmitBeacon(AOrionGameTemplateWorkbench* Workbench, AController* PlayerController)
{
	if (GetOwnerRole() != ROLE_Authority || !Workbench || !PlayerController || !TeamState.bBeaconReady || TeamState.bObjectiveComplete)
	{
		return false;
	}

	TeamState.bObjectiveComplete = true;
	if (UOrionGameTemplatePlayerGameplayComponent* PlayerGameplay = FindPlayerGameplayComponent(PlayerController))
	{
		PlayerGameplay->GrantExperience(75);
		PlayerGameplay->AddCredits(10);
	}
	BroadcastTeamStateChanged();
	return true;
}

void UOrionGameTemplateGameplayComponent::NotifyEnemyDefeated(AOrionGameTemplateEnemy* Enemy, AController* InstigatorController)
{
	if (GetOwnerRole() != ROLE_Authority || !Enemy)
	{
		return;
	}

	TeamState.EnemiesDefeated += 1;
	if (UOrionGameTemplatePlayerGameplayComponent* PlayerGameplay = FindPlayerGameplayComponent(InstigatorController))
	{
		PlayerGameplay->AddItem(EOrionGameTemplateItemType::WildCrystal, 1);
		PlayerGameplay->AddCredits(3);
		PlayerGameplay->GrantExperience(35);
	}

	UpdateObjectiveReadiness();
	BroadcastTeamStateChanged();
}

void UOrionGameTemplateGameplayComponent::OnRep_TeamState()
{
	BroadcastTeamStateChanged();
}

void UOrionGameTemplateGameplayComponent::UpdateObjectiveReadiness()
{
	TeamState.bBeaconReady =
		TeamState.Wood >= WoodGoal &&
		TeamState.Ore >= OreGoal &&
		TeamState.EnemiesDefeated >= EnemyGoal &&
		TeamState.StructuresBuilt >= StructureGoal &&
		TeamState.TradesCompleted >= TradeGoal;
}

void UOrionGameTemplateGameplayComponent::BroadcastTeamStateChanged()
{
	OnTeamStateChanged.Broadcast(TeamState);

	if (AActor* OwnerActor = GetOwner())
	{
		OwnerActor->ForceNetUpdate();
	}
}

AOrionGameTemplateResourceNode* UOrionGameTemplateGameplayComponent::FindNearestResource(AController* PlayerController, float InteractionRange) const
{
	AOrionGameTemplateResourceNode* BestResource = nullptr;
	float BestDistanceSq = FMath::Square(InteractionRange);
	const FVector SourceLocation = GetControllerLocation(PlayerController);

	for (TActorIterator<AOrionGameTemplateResourceNode> It(GetWorld()); It; ++It)
	{
		AOrionGameTemplateResourceNode* ResourceNode = *It;
		if (!ResourceNode || !ResourceNode->IsAvailable())
		{
			continue;
		}

		const float DistanceSq = FVector::DistSquared(SourceLocation, ResourceNode->GetActorLocation());
		if (DistanceSq <= BestDistanceSq)
		{
			BestDistanceSq = DistanceSq;
			BestResource = ResourceNode;
		}
	}

	return BestResource;
}

AOrionGameTemplateEnemy* UOrionGameTemplateGameplayComponent::FindNearestEnemy(AController* PlayerController, float AttackRange) const
{
	AOrionGameTemplateEnemy* BestEnemy = nullptr;
	float BestDistanceSq = FMath::Square(AttackRange);
	const FVector SourceLocation = GetControllerLocation(PlayerController);

	for (TActorIterator<AOrionGameTemplateEnemy> It(GetWorld()); It; ++It)
	{
		AOrionGameTemplateEnemy* Enemy = *It;
		if (!Enemy || !Enemy->IsAlive())
		{
			continue;
		}

		const float DistanceSq = FVector::DistSquared(SourceLocation, Enemy->GetActorLocation());
		if (DistanceSq <= BestDistanceSq)
		{
			BestDistanceSq = DistanceSq;
			BestEnemy = Enemy;
		}
	}

	return BestEnemy;
}

AOrionGameTemplateWorkbench* UOrionGameTemplateGameplayComponent::FindNearestWorkbench(AController* PlayerController, float InteractionRange) const
{
	AOrionGameTemplateWorkbench* BestWorkbench = nullptr;
	float BestDistanceSq = FMath::Square(InteractionRange);
	const FVector SourceLocation = GetControllerLocation(PlayerController);

	for (TActorIterator<AOrionGameTemplateWorkbench> It(GetWorld()); It; ++It)
	{
		AOrionGameTemplateWorkbench* Workbench = *It;
		if (!Workbench || Workbench->IsSubmitted())
		{
			continue;
		}

		const float DistanceSq = FVector::DistSquared(SourceLocation, Workbench->GetActorLocation());
		if (DistanceSq <= BestDistanceSq)
		{
			BestDistanceSq = DistanceSq;
			BestWorkbench = Workbench;
		}
	}

	return BestWorkbench;
}

AOrionGameTemplatePal* UOrionGameTemplateGameplayComponent::FindPalForController(AController* PlayerController) const
{
	if (!PlayerController)
	{
		return nullptr;
	}

	const APlayerState* PlayerState = PlayerController->PlayerState;
	for (AOrionGameTemplatePal* Pal : SpawnedPals)
	{
		if (Pal && Pal->GetOwnerPlayerState() == PlayerState)
		{
			return Pal;
		}
	}

	return nullptr;
}

AOrionGameTemplatePal* UOrionGameTemplateGameplayComponent::EnsurePalForController(AController* PlayerController)
{
	SpawnedPals.RemoveAll([](const AOrionGameTemplatePal* Pal)
	{
		return !IsValid(Pal);
	});

	if (AOrionGameTemplatePal* ExistingPal = FindPalForController(PlayerController))
	{
		const int32 PreviousActivePals = TeamState.ActivePals;
		TeamState.ActivePals = SpawnedPals.Num();
		if (PreviousActivePals != TeamState.ActivePals)
		{
			BroadcastTeamStateChanged();
		}
		return ExistingPal;
	}

	TSubclassOf<AOrionGameTemplatePal> PalSpawnClass = PalClass;
	if (!PalSpawnClass)
	{
		PalSpawnClass = AOrionGameTemplatePal::StaticClass();
	}

	const FVector SpawnLocation = GetControllerLocation(PlayerController) + FVector(120.0f, 90.0f, 60.0f);
	AOrionGameTemplatePal* Pal = GetWorld()->SpawnActor<AOrionGameTemplatePal>(PalSpawnClass, SpawnLocation, FRotator::ZeroRotator);
	if (Pal)
	{
		Pal->InitializePal(PlayerController);
		SpawnedPals.Add(Pal);
		TeamState.ActivePals = SpawnedPals.Num();
		BroadcastTeamStateChanged();
	}

	return Pal;
}

UOrionGameTemplatePlayerGameplayComponent* UOrionGameTemplateGameplayComponent::FindPlayerGameplayComponent(AController* PlayerController) const
{
	return PlayerController ? PlayerController->FindComponentByClass<UOrionGameTemplatePlayerGameplayComponent>() : nullptr;
}

FVector UOrionGameTemplateGameplayComponent::GetControllerLocation(AController* PlayerController) const
{
	if (!PlayerController)
	{
		return FVector::ZeroVector;
	}

	if (const APawn* Pawn = PlayerController->GetPawn())
	{
		return Pawn->GetActorLocation();
	}

	return FVector::ZeroVector;
}

FVector UOrionGameTemplateGameplayComponent::GetBuildLocation(AController* PlayerController) const
{
	if (!PlayerController)
	{
		return FVector::ZeroVector;
	}

	if (const APawn* Pawn = PlayerController->GetPawn())
	{
		const FVector Forward = Pawn->GetActorForwardVector().GetSafeNormal();
		return Pawn->GetActorLocation() + Forward * 260.0f + FVector(0.0f, 0.0f, 35.0f);
	}

	return GetControllerLocation(PlayerController);
}
