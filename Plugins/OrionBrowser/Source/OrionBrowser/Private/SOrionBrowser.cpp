/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "SOrionBrowser.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Images/SThrobber.h"
#include "Framework/Application/SlateApplication.h"

#if ORION_WITH_CEF3
#include "CEF/CEFWebBrowserWindow.h"
#endif // ORION_WITH_CEF3

#define LOCTEXT_NAMESPACE "OrionBrowser"

SOrionBrowser::SOrionBrowser()
{
}

SOrionBrowser::~SOrionBrowser()
{
#if ORION_WITH_CEF3
	UnbindInputMethodSystem();
#endif
}

/*virtual*/ void SOrionBrowser::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

#if WITH_EDITOR
#if ORION_WITH_CEF3
	if (WebBrowserWindow.IsValid()) 
	{
		const TSharedPtr<FOrionCEFWebBrowserWindow> CefWebBrowserWindow = StaticCastSharedPtr<FOrionCEFWebBrowserWindow>(WebBrowserWindow);
		if (CefWebBrowserWindow.IsValid() && CefWebBrowserWindow->HasResizeBug() && CefWebBrowserWindow->IsCefResizeNeeded())
		{
			CefWebBrowserWindow->RequestCefResize();
		}
	}
#endif // ORION_WITH_CEF3
#endif // WITH_EDITOR
}

void SOrionBrowser::Construct(const FArguments& InArgs, const TSharedPtr<IWebBrowserWindow>& InWebBrowserWindow)
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
	OnConsoleMessage = InArgs._OnConsoleMessage;
	OnCreateWindow = InArgs._OnCreateWindow;
	OnCloseWindow = InArgs._OnCloseWindow;
	bShowInitialThrobber = InArgs._ShowInitialThrobber;
	
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			.Visibility((InArgs._ShowControls || InArgs._ShowAddressBar) ? EVisibility::Visible : EVisibility::Collapsed)
			+ SHorizontalBox::Slot()
			.Padding(0, 5)
			.AutoWidth()
			[
				SNew(SHorizontalBox)
				.Visibility(InArgs._ShowControls ? EVisibility::Visible : EVisibility::Collapsed)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("Back","Back"))
					.IsEnabled(this, &SOrionBrowser::CanGoBack)
					.OnClicked(this, &SOrionBrowser::OnBackClicked)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("Forward", "Forward"))
					.IsEnabled(this, &SOrionBrowser::CanGoForward)
					.OnClicked(this, &SOrionBrowser::OnForwardClicked)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(this, &SOrionBrowser::GetReloadButtonText)
					.OnClicked(this, &SOrionBrowser::OnReloadClicked)
				]
				+SHorizontalBox::Slot()
				.FillWidth(1.0f)
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Right)
				.Padding(5)
				[
					SNew(STextBlock)
					.Visibility(InArgs._ShowAddressBar ? EVisibility::Collapsed : EVisibility::Visible )
					.Text(this, &SOrionBrowser::GetTitleText)
					.Justification(ETextJustify::Right)
				]
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Fill)
			.Padding(5.f, 5.f)
			[
				// @todo: A proper addressbar widget should go here, for now we use a simple textbox.
				SAssignNew(InputText, SEditableTextBox)
				.Visibility(InArgs._ShowAddressBar ? EVisibility::Visible : EVisibility::Collapsed)
				.OnTextCommitted(this, &SOrionBrowser::OnUrlTextCommitted)
				.Text(this, &SOrionBrowser::GetAddressBarUrlText)
				.SelectAllTextWhenFocused(true)
				.ClearKeyboardFocusOnCommit(true)
				.RevertTextOnEscape(true)
			]
		]
		+SVerticalBox::Slot()
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				SAssignNew(BrowserView, SOrionBrowserView, InWebBrowserWindow)
				.ParentWindow(InArgs._ParentWindow)
				.InitialURL(InArgs._InitialURL)
				.ContentsToLoad(InArgs._ContentsToLoad)
				.UserAgentApplication(InArgs._UserAgentApplication)
				.ShowErrorMessage(InArgs._ShowErrorMessage)
				.SupportsTransparency(InArgs._SupportsTransparency)
				.SupportsThumbMouseButtonNavigation(InArgs._SupportsThumbMouseButtonNavigation)
				.BackgroundColor(InArgs._BackgroundColor)
				.PopupMenuMethod(InArgs._PopupMenuMethod)
				.CursorPolicy(InArgs._CursorPolicy)
				.ViewportSize(InArgs._ViewportSize)
				.OnLoadCompleted(OnLoadCompleted)
				.OnLoadError(OnLoadError)
				.OnLoadStarted(OnLoadStarted)
				.OnTitleChanged(OnTitleChanged)
				.OnUrlChanged(OnUrlChanged)
				.OnBeforePopup(OnBeforePopup)
				.OnCreateWindow(OnCreateWindow)
				.OnCloseWindow(OnCloseWindow)
				.OnBeforeNavigation(OnBeforeNavigation)
				.OnLoadUrl(OnLoadUrl)
				.OnShowDialog(OnShowDialog)
				.OnDismissAllDialogs(OnDismissAllDialogs)
				.Visibility(this, &SOrionBrowser::GetViewportVisibility)
				.OnSuppressContextMenu(InArgs._OnSuppressContextMenu)
				.OnDragWindow(InArgs._OnDragWindow)
				.OnConsoleMessage(OnConsoleMessage)
				.BrowserFrameRate(InArgs._BrowserFrameRate)
			]
			+ SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SCircularThrobber)
				.Radius(10.0f)
				.ToolTipText(LOCTEXT("LoadingThrobberToolTip", "Loading page..."))
				.Visibility(this, &SOrionBrowser::GetLoadingThrobberVisibility)
			]
		]
	];


	WebBrowserWindow = (InWebBrowserWindow.IsValid() ? InWebBrowserWindow : BrowserView->GetBrowserWindow());	
	SetCursorPolicy(InArgs._CursorPolicy);


