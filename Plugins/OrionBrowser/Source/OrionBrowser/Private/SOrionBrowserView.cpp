/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "SOrionBrowserView.h"
#include "Async/Async.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"
#include "Containers/Ticker.h"
#include "OrionBrowserModule.h"
#include "Layout/WidgetPath.h"
#include "Framework/Application/MenuStack.h"
#include "Framework/Application/SlateApplication.h"
#include "IWebBrowserDialog.h"
#include "IWebBrowserWindow.h"
#include "OrionBrowserConfig.h"
#include "OrionWebBrowserViewport.h"
#include "IWebBrowserAdapter.h"

#if PLATFORM_ANDROID && USE_ANDROID_JNI
#	include "Android/AndroidWebBrowserWindow.h"
#elif ORION_WITH_CEF3
#	include "CEF/CEFWebBrowserWindow.h"
#elif PLATFORM_IOS || PLATFORM_MAC
#	include "Apple/ApplePlatformWebBrowser.h"
#elif PLATFORM_SPECIFIC_WEB_BROWSER
#	include COMPILED_PLATFORM_HEADER(PlatformWebBrowser.h)
#else
#	define DUMMY_WEB_BROWSER 1
#endif

#define LOCTEXT_NAMESPACE "OrionBrowser"

SOrionBrowserView::SOrionBrowserView()
{
}

SOrionBrowserView::~SOrionBrowserView()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->OnDocumentStateChanged().RemoveAll(this);
		BrowserWindow->OnNeedsRedraw().RemoveAll(this);
		BrowserWindow->OnTitleChanged().RemoveAll(this);
		BrowserWindow->OnUrlChanged().RemoveAll(this);
		BrowserWindow->OnToolTip().RemoveAll(this);
		BrowserWindow->OnShowPopup().RemoveAll(this);
		BrowserWindow->OnDismissPopup().RemoveAll(this);

		BrowserWindow->OnShowDialog().Unbind();
		BrowserWindow->OnDismissAllDialogs().Unbind();
		BrowserWindow->OnCreateWindow().Unbind();
		BrowserWindow->OnCloseWindow().Unbind();
		BrowserWindow->OnSuppressContextMenu().Unbind();
		BrowserWindow->OnDragWindow().Unbind();
		BrowserWindow->OnConsoleMessage().Unbind();

		if (BrowserWindow->OnBeforeBrowse().IsBoundToObject(this))
		{
			BrowserWindow->OnBeforeBrowse().Unbind();
		}

		if (BrowserWindow->OnLoadUrl().IsBoundToObject(this))
		{
			BrowserWindow->OnLoadUrl().Unbind();
		}

		if (BrowserWindow->OnBeforePopup().IsBoundToObject(this))
		{
			BrowserWindow->OnBeforePopup().Unbind();
		}
	}

	TSharedPtr<SWindow> SlateParentWindow = SlateParentWindowPtr.Pin();
	if (SlateParentWindow.IsValid())
	{
		SlateParentWindow->GetOnWindowDeactivatedEvent().RemoveAll(this);
	}

	if (SlateParentWindow.IsValid())
	{
		SlateParentWindow->GetOnWindowActivatedEvent().RemoveAll(this);
	}
}

