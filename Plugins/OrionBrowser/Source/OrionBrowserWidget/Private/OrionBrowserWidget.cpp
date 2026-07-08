/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionBrowserWidget.h"

#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"

#if ORIONBROWSERWIDGET_WITH_BROWSER
#include "OrionBrowserModule.h"
#include "SOrionBrowser.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionBrowserWidget)

#define LOCTEXT_NAMESPACE "OrionBrowserWidget"

UOrionBrowserWidget::UOrionBrowserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsVariable = true;
}

void UOrionBrowserWidget::LoadURL(const FString& NewURL)
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->LoadURL(NewURL);
	}
#endif
}

void UOrionBrowserWidget::LoadString(const FString& Contents, const FString& DummyURL)
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->LoadString(Contents, DummyURL);
	}
#endif
}

void UOrionBrowserWidget::Reload()
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->Reload();
	}
#endif
}

void UOrionBrowserWidget::StopLoad()
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->StopLoad();
	}
#endif
}

void UOrionBrowserWidget::GoBack()
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->GoBack();
	}
#endif
}

void UOrionBrowserWidget::GoForward()
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->GoForward();
	}
#endif
}

void UOrionBrowserWidget::ExecuteJavascript(const FString& ScriptText)
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->ExecuteJavascript(ScriptText);
	}
#endif
}

void UOrionBrowserWidget::SetCursorPolicy(EOrionBrowserCursorPolicy InCursorPolicy)
{
	CursorPolicy = InCursorPolicy;

#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->SetCursorPolicy(CursorPolicy);
	}
#endif
}

FText UOrionBrowserWidget::GetTitleText() const
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->GetTitleText();
	}
#endif

	return FText::GetEmpty();
}

FString UOrionBrowserWidget::GetUrl() const
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->GetUrl();
	}
#endif

	return FString();
}

bool UOrionBrowserWidget::IsBrowserAvailable() const
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	return IOrionBrowserModule::IsAvailable() && IOrionBrowserModule::Get().IsWebModuleAvailable();
#else
	return false;
#endif
}

void UOrionBrowserWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->SetCursorPolicy(CursorPolicy);
	}
#endif
}

void UOrionBrowserWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

#if ORIONBROWSERWIDGET_WITH_BROWSER
	WebBrowserWidget.Reset();
#endif
}

TSharedRef<SWidget> UOrionBrowserWidget::RebuildWidget()
{
#if ORIONBROWSERWIDGET_WITH_BROWSER
	if (!IsDesignTime() && IsBrowserAvailable())
	{
		WebBrowserWidget = SNew(SOrionBrowser)
			.InitialURL(InitialURL)
			.ShowControls(false)
			.SupportsTransparency(bSupportsTransparency)
			.BrowserFrameRate(BrowserFrameRate)
			.CursorPolicy(CursorPolicy)
			.OnLoadCompleted(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadCompleted))
			.OnLoadError(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadError))
			.OnLoadStarted(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadStarted))
			.OnTitleChanged(BIND_UOBJECT_DELEGATE(FOnTextChanged, HandleOnTitleChanged))
			.OnUrlChanged(BIND_UOBJECT_DELEGATE(FOnTextChanged, HandleOnUrlChanged))
			.OnBeforePopup(BIND_UOBJECT_DELEGATE(FOnBeforePopupDelegate, HandleOnBeforePopup))
			.OnConsoleMessage(BIND_UOBJECT_DELEGATE(FOnConsoleMessageDelegate, HandleOnConsoleMessage));

		return WebBrowserWidget.ToSharedRef();
	}
#endif

	return SNew(SBox)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("BrowserUnavailable", "Orion Browser"))
		];
}

#if ORIONBROWSERWIDGET_WITH_BROWSER
void UOrionBrowserWidget::HandleOnLoadCompleted()
{
	OnLoadCompleted.Broadcast();
}

void UOrionBrowserWidget::HandleOnLoadError()
{
	OnLoadError.Broadcast();
}

void UOrionBrowserWidget::HandleOnLoadStarted()
{
	OnLoadStarted.Broadcast();
}

void UOrionBrowserWidget::HandleOnTitleChanged(const FText& Text)
{
	OnTitleChanged.Broadcast(Text);
}

void UOrionBrowserWidget::HandleOnUrlChanged(const FText& Text)
{
	OnUrlChanged.Broadcast(Text);
}

bool UOrionBrowserWidget::HandleOnBeforePopup(FString URL, FString Frame)
{
	if (OnBeforePopup.IsBound())
	{
		OnBeforePopup.Broadcast(URL, Frame);
		return true;
	}

	return false;
}

void UOrionBrowserWidget::HandleOnConsoleMessage(const FString& Message, const FString& Source, int32 Line, EWebBrowserConsoleLogSeverity Severity)
{
	OnConsoleMessage.Broadcast(Message, Source, Line);
}
#endif

#undef LOCTEXT_NAMESPACE
