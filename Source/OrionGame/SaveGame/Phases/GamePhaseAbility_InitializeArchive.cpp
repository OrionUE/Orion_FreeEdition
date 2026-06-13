/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GamePhaseAbility_InitializeArchive.h"

#include "GamePhaseAbility_StartAutoSave.h"
#include "GameModes/Phases/OrionGamePhaseSubsystem_Init.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/OrionArchiveContext.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GamePhaseAbility_InitializeArchive)

void UGamePhaseAbility_InitializeArchive::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	const UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);
	ArchiveManager = GameInstance->GetSubsystem<UOrionArchiveManagerSubsystem>();
	check(ArchiveManager.Get());

	CurrentArchive = ArchiveManager->CurrentOperationArchive;

#if WITH_EDITOR
	if (CurrentArchive == nullptr)
	{
		ArchiveManager->NewGame(nullptr);
		CurrentArchive = ArchiveManager->CurrentOperationArchive;
	}
#endif

	check(CurrentArchive.Get());

	// 初始化存档
	ArchiveManager->InitArchive();

	// 判断世界选项设置是否存在
	if (CurrentArchive->IsSavedOptionSettings())
	{
		StartAutoSave();
	}
	else
	{
		CurrentArchive->SaveByTypes({EOrionArchiveType::WorldOption});

		StartAutoSave();
	}
}

void UGamePhaseAbility_InitializeArchive::StartAutoSave()
{
	UOrionGamePhaseSubsystem_Init* PhaseSubsystem_Init = GetWorld()->GetSubsystem<UOrionGamePhaseSubsystem_Init>();
	check(PhaseSubsystem_Init);

	PhaseSubsystem_Init->StartPhase(UGamePhaseAbility_StartAutoSave::StaticClass());
}
