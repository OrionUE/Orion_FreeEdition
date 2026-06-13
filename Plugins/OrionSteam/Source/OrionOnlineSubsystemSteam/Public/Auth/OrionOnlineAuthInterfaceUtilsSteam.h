/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

DECLARE_MULTICAST_DELEGATE_OneParam(FOnSteamAuthFailure, const FUniqueNetId&);
typedef FOnSteamAuthFailure::FDelegate FOnSteamAuthFailureDelegate;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSteamAuthResult, const FUniqueNetId&, bool);
typedef FOnSteamAuthResult::FDelegate FOnSteamAuthResultDelegate;

DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnSteamAuthResultWithCode, const FUniqueNetId&, bool, ESteamAuthResponseCode);
typedef FOnSteamAuthResultWithCode::FDelegate FOnSteamAuthResultWithCodeDelegate;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAuthUtilsSteam
{
public:
	~FOrionOnlineAuthUtilsSteam()
	{
		m_OverrideFailureDelegate.Unbind();
		m_OnAuthenticationResultDelegate.Unbind();
		m_OnAuthenticationResultWithCodeDelegate.Unbind();
	}

	static bool IsSteamAuthEnabled();

public:
	FOnSteamAuthFailureDelegate m_OverrideFailureDelegate;
	FOnSteamAuthResultDelegate m_OnAuthenticationResultDelegate;
	FOnSteamAuthResultWithCodeDelegate m_OnAuthenticationResultWithCodeDelegate;
};
