/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/Widget.h"

#include "GameUIWebBrowser.generated.h"

#ifndef GAMEUI_WITH_ORION_BROWSER
#define GAMEUI_WITH_ORION_BROWSER 0
#endif

class SOrionBrowser;
class UMaterialInterface;

UENUM(BlueprintType)
enum class EGameUIWebBrowserCursorPolicy : uint8
{
	PageControlled,
	ForceDefault,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameUIWebBrowserSimpleDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameUIWebBrowserUrlChangedDelegate, const FText&, Text);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameUIWebBrowserBeforePopupDelegate, FString, URL, FString, Frame);

/**
	* GameUI wrapper around the engine web browser with project-level interaction policies.
	*/
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Game UI Web Browser"))
class GAMEUI_API UGameUIWebBrowser : public UWidget
{
	GENERATED_BODY()

public:
	UGameUIWebBrowser(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category="Game UI|Web Browser")
	void LoadURL(const FString& NewURL);

	UFUNCTION(BlueprintCallable, Category="Game UI|Web Browser")
	void LoadString(const FString& Contents, const FString& DummyURL);

	UFUNCTION(BlueprintCallable, Category="Game UI|Web Browser")
	void ExecuteJavascript(const FString& ScriptText);

	UFUNCTION(BlueprintPure, Category="Game UI|Web Browser")
	FText GetTitleText() const;

	UFUNCTION(BlueprintPure, Category="Game UI|Web Browser")
	FString GetUrl() const;

	UFUNCTION(BlueprintCallable, Category="Game UI|Web Browser")
	void SetCursorPolicy(EGameUIWebBrowserCursorPolicy InCursorPolicy);

	UFUNCTION(BlueprintCallable, Category="Game UI|Web Browser")
	void SetSupportsTransparency(bool bInSupportsTransparency);

	UPROPERTY(BlueprintAssignable, Category="Game UI|Web Browser|Event")
	FGameUIWebBrowserSimpleDelegate OnLoadCompleted;

	UPROPERTY(BlueprintAssignable, Category="Game UI|Web Browser|Event")
	FGameUIWebBrowserSimpleDelegate OnLoadError;

	UPROPERTY(BlueprintAssignable, Category="Game UI|Web Browser|Event")
	FGameUIWebBrowserSimpleDelegate OnLoadStarted;

	UPROPERTY(BlueprintAssignable, Category="Game UI|Web Browser|Event")
	FGameUIWebBrowserUrlChangedDelegate OnUrlChanged;

	UPROPERTY(BlueprintAssignable, Category="Game UI|Web Browser|Event")
	FGameUIWebBrowserBeforePopupDelegate OnBeforePopup;

	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

private:
	void ApplyCursorPolicy();

#if GAMEUI_WITH_ORION_BROWSER
	void HandleOnLoadCompleted();
	void HandleOnLoadError();
	void HandleOnLoadStarted();
	void HandleOnUrlChanged(const FText& Text);
	bool HandleOnBeforePopup(FString URL, FString Frame);
#endif

private:
	UPROPERTY(EditAnywhere, Category="Appearance")
	FString InitialURL;

	UPROPERTY(EditAnywhere, Category="Appearance")
	bool bSupportsTransparency = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Behavior", meta=(AllowPrivateAccess="true"))
	EGameUIWebBrowserCursorPolicy CursorPolicy = EGameUIWebBrowserCursorPolicy::ForceDefault;

#if GAMEUI_WITH_ORION_BROWSER
	TSharedPtr<SOrionBrowser> WebBrowserWidget;
#endif

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> DefaultMaterial;

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> DefaultTranslucentMaterial;
};