void SOrionBrowserView::Construct(const FArguments& InArgs, const TSharedPtr<IWebBrowserWindow>& InWebBrowserWindow)
{
	OnLoadCompleted = InArgs._OnLoadCompleted;
	OnLoadError = InArgs._OnLoadError;
	OnLoadStarted = InArgs._OnLoadStarted;
	OnTitleChanged = InArgs._OnTitleChanged;
	OnUrlChanged = InArgs._OnUrlChanged;
	OnBeforeNavigation = InArgs._OnBeforeNavigation;
	OnLoadUrl = InArgs._OnLoadUrl;
	OnShowDialog = InArgs._OnShowDialog;
	OnDismissAllDialogs = InArgs._OnDismissAllDialogs;
	OnBeforePopup = InArgs._OnBeforePopup;
	OnCreateWindow = InArgs._OnCreateWindow;
	OnCloseWindow = InArgs._OnCloseWindow;
	OnFloatingCloseButtonPressed = InArgs._OnFloatingCloseButtonPressed;
	AddressBarUrl = FText::FromString(InArgs._InitialURL);
	PopupMenuMethod = InArgs._PopupMenuMethod;
	OnUnhandledKeyDown = InArgs._OnUnhandledKeyDown;
	OnUnhandledKeyUp = InArgs._OnUnhandledKeyUp;
	OnUnhandledKeyChar = InArgs._OnUnhandledKeyChar;
	OnConsoleMessage = InArgs._OnConsoleMessage;

	BrowserWindow = InWebBrowserWindow;
	if(!BrowserWindow.IsValid())
	{

		static bool AllowCEF = !FParse::Param(FCommandLine::Get(), TEXT("nocef"));
		bool bBrowserEnabled = true;
		OrionBrowserConfig::GetBool(TEXT("bEnabled"), bBrowserEnabled);
		if (AllowCEF && bBrowserEnabled)
		{
			FCreateBrowserWindowSettings Settings;
			Settings.InitialURL = InArgs._InitialURL;
			Settings.bUseTransparency = InArgs._SupportsTransparency;
			Settings.bInterceptLoadRequests = InArgs._InterceptLoadRequests;
			Settings.bThumbMouseButtonNavigation = InArgs._SupportsThumbMouseButtonNavigation;
			Settings.ContentsToLoad = InArgs._ContentsToLoad;
			Settings.UserAgentApplication = InArgs._UserAgentApplication;
			Settings.bShowErrorMessage = InArgs._ShowErrorMessage;
			Settings.BackgroundColor = InArgs._BackgroundColor;
			Settings.BrowserFrameRate = InArgs._BrowserFrameRate;
			Settings.Context = InArgs._ContextSettings;
			Settings.AltRetryDomains = InArgs._AltRetryDomains;
			Settings.bEnablePaymentRequest = InArgs._EnablePaymentRequest;
			Settings.CursorPolicy = InArgs._CursorPolicy;

			// IOrionBrowserModule::Get() was already callled in WebBrowserWidgetModule.cpp so we don't need to force the load again here
			if (IOrionBrowserModule::IsAvailable() && IOrionBrowserModule::Get().IsWebModuleAvailable())
			{
				BrowserWindow = IOrionBrowserModule::Get().GetSingleton()->CreateBrowserWindow(Settings);
			}
		}
	}

	SlateParentWindowPtr = InArgs._ParentWindow;

	if (BrowserWindow.IsValid())
	{
		BrowserWindow->SetCursorPolicy(InArgs._CursorPolicy);

#ifndef DUMMY_WEB_BROWSER
		// The inner widget creation is handled by the WebBrowserWindow implementation.
		const auto& BrowserWidgetRef = static_cast<FWebBrowserWindow*>(BrowserWindow.Get())->CreateWidget();
		ChildSlot
		[
			BrowserWidgetRef
		];
		BrowserWidget = BrowserWidgetRef;
#endif

		if(OnCreateWindow.IsBound())
		{
			BrowserWindow->OnCreateWindow().BindSP(this, &SOrionBrowserView::HandleCreateWindow);
		}

		if(OnCloseWindow.IsBound())
		{
			BrowserWindow->OnCloseWindow().BindSP(this, &SOrionBrowserView::HandleCloseWindow);
		}

		if (OnFloatingCloseButtonPressed.IsBound())
		{
			BrowserWindow->OnFloatingCloseButtonPressed().BindSP(this, &SOrionBrowserView::HandleFloatingCloseButtonPressed);
		}

		BrowserWindow->OnDocumentStateChanged().AddSP(this, &SOrionBrowserView::HandleBrowserWindowDocumentStateChanged);
		BrowserWindow->OnNeedsRedraw().AddSP(this, &SOrionBrowserView::HandleBrowserWindowNeedsRedraw);
		BrowserWindow->OnTitleChanged().AddSP(this, &SOrionBrowserView::HandleTitleChanged);
		BrowserWindow->OnUrlChanged().AddSP(this, &SOrionBrowserView::HandleUrlChanged);
		BrowserWindow->OnToolTip().AddSP(this, &SOrionBrowserView::HandleToolTip);
		OnCreateToolTip = InArgs._OnCreateToolTip;

		if (!BrowserWindow->OnBeforeBrowse().IsBound())
		{
			BrowserWindow->OnBeforeBrowse().BindSP(this, &SOrionBrowserView::HandleBeforeNavigation);
		}
		else
		{
			check(!OnBeforeNavigation.IsBound());
		}

		if (!BrowserWindow->OnLoadUrl().IsBound())
		{
			BrowserWindow->OnLoadUrl().BindSP(this, &SOrionBrowserView::HandleLoadUrl);
		}
		else
		{
			check(!OnLoadUrl.IsBound());
		}

		if (!BrowserWindow->OnBeforePopup().IsBound())
		{
			BrowserWindow->OnBeforePopup().BindSP(this, &SOrionBrowserView::HandleBeforePopup);
		}
		else
		{
			check(!OnBeforePopup.IsBound());
		}

		if (!BrowserWindow->OnUnhandledKeyDown().IsBound())
		{
			BrowserWindow->OnUnhandledKeyDown().BindSP(this, &SOrionBrowserView::UnhandledKeyDown);
		}

		if (!BrowserWindow->OnUnhandledKeyUp().IsBound())
		{
			BrowserWindow->OnUnhandledKeyUp().BindSP(this, &SOrionBrowserView::UnhandledKeyUp);
		}

		if (!BrowserWindow->OnUnhandledKeyChar().IsBound())
		{
			BrowserWindow->OnUnhandledKeyChar().BindSP(this, &SOrionBrowserView::UnhandledKeyChar);
		}
		
		BrowserWindow->OnShowDialog().BindSP(this, &SOrionBrowserView::HandleShowDialog);
		BrowserWindow->OnDismissAllDialogs().BindSP(this, &SOrionBrowserView::HandleDismissAllDialogs);
		BrowserWindow->OnShowPopup().AddSP(this, &SOrionBrowserView::HandleShowPopup);
		BrowserWindow->OnDismissPopup().AddSP(this, &SOrionBrowserView::HandleDismissPopup);

		BrowserWindow->OnSuppressContextMenu().BindSP(this, &SOrionBrowserView::HandleSuppressContextMenu);


		OnSuppressContextMenu = InArgs._OnSuppressContextMenu;

		BrowserWindow->OnDragWindow().BindSP(this, &SOrionBrowserView::HandleDrag);
		OnDragWindow = InArgs._OnDragWindow;

		if (!BrowserWindow->OnConsoleMessage().IsBound())
		{
			BrowserWindow->OnConsoleMessage().BindSP(this, &SOrionBrowserView::HandleConsoleMessage);
		}

		BrowserViewport = MakeShareable(new FOrionWebBrowserViewport(BrowserWindow));
#if ORION_WITH_CEF3 || PLATFORM_APPLE
		BrowserWidget->SetViewportInterface(BrowserViewport.ToSharedRef());
#endif
		// If we could not obtain the parent window during widget construction, we'll defer and keep trying.
		SetupParentWindowHandlers();
	}
	else
	{
		OnLoadError.ExecuteIfBound();
	}
}

