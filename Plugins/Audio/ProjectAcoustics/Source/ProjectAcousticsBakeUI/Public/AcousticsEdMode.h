// Copyright (c) 2022 Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
//   Created from SFoliageEdit class code

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "AcousticsMaterialsTab.h"
#include "AcousticsBakeTab.h"
#include "Misc/ConfigCacheIni.h"

#include "ISourceControlProvider.h"
#include "ISourceControlModule.h"
#include "SourceControlHelpers.h"
#include "SourceControlOperations.h"

const FString c_ConfigSectionMaterials = TEXT("Materials");
const FString c_PluginName = TEXT("ProjectAcoustics");

// Magnitude of the size of the bounding box in cm
const float c_NavigationActorSizeWarning = 400000.0f;

DECLARE_LOG_CATEGORY_EXTERN(LogAcoustics, Log, All);

class FEditorViewportClient;
class FPrimitiveDrawInterface;
class FSceneView;
class FViewport;

class IProjectAcousticsProbeBrushHandler
{
public:
	virtual ~IProjectAcousticsProbeBrushHandler() = default;

	virtual bool IsProbeBrushEnabled() const = 0;
	virtual bool UpdateProbeBrushTarget(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY) = 0;
	virtual bool ApplyProbeBrushStroke() = 0;
	virtual void EndProbeBrushStroke() = 0;
	virtual void SetProbeBrushQuickDeleteMode(bool bEnabled) = 0;
	virtual void AdjustProbeBrushRadius(float Multiplier) = 0;
	virtual void UpdateProbeBrushVisual(FEditorViewportClient* ViewportClient) = 0;
	virtual void RenderProbeBrush(const FSceneView* View, FPrimitiveDrawInterface* PDI) const = 0;
};

enum AcousticsActiveTab
{
	ObjectTag,
	Materials,
	Probes,
	Bake
};

struct AcousticsObjectsTabSettings
{
	bool IsStaticMeshChecked;
	bool IsMovableStaticMeshChecked;
	bool IsNavMeshChecked;
	bool IsLandscapeChecked;
	bool IsAcousticsRadioButtonChecked;
	bool IsNavigationRadioButtonChecked;
};

struct AcousticsUISettings
{
	AcousticsActiveTab CurrentTab;
	AcousticsObjectsTabSettings ObjectsTabSettings;
	// TODO more here
};

class FAcousticsEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_AcousticsEdModeId;

public:
	FAcousticsEdMode();
	virtual ~FAcousticsEdMode();

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	virtual bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 X, int32 Y) override;
	virtual bool CapturedMouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY) override;
	virtual bool InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
	// virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	// End of FEdMode interface

	void SetMaterialsTab(TSharedPtr<SAcousticsMaterialsTab>&& materialsTab)
	{
		m_materialsTab = materialsTab;
	}

	TSharedPtr<SAcousticsMaterialsTab> GetMaterialsTab()
	{
		return m_materialsTab;
	}

	void SetBakeTab(TSharedPtr<SAcousticsBakeTab>&& bakeTab)
	{
		m_BakeTab = bakeTab;
	}

	TSharedPtr<FUICommandList> UICommandList;
	AcousticsUISettings AcousticsUISettings;
	// Bool for the checkbox for using physical materials, available in the Objects Tab.
	bool UsePhysicalMaterials = false;

	void SetProbeBrushHandler(IProjectAcousticsProbeBrushHandler* handler)
	{
		m_ProbeBrushHandler = handler;
	}

	void ClearProbeBrushHandler(IProjectAcousticsProbeBrushHandler* handler)
	{
		if (m_ProbeBrushHandler == handler)
		{
			m_ProbeBrushHandler = nullptr;
		}
	}

	void OnClickObjectTab()
	{
		m_materialsTab->PublishMaterialLibrary();
		AcousticsUISettings.CurrentTab = AcousticsActiveTab::ObjectTag;
	}

	void OnClickMaterialsTab()
	{
		m_materialsTab->UpdateUEMaterials();
		AcousticsUISettings.CurrentTab = AcousticsActiveTab::Materials;
	}

	void OnClickProbesTab()
	{
		m_materialsTab->PublishMaterialLibrary();
		AcousticsUISettings.CurrentTab = AcousticsActiveTab::Probes;
	}

	void OnClickBakeTab()
	{
		m_materialsTab->PublishMaterialLibrary();
		m_BakeTab->Refresh();
		AcousticsUISettings.CurrentTab = AcousticsActiveTab::Bake;
	}

	// Object Tab Helpers
	void SelectObjects();
	bool TagGeometry(bool tag);
	bool TagNavigation(bool tag);

	// Configuration Helper
	bool GetConfigFile(FConfigFile** configFile, FString& configFilePath);

	bool ShouldUsePhysicalMaterial(const class UPhysicalMaterial* physicalMaterial) const;

	static bool IsSourceControlAvailable()
	{
		ISourceControlModule& SourceControlModule = ISourceControlModule::Get();
		return SourceControlModule.IsEnabled() && SourceControlModule.GetProvider().IsAvailable();
	}

private:
	void BindCommands();
	bool IsProbeBrushInputActive() const;

private:
	TSharedPtr<SAcousticsMaterialsTab> m_materialsTab;
	TSharedPtr<SAcousticsBakeTab> m_BakeTab;
	IProjectAcousticsProbeBrushHandler* m_ProbeBrushHandler = nullptr;

	FConfigFile m_ConfigFile;
	FString m_ConfigFilePath;
};
