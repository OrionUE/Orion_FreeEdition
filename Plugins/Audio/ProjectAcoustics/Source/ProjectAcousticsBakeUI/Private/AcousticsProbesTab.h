// Copyright (c) 2022 Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "SAcousticsEdit.h"
#include "Widgets/SCompoundWidget.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Runtime/Core/Public/Containers/Map.h"
#include "Math/RandomStream.h"
#include "UObject/NameTypes.h"
#include "UObject/StrongObjectPtr.h"
#include "AcousticsMesh.h"
#include "AcousticsSimulationParametersPanel.h"

#include "AcousticsProbesTab.generated.h"

UENUM()
enum class FResolution : uint8
{
	Coarse = 0,
	Fine
};

struct FAcousticsProbeBakeCommandletOptions
{
	bool bUsePhysicalMaterials = false;
	bool bAutoContinueLargeNavigationMeshes = true;
	bool bAppendToExistingProbeList = false;
	double AppendProbeDuplicateToleranceCm = 50.0;
	FName AppendProbeRegionTag;
	double AppendProbeRegionBoundsPaddingCm = 0.0;
	TMap<FString, FString> MaterialToAcousticMaterial;
};

struct FAcousticsProbeBakeCommandletResult
{
	bool bSucceeded = false;
	FString Error;
	int32 ProbeCount = 0;
	int32 ExistingProbeCount = 0;
	int32 GeneratedProbeCount = 0;
	int32 AppendedProbeCount = 0;
	int32 DuplicateProbeCount = 0;
	int32 AppendProbeRegionActorCount = 0;
	int32 AppendProbeRegionCandidateCount = 0;
	int32 AppendProbeOutOfRegionCount = 0;
	float EstimatedProcessingMinutes = 0.0f;
	FString VoxFilepath;
	FString ConfigFilepath;
	FString AppendProbeRegionTag;
	double AppendProbeRegionBoundsPaddingCm = 0.0;
	bool bAppendToExistingProbeList = false;
	bool bProbeListMerged = false;
};

class SAcousticsProbesTab : public SCompoundWidget, public IProjectAcousticsProbeBrushHandler
{
public:
	SLATE_BEGIN_ARGS(SAcousticsProbesTab)
	{
	}
	SLATE_END_ARGS()

	~SAcousticsProbesTab();

	void Construct(const FArguments& InArgs, SAcousticsEdit* ownerEdit);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	static bool ComputePrebakeForCommandlet(
		const FAcousticsProbeBakeCommandletOptions& Options,
		FAcousticsProbeBakeCommandletResult& Result);

