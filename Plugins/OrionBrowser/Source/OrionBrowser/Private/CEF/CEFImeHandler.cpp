/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEF/CEFImeHandler.h"

#if ORION_WITH_CEF3 && !PLATFORM_LINUX

#include "CEFTextInputMethodContext.h"


FOrionCEFImeHandler::FOrionCEFImeHandler(CefRefPtr<CefBrowser> Browser)
	: InternalCefBrowser(Browser)
	, TextInputMethodSystem(nullptr)
	, bContextWasActiveWhenFocusLost(false)
{

}

bool FOrionCEFImeHandler::OnProcessMessageReceived(CefRefPtr<CefBrowser> Browser, CefProcessId SourceProcess, CefRefPtr<CefProcessMessage> Message)
{
	bool Result = false;
	FString MessageName = WCHAR_TO_TCHAR(Message->GetName().ToWString().c_str());
	if (MessageName == TEXT("UE::IME::FocusChanged"))
	{
		Result = HandleFocusChangedMessage(Message->GetArgumentList());
	}
	return Result;
}

void FOrionCEFImeHandler::SendProcessMessage(CefRefPtr<CefProcessMessage> Message)
{
	if (IsValid() && InternalCefBrowser->GetMainFrame())
	{
		InternalCefBrowser->GetMainFrame()->SendProcessMessage(PID_RENDERER, Message);
	}
}

void FOrionCEFImeHandler::BindInputMethodSystem(ITextInputMethodSystem* InTextInputMethodSystem)
{
	TextInputMethodSystem = InTextInputMethodSystem;
	if (TextInputMethodSystem && TextInputMethodContext.IsValid())
	{
		TextInputMethodChangeNotifier = TextInputMethodSystem->RegisterContext(TextInputMethodContext.ToSharedRef());
	}
}

void FOrionCEFImeHandler::UnbindInputMethodSystem()
{
	if (TextInputMethodContext.IsValid())
	{
		DestroyContext();
	}
	TextInputMethodSystem = nullptr;
}

void FOrionCEFImeHandler::ActivateContext()
{
	if (!TextInputMethodSystem)
	{
		return;
	}

	if (!TextInputMethodContext.IsValid())
	{
		TextInputMethodContext = FOrionCEFTextInputMethodContext::Create(SharedThis(this));
		TextInputMethodChangeNotifier = TextInputMethodSystem->RegisterContext(TextInputMethodContext.ToSharedRef());
		if (TextInputMethodChangeNotifier.IsValid())
		{
			TextInputMethodChangeNotifier->NotifyLayoutChanged(ITextInputMethodChangeNotifier::ELayoutChangeType::Created);
		}
	}

	TSharedRef<FOrionCEFTextInputMethodContext> TextInputMethodContextRef = TextInputMethodContext.ToSharedRef();
	if (!TextInputMethodSystem->IsActiveContext(TextInputMethodContextRef))
	{
		TextInputMethodSystem->ActivateContext(TextInputMethodContextRef);
	}
}

void FOrionCEFImeHandler::DeactivateContext()
{
	if (!TextInputMethodSystem || !TextInputMethodContext.IsValid())
	{
		return;
	}

	TSharedRef<FOrionCEFTextInputMethodContext> TextInputMethodContextRef = TextInputMethodContext.ToSharedRef();
	if (TextInputMethodSystem->IsActiveContext(TextInputMethodContextRef))
	{
		// Make sure that the composition is aborted to avoid any IME calls to EndComposition from trying to mutate our dying owner widget
		if (TextInputMethodContextRef->IsComposing())
		{
			TextInputMethodContextRef->AbortComposition();
			if (TextInputMethodChangeNotifier.IsValid())
			{
				TextInputMethodChangeNotifier->CancelComposition();
			}
		}
		TextInputMethodSystem->DeactivateContext(TextInputMethodContextRef);
	}
}

void FOrionCEFImeHandler::DestroyContext()
{
	if (!TextInputMethodContext.IsValid())
	{
		return;
	}

	if (TextInputMethodSystem)
	{
		DeactivateContext();
		TextInputMethodSystem->UnregisterContext(TextInputMethodContext.ToSharedRef());
	}

	TextInputMethodChangeNotifier.Reset();
	TextInputMethodContext.Reset();
}

