/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GamePhaseAbility_StartAutoSave.h"

#include "SaveGame/OrionArchiveManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Messages/CoreVerbMessage.h"
#include "NativeGameplayTags.h"
#include "GameFramework/GameplayMessageSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GamePhaseAbility_StartAutoSave)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_System_Archive_AutoSave, "System.Archive.AutoSave");

void UGamePhaseAbility_StartAutoSave::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	const UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);
	ArchiveManager = GameInstance->GetSubsystem<UOrionArchiveManagerSubsystem>();
	check(ArchiveManager.Get());

	ArchiveManager->ClearUnusedArchives();

	const UWorld* World = GetWorld();
	World->GetTimerManager().SetTimer(AutoSaveTimerHandle, this, &ThisClass::OnAutoSave, AutoSaveTime, true);
}

void UGamePhaseAbility_StartAutoSave::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	const UWorld* World = GetWorld();
	World->GetTimerManager().ClearTimer(AutoSaveTimerHandle);
}

void UGamePhaseAbility_StartAutoSave::OnAutoSave()
{
	ArchiveManager->SaveCurrentArchiveByTypes({EOrionArchiveType::LevelMeta, EOrionArchiveType::Player});

	// 发送正在保存消息
	FCoreVerbMessage Message;
	Message.Verb = TAG_System_Archive_AutoSave;
	Message.Instigator = ArchiveManager.Get();

	UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(GetOuter());
	MessageSubsystem.BroadcastMessage(Message.Verb, Message);
}