	virtual bool IsProbeBrushEnabled() const override;
	virtual bool UpdateProbeBrushTarget(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY) override;
	virtual bool ApplyProbeBrushStroke() override;
	virtual void EndProbeBrushStroke() override;
	virtual void SetProbeBrushQuickDeleteMode(bool bEnabled) override;
	virtual void AdjustProbeBrushRadius(float Multiplier) override;
	virtual void UpdateProbeBrushVisual(FEditorViewportClient* ViewportClient) override;
	virtual void RenderProbeBrush(const FSceneView* View, FPrimitiveDrawInterface* PDI) const override;

private:
	FText GetCalculateClearText() const;
	FText GetCalculateClearTooltipText() const;
	FReply OnCalculateClearButton();
	// Added functions associated with the check out button for the config and vox files.
	FReply OnCheckOutFilesButton();
	void CheckOutVoxAndConfigFile();
	bool CanCheckOutFiles() const;
	FReply OnMakeProbesEditableButton();
	FReply OnAddEditableProbeButton();
	FReply OnApplyProbeEditsButton();
	FReply OnClearEditableProbeActorsButton();
	bool CanMakeProbesEditable() const;
	bool CanAddEditableProbe() const;
	bool CanApplyProbeEdits() const;
	bool CanClearEditableProbeActors() const;
	int32 CountEditableProbeActors(bool bManagedOnly) const;
	void ClearEditableProbeActors(bool bManagedOnly) const;
	void SetGeneratedProbeDebugRenderingEnabled(bool bEnabled) const;
	void RestoreGeneratedProbePreviewFromConfig() const;
	class AAcousticsPinnedProbe* SpawnEditableProbeActor(
		const FVector& Location, int32 SourceProbeIndex, bool bGeneratedFromSimulationConfiguration) const;
	bool CollectEditableProbeLocations(TArray<FVector>& OutLocations) const;
	bool WriteProbeListOverrideToConfig(const TArray<FVector>& ProbeLocations, FString& OutError) const;
	bool ReloadProbeConfigurationFromConfig(FString& OutError) const;
	TSharedRef<SWidget> BuildProbeBrushToolBar();
	FText GetActiveProbeBrushToolName() const;
	EVisibility GetProbeBrushOptionsVisibility() const;
	EVisibility GetProbeBrushPaintDensityVisibility() const;
	void OnSetProbeBrushSelect();
	void OnSetProbeBrushPaint();
	void OnSetProbeBrushErase();
	bool IsProbeBrushSelectTool() const;
	bool IsProbeBrushPaintTool() const;
	bool IsProbeBrushEraseTool() const;
	void OnCheckStateChanged_EnableProbeBrush(ECheckBoxState InState);
	ECheckBoxState GetCheckState_EnableProbeBrush() const;
	void OnCheckStateChanged_DeleteProbeBrush(ECheckBoxState InState);
	ECheckBoxState GetCheckState_DeleteProbeBrush() const;
	void OnProbeBrushRadiusChanged(float NewValue);
	TOptional<float> GetProbeBrushRadius() const;
	void OnProbeBrushPaintDensityChanged(float NewValue);
	TOptional<float> GetProbeBrushPaintDensity() const;
	bool TraceProbeBrushTarget(
		FEditorViewportClient* ViewportClient, int32 MouseX, int32 MouseY, FVector& OutLocation,
		FVector& OutNormal) const;
	bool TraceProbeBrushSurfaceAtLocation(
		UWorld* EditorWorld, const FVector& CandidateLocation, const FVector& TraceNormal, FVector& OutLocation,
		FVector& OutNormal) const;
	int32 AddEditableProbeActorsInBrush();
	int32 DeleteEditableProbeActorsInBrush();
	bool BeginProbeBrushStroke();
	bool IsProbeBrushDeleteModeActive() const;
	bool IsLocationInsideProbeBrush(const FVector& Location) const;
	int32 CountEditableProbeActorsInBrush(bool bManagedOnly) const;
	FVector GetRandomLocationInProbeBrush(const FVector& AxisX, const FVector& AxisY);
	bool HasEditableProbeNearLocation(const FVector& Location, double MinDistance) const;
	double GetProbeBrushMinSpacingCm() const;
	float GetEditableProbeHeightAboveGroundCm() const;
	void InitializeProbeBrushVisual();
	void HideProbeBrushVisual() const;
	double GetProbeBrushEffectiveDensity() const;

	FReply OnResetSimulationParametersButton();
	EVisibility GetSimulationParameterVisibility() const;
	void OnCheckStateChanged_ShowSimulationParameters(ECheckBoxState InState);
	ECheckBoxState GetCheckState_ShowSimulationParameters() const;

	FText GetCurrentResolutionLabel() const;
	TSharedRef<SWidget> MakeResolutionOptionsWidget(TSharedPtr<FString> inString);
	void OnResolutionChanged(TSharedPtr<FString> NewSelection, ESelectInfo::Type SelectInfo);
	FText GetPrefixText() const;
	void OnPrefixTextChange(const FText& NewText, ETextCommit::Type CommitInfo);
	FText GetDataFolderPath() const;
	FReply OnAcousticsDataFolderButtonClick();
	void ComputePrebake();
	void SetPrebakeError(const FString& Error);
	bool ShouldUsePhysicalMaterialForPrebake(const class UPhysicalMaterial* physicalMaterial) const;
	bool TryGetMappedAcousticMaterialNameForPrebake(const FString& MaterialName, FString& AcousticMaterialName) const;

	void AddStaticMeshToAcousticMesh(
		AcousticMesh* acousticMesh, AActor* actor, const FTransform& worldTransform, const UStaticMesh* mesh,
		const TArray<UMaterialInterface*>& materials, MeshType type, TArray<uint32>& materialIDsNotFound,
		UPhysicalMaterial* physMatOverride = nullptr);

	// Function to export landscape to raw mesh
	bool ExportLandscapeToRawMesh(
		class ALandscapeProxy* LandscapeActor, int32 InExportLOD, struct FMeshDescription& OutRawMesh,
		TArray<class ULandscapeLayerInfoObject*>& TriangleLayerInfo, const FBoxSphereBounds& InBounds,
		bool ShouldIgnoreBounds = false) const;

