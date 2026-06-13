/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlinePingInterfaceSteam
{
public:
	FOrionOnlinePingInterfaceSteam(class FOrionOnlineSubsystemSteam* InSubsystem)
		: m_Subsystem(InSubsystem)
	{
	}

	virtual ~FOrionOnlinePingInterfaceSteam()
	{
	}

	virtual bool IsUsingP2PRelays() const = 0;
	virtual FString GetHostPingData() const = 0;
	virtual int32 GetPingFromHostData(const FString& HostPingStr) const = 0;
	virtual bool IsRecalculatingPing() const = 0;

protected:
	FOrionOnlineSubsystemSteam* m_Subsystem;
};
#endif
