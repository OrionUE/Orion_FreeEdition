/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GamePhaseAbility_InitializeArchive.h"

#include "GamePhaseAbility_StartAutoSave.h"
#include "GameModes/Phases/OrionGamePhaseSubsystem_Init.h"
#include "Kismet/GameplayStatics.h"
#include "OrionLogChannels.h"
#include "SaveGame/OrionArchiveContext.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GamePhaseAbility_InitializeArchive)

void UGamePhaseAbility_InitializeArchive::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	const UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);
	if (!ensure(GameInstance))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);
		return;
	}

	ArchiveManager = GameInstance->GetSubsystem<UOrionArchiveManagerSubsystem>();
	if (!ensure(ArchiveManager.Get()))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);
		return;
	}

	CurrentArchive = ArchiveManager->CurrentOperationArchive;

	if (CurrentArchive == nullptr)
	{
		UE_LOG(LogOrion, Warning, TEXT("Archive initialization started without a current archive. Creating a runtime archive for world '%s'."),
			*GetPathNameSafe(GetWorld()));
		ArchiveManager->NewGame(nullptr);
		CurrentArchive = ArchiveManager->CurrentOperationArchive;
	}

	if (!ensure(CurrentArchive.Get()))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);
		return;
	}

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
