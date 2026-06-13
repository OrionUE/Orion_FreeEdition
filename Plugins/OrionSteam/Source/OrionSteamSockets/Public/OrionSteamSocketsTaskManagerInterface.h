/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

class FOrionSteamSocketsTaskManagerInterface
{
public:
	FOrionSteamSocketsTaskManagerInterface(class FOrionSteamSocketsSubsystem* SocketSub)
		: m_SocketSubsystem(SocketSub)
	{
	}

	virtual ~FOrionSteamSocketsTaskManagerInterface() = default;
	virtual void Tick() = 0;

protected:
	FOrionSteamSocketsSubsystem* m_SocketSubsystem;
};
