// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#include "Processor/GameplayVerbMessageReplication.h"

#include "GameFramework/GameplayMessageSubsystem.h"

//////////////////////////////////////////////////////////////////////
// FGameplayVerbMessageReplicationEntry
FString FGameplayVerbMessageReplicationEntry::GetDebugString() const
{
	return Message.ToString();
}

//////////////////////////////////////////////////////////////////////
// FGameplayVerbMessageReplication
void FGameplayVerbMessageReplication::AddMessage(const FGameplayVerbMessage& Message)
{
	FGameplayVerbMessageReplicationEntry& NewStack = CurrentMessages.Emplace_GetRef(Message);
	MarkItemDirty(NewStack);
}

void FGameplayVerbMessageReplication::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
}

void FGameplayVerbMessageReplication::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Index : AddedIndices)
	{
		const FGameplayVerbMessageReplicationEntry& Entry = CurrentMessages[Index];
		RebroadcastMessage(Entry.Message);
	}
}

void FGameplayVerbMessageReplication::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (const int32 Index : ChangedIndices)
	{
		const FGameplayVerbMessageReplicationEntry& Entry = CurrentMessages[Index];
		RebroadcastMessage(Entry.Message);
	}
}

void FGameplayVerbMessageReplication::RebroadcastMessage(const FGameplayVerbMessage& Message)
{
	check(Owner);
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(Owner);
	MessageSystem.BroadcastMessage(Message.Verb, Message);
}