bool FOrionCEFImeHandler::HandleFocusChangedMessage(CefRefPtr<CefListValue> MessageArguments)
{
	if (MessageArguments->GetSize() == 1 &&
		MessageArguments->GetType(0) == VTYPE_STRING)
	{
		DeactivateContext();
		return true;
	}
	else if (MessageArguments->GetSize() == 8 &&
		MessageArguments->GetType(0) == VTYPE_STRING &&
		MessageArguments->GetType(1) == VTYPE_STRING &&
		MessageArguments->GetType(2) == VTYPE_BOOL &&
		MessageArguments->GetType(3) == VTYPE_STRING &&
		MessageArguments->GetType(4) == VTYPE_INT &&
		MessageArguments->GetType(5) == VTYPE_INT &&
		MessageArguments->GetType(6) == VTYPE_INT &&
		MessageArguments->GetType(7) == VTYPE_INT)
	{
		FString Type = WCHAR_TO_TCHAR(MessageArguments->GetString(0).ToWString().c_str());
		bool bIsEditable = MessageArguments->GetBool(2);

		if (Type == TEXT("DOM_NODE_TYPE_ELEMENT") && bIsEditable)
		{
			ActivateContext();
		}
		else
		{
			DeactivateContext();
		}
		return true;
	}

	return false;
}

void FOrionCEFImeHandler::UnbindCefBrowser()
{
	if (TextInputMethodContext.IsValid())
	{
		DestroyContext();
	}
}


void FOrionCEFImeHandler::CacheBrowserSlateInfo(const TSharedRef<SWidget>& Widget)
{
	InternalBrowserSlateWidget = Widget;
}

void FOrionCEFImeHandler::SetFocus(bool bHasFocus)
{
	if (!TextInputMethodSystem || !TextInputMethodContext.IsValid())
	{
		return;
	}

	if (bContextWasActiveWhenFocusLost && bHasFocus)
	{
		// Reactivate the context when we get focus back, for the case where the focused element in the page hasn't changed.
		// If the user clicked on a different element to focus the browser, then we'll get a FocusChanged message and we'll adjust activation accordingly
		ActivateContext();
	}
	else
	{
		// Save the current activated state of the context, so we can restore it if we get the focus back.
		bContextWasActiveWhenFocusLost = TextInputMethodSystem->IsActiveContext(TextInputMethodContext.ToSharedRef());
		DeactivateContext();
	}
}

void FOrionCEFImeHandler::UpdateCachedGeometry(const FGeometry& AllottedGeometry)
{
	if (TextInputMethodContext.IsValid() &&
		TextInputMethodContext->UpdateCachedGeometry(AllottedGeometry))
	{
		if (TextInputMethodChangeNotifier.IsValid())
		{
			TextInputMethodChangeNotifier->NotifyLayoutChanged(ITextInputMethodChangeNotifier::ELayoutChangeType::Changed);
		}
	}
}

void FOrionCEFImeHandler::CEFCompositionRangeChanged(const CefRange& SelectionRange, const CefRenderHandler::RectList& CharacterBounds)
{
	if (TextInputMethodContext.IsValid() &&
		TextInputMethodContext->CEFCompositionRangeChanged(SelectionRange, CharacterBounds))
	{
		if (TextInputMethodChangeNotifier.IsValid())
		{
			TextInputMethodChangeNotifier->NotifyLayoutChanged(ITextInputMethodChangeNotifier::ELayoutChangeType::Changed);
		}
	}
}

void FOrionCEFImeHandler::CEFTextSelectionChanged(const CefString& SelectedText, const CefRange& SelectionRange)
{
	if (TextInputMethodContext.IsValid() &&
		TextInputMethodContext->CEFTextSelectionChanged(SelectedText, SelectionRange))
	{
		if (TextInputMethodChangeNotifier.IsValid())
		{
			TextInputMethodChangeNotifier->NotifySelectionChanged();
		}
	}
}

#endif