#if ORION_WITH_CEF3
	if (WebBrowserWindow.IsValid()) 
	{
		const TSharedPtr<FOrionCEFWebBrowserWindow> CefWebBrowserWindow = StaticCastSharedPtr<FOrionCEFWebBrowserWindow>(WebBrowserWindow);
		if (CefWebBrowserWindow.IsValid())
		{
			CefWebBrowserWindow->SetCaptureCefFrames(InArgs._UseSmoothResizing);
		}
	}

	// Make the IME (Input Method Editor) work with HTML text input boxes on web pages,
	// for non-ASCII languages, like "Chinese (Traditional, Taiwan)".
	if (FSlateApplication::IsInitialized())
	{
		if (ITextInputMethodSystem* InputMethodSystem = FSlateApplication::Get().GetTextInputMethodSystem())
		{
			BindInputMethodSystem(InputMethodSystem);
		}
	}
#endif
}

void SOrionBrowser::LoadURL(FString NewURL)
{
	if (BrowserView.IsValid())
	{
		BrowserView->LoadURL(MoveTemp(NewURL));
	}
}

void SOrionBrowser::LoadString(FString Contents, FString DummyURL)
{
	if (BrowserView.IsValid())
	{
		BrowserView->LoadString(MoveTemp(Contents), MoveTemp(DummyURL));
	}
}

void SOrionBrowser::Reload()
{
	if (BrowserView.IsValid())
	{
		BrowserView->Reload();
	}
}

void SOrionBrowser::StopLoad()
{
	if (BrowserView.IsValid())
	{
		BrowserView->StopLoad();
	}
}

FText SOrionBrowser::GetTitleText() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->GetTitleText();
	}
	return LOCTEXT("InvalidWindow", "Browser Window is not valid/supported");
}

FString SOrionBrowser::GetUrl() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->GetUrl();
	}

	return FString();
}

FText SOrionBrowser::GetAddressBarUrlText() const
{
	if(BrowserView.IsValid())
	{
		return BrowserView->GetAddressBarUrlText();
	}
	return FText::GetEmpty();
}

bool SOrionBrowser::IsLoaded() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->IsLoaded();
	}

	return false;
}

bool SOrionBrowser::IsLoading() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->IsLoading();
	}

	return false;
}

bool SOrionBrowser::CanGoBack() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->CanGoBack();
	}
	return false;
}

void SOrionBrowser::GoBack()
{
	if (BrowserView.IsValid())
	{
		BrowserView->GoBack();
	}
}

FReply SOrionBrowser::OnBackClicked()
{
	GoBack();
	return FReply::Handled();
}

bool SOrionBrowser::CanGoForward() const
{
	if (BrowserView.IsValid())
	{
		return BrowserView->CanGoForward();
	}
	return false;
}

void SOrionBrowser::GoForward()
{
	if (BrowserView.IsValid())
	{
		BrowserView->GoForward();
	}
}

FReply SOrionBrowser::OnForwardClicked()
{
	GoForward();
	return FReply::Handled();
}

FText SOrionBrowser::GetReloadButtonText() const
{
	static FText ReloadText = LOCTEXT("Reload", "Reload");
	static FText StopText = LOCTEXT("StopText", "Stop");

	if (BrowserView.IsValid())
	{
		if (BrowserView->IsLoading())
		{
			return StopText;
		}
	}
	return ReloadText;
}

FReply SOrionBrowser::OnReloadClicked()
{
	if (IsLoading())
	{
		StopLoad();
	}
	else
	{
		Reload();
	}
	return FReply::Handled();
}