int32 SOrionBrowserView::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	if (!SlateParentWindowPtr.IsValid())
	{
		SOrionBrowserView* MutableThis = const_cast<SOrionBrowserView*>(this);
		MutableThis->SetupParentWindowHandlers();
	}

	int32 Layer = SCompoundWidget::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
	
	// Cache a reference to our parent window, if we didn't already reference it.
	SWindow* ParentWindow = OutDrawElements.GetPaintWindow();

	TSharedRef<SWindow> SlateParentWindowRef = StaticCastSharedRef<SWindow>(ParentWindow->AsShared());
	
	if (!SlateParentWindowPtr.IsValid() || SlateParentWindowPtr != SlateParentWindowRef)
	{
		SlateParentWindowPtr = SlateParentWindowRef;
		if (BrowserWindow.IsValid())
		{
			BrowserWindow->SetParentWindow(SlateParentWindowRef);
		}
	}

	return Layer;
}

void SOrionBrowserView::HandleWindowDeactivated()
{
	if (BrowserViewport.IsValid())
	{
		BrowserViewport->OnFocusLost(FFocusEvent());
	}
}

FReply SOrionBrowserView::OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent)
{
	FReply Reply = FReply::Handled();
	if (InFocusEvent.GetCause() != EFocusCause::Cleared)
	{
		if (BrowserWidget.IsValid())
		{
			Reply.SetUserFocus(BrowserWidget.ToSharedRef(), InFocusEvent.GetCause());
		}
		else
		{
			Reply.SetUserFocus(this->AsShared());
		}
		if (BrowserWindow.IsValid())
		{
			BrowserWindow->OnFocus(true, false);
		}
	}
	return Reply;
}

