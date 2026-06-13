/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "VoiceEngineImpl.h"

class IOnlineSubsystem;
class FUniqueNetIdSteam;

#define INVALID_INDEX -1

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionVoiceEngineSteam : public FVoiceEngineImpl
{
	virtual void StartRecording() const override;
	virtual void StoppedRecording() const override;
	virtual uint32 RegisterLocalTalker(uint32 LocalUserNum) override;

PACKAGE_SCOPE:
	FOrionVoiceEngineSteam() :
#if UE_VERSION_NEWER_THAN(5, 5, 4)
		FVoiceEngineImpl(nullptr),
#else
		FVoiceEngineImpl(),
#endif
		m_SteamUserPtr(nullptr),
		m_SteamFriendsPtr(nullptr){};

public:
	FOrionVoiceEngineSteam(IOnlineSubsystem* InSubsystem);
	virtual ~FOrionVoiceEngineSteam() override;

private:
	ISteamUser* m_SteamUserPtr;
	ISteamFriends* m_SteamFriendsPtr;
};
#endif
