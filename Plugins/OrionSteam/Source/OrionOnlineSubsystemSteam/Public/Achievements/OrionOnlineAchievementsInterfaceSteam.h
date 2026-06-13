/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionOnlineSubsystemSteamTypes.h"
#include "Interfaces/OnlineAchievementsInterface.h"
#include "Misc/ConfigCacheIni.h"
#include "OrionOnlineSubsystemSteam.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAchievementsSteam : public IOnlineAchievements
{
private:
	struct FOnlineAchievementSteam : public FOnlineAchievement, public FOnlineAchievementDesc
	{
		bool m_bReadFromSteam;

		FString ToDebugString() const
		{
			return FString::Printf(TEXT("Achievement:{%s},  Description:{%s}, bReadFromSteam=%s"), *FOnlineAchievement::ToDebugString(), *FOnlineAchievementDesc::ToDebugString(), m_bReadFromSteam ? TEXT("true") : TEXT("false"));
		}
	};

	struct FSteamAchievementsConfig
	{
		FSteamAchievementsConfig()
			: m_IniName(GEngineIni), m_SectionName(TEXT("OrionOnlineSubsystemSteam"))
		{
		}

		FString GetKey(const FString& KeyName) const
		{
			FString Result;
			if (!GConfig->GetString(*m_SectionName, *KeyName, Result, m_IniName))
			{
				return TEXT("");
			}
			return Result;
		}

		bool ReadAchievements(TArray<FOnlineAchievementSteam>& OutArray) const
		{
			OutArray.Empty();
			int NumAchievements = 0;

			for (;; ++NumAchievements)
			{
				FString Id = GetKey(FString::Printf(TEXT("Achievement_%d_Id"), NumAchievements));
				if (Id.IsEmpty())
				{
					break;
				}

				FOnlineAchievementSteam NewAch;
				NewAch.Id = Id;
				NewAch.Progress = 0.0;
				NewAch.m_bReadFromSteam = false;

				OutArray.Add(NewAch);
			}

			return NumAchievements > 0;
		}

		FString m_IniName;
		FString m_SectionName;
	};

	FOrionOnlineAchievementsSteam()
		: m_SteamSubsystem(nullptr), m_StatsInt(nullptr), m_bHaveConfiguredAchievements(false)
	{
	};

private:
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
	FOrionOnlineLeaderboardsSteam* m_StatsInt;
	TUniqueNetIdMap<TArray<FOnlineAchievement>> m_PlayerAchievements;
	TMap<FString, FOnlineAchievementDesc> m_AchievementDescriptions;
	TArray<FOnlineAchievementSteam> m_Achievements;
	bool m_bHaveConfiguredAchievements;

private:
	bool ReadAchievementsFromConfig();
PACKAGE_SCOPE:
	void UpdateAchievementsForUser(const FUniqueNetIdSteam& PlayerId, bool bReadSuccessfully);
	void OnWriteAchievementsComplete(const FUniqueNetIdSteam& PlayerId, bool bWasSuccessful, FOnlineAchievementsWritePtr& WriteObject, const FOnAchievementsWrittenDelegate& Delegate);

public:
	FOrionOnlineAchievementsSteam(FOrionOnlineSubsystemSteam* InSubsystem);

	virtual ~FOrionOnlineAchievementsSteam() override
	{
	}

	//~ Begin IOnlineAchievements Interface
	virtual void WriteAchievements(const FUniqueNetId& PlayerId, FOnlineAchievementsWriteRef& WriteObject, const FOnAchievementsWrittenDelegate& Delegate = FOnAchievementsWrittenDelegate()) override;
	virtual void QueryAchievements(const FUniqueNetId& PlayerId, const FOnQueryAchievementsCompleteDelegate& Delegate = FOnQueryAchievementsCompleteDelegate()) override;
	virtual void QueryAchievementDescriptions(const FUniqueNetId& PlayerId, const FOnQueryAchievementsCompleteDelegate& Delegate = FOnQueryAchievementsCompleteDelegate()) override;
	virtual EOnlineCachedResult::Type GetCachedAchievement(const FUniqueNetId& PlayerId, const FString& AchievementId, FOnlineAchievement& OutAchievement) override;
	virtual EOnlineCachedResult::Type GetCachedAchievements(const FUniqueNetId& PlayerId, TArray<FOnlineAchievement>& OutAchievements) override;
	virtual EOnlineCachedResult::Type GetCachedAchievementDescription(const FString& AchievementId, FOnlineAchievementDesc& OutAchievementDesc) override;
#if !UE_BUILD_SHIPPING
	virtual bool ResetAchievements(const FUniqueNetId& PlayerId) override;
#endif
	   //~ End IOnlineAchievements Interface
};
#else
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAchievementsSteam { };
#endif
