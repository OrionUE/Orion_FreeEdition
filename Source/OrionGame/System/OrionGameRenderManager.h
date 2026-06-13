/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

class FOrionGameRenderManager : public FNoncopyable
{
public:
	explicit FOrionGameRenderManager();
	virtual ~FOrionGameRenderManager();

public:
	void Initialize(UWorld* InWorld);

	bool GetIsInitialized() const { return bInitialized; }

	bool IsRayTracingSupported() const;

	void EnableRTX(UWorld* InWorld, bool bEnabled);

	bool CanChangeAntiAliasingMethod(UWorld* InWorld, EAntiAliasingMethod InAntiAliasingMethod = AAM_None) const;

	void SetAntiAliasingMethod(UWorld* InWorld, EAntiAliasingMethod InAntiAliasingMethod);

protected:
	void SetupRTX();
	void SetupAntiAliasingMethod(UWorld* InWorld);

private:
	bool bInitialized;
};
