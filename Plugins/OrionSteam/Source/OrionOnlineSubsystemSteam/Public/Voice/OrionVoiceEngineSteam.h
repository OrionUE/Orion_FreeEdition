/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Interfaces/VoiceInterface.h"
#include "VoiceInterfaceImpl.h"
#include "OrionVoiceEngineSteam.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineVoiceSteam : public FOnlineVoiceImpl
{
PACKAGE_SCOPE:
	FOrionOnlineVoiceSteam()
		: FOnlineVoiceImpl() { };

public:
	FOrionOnlineVoiceSteam(class IOnlineSubsystem* InOnlineSubsystem)
		: FOnlineVoiceImpl(InOnlineSubsystem)
	{
		check(InOnlineSubsystem);
	};

	virtual IVoiceEnginePtr CreateVoiceEngine() override
	{
		LogOrionSteamVerbose("FOrionOnlineVoiceSteam::CreateVoiceEngine");
		return MakeShareable(new FOrionVoiceEngineSteam(OnlineSubsystem));
	}

	virtual ~FOrionOnlineVoiceSteam() override { };
};

typedef TSharedPtr<FOrionOnlineVoiceSteam, ESPMode::ThreadSafe> FOrionOnlineVoiceSteamPtr;
#endif
