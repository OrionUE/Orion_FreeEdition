/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlayerManager.h"

#include "OrionPlayerAccount.h"
#include "GameModes/CoreExperienceManagerComponent.h"
#include "GameModes/OrionExperienceDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlayerManager)

UOrionPlayerManager::UOrionPlayerManager()
{
	bShouldCreateOnClient = false;
}

void UOrionPlayerManager::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	UCoreExperienceManagerComponent* ExperienceComponent = GetWorld()->GetGameState()->FindComponentByClass<UCoreExperienceManagerComponent>();
	check(ExperienceComponent);
	ExperienceComponent->CallOrRegister_OnExperienceLoaded_HighPriority(FOnCoreExperienceLoaded::FDelegate::CreateLambda([this](const UCoreExperienceDefinition* Experience)
	{
		PlayerAccountClass = Cast<UOrionExperienceDefinition>(Experience)->PlayerAccountClass;
	}));
}

void UOrionPlayerManager::RegisterPlayer(const FOrionPlayerID& InPlayerID)
{
	check(PlayerAccountClass);
	UOrionPlayerAccount* NewPlayer = NewObject<UOrionPlayerAccount>(this, PlayerAccountClass);

	PlayerAccountMap.Add(InPlayerID, NewPlayer);
	NewPlayer->Initialize(InPlayerID);
}

void UOrionPlayerManager::UnregisterPlayer(const FOrionPlayerID& InPlayerID)
{
	// Todo: 玩家退出后，存档系统应该删除该玩家，以免自动保存时仍会保存该玩家
	PlayerAccountMap.Remove(InPlayerID);
}