void SOrionBrowserView::OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->OnDragEnter(MyGeometry, DragDropEvent);
	}
}

FReply SOrionBrowserView::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (BrowserWindow.IsValid())
	{
		return BrowserWindow->OnDragOver(MyGeometry, DragDropEvent);
	}
	return FReply::Unhandled();
}

void SOrionBrowserView::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->OnDragLeave(DragDropEvent);
	}
}

FReply SOrionBrowserView::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (BrowserWindow.IsValid())
	{
		return BrowserWindow->OnDrop(MyGeometry, DragDropEvent);
	}
	return FReply::Unhandled();
}

void SOrionBrowserView::HandleWindowActivated()
{
	if (BrowserViewport.IsValid())
	{
		if (HasAnyUserFocusOrFocusedDescendants())
		{
			BrowserViewport->OnFocusReceived(FFocusEvent());
		}	
	}
}

void SOrionBrowserView::LoadURL(FString NewURL)
{
	AddressBarUrl = FText::FromString(NewURL);
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->LoadURL(MoveTemp(NewURL));
	}
}

void SOrionBrowserView::LoadString(FString Contents, FString DummyURL)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->LoadString(MoveTemp(Contents), MoveTemp(DummyURL));
	}
}

void SOrionBrowserView::Reload()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->Reload();
	}
}

void SOrionBrowserView::StopLoad()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->StopLoad();
	}
}

FText SOrionBrowserView::GetTitleText() const
{
	if (BrowserWindow.IsValid())
	{
		return FText::FromString(BrowserWindow->GetTitle());
	}
	return LOCTEXT("InvalidWindow", "Browser Window is not valid/supported");
}

FString SOrionBrowserView::GetUrl() const
{
	if (BrowserWindow.IsValid())
	{
		return BrowserWindow->GetUrl();
	}

	return FString();
}

FText SOrionBrowserView::GetAddressBarUrlText() const
{
	if(BrowserWindow.IsValid())
	{
		return AddressBarUrl;
	}
	return FText::GetEmpty();
}

bool SOrionBrowserView::IsLoaded() const
{
	if (BrowserWindow.IsValid())
	{
		return (BrowserWindow->GetDocumentLoadingState() == EWebBrowserDocumentState::Completed);
	}

	return false;
}

bool SOrionBrowserView::IsLoading() const
{
	if (BrowserWindow.IsValid())
	{
		return (BrowserWindow->GetDocumentLoadingState() == EWebBrowserDocumentState::Loading);
	}

	return false;
}

bool SOrionBrowserView::CanGoBack() const
{
	if (BrowserWindow.IsValid())
	{
		return BrowserWindow->CanGoBack();
	}
	return false;
}

