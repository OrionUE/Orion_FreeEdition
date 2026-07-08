/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEF/CEFBrowserPopupFeatures.h"

#if ORION_WITH_CEF3

FOrionCEFBrowserPopupFeatures::FOrionCEFBrowserPopupFeatures()
	: X(0)
	, bXSet(false)
	, Y(0)
	, bYSet(false)
	, Width(0)
	, bWidthSet(false)
	, Height(0)
	, bHeightSet(false)
	, bMenuBarVisible(true)
	, bStatusBarVisible(false)
	, bToolBarVisible(true)
	, bLocationBarVisible(true)
	, bScrollbarsVisible(true)
	, bResizable(true)
	, bIsFullscreen(false)
	, bIsDialog(false)
{
}


FOrionCEFBrowserPopupFeatures::FOrionCEFBrowserPopupFeatures(const CefPopupFeatures& PopupFeatures)
{
	X = PopupFeatures.x;
	bXSet = PopupFeatures.xSet ? true : false;
	Y = PopupFeatures.y;
	bYSet = PopupFeatures.ySet ? true : false;
	Width = PopupFeatures.width;
	bWidthSet = PopupFeatures.widthSet ? true : false;
	Height = PopupFeatures.height;
	bHeightSet = PopupFeatures.heightSet ? true : false;
	bMenuBarVisible = PopupFeatures.isPopup ? false : true;
	bStatusBarVisible = PopupFeatures.isPopup ? false : true;
	bToolBarVisible = PopupFeatures.isPopup ? false : true;
	bScrollbarsVisible = PopupFeatures.isPopup ? false : true;
	
	// no longer set by the CEF API so default them here to their historic value
	bLocationBarVisible = false;
	bResizable = false;
	bIsFullscreen = false;
	bIsDialog = false;
}

FOrionCEFBrowserPopupFeatures::~FOrionCEFBrowserPopupFeatures()
{
}

void FOrionCEFBrowserPopupFeatures::SetResizable(const bool bResize)
{
	bResizable = bResize;
}

int FOrionCEFBrowserPopupFeatures::GetX() const
{
	return X;
}

bool FOrionCEFBrowserPopupFeatures::IsXSet() const
{
	return bXSet;
}

int FOrionCEFBrowserPopupFeatures::GetY() const
{
	return Y;
}

bool FOrionCEFBrowserPopupFeatures::IsYSet() const
{
	return bYSet;
}

int FOrionCEFBrowserPopupFeatures::GetWidth() const
{
	return Width;
}

bool FOrionCEFBrowserPopupFeatures::IsWidthSet() const
{
	return bWidthSet;
}

int FOrionCEFBrowserPopupFeatures::GetHeight() const
{
	return Height;
}

bool FOrionCEFBrowserPopupFeatures::IsHeightSet() const
{
	return bHeightSet;
}

bool FOrionCEFBrowserPopupFeatures::IsMenuBarVisible() const
{
	return bMenuBarVisible;
}

bool FOrionCEFBrowserPopupFeatures::IsStatusBarVisible() const
{
	return bStatusBarVisible;
}

bool FOrionCEFBrowserPopupFeatures::IsToolBarVisible() const
{
	return bToolBarVisible;
}

bool FOrionCEFBrowserPopupFeatures::IsLocationBarVisible() const
{
	return bLocationBarVisible;
}

bool FOrionCEFBrowserPopupFeatures::IsScrollbarsVisible() const
{
	return bScrollbarsVisible;
}

bool FOrionCEFBrowserPopupFeatures::IsResizable() const
{
	return bResizable;
}

bool FOrionCEFBrowserPopupFeatures::IsFullscreen() const
{
	return bIsFullscreen;
}

bool FOrionCEFBrowserPopupFeatures::IsDialog() const
{
	return bIsDialog;
}

TArray<FString> FOrionCEFBrowserPopupFeatures::GetAdditionalFeatures() const
{
	TArray<FString> Empty;
	return Empty;
}

#endif
