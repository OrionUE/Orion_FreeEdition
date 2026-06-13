/*
* Copyright (c) 2022 - 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/

#include "StreamlineViewExtension.h"
#include "StreamlineShaders.h"
#include "StreamlineCorePrivate.h"
#include "StreamlineDLSSG.h"
#include "StreamlineLatewarp.h"
#include "StreamlineDeepDVC.h"
#include "StreamlineRHI.h"
#include "StreamlineAPI.h"

#include "ClearQuad.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "SceneRendering.h"
#include "SceneView.h"
#include "SceneTextureParameters.h"
#include "SystemTextures.h"
#include "VelocityCombinePass.h"
#include "sl_helpers.h"
#include "sl_dlss_g.h"
#define LOCTEXT_NAMESPACE "FStreamlineViewExtension"

#if defined (ENGINE_STREAMLINE_VERSION) && (ENGINE_STREAMLINE_VERSION >= 1)
#define ENGINE_SUPPORTS_CLEARQUADALPHA 1
#else
#define ENGINE_SUPPORTS_CLEARQUADALPHA ((ENGINE_MAJOR_VERSION == 5) && (ENGINE_MINOR_VERSION >= 2))
#endif

#ifndef XR_WORKAROUND
#define XR_WORKAROUND 0
#endif

#ifndef SUPPORT_GUIDE_GBUFFER
#define SUPPORT_GUIDE_GBUFFER 0
#endif

TArray<FTrackedView> FStreamlineViewExtension::TrackedViews;


static TAutoConsoleVariable<bool> CVarStreamlineTagSceneColorWithoutHUD(
	TEXT("r.Streamline.TagSceneColorWithoutHUD"),
	true,
	TEXT("Pass scene color without HUD into DLSS Frame Generation (default = true)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<bool> CVarStreamlineTagEditorSceneColorWithoutHUD(
	TEXT("r.Streamline.Editor.TagSceneColorWithoutHUD"),
	true,
	TEXT("Pass scene color without HUD into DLSS Frame Generation in the editor (default = true)\n"),
	ECVF_RenderThreadSafe);


static TAutoConsoleVariable<bool> CVarStreamlineTagCustomDepth(
	TEXT("r.Streamline.TagCustomDepth"),
	false,
	TEXT("Pass custom depth into Streamline  (default = false)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<bool> CVarStreamlineTagVelocities(
	TEXT("r.Streamline.TagVelocities"),
	true,
	TEXT("Pass motion vectors into Streamline  (default = true)\n"),
	ECVF_RenderThreadSafe);



static TAutoConsoleVariable<int32> CVarStreamlineDilateMotionVectors(
	TEXT("r.Streamline.DilateMotionVectors"),
	0,
	TEXT(" 0: pass low resolution motion vectors into DLSS Frame Generation (default)\n")
	TEXT(" 1: pass dilated high resolution motion vectors into DLSS Frame Generation. This can help with improving image quality of thin details."),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<float> CVarStreamlineMotionVectorScale(
	TEXT("r.Streamline.MotionVectorScale"),
	1.0f,
	TEXT("Scale DLSS Frame Generation motion vectors by this constant, in addition to the scale by 1/ the view rect size. (default = 1)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<float> CVarStreamlineCustomCameraNearPlane(
	TEXT("r.Streamline.CustomCameraNearPlane"),
	0.01f,
	TEXT("Custom distance to camera near plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 0.01f)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<float> CVarStreamlineCustomCameraFarPlane(
	TEXT("r.Streamline.CustomCameraFarPlane"),
	75000.0f,
	TEXT("Custom distance to camera far plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 75000.0f)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarStreamlineViewIdOverride(
	TEXT("r.Streamline.ViewIdOverride"), -1,
	TEXT("Replace the view id passed into Streamline based on\n")
	TEXT("-1: Automatic, based on the state of r.Streamline.ViewIndexToTag (default)\n")
	TEXT("0: use ViewState.UniqueID \n")
	TEXT("1: overrride to 0 )\n"),
	ECVF_Default);

static TAutoConsoleVariable<int32> CVarStreamlineViewIndexToTag(
	TEXT("r.Streamline.ViewIndexToTag"), -1,
	TEXT("Which view of a view family to tag\n")
	TEXT("-1: all views (default)\n")
	TEXT("0: first view\n")
	TEXT("1..n: nth view, typically up to 3 when having 4 player split screen view families\n"),
	ECVF_Default);

static TAutoConsoleVariable<bool> CVarStreamlineClearColorAlpha(
	TEXT("r.Streamline.ClearSceneColorAlpha"),
	true,
	TEXT("Clear alpha of scenecolor at the end of the Streamline view extension to allow subsequent UI drawcalls be represented correctly in the alpha channel (default = true)\n"),
	ECVF_RenderThreadSafe);

#if DEBUG_STREAMLINE_VIEW_TRACKING
static bool bLogStreamlineLogTrackedViews = false;
static FAutoConsoleVariableRef CVarStreamlineLogTrackedViews(
	TEXT("r.Streamline.LogTrackedViews"),
	bLogStreamlineLogTrackedViews,
	TEXT("Enable/disable whether to log which views & backbuffers are associated with each other at various parts of rendering. Most useful when developing & debugging multi view port multi window code. Can be overriden with -sl{no}logviewtracking\n"),
	ECVF_Default);
#else
static constexpr bool bLogStreamlineLogTrackedViews = false;
#endif


DEFINE_GPU_STAT(Streamline);
DECLARE_GPU_STAT(StreamlineDeepDVC);

FDelegateHandle FStreamlineViewExtension::OnPreResizeWindowBackBufferHandle;
FDelegateHandle FStreamlineViewExtension::OnSlateWindowDestroyedHandle;


// TODO base on eventual FStreamlineRHI queries
bool DoActiveStreamlineFeaturesSupportMultiView()
{
	return !IsLatewarpActive();
}

int GetViewIndexToTag()
{
	if (DoActiveStreamlineFeaturesSupportMultiView())
	{
		return CVarStreamlineViewIndexToTag->GetInt();
	}
	else
	{
		return 0;
	}
}


bool NeedStreamlineViewIdOverride()
{
	if (CVarStreamlineViewIdOverride->GetInt() == -1)
	{
		return GetViewIndexToTag() != -1;
	}
	else
	{
		return CVarStreamlineViewIdOverride->GetInt() == 1;
	}
}

FStreamlineViewExtension::FStreamlineViewExtension(const FAutoRegister& AutoRegister, FStreamlineRHI* InStreamlineRHIExtensions)
	: FSceneViewExtensionBase(AutoRegister)
	, StreamlineRHIExtensions(InStreamlineRHIExtensions)
{
	UE_LOG(LogStreamline, Log, TEXT("%s Enter %s"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName());
	check(StreamlineRHIExtensions);
	FSceneViewExtensionIsActiveFunctor IsActiveFunctor;
	IsActiveFunctor.IsActiveFunction = [this](const ISceneViewExtension* SceneViewExtension, const FSceneViewExtensionContext& Context)
	{
		return StreamlineRHIExtensions->IsStreamlineAvailable();
	};

	IsActiveThisFrameFunctions.Add(IsActiveFunctor);
	{
		check(FSlateApplication::IsInitialized());
		FSlateRenderer* SlateRenderer = FSlateApplication::Get().GetRenderer();

		OnPreResizeWindowBackBufferHandle = SlateRenderer->OnPreResizeWindowBackBuffer().AddRaw(this, &FStreamlineViewExtension::UntrackViewsForBackbuffer);
		
		OnSlateWindowDestroyedHandle = FSlateApplication::Get().GetRenderer()->OnSlateWindowDestroyed().AddLambda(
			[this] (void* InViewport) {
			
				FViewportRHIRef ViewportReference = *(FViewportRHIRef*)InViewport;
				void* NativeSwapchain = ViewportReference->GetNativeSwapChain();
				StreamlineRHIExtensions->OnSwapchainDestroyed(NativeSwapchain);
			}
		);

		// ShutdownModule is too late for this
		FSlateApplication::Get().OnPreShutdown().AddLambda(
			[]()
			{
				FSlateRenderer* SlateRenderer = FSlateApplication::Get().GetRenderer();
				check(SlateRenderer);


				UE_LOG(LogStreamline, Log, TEXT("Unregistering of OnPreResizeWindowBackBuffer callback during FSlateApplication::OnPreShutdown"));
				SlateRenderer->OnPreResizeWindowBackBuffer().Remove(OnPreResizeWindowBackBufferHandle);

				UE_LOG(LogStreamline, Log, TEXT("Unregistering of OnSlateWindowDestroyed callback during FSlateApplication::OnPreShutdown"));
				SlateRenderer->OnSlateWindowDestroyed().Remove(OnSlateWindowDestroyedHandle);
			}
		);
	}
#if DEBUG_STREAMLINE_VIEW_TRACKING
	if (FParse::Param(FCommandLine::Get(), TEXT("sllogviewtracking")))
	{
		bLogStreamlineLogTrackedViews = true;
	}
	if (FParse::Param(FCommandLine::Get(), TEXT("slnologviewtracking")))
	{
		bLogStreamlineLogTrackedViews = false;
	}
#endif

	UE_LOG(LogStreamline, Log, TEXT("%s Leave %s"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName());
}

FStreamlineViewExtension::~FStreamlineViewExtension()
{
	UE_LOG(LogStreamline, Log, TEXT("%s Enter %s"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName());

	if (!TrackedViews.IsEmpty())
	{
		FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s Stale Views %s"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName()));
	}

	UE_LOG(LogStreamline, Log, TEXT("%s Leave %s"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName());
}

void FStreamlineViewExtension::SetupViewFamily(FSceneViewFamily& InViewFamily)
{

}

void FStreamlineViewExtension::SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView)
{
}

void FStreamlineViewExtension::SetupViewPoint(APlayerController* Player, FMinimalViewInfo& InViewInfo)
{
}


void FStreamlineViewExtension::BeginRenderViewFamily(FSceneViewFamily& InViewFamily)
{
	BeginRenderViewFamilyDLSSG(InViewFamily);
}


bool FStreamlineViewExtension::DebugViewTracking()
{
#if DEBUG_STREAMLINE_VIEW_TRACKING


	return bLogStreamlineLogTrackedViews;
#else
	return false;
#endif
}

void FStreamlineViewExtension::LogTrackedViews(const TCHAR* CallSite)
{
#if DEBUG_STREAMLINE_VIEW_TRACKING
	if (!DebugViewTracking())
	{
		return;
	}
	const FString ViewRectString = FString::JoinBy(TrackedViews, TEXT(", "), [](const FTrackedView& State)
	{ 
		FString TextureName = TEXT("Call me nobody");
		FString TextureDimensionAsString = TEXT("HerpxDerp");

		if (FRHITexture* Texture = State.Texture)
		{
			if (Texture && Texture->IsValid())
			{
				TextureName = FString::Printf(TEXT("%s %p"), *Texture->GetName().ToString(), Texture->GetTexture2D());
#if (ENGINE_MAJOR_VERSION  == 4) || ((ENGINE_MAJOR_VERSION  == 5) && (ENGINE_MINOR_VERSION < 1))
				TextureDimensionAsString = Texture->GetSizeXYZ().ToString();
#else
				TextureDimensionAsString = Texture->GetSizeXY().ToString();
#endif
			}
		}
		return FString::Printf(TEXT("%u %s (%ux%u) %s %s"), State.ViewKey, *State.ViewRect.ToString(), State.ViewRect.Width(), State.ViewRect.Height(), *TextureName, *TextureDimensionAsString);
	}
	);

	UE_LOG(LogStreamline, Log, TEXT("%2u# %s %s"), TrackedViews.Num(), CallSite, *ViewRectString);
#endif
}

// When editing this, please make sure to also update IsProperGraphicsView
void LogViewNotTrackedReason(const TCHAR* Callsite, const FSceneView& View)
{
	if (View.bIsSceneCapture)
	{
		FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s return View.bIsSceneCapture Key=%u, %s"), Callsite, View.GetViewKey(), *CurrentThreadName()));
	}

	if (View.bIsOfflineRender)
	{
		FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s return View.bIsOfflineRender Key=%u, %s"), Callsite, View.GetViewKey(), *CurrentThreadName()));
	}

	if (!View.bIsGameView)
	{
		FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s return !View.bIsGameView Key=%u, %s"), Callsite, View.GetViewKey(), *CurrentThreadName()));
	}
#if !XR_WORKAROUND
	if (View.StereoPass != EStereoscopicPass::eSSP_FULL)
	{
		FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s return View.StereoPass != EStereoscopicPass::eSSP_FULL Key=%u, %s"), Callsite, View.GetViewKey(), *CurrentThreadName()));
	}
#endif

}

// When editing this, please make sure to also update LogViewNotTrackedReason
const bool IsProperGraphicsView(const FSceneView& InView)
{
	if (InView.bIsSceneCapture)
	{
		return false;
	}

	// MRQ
	if (InView.bIsOfflineRender)
	{
		return false;
	}

	// TODO this might need work once we render FG in the main editor view
	if (!InView.bIsGameView)
	{
		return false;
	}

	//For vr rendering we disable FG
#if !XR_WORKAROUND
	if (InView.StereoPass != EStereoscopicPass::eSSP_FULL)
	{
		return false;
	}
#endif
	return true;
}


void FStreamlineViewExtension::AddTrackedView(const FSceneView& InView)
{
	check(InView.bIsViewInfo);
	const FViewInfo& ViewInfo = static_cast<const FViewInfo&>(InView);

	const uint32 NewViewKey = InView.GetViewKey();
	if (!IsProperGraphicsView(InView))
	{
#if DEBUG_STREAMLINE_VIEW_TRACKING
		LogViewNotTrackedReason(ANSI_TO_TCHAR(__FUNCTION__), ViewInfo);
#endif
		return;
	}

	FTextureRHIRef TargetTexture = nullptr;

	// in game mode we don't seem to have a rendertarget... 
	if (const FRenderTarget* Target = InView.Family->RenderTarget; Target && Target->GetRenderTargetTexture().IsValid())
	{
		TargetTexture = Target->GetRenderTargetTexture();
	}

	FTrackedView* FoundTrackedView = TrackedViews.FindByPredicate([NewViewKey](const FTrackedView& State) { return State.ViewKey == NewViewKey; });

	if (!FoundTrackedView)
	{
		TrackedViews.Emplace();
		FoundTrackedView = &TrackedViews.Last();
		FoundTrackedView->ViewKey = NewViewKey;
	}
	
	if (TargetTexture && TargetTexture->GetName() != TEXT("HitProxyTexture"))
	{
		const bool bIsExpectedRenderTarget  = 
		 (    (TargetTexture->GetName() == TEXT("BufferedRT"))
			|| (TargetTexture->GetName() == TEXT("BackBuffer0"))
			|| (TargetTexture->GetName() == TEXT("BackBuffer1"))
			|| (TargetTexture->GetName() == TEXT("BackBuffer2"))
			|| (TargetTexture->GetName() == TEXT("BackbufferReference"))
			|| (TargetTexture->GetName() == TEXT("FD3D11Viewport::GetSwapChainSurface")) // (⊙_⊙)？
	#if XR_WORKAROUND
			|| (TargetTexture->GetName().ToString().Contains(TEXT("XRSwapChainBackingTex")))
	#endif
			|| (ENGINE_MAJOR_VERSION == 4) 
			|| ((ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1))
		);

		if (!bIsExpectedRenderTarget)
		{

			FString TextureDimensionAsString = TEXT("HerpxDerp");

			const FString TextureName = FString::Printf(TEXT("%s %p"), *TargetTexture->GetName().ToString(), TargetTexture->GetTexture2D());
#if (ENGINE_MAJOR_VERSION  == 4) || ((ENGINE_MAJOR_VERSION  == 5) && (ENGINE_MINOR_VERSION < 1))
			TextureDimensionAsString = TargetTexture->GetSizeXYZ().ToString();
#else
			TextureDimensionAsString = TargetTexture->GetSizeXY().ToString();
#endif

			UE_LOG(LogStreamline, Error, TEXT("found unexpected Viewfamily rendertarget %s %s. This might cause instability in other parts of the Streamline plugin."), 
				*TextureName,
				*TextureDimensionAsString
				);
		}
		FoundTrackedView->Texture = TargetTexture;
	}

	check(!ViewInfo.ViewRect.IsEmpty());
	FoundTrackedView->ViewRect = ViewInfo.ViewRect;

	check(!ViewInfo.UnscaledViewRect.IsEmpty());
	FoundTrackedView->UnscaledViewRect = ViewInfo.UnscaledViewRect;

	check(!ViewInfo.UnconstrainedViewRect.IsEmpty());
	FoundTrackedView->UnconstrainedViewRect = ViewInfo.UnconstrainedViewRect;

	FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s Key=%u Target=%p, %s"), ANSI_TO_TCHAR(__FUNCTION__), NewViewKey, TargetTexture.GetReference()->GetTexture2D(), *CurrentThreadName()));
}	

void FStreamlineViewExtension::UntrackViewsForBackbuffer(void* InBackBuffer)
{
	check(IsInGameThread());
	if (InBackBuffer)
	{
		FViewportRHIRef ViewportReference = *(FViewportRHIRef*)InBackBuffer;

		if (ViewportReference)
		{
			const void* NativeBackbufferTexture = ViewportReference->GetNativeBackBufferTexture();
			TrackedViews.RemoveAllSwap([NativeBackbufferTexture](const FTrackedView& TrackedView)
			{
					bool bRemove = false;
					if (TrackedView.Texture && TrackedView.Texture.IsValid())
					{
						const void* NativeTracked = TrackedView.Texture->GetNativeResource();

						if (NativeTracked == NativeBackbufferTexture)
						{
							bRemove = true;
#if DEBUG_STREAMLINE_VIEW_TRACKING
							UE_CLOG( DebugViewTracking(), LogStreamline, Log, TEXT("Untracking backbuffer %s native %p ViewKey = %u"), *TrackedView.Texture->GetName().ToString(), NativeTracked, TrackedView.ViewKey);
#endif
						}
					}
					return bRemove;
			});
		}
	}
}

#define FIVE_FOUR_PLUS_RDG_VALIDATION_WORKAROUND (RDG_ENABLE_DEBUG && ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4)

void FStreamlineViewExtension::PreRenderViewFamily_RenderThread(FGraphBuilderOrCmdList& GraphBuilderOrCmd, FSceneViewFamily& InViewFamily)
{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4
	// UE 5.4 shipped with a bug that will cause RDG validation errors in game if a view extension subscribes to EPostProcessingPass::VisualizeDepthOfField (and others)
	// In the editor, the engine renders int a "BufferedRT" (created with the SRV flag) and then blits that to "ViewFamily" texture, which is the swapchain dummy backbuffer (that doesn't have that flag set)
	// In game mode (-game or packaged) hovever there is no "BufferedRT" and the Scenecolor is the "ViewFamily" texture/dummy swapchain backbuffer, so RDG validation catches that when the engine  is preparing 
	// the inputs for the sceneview exten postprocessing passes.
	// We fix up the texture flags here to prevent the validation error
	bool bDoRDGWorkaround = FIVE_FOUR_PLUS_RDG_VALIDATION_WORKAROUND;
	if (FParse::Param(FCommandLine::Get(), TEXT("slrdgworkaround")))
	{
		bDoRDGWorkaround = true;
	}
	if (FParse::Param(FCommandLine::Get(), TEXT("slnordgworkaround")))
	{
		bDoRDGWorkaround = false;
	}
	if (bDoRDGWorkaround)
	{
		if (const FRenderTarget* RenderTarget = InViewFamily.RenderTarget)
		{
			if (const FTextureRHIRef& Texture = RenderTarget->GetRenderTargetTexture())
			{
				FRHITextureDesc& ChangeIsTheOnlyConstant = const_cast<FRHITextureDesc&>(Texture->GetDesc());
				EnumAddFlags(ChangeIsTheOnlyConstant.Flags, ETextureCreateFlags::ShaderResource);
			}
		}
	}
#endif
	
	// we should be done with older frames so remove those frame ids
	TArray<uint32> StaleViews;
	TArray<uint32> ActiveViews;
	FramesWhereStreamlineConstantsWereSet.RemoveAllSwap([&StaleViews, &ActiveViews](TTuple<uint64, uint32>  Item)
	{
		const uint64 FrameCounterRenderThread = GFrameCounterRenderThread;
		// D3D12 RHI has this unaccessible static const uint32 WindowsDefaultNumBackBuffers = 3; so adding some slack 🤞
		constexpr uint64 MaxFramesInFlight = 3 + 2;
		// we add here since so we don't have to deal with subtracting uint64 and overflows
		bool bRemove = FrameCounterRenderThread > Item.Get<0>() + MaxFramesInFlight;
			
		if (bRemove)
		{
			StaleViews.AddUnique(Item.Get<1>());
		}
		else
		{
			ActiveViews.AddUnique(Item.Get<1>());
		}
		
		return bRemove;
	}
	);

	StaleViews.RemoveAllSwap([&ActiveViews](uint32 Item) { return ActiveViews.Contains(Item); });
	
	for (uint32 StaleView : StaleViews)
	{

		// an alternative to this could be to add "GetCommandListFromEither" function in the header...
#if ENGINE_MAJOR_VERSION == 4 
		GraphBuilderOrCmd.
#else
		GraphBuilderOrCmd.RHICmdList.
#endif
		EnqueueLambda([this, StaleView](FRHICommandList& Cmd)
		{
			UE_CLOG(DebugViewTracking(), LogStreamline, Log, TEXT("%s %s freeing resources for View Id %u"), ANSI_TO_TCHAR(__FUNCTION__), *CurrentThreadName(), StaleView);
			StreamlineRHIExtensions->ReleaseStreamlineResourcesForAllFeatures(StaleView);
		});
	}
}

void FStreamlineViewExtension::PreRenderView_RenderThread(FGraphBuilderOrCmdList&, FSceneView& InView)
{
}

void FStreamlineViewExtension::PostRenderView_RenderThread(FGraphBuilderOrCmdList&, FSceneView& InView)
{
}

void FStreamlineViewExtension::PostRenderViewFamily_RenderThread(FGraphBuilderOrCmdList&, FSceneViewFamily& InViewFamily)
{

}

void AddStreamlineUIHintTagPass(
	FRDGBuilder& GraphBuilder,
	bool bTagBackbuffer,
	bool bTagUIColorAlpha,
	const FIntPoint &BackBufferDimension,
	FSLUIHintTagShaderParameters* PassParameters,
	uint32 ViewId,
	FStreamlineRHI* RHIExtensions,
	TArray<FTrackedView>& ViewsInThisBackBuffer,
	const FIntRect &WindowClientAreaRect,
	bool HasViewIdOverride
)
{


	GraphBuilder.AddPass(
		RDG_EVENT_NAME("Streamline Tag {Backbuffer=%u UIColorAndAlpha=%u} NumViews=%u  WindowClient%dx%d [%d,%d -> %d,%d] Texture=%s",
			bTagBackbuffer, bTagUIColorAlpha,
			ViewsInThisBackBuffer.Num(),
			WindowClientAreaRect.Width(), WindowClientAreaRect.Height(),
			WindowClientAreaRect.Min.X, WindowClientAreaRect.Min.Y,
			WindowClientAreaRect.Max.X, WindowClientAreaRect.Max.Y
			,  *BackBufferDimension.ToString()),
		PassParameters,
		ERDGPassFlags::Raster | ERDGPassFlags::Compute | ERDGPassFlags::Copy
		| ERDGPassFlags::NeverCull | ERDGPassFlags::NeverMerge | ERDGPassFlags::SkipRenderPass,
		[RHIExtensions, bTagBackbuffer, bTagUIColorAlpha, PassParameters, WindowClientAreaRect, ViewsInThisBackBuffer, HasViewIdOverride](FRHICommandListImmediate& RHICmdList) mutable
		{
			for (const FTrackedView& View : ViewsInThisBackBuffer)
			{
				TArray<FRHIStreamlineResource, TInlineAllocator<2>> TexturesToTagOrUntag;
				
				check(!!PassParameters->BackBuffer == bTagBackbuffer);
				TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->BackBuffer, View.UnscaledViewRect, EStreamlineResource::Backbuffer));
				if (bTagBackbuffer)
				{
					check(PassParameters->BackBuffer);
					PassParameters->BackBuffer->MarkResourceAsUsed();
				}

				check(!!PassParameters->UIColorAndAlpha == bTagUIColorAlpha);
				TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->UIColorAndAlpha, View.UnscaledViewRect, EStreamlineResource::UIColorAndAlpha));
				if (bTagUIColorAlpha)
				{
					check(PassParameters->UIColorAndAlpha);
					PassParameters->UIColorAndAlpha->MarkResourceAsUsed();
				}

				const uint32 ViewID = HasViewIdOverride ? 0 : View.ViewKey;
				const uint64 LocalGFrameCounter = GFrameCounterRenderThread;

#if !ENGINE_PROVIDES_UE_5_6_ID3D12DYNAMICRHI_METHODS
				if (RHIExtensions->NeedExtraPassesForDebugLayerCompatibility())
				{
					DebugLayerCompatibilityRHISetup(PassParameters->DebugLayerCompatibility, TexturesToTagOrUntag);
				}
#endif
				RHICmdList.EnqueueLambda(
					[RHIExtensions, TexturesToTagOrUntag, ViewID, LocalGFrameCounter](FRHICommandListImmediate& Cmd) mutable
				{
						sl::FrameToken* FrameToken = FStreamlineCoreModule::GetStreamlineRHI()->GetFrameToken(LocalGFrameCounter);
						RHIExtensions->TagTextures(Cmd, ViewID, *FrameToken, TexturesToTagOrUntag);
				});
			}
	});

	
	GraphBuilder.Execute();
}


void FStreamlineViewExtension::SubscribeToPostProcessingPass(
	EPostProcessingPass Pass
#if !UE_VERSION_OLDER_THAN(5,5,0)	
	, const FSceneView& InView
#endif
	,FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
{
	if (Pass == EPostProcessingPass::VisualizeDepthOfField)
	{
		check(StreamlineRHIExtensions);
		check(StreamlineRHIExtensions->IsStreamlineAvailable());
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread));
	}
}




/*

At the Streamline SDK level when we pass in the D3D resource into the SL SDK we
also need to pass in the *exact* D3D resource state as well.

In 5.6+ RDG optimizes and batches resource state transitions across RDG passes to avoid 
redundant read to read transitions. This means the actual D3D resource state in the RHI lambda
inside the RDG lambda might have *more* D3D resource state bit set than what the RDG shader parameter
struct ERHIAccess is describing.

This is a particular issue for Depth/SceneDepthZ that is used across the frame before us
so RDG ends up adding |DEPTH_READ | NON_PIXEL_SHADER_RESOURCE | PIXEL_SHADER_RESOURCE to the
COPY_SOURCE bit that we actually want, in a non-deterministic way. So we explicitely add  
| ERHIAccess::DSVRead | ERHIAccess::SRVMask) to Depth so we then can reliably in side our StreamlineD3D12RHI
translate ERRHIAccess

Additionally SceneDepthZ has two different subresources (depth plane and stenci plane) that are
in different resource states, eg. the stencil plane can be in depth write state whereas the depth plane 
might be in depth read. However the SL SDK API does not allow per sub-resource state so we need to
have the RDG/RHI transition both subresources into the same state.

Other SL inpout resources like Velocity or SceneColorWithoutHUD don't tend to run into those issues since they are
created by a UE plugin side renderpass so there are no other passes with more complicated resource state
transitions involved. 

Note: We are using COPY_SOURCE as SL input resources since we tag them with sl::ResourceLifecycle::eOnlyValidNow 
which means SL will make a copy of every input resource and if needed transition to and from COPY_SOURCE 
In SL as of version 2.8 those COPY_SRC and back transitions are not batched up so when we pass in 4 resources
at once, SL will make 8 individual resource barrier calls if the resource does not have the COPY_SRC bit set.
To avoid those extra transitions we are using the RDG/RHI to put the resources into ERHIAccess::CopySrc/COPY_SOURCE state.



*/
BEGIN_SHADER_PARAMETER_STRUCT(FSLShaderParameters, )
RDG_TEXTURE_ACCESS(Depth, ERHIAccess::CopySrc | ERHIAccess::DSVRead | ERHIAccess::SRVMask)
RDG_TEXTURE_ACCESS(Velocity, ERHIAccess::CopySrc)
RDG_TEXTURE_ACCESS(NoWarpMask, ERHIAccess::CopySrc)
RDG_TEXTURE_ACCESS(SceneColorWithoutHUD, ERHIAccess::CopySrc)