void SOrionBrowserView::GoBack()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->GoBack();
	}
}

bool SOrionBrowserView::CanGoForward() const
{
	if (BrowserWindow.IsValid())
	{
		return BrowserWindow->CanGoForward();
	}
	return false;
}

void SOrionBrowserView::GoForward()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->GoForward();
	}
}

bool SOrionBrowserView::IsInitialized() const
{
	return BrowserWindow.IsValid() &&  BrowserWindow->IsInitialized();
}

void SOrionBrowserView::SetupParentWindowHandlers()
{
	if (!SlateParentWindowPtr.IsValid())
	{
		SlateParentWindowPtr = FSlateApplication::Get().FindWidgetWindow(SharedThis(this));

		TSharedPtr<SWindow> SlateParentWindow = SlateParentWindowPtr.Pin();
		if (SlateParentWindow.IsValid() && BrowserWindow.IsValid())
		{
			if (!SlateParentWindow->GetOnWindowDeactivatedEvent().IsBoundToObject(this))
			{
				SlateParentWindow->GetOnWindowDeactivatedEvent().AddSP(this, &SOrionBrowserView::HandleWindowDeactivated);
			}

			if (!SlateParentWindow->GetOnWindowActivatedEvent().IsBoundToObject(this))
			{
				SlateParentWindow->GetOnWindowActivatedEvent().AddSP(this, &SOrionBrowserView::HandleWindowActivated);
			}

			BrowserWindow->SetParentWindow(SlateParentWindow);
		}
	}
}

void SOrionBrowserView::HandleBrowserWindowDocumentStateChanged(EWebBrowserDocumentState NewState)
{
	switch (NewState)
	{
	case EWebBrowserDocumentState::Completed:
		{
			if (BrowserWindow.IsValid())
			{
				for (auto Adapter : Adapters)
				{
					Adapter->ConnectTo(BrowserWindow.ToSharedRef());
				}
			}

			OnLoadCompleted.ExecuteIfBound();
		}
		break;

	case EWebBrowserDocumentState::Error:
		OnLoadError.ExecuteIfBound();
		break;

	case EWebBrowserDocumentState::Loading:
		OnLoadStarted.ExecuteIfBound();
		break;
	}
}

void SOrionBrowserView::HandleBrowserWindowNeedsRedraw()
{
	if (FSlateApplication::IsInitialized() && FSlateApplication::Get().IsSlateAsleep())
	{
		// Tell slate that the widget needs to wake up for one frame to get redrawn
		RegisterActiveTimer(0.f, FWidgetActiveTimerDelegate::CreateLambda([this](double InCurrentTime, float InDeltaTime) { return EActiveTimerReturnType::Stop; }));
	}
}

void SOrionBrowserView::HandleTitleChanged( FString NewTitle )
{
	const FText NewTitleText = FText::FromString(NewTitle);
	OnTitleChanged.ExecuteIfBound(NewTitleText);
}

void SOrionBrowserView::HandleUrlChanged( FString NewUrl )
{
	AddressBarUrl = FText::FromString(NewUrl);
	
	AsyncTask(ENamedThreads::Type::GameThread, [this] 
	{
		OnUrlChanged.ExecuteIfBound(AddressBarUrl);
	});
}

void SOrionBrowserView::CloseBrowser()
{
	BrowserWindow->CloseBrowser(true /*force*/, true /*block until closed*/);
}

void SOrionBrowserView::ShowFloatingCloseButton(bool bShow, bool bDraggable)
{
	BrowserWindow->ShowFloatingCloseButton(bShow, bDraggable);
}

TSharedPtr<IWebBrowserWindow> SOrionBrowserView::GetBrowserWindow() const
{
	return BrowserWindow;
}