	void AddLandscapeToAcousticMesh(
		AcousticMesh* acousticMesh, class ALandscapeProxy* actor, MeshType type, TArray<uint32>& materialIDsNotFound,
		const FBoxSphereBounds& BoundsOfInterest);

	void AddVolumeToAcousticMesh(
		AcousticMesh* acousticMesh, class AAcousticsProbeVolume* Actor, TArray<uint32>& materialIDsNotFound);
	void AddPinnedProbeToAcousticMesh(AcousticMesh* acousticMesh, const FVector& probeLocation);

	void AddNavmeshToAcousticMesh(
		AcousticMesh* acousticMesh, class ARecastNavMesh* navActor, TArray<UMaterialInterface*> materials,
		TArray<uint32>& materialIDsNotFound);
	bool ShouldEnableForProcessing() const;
	TOptional<float> GetProgressBarPercent() const;
	EVisibility GetProgressBarVisibility() const;

	static bool ComputePrebakeCallback(const char* message, int progress);
	static void ResetPrebakeCalculationState();
	static bool IsOverlapped(
		const class AAcousticsProbeVolume* ProbeVolume, const ATKVectorD& Vertex1, const ATKVectorD& Vertex2,
		const ATKVectorD& Vertex3);

	TritonMaterialCode GetMaterialCodeForStaticMeshFace(
		const UStaticMesh* mesh, const TArray<UMaterialInterface*>& materials, uint32 face,
		TArray<uint32>& materialIDsNotFound, UPhysicalMaterial* physMatOverride = nullptr);

	TritonMaterialCode GetMaterialCodeForLandscapeFace(
		const TArray<class ULandscapeLayerInfoObject*>& layers, uint32 face, TArray<uint32>& layerMaterialIDsNotFound,
		UPhysicalMaterial* physMatOverride = nullptr);

	void ApplyOverridesAndRemapsFromProbeVolumesOnTriangle(
		const TArray<ATKVectorD>& vertices, uint32 index1, uint32 index2, uint32 index3,
		TritonMaterialCode MaterialCode, TritonAcousticMeshTriangleInformation& triangleInfo);

private:
	TSharedPtr<FString> m_CurrentResolution;
	FString m_AcousticsDataFolderPath;
	TSharedPtr<class SEditableTextBox> m_PrefixTextBox;
	FString m_Prefix;
	SAcousticsEdit* m_OwnerEdit;
	static FString m_CurrentStatus;
	static float m_CurrentProgress;
	static bool m_CancelRequest;
	static bool m_ShowSimulationParameters;

	TArray<class AAcousticsProbeVolume*> m_MaterialOverrideVolumes;
	TArray<class AAcousticsProbeVolume*> m_MaterialRemapVolumes;

	FAcousticsEdMode* m_AcousticsEditMode;

	TSharedPtr<SAcousticsSimulationParametersPanel> m_SimParamsPanel;
	bool m_bCommandletPrebake = false;
	bool m_bCommandletUsePhysicalMaterials = false;
	bool m_bCommandletAutoContinueLargeNavigationMeshes = true;
	TMap<FString, FString> m_CommandletMaterialToAcousticMaterial;
	FString m_CommandletError;
	bool m_bProbeBrushEnabled = false;
	bool m_bProbeBrushDeleteMode = false;
	bool m_bProbeBrushQuickDeleteMode = false;
	bool m_bProbeBrushHasTarget = false;
	bool m_bProbeBrushIsPainting = false;
	bool m_bWasProbesTabActive = false;
	float m_ProbeBrushRadius = 300.0f;
	float m_ProbeBrushPaintDensity = 0.25f;
	FVector m_ProbeBrushLocation = FVector::ZeroVector;
	FVector m_ProbeBrushNormal = FVector::UpVector;
	FRandomStream m_ProbeBrushRandomStream;
	TUniquePtr<class FScopedTransaction> m_ProbeBrushTransaction;
	int32 m_ProbeBrushStrokeChangeCount = 0;
	TStrongObjectPtr<class UStaticMeshComponent> m_ProbeBrushComponent;
	TStrongObjectPtr<class UMaterialInstanceDynamic> m_ProbeBrushMaterialInstance;
	FColor m_ProbeBrushDefaultHighlightColor = FColor::White;
	FColor m_ProbeBrushCurrentHighlightColor = FColor::White;
	float m_ProbeBrushDefaultOpacity = 1.0f;
};
