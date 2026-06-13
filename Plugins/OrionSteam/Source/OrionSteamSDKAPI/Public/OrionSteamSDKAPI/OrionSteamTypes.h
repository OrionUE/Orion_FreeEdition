/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/SteamTypes.h"
#include "SteamFriends/SteamFriendsTypes.h"

#include "OrionSteamTypes.generated.h"

USTRUCT(BlueprintType)
struct ORIONSTEAMSDKAPI_API FOrionSteamId
{
	GENERATED_BODY()

public:
	FOrionSteamId()
		: Value(TEXT("0"))
	{
	}

	explicit FOrionSteamId(const FString& InValue)
		: Value(InValue)
	{
	}

	explicit FOrionSteamId(uint64 InValue)
		: Value(LexToString(InValue))
	{
	}

	explicit FOrionSteamId(const FSteamID& InSteamId)
		: Value(LexToString(InSteamId.GetValue()))
	{
	}

	FString ToString() const
	{
		return Value;
	}

	uint64 ToUint64() const
	{
		return FCString::Strtoui64(*Value, nullptr, 10);
	}

	FSteamID ToSteamID() const
	{
		return FSteamID(ToUint64());
	}

	bool IsValid() const
	{
		return ToUint64() != 0;
	}

	bool operator==(const FOrionSteamId& InOther) const
	{
		return Value == InOther.Value;
	}

	bool operator!=(const FOrionSteamId& InOther) const
	{
		return !(*this == InOther);
	}

	friend uint32 GetTypeHash(const FOrionSteamId& InSteamId)
	{
		return GetTypeHash(InSteamId.Value);
	}

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionSteam", meta=(AllowPrivateAccess="true"))
	FString Value;
};

UENUM(BlueprintType)
enum class EOrionSteamPersonaState : uint8
{
	Offline = 0,
	Online = 1,
	Busy = 2,
	Away = 3,
	Snooze = 4,
	LookingToTrade = 5,
	LookingToPlay = 6,
	Max
};

FORCEINLINE EOrionSteamPersonaState ToOrionSteamPersonaState(ESteamPersonaState InPersonaState)
{
	switch (InPersonaState)
	{
	case ESteamPersonaState::Offline:
		return EOrionSteamPersonaState::Offline;
	case ESteamPersonaState::Online:
		return EOrionSteamPersonaState::Online;
	case ESteamPersonaState::Busy:
		return EOrionSteamPersonaState::Busy;
	case ESteamPersonaState::Away:
		return EOrionSteamPersonaState::Away;
	case ESteamPersonaState::Snooze:
		return EOrionSteamPersonaState::Snooze;
	case ESteamPersonaState::LookingToTrade:
		return EOrionSteamPersonaState::LookingToTrade;
	case ESteamPersonaState::LookingToPlay:
		return EOrionSteamPersonaState::LookingToPlay;
	default:
		return EOrionSteamPersonaState::Max;
	}
}
