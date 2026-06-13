/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonGameInstance.h"
#include "Player/CorePlayerController.h"

#include "CoreGameInstance.generated.h"

enum class ECommonUserOnlineContext : uint8;

/**
 * UCoreGameInstance
 * 
 * 游戏实例核心基类
 *
 * @note
 * 需要在DefaultEngine配置中，[/Script/EngineSettings.GameMapsSettings]的GameInstanceClass，指定此类或其派生类
 */
UCLASS(Config=Game)
class GAMECORE_API UCoreGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:
	UCoreGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	ACorePlayerController* GetCorePrimaryPlayerController() const;

	//~UCommonGameInstance interface
	virtual bool CanJoinRequestedSession() const override;
	virtual void HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) override;
	//~End of UCommonGameInstance interface

	//~GameInstance interface
	virtual void ReceivedNetworkEncryptionToken(const FString& EncryptionToken, const FOnEncryptionKeyResponse& Delegate) override;
	virtual void ReceivedNetworkEncryptionAck(const FOnEncryptionKeyResponse& Delegate) override;
	//~End of GameInstance interface

protected:
	virtual void Init() override;
	virtual void Shutdown() override;

	void OnPreClientTravelToSession(FString& URL);
};