#if !ENGINE_PROVIDES_UE_5_6_ID3D12DYNAMICRHI_METHODS
SHADER_PARAMETER_STRUCT_INCLUDE(FDebugLayerCompatibilityShaderParameters, DebugLayerCompatibility)
#endif
END_SHADER_PARAMETER_STRUCT()

FScreenPassTexture FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs)
{
	check(IsInRenderingThread());
	check(View.bIsViewInfo);

	AddTrackedView(View);

	const int ViewIndexToTag = GetViewIndexToTag();
	const bool bTagAllViews = -1 == GetViewIndexToTag();
	check(!bTagAllViews || bTagAllViews && DoActiveStreamlineFeaturesSupportMultiView());
	const bool bTagThisView = bTagAllViews || (ViewIndexToTag == GetViewIndex(&View));

	if (FramesWhereStreamlineConstantsWereSet.Contains( MakeTuple(GFrameCounterRenderThread, View.GetViewKey())) || !bTagThisView || !IsProperGraphicsView(View))
	{

#if DEBUG_STREAMLINE_VIEW_TRACKING
		if (DebugViewTracking())
		{
			if (FramesWhereStreamlineConstantsWereSet.Contains(MakeTuple(GFrameCounterRenderThread, View.GetViewKey())))
			{
				FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s return FramesWhereStreamlineConstantsWereSet.Contains(GFrameCounterRenderThread) Key=%u, %s"), ANSI_TO_TCHAR(__FUNCTION__), View.GetViewKey(), *CurrentThreadName()));
			}
			LogViewNotTrackedReason(ANSI_TO_TCHAR(__FUNCTION__), View);
		}
#endif

		// no point in running DLSS-FG for scene captures if the engine can't use the extra frames anyway. Just pass through the appropriate texture
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4
		return InOutInputs.ReturnUntouchedSceneColorForPostProcessing(GraphBuilder);
#else
		if (InOutInputs.OverrideOutput.IsValid())
		{
			return InOutInputs.OverrideOutput;
		}
		else
		{
			return InOutInputs.Textures[(uint32)EPostProcessMaterialInput::SceneColor];
		}
#endif
	}

	FramesWhereStreamlineConstantsWereSet.AddUnique(MakeTuple(GFrameCounterRenderThread, View.GetViewKey()));

	FStreamlineViewExtension::LogTrackedViews(*FString::Printf(TEXT("%s Key=%u, %s"), ANSI_TO_TCHAR(__FUNCTION__), View.GetViewKey(), *CurrentThreadName()));



	const FViewInfo& ViewInfo = static_cast<const FViewInfo&>(View);
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4
	const FScreenPassTexture SceneColor = FScreenPassTexture::CopyFromSlice(GraphBuilder, InOutInputs.GetInput(EPostProcessMaterialInput::SceneColor));
#else
	const FScreenPassTexture& SceneColor = InOutInputs.Textures[(uint32)EPostProcessMaterialInput::SceneColor];
#endif
	const uint32 ViewID = NeedStreamlineViewIdOverride() ? 0 : ViewInfo.GetViewKey();
	const uint64 FrameID = GFrameCounterRenderThread;
	const FIntRect ViewRect = ViewInfo.ViewRect;
	const FIntRect SecondaryViewRect = FIntRect(FIntPoint::ZeroValue, ViewInfo.GetSecondaryViewRectSize());

	NV_RDG_EVENT_SCOPE(GraphBuilder, Streamline, "Streamline ViewID=%u %dx%d [%d,%d -> %d,%d]",
		ViewID, ViewRect.Width(), ViewRect.Height(),
		ViewRect.Min.X, ViewRect.Min.Y,
		ViewRect.Max.X, ViewRect.Max.Y);
	RDG_GPU_STAT_SCOPE(GraphBuilder, Streamline);

	if (ShouldTagStreamlineBuffers())
	{
		const uint64 FrameNumber = GFrameNumberRenderThread;

#if ENGINE_MAJOR_VERSION == 4
		FSceneRenderTargets& SceneTextures = FSceneRenderTargets::Get(GraphBuilder.RHICmdList);
#elif ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1
		FSceneTextures SceneTextures = FSceneTextures::Get(GraphBuilder);
#else
		FSceneTextures SceneTextures = ViewInfo.GetSceneTextures();
#endif

		// input color
		FRDGTextureRef SceneColorAfterTonemap = SceneColor.Texture;
		check(SceneColorAfterTonemap);

		// input motion vectors
#if (ENGINE_MAJOR_VERSION == 5) && (ENGINE_MINOR_VERSION >= 4)
		FRDGTextureRef SceneVelocity = FScreenPassTexture::CopyFromSlice(GraphBuilder, InOutInputs.GetInput(EPostProcessMaterialInput::Velocity)).Texture;
#else
		FRDGTextureRef SceneVelocity = InOutInputs.Textures[(uint32)EPostProcessMaterialInput::Velocity].Texture;
#endif
		if (!SceneVelocity)
		{
#if ENGINE_MAJOR_VERSION == 4
			SceneVelocity = GraphBuilder.RegisterExternalTexture(SceneTextures.SceneVelocity);
#else
			SceneVelocity = SceneTextures.Velocity;
#endif
		}

		//input depth
#if ENGINE_MAJOR_VERSION == 4
		FRDGTextureRef SceneDepth = GraphBuilder.RegisterExternalTexture(SceneTextures.SceneDepthZ);
#else
		FRDGTextureRef SceneDepth = SceneTextures.Depth.Resolve;
#endif
		check(SceneDepth);

		//custom depth
#if ENGINE_MAJOR_VERSION == 4
		FRDGTextureRef CustomDepth = SceneTextures.CustomDepth ? GraphBuilder.RegisterExternalTexture(SceneTextures.CustomDepth) :
			nullptr;
#else
		FRDGTextureRef CustomDepth = SceneTextures.CustomDepth.Depth;
#endif

#if SUPPORT_GUIDE_GBUFFER
		FRDGTextureRef AlternateMotionVector = SceneTextures.AlternateMotionVector;
#else
		FRDGTextureRef AlternateMotionVector = nullptr;
#endif

		FStreamlineRHI* LocalStreamlineRHIExtensions = this->StreamlineRHIExtensions;

		FSLShaderParameters* PassParameters = GraphBuilder.AllocParameters<FSLShaderParameters>();

		// Those are consumed directly by SL 
		// FRDGTextureRef SLDepth = SceneDepth; 

		// Those hold the outputs from various render passes that convert from engine textures into the SL specific formats
		FRDGTextureRef SLCustomDepth = nullptr;
		FRDGTextureRef SLVelocity = nullptr;
		FRDGTextureRef SLSceneColorWithoutHUD = nullptr;

		const bool bTagSceneColorWithoutHUD = GIsEditor ? CVarStreamlineTagEditorSceneColorWithoutHUD.GetValueOnRenderThread() : CVarStreamlineTagSceneColorWithoutHUD.GetValueOnRenderThread();
		if (bTagSceneColorWithoutHUD)
		{
			FRDGTextureDesc Desc = SceneColor.Texture->Desc;
			EnumAddFlags(Desc.Flags, TexCreate_ShaderResource | TexCreate_UAV);
			EnumRemoveFlags(Desc.Flags, TexCreate_Presentable);
			EnumRemoveFlags(Desc.Flags, TexCreate_ResolveTargetable);
			SLSceneColorWithoutHUD = GraphBuilder.CreateTexture(Desc, TEXT("Streamline.SceneColorWithoutHUD"));
			AddDrawTexturePass(GraphBuilder, ViewInfo, SceneColor.Texture, SLSceneColorWithoutHUD, FIntPoint::ZeroValue, FIntPoint::ZeroValue, FIntPoint::ZeroValue);

			PassParameters->SceneColorWithoutHUD = SLSceneColorWithoutHUD;
		}

		const bool bTagCustomDepth = CVarStreamlineTagCustomDepth.GetValueOnRenderThread();
		if (bTagCustomDepth)
		{
			NV_RDG_EVENT_SCOPE(GraphBuilder,Streamline, "Streamline CustomDepth %dx%d [%d,%d -> %d,%d]",
				ViewRect.Width(), ViewRect.Height(),
				ViewRect.Min.X, ViewRect.Min.Y,
				ViewRect.Max.X, ViewRect.Max.Y
			);

#if ENGINE_MAJOR_VERSION == 4
			const bool bHasCustomDepth = CustomDepth && SceneTextures.bCustomDepthIsValid;
#else
			const bool bHasCustomDepth = CustomDepth && SceneTextures.CustomDepth.IsValid() && CustomDepth->HasBeenProduced();
#endif
			check(!bHasCustomDepth || bHasCustomDepth && (CustomDepth->Desc.Extent == SceneDepth->Desc.Extent));

			FRDGTextureDesc SLCustomDepthDesc = FRDGTextureDesc::Create2D
			(
				(bHasCustomDepth ? CustomDepth : SceneDepth)->Desc.Extent,
				PF_R8,
				FClearValueBinding(0.0f,0U),
				TexCreate_ShaderResource | TexCreate_UAV | TexCreate_RenderTargetable
			);

			SLCustomDepth = GraphBuilder.CreateTexture(SLCustomDepthDesc, TEXT("Streamline.CustomDepth"));

			if (bHasCustomDepth)
			{
				// note we pass in the rect directly since the implicit default of "0  means whole texture" behaves differently in 5.4 than before
				// and essentially treats the output as 0 sized viewrtect.
				AddDrawTexturePass(GraphBuilder, ViewInfo, CustomDepth, SLCustomDepth, ViewRect);
			}
			else
			{
#if ENGINE_MAJOR_VERSION == 4
				const float kClearValue[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
#else
				const float kClearValue = 0.0f;
#endif
				AddClearUAVPass(GraphBuilder, GraphBuilder.CreateUAV(SLCustomDepth), kClearValue);
			}

			PassParameters->NoWarpMask = SLCustomDepth;
		}

		const bool bTagMotionVectors = CVarStreamlineTagVelocities.GetValueOnRenderThread() != 0;
		const bool bDilateMotionVectors = CVarStreamlineDilateMotionVectors.GetValueOnRenderThread() != 0;
		
		if (bTagMotionVectors)
		{
			SLVelocity = AddStreamlineVelocityCombinePass(GraphBuilder, ViewInfo, SceneDepth, SceneVelocity, AlternateMotionVector, bDilateMotionVectors);
			PassParameters->Velocity = SLVelocity;
		}

		PassParameters->Depth = SceneDepth;


		FRHIStreamlineArguments StreamlineArguments = {};
		FMemory::Memzero(StreamlineArguments);

		StreamlineArguments.FrameId = FrameID;
		StreamlineArguments.ViewId = ViewID;

		// TODO STREAMLINE check for other conditions, similar to DLSS
		StreamlineArguments.bReset = View.bCameraCut;
		
		StreamlineArguments.bIsDepthInverted = true;

		StreamlineArguments.JitterOffset = { float(ViewInfo.TemporalJitterPixels.X), float(ViewInfo.TemporalJitterPixels.Y) }; // LWC_TODO: Precision loss

		StreamlineArguments.CameraNear = CVarStreamlineCustomCameraNearPlane.GetValueOnRenderThread();
		StreamlineArguments.CameraFar = CVarStreamlineCustomCameraFarPlane.GetValueOnRenderThread();
		StreamlineArguments.CameraFOV = ViewInfo.FOV;
		StreamlineArguments.CameraAspectRatio = float(ViewInfo.ViewRect.Width()) / float(ViewInfo.ViewRect.Height());
		const float MotionVectorScale = CVarStreamlineMotionVectorScale.GetValueOnRenderThread();
		if (bDilateMotionVectors)
		{
			StreamlineArguments.MotionVectorScale = { MotionVectorScale / ViewInfo.GetSecondaryViewRectSize().X, MotionVectorScale / ViewInfo.GetSecondaryViewRectSize().Y };
		}
		else
		{
			StreamlineArguments.MotionVectorScale = { MotionVectorScale / ViewInfo.ViewRect.Width() , MotionVectorScale / ViewInfo.ViewRect.Height() };
		}
		StreamlineArguments.bAreMotionVectorsDilated = bDilateMotionVectors;

		FViewUniformShaderParameters ViewUniformShaderParameters = *ViewInfo.CachedViewUniformShaderParameters;

		StreamlineArguments.bIsOrthographicProjection = !View.IsPerspectiveProjection();
		StreamlineArguments.ClipToCameraView = ViewUniformShaderParameters.ClipToView;
		StreamlineArguments.ClipToLenseClip = FRHIStreamlineArguments::FMatrix44f::Identity;
		StreamlineArguments.ClipToPrevClip = ViewUniformShaderParameters.ClipToPrevClip;
		StreamlineArguments.PrevClipToClip = ViewUniformShaderParameters.ClipToPrevClip.Inverse();

#if ENGINE_MAJOR_VERSION == 5
#if ENGINE_MINOR_VERSION >= 4
		// TODO STREAMLINE : LWC_TODO verify that this works correctly with large world coordinates
		StreamlineArguments.CameraOrigin = ViewUniformShaderParameters.ViewOriginLow;
#else
		// TODO STREAMLINE : LWC_TODO verify that this works correctly with large world coordinates
		StreamlineArguments.CameraOrigin = ViewUniformShaderParameters.RelativeWorldCameraOrigin;
#endif
#else
		StreamlineArguments.CameraOrigin = ViewUniformShaderParameters.WorldCameraOrigin;
#endif
		StreamlineArguments.CameraUp = ViewUniformShaderParameters.ViewUp;
		StreamlineArguments.CameraRight = ViewUniformShaderParameters.ViewRight;
		StreamlineArguments.CameraForward = ViewUniformShaderParameters.ViewForward;
		StreamlineArguments.CameraViewToClip = ViewUniformShaderParameters.ViewToClip;

		StreamlineArguments.CameraPinholeOffset = FRHIStreamlineArguments::FVector2f::ZeroVector;
		
#if !ENGINE_PROVIDES_UE_5_6_ID3D12DYNAMICRHI_METHODS
		if (LocalStreamlineRHIExtensions->NeedExtraPassesForDebugLayerCompatibility())
		{
			AddDebugLayerCompatibilitySetupPasses(GraphBuilder, &PassParameters->DebugLayerCompatibility);
		}
#endif

		GraphBuilder.AddPass(
		RDG_EVENT_NAME("Streamline Common %dx%d FrameId=%u ViewID=%u", ViewRect.Width(), ViewRect.Height(), StreamlineArguments.FrameId, StreamlineArguments.ViewId),
			PassParameters,
			ERDGPassFlags::Raster | ERDGPassFlags::Compute | ERDGPassFlags::Copy
			| ERDGPassFlags::NeverCull | ERDGPassFlags::NeverMerge | ERDGPassFlags::SkipRenderPass,
			[LocalStreamlineRHIExtensions, PassParameters, StreamlineArguments, ViewRect, SecondaryViewRect, SceneColor, 
			bTagMotionVectors, bTagCustomDepth, bTagSceneColorWithoutHUD](FRHICommandListImmediate& RHICmdList) mutable
		{

			// first the constants
			RHICmdList.EnqueueLambda(
			[LocalStreamlineRHIExtensions, StreamlineArguments](FRHICommandListImmediate& Cmd) mutable
			{
				LocalStreamlineRHIExtensions->SetStreamlineData(Cmd, StreamlineArguments);
			});

			TArray<FRHIStreamlineResource, TInlineAllocator<4>> TexturesToTagOrUntag;
			check(PassParameters->Depth);
			PassParameters->Depth->MarkResourceAsUsed();
			TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->Depth, ViewRect, EStreamlineResource::Depth));

			// motion vectors are in the top left corner after the Velocity Combine pass
			check(!!PassParameters->Velocity == bTagMotionVectors);
			TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->Velocity, EStreamlineResource::MotionVectors));
			if (bTagMotionVectors)
			{
				check(PassParameters->Velocity)
				PassParameters->Velocity->MarkResourceAsUsed();
			}

			// custom depth are in the same rect as the depth buffer
			check(!!PassParameters->NoWarpMask == bTagCustomDepth);
			TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->NoWarpMask, ViewRect, EStreamlineResource::NoWarpMask));
			if (bTagCustomDepth)
			{
				check(PassParameters->NoWarpMask)
				PassParameters->NoWarpMask->MarkResourceAsUsed();
			}

			check(!!PassParameters->SceneColorWithoutHUD == bTagSceneColorWithoutHUD);
			TexturesToTagOrUntag.Add(FRHIStreamlineResource::FromRDGTextureAccess(PassParameters->SceneColorWithoutHUD, SceneColor.ViewRect, EStreamlineResource::HUDLessColor));
			if (bTagSceneColorWithoutHUD)
			{
				check(PassParameters->SceneColorWithoutHUD);
				PassParameters->SceneColorWithoutHUD->MarkResourceAsUsed();
			}

