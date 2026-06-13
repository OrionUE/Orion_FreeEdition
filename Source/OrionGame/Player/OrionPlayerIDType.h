/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamTypes.h"
#endif

#include "Net/Serialization/FastArraySerializer.h"

#include "OrionPlayerIDType.generated.h"

USTRUCT(BlueprintType)
struct ORIONGAME_API FOrionPlayerID : public FFastArraySerializerItem
{
	GENERATED_BODY()

public:
	FOrionPlayerID();

#if WITH_EDITOR
	FOrionPlayerID(const FString& InPlayerEditorID);
#endif

#if WITH_STEAM
	FOrionPlayerID(const FOrionSteamId& InPlayerSteamID);

	FOrionSteamId GetOrionSteamID() const;
#endif

	bool IsEmpty() const;
	FString ToString() const;
	bool operator==(const FOrionPlayerID& InPlayerID) const;

	friend inline uint32 GetTypeHash(const FOrionPlayerID& InPlayerID)
	{
		uint32 Hash = 0;

		Hash = HashCombine(Hash, GetTypeHash(InPlayerID.ToString()));

		return Hash;
	}

	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
	{
		Ar << PlayerID;
		bOutSuccess = true;
		return true;
	}

private:
	UPROPERTY()
	FString PlayerID;

#if WITH_EDITOR
	FString PlayerEditorID;
#endif

#if WITH_STEAM
	FOrionSteamId PlayerOrionSteamID;
#endif
};

template<>
struct TStructOpsTypeTraits<FOrionPlayerID> : public TStructOpsTypeTraitsBase2<FOrionPlayerID>
{
	enum
	{
		WithNetSerializer = true
	};
};

UCLASS()
class ORIONGAME_API UOrionPlayerIDUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FOrionPlayerID GetPlayerIDFromSteamID(const FString& InPlayerSteamID);
};