void SOrionBrowser::OnUrlTextCommitted( const FText& NewText, ETextCommit::Type CommitType )
{
	if(CommitType == ETextCommit::OnEnter)
	{
		LoadURL(NewText.ToString());
	}
}

EVisibility SOrionBrowser::GetViewportVisibility() const
{
	if (!bForceThrobber && (!bShowInitialThrobber || BrowserView->IsInitialized()))
	{
		return EVisibility::Visible;
	}
	return EVisibility::Hidden;
}

EVisibility SOrionBrowser::GetLoadingThrobberVisibility() const
{
	if (bForceThrobber || (bShowInitialThrobber && !BrowserView->IsInitialized()))
	{
		return EVisibility::Visible;
	}
	return EVisibility::Hidden;
}


void SOrionBrowser::ExecuteJavascript(const FString& ScriptText)
{
	if (BrowserView.IsValid())
	{
		BrowserView->ExecuteJavascript(ScriptText);
	}
}

void SOrionBrowser::GetSource(TFunction<void (const FString&)> Callback) const
{
	if (BrowserView.IsValid())
	{
		BrowserView->GetSource(Callback);
	}
}

void SOrionBrowser::BindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (BrowserView.IsValid())
	{
		BrowserView->BindUObject(Name, Object, bIsPermanent);
	}
}

void SOrionBrowser::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
	if (BrowserView.IsValid())
	{
		BrowserView->UnbindUObject(Name, Object, bIsPermanent);
	}
}

void SOrionBrowser::BindAdapter(const TSharedRef<IWebBrowserAdapter>& Adapter)
{
	if (BrowserView.IsValid())
	{
		BrowserView->BindAdapter(Adapter);
	}
}

void SOrionBrowser::UnbindAdapter(const TSharedRef<IWebBrowserAdapter>& Adapter)
{
	if (BrowserView.IsValid())
	{
		BrowserView->UnbindAdapter(Adapter);
	}
}

void SOrionBrowser::BindInputMethodSystem(ITextInputMethodSystem* TextInputMethodSystem)
{
	UnbindInputMethodSystem();

	if (!TextInputMethodSystem || !FSlateApplication::IsInitialized())
	{
		return;
	}

	
	if (BrowserView.IsValid())
	{
		BrowserView->BindInputMethodSystem(TextInputMethodSystem);
	}

#if ORION_WITH_CEF3
	// During shutdown, avoids crash, ensures we unbind Input Method System while the UI is still valid.
	InputMethodSystemSlatePreShutdownDelegateHandle = FSlateApplication::Get().OnPreShutdown().AddSP(
		SharedThis(this), &SOrionBrowser::UnbindInputMethodSystem);
#endif
}

void SOrionBrowser::UnbindInputMethodSystem()
{
	if (!FSlateApplication::IsInitialized())
	{
		return;
	}
	
	
	if (BrowserView.IsValid())
	{
		BrowserView->UnbindInputMethodSystem();
	}

#if ORION_WITH_CEF3
	if (InputMethodSystemSlatePreShutdownDelegateHandle.IsValid())
	{
		FSlateApplication::Get().OnPreShutdown().Remove(InputMethodSystemSlatePreShutdownDelegateHandle);
		InputMethodSystemSlatePreShutdownDelegateHandle.Reset();
	}
#endif
}

void SOrionBrowser::SetParentWindow(TSharedPtr<SWindow> Window)
{
	if (BrowserView.IsValid())
	{
		BrowserView->SetParentWindow(Window);
	}
}

void SOrionBrowser::SetCursorPolicy(EOrionBrowserCursorPolicy InCursorPolicy)
{
	if (WebBrowserWindow.IsValid())
	{
		WebBrowserWindow->SetCursorPolicy(InCursorPolicy);
	}
}

EOrionBrowserCursorPolicy SOrionBrowser::GetCursorPolicy() const
{
	if (WebBrowserWindow.IsValid())
	{
		return WebBrowserWindow->GetCursorPolicy();
	}

	return EOrionBrowserCursorPolicy::PageControlled;
}

void SOrionBrowser::ShowThrobber()
{
	bForceThrobber = true;
}

void SOrionBrowser::HideThrobber()
{
	bForceThrobber = false;
}

FReply SOrionBrowser::OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent)
{
	if (BrowserView.IsValid() && InFocusEvent.GetCause() == EFocusCause::SetDirectly)
	{
		FReply Reply = FReply::Handled();
		Reply.SetUserFocus(BrowserView.ToSharedRef(), InFocusEvent.GetCause(), true);
		return Reply;
	}

	return SCompoundWidget::OnFocusReceived(MyGeometry, InFocusEvent);
}

#undef LOCTEXT_NAMESPACE