#if !ENGINE_PROVIDES_UE_5_6_ID3D12DYNAMICRHI_METHODS
			if (LocalStreamlineRHIExtensions->NeedExtraPassesForDebugLayerCompatibility())
			{
				DebugLayerCompatibilityRHISetup(PassParameters->DebugLayerCompatibility, TexturesToTagOrUntag);
			}
#endif
			// then tagging the resources
			const uint32 ViewId = StreamlineArguments.ViewId;
			const uint64 LocalGFrameCounter = GFrameCounterRenderThread;

			RHICmdList.EnqueueLambda(
			[LocalStreamlineRHIExtensions, ViewId, TexturesToTagOrUntag, LocalGFrameCounter](FRHICommandListImmediate& Cmd) mutable
			{
				sl::FrameToken* FrameToken = FStreamlineCoreModule::GetStreamlineRHI()->GetFrameToken(LocalGFrameCounter);
				LocalStreamlineRHIExtensions->TagTextures(Cmd, ViewId, *FrameToken, TexturesToTagOrUntag);
			});
		});

	}

	// this is always executed if DLSS-G is supported so we can turn DLSS-G off at the SL side (after we skipped the work above)
	if (IsStreamlineDLSSGSupported())
	{
		AddStreamlineDLSSGStateRenderPass(GraphBuilder, ViewID, SecondaryViewRect);
	}

	// this is always executed if Latewarp is supported so we can turn it off at the SL side (after we skipped the work above)
	if (IsStreamlineLatewarpSupported())
	{
		AddStreamlineLatewarpStateRenderPass(GraphBuilder, ViewID, SecondaryViewRect);
	}

	// DeepDVC render pass
	if(IsDeepDVCActive())
	{
		NV_RDG_EVENT_SCOPE(GraphBuilder, StreamlineDeepDVC, "Streamline DeepDVC %dx%d [%d,%d -> %d,%d]",
			SceneColor.ViewRect.Width(), SceneColor.ViewRect.Height(),
			SceneColor.ViewRect.Min.X, SceneColor.ViewRect.Min.Y,
			SceneColor.ViewRect.Max.X, SceneColor.ViewRect.Max.Y
		);
		RDG_GPU_STAT_SCOPE(GraphBuilder, StreamlineDeepDVC);
		// we wont need to run this always since (unlike FG) we skip the whole evaluate pass

		AddStreamlineDeepDVCStateRenderPass(GraphBuilder, ViewID, SecondaryViewRect);
		
		FRDGTextureRef SLSceneColorWithoutHUD = SceneColor.Texture;



		// This is still WIP:
		// 
		// DeepDVC is accessing the input/output resources as an UAV.
		// The scenecolor resource is not created by the engine with a ETextureCreateFlags::UAV
		// This is by the -d3ddebug layers 
		// D3D12 ERROR : ID3D12Device::CreateUnorderedAccessView : A UnorderedAccessView cannot be created of a Resource that did not specify the D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS Flag.[STATE_CREATION ERROR #340: CREATEUNORDEREDACCESSVIEW_INVALIDRESOURCE]
		// D3D12 : **BREAK** enabled for the previous message, which was : [ERROR STATE_CREATION #340: CREATEUNORDEREDACCESSVIEW_INVALIDRESOURCE]
		// To avoid that, wwe'll DeepDVC into an intermediate, UAV compatible resource and copy there & back again, like the good hobbits we are.
		// However when a Streamline swapchain provider is setup (say for DLSS-FG) we "know" (#yolo) that the the proxy backbuffer resources are "UAV compatible"
		// Then we can elide that copy

		//const bool bHasImplicitUAVCompatibilityViaStreamlneSwapChainProvider = StreamlineRHIExtensions->IsSwapchainProviderInstalled();
		const bool bHasImplicitUAVCompatibilityViaStreamlneSwapChainProvider = false;

		const bool bIsUAVCompatible = EnumHasAllFlags(SceneColor.Texture->Desc.Flags, TexCreate_UAV);
		const bool bNeedsCopies =!(bIsUAVCompatible || bHasImplicitUAVCompatibilityViaStreamlneSwapChainProvider);

		if (bNeedsCopies)
		{
			FRDGTextureDesc DeepDVCIntermediateDesc = SceneColor.Texture->Desc;
			EnumAddFlags(DeepDVCIntermediateDesc.Flags, TexCreate_ShaderResource | TexCreate_UAV);
			EnumRemoveFlags(DeepDVCIntermediateDesc.Flags, TexCreate_ResolveTargetable | TexCreate_Presentable);
			SLSceneColorWithoutHUD = GraphBuilder.CreateTexture(DeepDVCIntermediateDesc, TEXT("Streamline.SceneColorWithoutHUD.DeepDVC"));
			AddDrawTexturePass(GraphBuilder, ViewInfo, SceneColor.Texture, SLSceneColorWithoutHUD, FIntPoint::ZeroValue, FIntPoint::ZeroValue, FIntPoint::ZeroValue);
		}
		
		AddStreamlineDeepDVCEvaluateRenderPass(StreamlineRHIExtensions, GraphBuilder, ViewID, SceneColor.ViewRect, SLSceneColorWithoutHUD);
		
		if (bNeedsCopies)
		{
			AddDrawTexturePass(GraphBuilder, ViewInfo, SLSceneColorWithoutHUD, SceneColor.Texture, FIntPoint::ZeroValue, FIntPoint::ZeroValue, FIntPoint::ZeroValue);
		}
	}


