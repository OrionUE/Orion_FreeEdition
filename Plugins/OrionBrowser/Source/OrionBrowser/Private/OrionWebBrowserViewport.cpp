/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionWebBrowserViewport.h"
#include "Textures/SlateShaderResource.h"
#include "Widgets/SWidget.h"
#include "IWebBrowserWindow.h"
#include "Layout/WidgetPath.h"

#if ORION_WITH_CEF3
#include "CEF/CEFWebBrowserWindow.h"
#endif

FIntPoint FOrionWebBrowserViewport::GetSize() const
{
	return (WebBrowserWindow->GetTexture(bIsPopup) != nullptr)
		? FIntPoint(WebBrowserWindow->GetTexture(bIsPopup)->GetWidth(), WebBrowserWindow->GetTexture(bIsPopup)->GetHeight())
		: FIntPoint();
}

FSlateShaderResource* FOrionWebBrowserViewport::GetViewportRenderTargetTexture() const
{
	return WebBrowserWindow->GetTexture(bIsPopup);
}

void FOrionWebBrowserViewport::Tick( const FGeometry& AllottedGeometry, double InCurrentTime, float DeltaTime )
{
	if (!bIsPopup)
	{
		const float DPI = (WebBrowserWindow->GetParentWindow().IsValid() ? WebBrowserWindow->GetParentWindow()->GetNativeWindow()->GetDPIScaleFactor() : 1.0f);
		const float DPIScale = AllottedGeometry.Scale / DPI;
		FVector2D AbsoluteSize = AllottedGeometry.GetLocalSize() * DPIScale;
		WebBrowserWindow->SetViewportSize(AbsoluteSize.IntPoint(), AllottedGeometry.GetAbsolutePosition().IntPoint());

#if ORION_WITH_CEF3
		// Forward the AllottedGeometry to the WebBrowserWindow so the IME implementation can use it
		TSharedPtr<FOrionCEFWebBrowserWindow> CefWebBrowserWindow = StaticCastSharedPtr<FOrionCEFWebBrowserWindow>(WebBrowserWindow);
		CefWebBrowserWindow->UpdateCachedGeometry(AllottedGeometry);
#endif
	}
}

bool FOrionWebBrowserViewport::RequiresVsync() const
{
	return false;
}

FCursorReply FOrionWebBrowserViewport::OnCursorQuery( const FGeometry& MyGeometry, const FPointerEvent& CursorEvent )
{
	return WebBrowserWindow->OnCursorQuery(MyGeometry, CursorEvent);
}

FReply FOrionWebBrowserViewport::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	// Capture mouse on left/middle/right button down so that you can drag out of the viewport
	FReply Reply = WebBrowserWindow->OnMouseButtonDown(MyGeometry, MouseEvent, bIsPopup);
	if (MouseEvent.GetPressedButtons().Num() == 1 &&
		(MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton || MouseEvent.GetEffectingButton() == EKeys::MiddleMouseButton || MouseEvent.GetEffectingButton() == EKeys::RightMouseButton))
	{
		const FWidgetPath* Path = MouseEvent.GetEventPath();
		if (Path->IsValid())
		{
			TSharedRef<SWidget> TopWidget = Path->Widgets.Last().Widget;
			return Reply.CaptureMouse(TopWidget);
		}
	}
	return Reply;
}

FReply FOrionWebBrowserViewport::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	// Release mouse capture when all buttons released
	FReply Reply = WebBrowserWindow->OnMouseButtonUp(MyGeometry, MouseEvent, bIsPopup);
	if (MouseEvent.GetPressedButtons().IsEmpty())
	{
		return Reply.ReleaseMouseCapture();
	}
	return Reply;
}

void FOrionWebBrowserViewport::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

void FOrionWebBrowserViewport::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	WebBrowserWindow->OnMouseLeave(MouseEvent);
}

FReply FOrionWebBrowserViewport::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return WebBrowserWindow->OnMouseMove(MyGeometry, MouseEvent, bIsPopup);
}

FReply FOrionWebBrowserViewport::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return WebBrowserWindow->OnMouseWheel(MyGeometry, MouseEvent, bIsPopup);
}

FReply FOrionWebBrowserViewport::OnTouchGesture( const FGeometry& MyGeometry, const FPointerEvent& GestureEvent )
{
	return WebBrowserWindow->OnTouchGesture(MyGeometry, GestureEvent, bIsPopup);
}

FReply FOrionWebBrowserViewport::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	FReply Reply = WebBrowserWindow->OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent, bIsPopup);
	return Reply;
}

FReply FOrionWebBrowserViewport::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	return WebBrowserWindow->OnKeyDown(InKeyEvent) ? FReply::Handled() : FReply::Unhandled();
}

FReply FOrionWebBrowserViewport::OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	return WebBrowserWindow->OnKeyUp(InKeyEvent) ? FReply::Handled() : FReply::Unhandled();
}

FReply FOrionWebBrowserViewport::OnKeyChar( const FGeometry& MyGeometry, const FCharacterEvent& InCharacterEvent )
{
	return WebBrowserWindow->OnKeyChar(InCharacterEvent) ? FReply::Handled() : FReply::Unhandled();
}

FReply FOrionWebBrowserViewport::OnFocusReceived(const FFocusEvent& InFocusEvent)
{
	WebBrowserWindow->OnFocus(true, bIsPopup);
	return FReply::Handled();
}

void FOrionWebBrowserViewport::OnFocusLost(const FFocusEvent& InFocusEvent)
{
	WebBrowserWindow->OnFocus(false, bIsPopup);
}
