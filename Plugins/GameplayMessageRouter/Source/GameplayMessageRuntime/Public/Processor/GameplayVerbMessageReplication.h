// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "GameplayVerbMessage.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "GameplayVerbMessageReplication.generated.h"

struct FGameplayVerbMessageReplication;

/**
 * Represents one verb message
 */
USTRUCT(BlueprintType)
struct FGameplayVerbMessageReplicationEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FGameplayVerbMessageReplicationEntry()
	{}

	FGameplayVerbMessageReplicationEntry(const FGameplayVerbMessage& InMessage)
		: Message(InMessage)
	{
	}

	FString GetDebugString() const;

private:
	friend FGameplayVerbMessageReplication;

	UPROPERTY()
	FGameplayVerbMessage Message;
};

/** Container of verb messages to replicate */
USTRUCT(BlueprintType)
struct FGameplayVerbMessageReplication : public FFastArraySerializer
{
	GENERATED_BODY()

	FGameplayVerbMessageReplication()
	{
	}

public:
	void SetOwner(UObject* InOwner) { Owner = InOwner; }

	// Broadcasts a message from server to clients
	void AddMessage(const FGameplayVerbMessage& Message);

	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FGameplayVerbMessageReplicationEntry, FGameplayVerbMessageReplication>(CurrentMessages, DeltaParms, *this);
	}

private:
	void RebroadcastMessage(const FGameplayVerbMessage& Message);

private:
	// Replicated list of gameplay tag stacks
	UPROPERTY()
	TArray<FGameplayVerbMessageReplicationEntry> CurrentMessages;
	
	// Owner (for a route to a world)
	UPROPERTY()
	TObjectPtr<UObject> Owner = nullptr;
};

template<>
struct TStructOpsTypeTraits<FGameplayVerbMessageReplication> : public TStructOpsTypeTraitsBase2<FGameplayVerbMessageReplication>
{
	enum
	{
		WithNetDeltaSerializer = true,
	};
};
