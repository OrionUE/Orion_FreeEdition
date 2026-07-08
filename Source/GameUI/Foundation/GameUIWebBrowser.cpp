/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Foundation/GameUIWebBrowser.h"

#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"

#if GAMEUI_WITH_ORION_BROWSER
#include "Materials/MaterialInterface.h"
#include "OrionBrowserModule.h"
#include "SOrionBrowser.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIWebBrowser)

#define LOCTEXT_NAMESPACE "GameUIWebBrowser"

namespace

{
	FString GetForceDefaultCursorScript()
	{
		return FString(
			TEXT("(function(){")
			TEXT("var id='orion-gameui-webbrowser-force-default-cursor';")
			TEXT("var css='*, *::before, *::after { cursor: default !important; }';")
			TEXT("function apply(doc){")
			TEXT("if(!doc||!doc.head){return;}")
			TEXT("var style=doc.getElementById(id);")
			TEXT("if(!style){style=doc.createElement('style');style.id=id;doc.head.appendChild(style);}")
			TEXT("style.textContent=css;")
			TEXT("}")
			TEXT("apply(document);")
			TEXT("var frames=document.getElementsByTagName('iframe');")
			TEXT("for(var i=0;i<frames.length;i++){try{apply(frames[i].contentDocument);}catch(e){}}")
			TEXT("})();"));
	}

	FString GetPageControlledCursorScript()
	{
		return FString(
			TEXT("(function(){")
			TEXT("var style=document.getElementById('orion-gameui-webbrowser-force-default-cursor');")
			TEXT("if(style){style.parentNode.removeChild(style);}")
			TEXT("})();"));
	}

	EOrionBrowserCursorPolicy ToOrionCursorPolicy(EGameUIWebBrowserCursorPolicy InCursorPolicy)
	{
		return InCursorPolicy == EGameUIWebBrowserCursorPolicy::ForceDefault
			? EOrionBrowserCursorPolicy::GameControlled
			: EOrionBrowserCursorPolicy::PageControlled;
	}
}

UGameUIWebBrowser::UGameUIWebBrowser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsVariable = true;

#if GAMEUI_WITH_ORION_BROWSER
	DefaultMaterial = IOrionBrowserModule::Get().GetSingleton()->GetDefaultMaterial();
	DefaultTranslucentMaterial = IOrionBrowserModule::Get().GetSingleton()->GetDefaultTranslucentMaterial();
#endif
}

void UGameUIWebBrowser::LoadURL(const FString& NewURL)
{
#if GAMEUI_WITH_ORION_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->LoadURL(NewURL);
	}
#endif
}

void UGameUIWebBrowser::LoadString(const FString& Contents, const FString& DummyURL)
{
#if GAMEUI_WITH_ORION_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->LoadString(Contents, DummyURL);
	}
#endif
}

void UGameUIWebBrowser::ExecuteJavascript(const FString& ScriptText)
{
#if GAMEUI_WITH_ORION_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->ExecuteJavascript(ScriptText);
	}
#endif
}

FText UGameUIWebBrowser::GetTitleText() const
{
#if GAMEUI_WITH_ORION_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->GetTitleText();
	}
#endif

	return FText::GetEmpty();
}

FString UGameUIWebBrowser::GetUrl() const
{
#if GAMEUI_WITH_ORION_BROWSER
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->GetUrl();
	}
#endif

	return FString();
}

void UGameUIWebBrowser::SetCursorPolicy(EGameUIWebBrowserCursorPolicy InCursorPolicy)
{
	CursorPolicy = InCursorPolicy;
	ApplyCursorPolicy();
}

void UGameUIWebBrowser::SetSupportsTransparency(bool bInSupportsTransparency)
{
	bSupportsTransparency = bInSupportsTransparency;
}

void UGameUIWebBrowser::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	ApplyCursorPolicy();
}

void UGameUIWebBrowser::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

#if GAMEUI_WITH_ORION_BROWSER
	WebBrowserWidget.Reset();
#endif
}

TSharedRef<SWidget> UGameUIWebBrowser::RebuildWidget()
{
#if GAMEUI_WITH_ORION_BROWSER
	if (!IsDesignTime())
	{
		WebBrowserWidget = SNew(SOrionBrowser)
			.InitialURL(InitialURL)
			.ShowControls(false)
			.SupportsTransparency(bSupportsTransparency)
			.CursorPolicy(ToOrionCursorPolicy(CursorPolicy))
			.OnLoadCompleted(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadCompleted))
			.OnLoadError(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadError))
			.OnLoadStarted(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnLoadStarted))
			.OnUrlChanged(BIND_UOBJECT_DELEGATE(FOnTextChanged, HandleOnUrlChanged))
			.OnBeforePopup(BIND_UOBJECT_DELEGATE(FOnBeforePopupDelegate, HandleOnBeforePopup));

		return WebBrowserWidget.ToSharedRef();
	}
#endif

	return SNew(SBox)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("WebBrowserUnavailable", "Web Browser"))
		];
}

void UGameUIWebBrowser::ApplyCursorPolicy()
{
#if GAMEUI_WITH_ORION_BROWSER
	if (!WebBrowserWidget.IsValid())
	{
		return;
	}

	if (CursorPolicy == EGameUIWebBrowserCursorPolicy::ForceDefault)
	{
		WebBrowserWidget->SetCursorPolicy(ToOrionCursorPolicy(CursorPolicy));
		WebBrowserWidget->ExecuteJavascript(GetForceDefaultCursorScript());
	}
	else
	{
		WebBrowserWidget->SetCursorPolicy(ToOrionCursorPolicy(CursorPolicy));
		WebBrowserWidget->ExecuteJavascript(GetPageControlledCursorScript());
	}
#endif
}

#if GAMEUI_WITH_ORION_BROWSER
void UGameUIWebBrowser::HandleOnLoadCompleted()
{
	OnLoadCompleted.Broadcast();
	ApplyCursorPolicy();
}

void UGameUIWebBrowser::HandleOnLoadError()
{
	OnLoadError.Broadcast();
}

void UGameUIWebBrowser::HandleOnLoadStarted()
{
	OnLoadStarted.Broadcast();
}

void UGameUIWebBrowser::HandleOnUrlChanged(const FText& Text)
{
	OnUrlChanged.Broadcast(Text);
}

bool UGameUIWebBrowser::HandleOnBeforePopup(FString URL, FString Frame)
{
	if (OnBeforePopup.IsBound())
	{
		OnBeforePopup.Broadcast(URL, Frame);
		return true;
	}

	return false;
}
#endif

#undef LOCTEXT_NAMESPACE