void SOrionBrowserView::HandleToolTip(FString ToolTipText)
{
	if(ToolTipText.IsEmpty())
	{
		FSlateApplication::Get().CloseToolTip();
		SetToolTip(nullptr);
	}
	else if (OnCreateToolTip.IsBound())
	{
		SetToolTip(OnCreateToolTip.Execute(FText::FromString(ToolTipText)));
		FSlateApplication::Get().UpdateToolTip(true);
	}
	else
	{
		SetToolTipText(FText::FromString(ToolTipText));
		FSlateApplication::Get().UpdateToolTip(true);
	}
}

bool SOrionBrowserView::HandleBeforeNavigation(const FString& Url, const FWebNavigationRequest& Request)
{
	if(OnBeforeNavigation.IsBound())
	{
		return OnBeforeNavigation.Execute(Url, Request);
	}
	return false;
}

bool SOrionBrowserView::HandleLoadUrl(const FString& Method, const FString& Url, FString& OutResponse)
{
	if(OnLoadUrl.IsBound())
	{
		return OnLoadUrl.Execute(Method, Url, OutResponse);
	}
	return false;
}

EWebBrowserDialogEventResponse SOrionBrowserView::HandleShowDialog(const TWeakPtr<IWebBrowserDialog>& DialogParams)
{
	if(OnShowDialog.IsBound())
	{
		return OnShowDialog.Execute(DialogParams);
	}
	return EWebBrowserDialogEventResponse::Unhandled;
}

void SOrionBrowserView::HandleDismissAllDialogs()
{
	OnDismissAllDialogs.ExecuteIfBound();
}


bool SOrionBrowserView::HandleBeforePopup(FString URL, FString Target)
{
	if (OnBeforePopup.IsBound())
	{
		return OnBeforePopup.Execute(URL, Target);
	}

	return false;
}

void SOrionBrowserView::ExecuteJavascript(const FString& ScriptText)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->ExecuteJavascript(ScriptText);
	}
}

void SOrionBrowserView::GetSource(TFunction<void (const FString&)> Callback) const
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->GetSource(Callback);
	}
}


bool SOrionBrowserView::HandleCreateWindow(const TWeakPtr<IWebBrowserWindow>& NewBrowserWindow, const TWeakPtr<IWebBrowserPopupFeatures>& PopupFeatures)
{
	if(OnCreateWindow.IsBound())
	{
		return OnCreateWindow.Execute(NewBrowserWindow, PopupFeatures);
	}
	return false;
}

bool SOrionBrowserView::HandleCloseWindow(const TWeakPtr<IWebBrowserWindow>& NewBrowserWindow)
{
	if(OnCloseWindow.IsBound())
	{
		return OnCloseWindow.Execute(NewBrowserWindow);
	}
	return false;
}

void SOrionBrowserView::HandleFloatingCloseButtonPressed()
{
	if (OnFloatingCloseButtonPressed.IsBound())
	{
		OnFloatingCloseButtonPressed.Execute();
	}
}

void SOrionBrowserView::BindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->BindUObject(Name, Object, bIsPermanent);
	}
}

void SOrionBrowserView::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->UnbindUObject(Name, Object, bIsPermanent);
	}
}

void SOrionBrowserView::BindAdapter(const TSharedRef<IWebBrowserAdapter>& Adapter)
{
	Adapters.Add(Adapter);
	if (BrowserWindow.IsValid())
	{
		Adapter->ConnectTo(BrowserWindow.ToSharedRef());
	}
}

void SOrionBrowserView::UnbindAdapter(const TSharedRef<IWebBrowserAdapter>& Adapter)
{
	Adapters.Remove(Adapter);
	if (BrowserWindow.IsValid())
	{
		Adapter->DisconnectFrom(BrowserWindow.ToSharedRef());
	}
}

void SOrionBrowserView::BindInputMethodSystem(ITextInputMethodSystem* TextInputMethodSystem)
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->BindInputMethodSystem(TextInputMethodSystem);
	}
}

void SOrionBrowserView::UnbindInputMethodSystem()
{
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->UnbindInputMethodSystem();
	}
}

