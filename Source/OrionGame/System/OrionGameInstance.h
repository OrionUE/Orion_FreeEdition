/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreGameInstance.h"

#include "OrionGameInstance.generated.h"

class FOrionGameRenderManager;
class FOrionAudioInputManager;
class AOrionPlayerController;

enum class ECommonUserOnlineContext : uint8;

/**
 * UOrionGameInstance
 * 
 * 游戏实例基类
 * 
 * @note
 * 需要在DefaultEngine配置中，[/Script/EngineSettings.GameMapsSettings]的GameInstanceClass，指定此类或其派生类
 */
UCLASS()
class ORIONGAME_API UOrionGameInstance : public UCoreGameInstance
{
	GENERATED_BODY()

public:
	UOrionGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	AOrionPlayerController* GetOrionPrimaryPlayerController() const;

	//~UCommonGameInstance interface
	virtual void HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) override;
	//~End of UCommonGameInstance interface

protected:
	virtual void Init() override;

public:
	FORCEINLINE FOrionGameRenderManager& GetRenderManager() const { return *RenderManager; }
	FORCEINLINE FOrionAudioInputManager& GetAudioInputManager() const { return *AudioInputManager; }

protected:
	FOrionGameRenderManager* RenderManager;
	FOrionAudioInputManager* AudioInputManager;
};