#if ENGINE_SUPPORTS_CLEARQUADALPHA
	if (ShouldTagStreamlineBuffers() &&  CVarStreamlineClearColorAlpha.GetValueOnRenderThread())
	{
		auto* PassParameters = GraphBuilder.AllocParameters<FRenderTargetParameters>();
		PassParameters->RenderTargets[0] = FRenderTargetBinding(SceneColor.Texture, ERenderTargetLoadAction::ENoAction);
		
		GraphBuilder.AddPass(
			RDG_EVENT_NAME("ClearSceneColorAlpha"),
			PassParameters,
			ERDGPassFlags::Raster,
			[SecondaryViewRect](FRHICommandList& RHICmdList)
			{
				RHICmdList.SetViewport(SecondaryViewRect.Min.X, SecondaryViewRect.Min.Y, 0.0f, SecondaryViewRect.Max.X, SecondaryViewRect.Max.Y, 1.0f);
				DrawClearQuadAlpha(RHICmdList, 0.0f);
			});
	}
#else
#error "Engine missing DrawClearQuadAlpha support. Apply latest custom engine patch using instructions from DLSS-FG plugin quick start guide or README.md"
#endif

	if (InOutInputs.OverrideOutput.IsValid())
	{
		AddDrawTexturePass(GraphBuilder, ViewInfo, SceneColor, InOutInputs.OverrideOutput);
		return InOutInputs.OverrideOutput;
	}
	else
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 4
		return FScreenPassTexture::CopyFromSlice(GraphBuilder, InOutInputs.GetInput(EPostProcessMaterialInput::SceneColor));
#else
		return InOutInputs.Textures[(uint32)EPostProcessMaterialInput::SceneColor];
#endif
	}
}
#undef LOCTEXT_NAMESPACE
 