void SOrionBrowserView::HandleShowPopup(const FIntRect& PopupSize)
{
	check(!PopupMenuPtr.IsValid())

	TSharedPtr<SViewport> MenuContent;
	SAssignNew(MenuContent, SViewport)
				.ViewportSize(PopupSize.Size())
				.EnableGammaCorrection(false)
				.EnableBlending(false)
				.IgnoreTextureAlpha(true)
				.Visibility(EVisibility::Visible);
		MenuViewport = MakeShareable(new FOrionWebBrowserViewport(BrowserWindow, true));
	MenuContent->SetViewportInterface(MenuViewport.ToSharedRef());

	FWidgetPath WidgetPath;
	FSlateApplication::Get().GeneratePathToWidgetUnchecked(SharedThis(this), WidgetPath);

	if (WidgetPath.IsValid())
	{
		TSharedRef< SWidget > MenuContentRef = MenuContent.ToSharedRef();
		const FGeometry& BrowserGeometry = WidgetPath.Widgets.Last().Geometry;
		const FVector2D NewPosition = BrowserGeometry.LocalToAbsolute(PopupSize.Min);

		// Open the pop-up. The popup method will be queried from the widget path passed in.
		TSharedPtr<IMenu> NewMenu = FSlateApplication::Get().PushMenu(SharedThis(this), WidgetPath, MenuContentRef, NewPosition, FPopupTransitionEffect( FPopupTransitionEffect::ComboButton ), false);

		if (NewMenu.IsValid())
		{
			NewMenu->GetOnMenuDismissed().AddSP(this, &SOrionBrowserView::HandleMenuDismissed);
			PopupMenuPtr = NewMenu;
		}
	}

}

void SOrionBrowserView::HandleMenuDismissed(TSharedRef<IMenu>)
{
	PopupMenuPtr.Reset();
}

void SOrionBrowserView::HandleDismissPopup()
{
	if (PopupMenuPtr.IsValid())
	{
		PopupMenuPtr.Pin()->Dismiss();
		FSlateApplication::Get().SetKeyboardFocus(SharedThis(this), EFocusCause::SetDirectly);
	}
}

bool SOrionBrowserView::HandleSuppressContextMenu()
{
	if (OnSuppressContextMenu.IsBound())
	{
		return OnSuppressContextMenu.Execute();
	}

	return false;
}

bool SOrionBrowserView::HandleDrag(const FPointerEvent& MouseEvent)
{
	if (OnDragWindow.IsBound())
	{
		return OnDragWindow.Execute(MouseEvent);
	}
	return false;
}

bool SOrionBrowserView::UnhandledKeyDown(const FKeyEvent& KeyEvent)
{
	if (OnUnhandledKeyDown.IsBound())
	{
		return OnUnhandledKeyDown.Execute(KeyEvent);
	}
	return false;
}

bool SOrionBrowserView::UnhandledKeyUp(const FKeyEvent& KeyEvent)
{
	if (OnUnhandledKeyUp.IsBound())
	{
		return OnUnhandledKeyUp.Execute(KeyEvent);
	}
	return false;
}

bool SOrionBrowserView::UnhandledKeyChar(const FCharacterEvent& CharacterEvent)
{
	if (OnUnhandledKeyChar.IsBound())
	{
		return OnUnhandledKeyChar.Execute(CharacterEvent);
	}
	return false;
}

void SOrionBrowserView::SetParentWindow(TSharedPtr<SWindow> Window)
{
	SetupParentWindowHandlers();
	if (BrowserWindow.IsValid())
	{
		BrowserWindow->SetParentWindow(Window);
	}
}

void SOrionBrowserView::SetBrowserKeyboardFocus()
{
	BrowserWindow->OnFocus(HasAnyUserFocusOrFocusedDescendants(), false);
}

void SOrionBrowserView::HandleConsoleMessage(const FString& Message, const FString& Source, int32 Line, EWebBrowserConsoleLogSeverity Serverity)
{
	OnConsoleMessage.ExecuteIfBound(Message, Source, Line, Serverity);
}

#undef LOCTEXT_NAMESPACE
