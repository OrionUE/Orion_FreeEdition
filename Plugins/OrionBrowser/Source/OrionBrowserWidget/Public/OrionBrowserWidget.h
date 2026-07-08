/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/Widget.h"
#include "OrionBrowserCursorPolicy.h"

#include "OrionBrowserWidget.generated.h"

#ifndef ORIONBROWSERWIDGET_WITH_BROWSER
#define ORIONBROWSERWIDGET_WITH_BROWSER 0
#endif

class SOrionBrowser;
enum class EWebBrowserConsoleLogSeverity;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOrionBrowserSimpleDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrionBrowserTextDelegate, const FText&, Text);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrionBrowserBeforePopupDelegate, FString, URL, FString, Frame);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOrionBrowserConsoleMessageDelegate, const FString&, Message, const FString&, Source, int32, Line);

/**
	* Blueprint-facing Orion browser widget backed by the OrionBrowser runtime module.
	*/
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Orion Browser"))
class ORIONBROWSERWIDGET_API UOrionBrowserWidget : public UWidget
{
	GENERATED_BODY()

public:
	UOrionBrowserWidget(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void LoadURL(const FString& NewURL);

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void LoadString(const FString& Contents, const FString& DummyURL);

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void Reload();

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void StopLoad();

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void GoBack();

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void GoForward();

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void ExecuteJavascript(const FString& ScriptText);

	UFUNCTION(BlueprintCallable, Category="Orion Browser")
	void SetCursorPolicy(EOrionBrowserCursorPolicy InCursorPolicy);

	UFUNCTION(BlueprintPure, Category="Orion Browser")
	FText GetTitleText() const;

	UFUNCTION(BlueprintPure, Category="Orion Browser")
	FString GetUrl() const;

	UFUNCTION(BlueprintPure, Category="Orion Browser")
	bool IsBrowserAvailable() const;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserSimpleDelegate OnLoadCompleted;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserSimpleDelegate OnLoadError;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserSimpleDelegate OnLoadStarted;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserTextDelegate OnTitleChanged;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserTextDelegate OnUrlChanged;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserBeforePopupDelegate OnBeforePopup;

	UPROPERTY(BlueprintAssignable, Category="Orion Browser|Event")
	FOrionBrowserConsoleMessageDelegate OnConsoleMessage;

	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

private:
#if ORIONBROWSERWIDGET_WITH_BROWSER
	void HandleOnLoadCompleted();
	void HandleOnLoadError();
	void HandleOnLoadStarted();
	void HandleOnTitleChanged(const FText& Text);
	void HandleOnUrlChanged(const FText& Text);
	bool HandleOnBeforePopup(FString URL, FString Frame);
	void HandleOnConsoleMessage(const FString& Message, const FString& Source, int32 Line, EWebBrowserConsoleLogSeverity Severity);
#endif

private:
	UPROPERTY(EditAnywhere, Category="Appearance")
	FString InitialURL;

	UPROPERTY(EditAnywhere, Category="Appearance")
	bool bSupportsTransparency = false;

	UPROPERTY(EditAnywhere, Category="Behavior", meta=(ClampMin="0", UIMin="0"))
	int32 BrowserFrameRate = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Behavior", meta=(AllowPrivateAccess="true"))
	EOrionBrowserCursorPolicy CursorPolicy = EOrionBrowserCursorPolicy::PageControlled;

#if ORIONBROWSERWIDGET_WITH_BROWSER
	TSharedPtr<SOrionBrowser> WebBrowserWidget;
#endif
};
