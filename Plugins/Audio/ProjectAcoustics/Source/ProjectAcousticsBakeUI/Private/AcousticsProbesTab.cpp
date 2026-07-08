// Copyright (c) 2022 Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "AcousticsProbesTab.h"
#include "AcousticsProbeVolume.h"
#include "AcousticsPinnedProbe.h"
#include "AcousticsDebugRenderer.h"
#include "AcousticsDynamicOpening.h"
#include "SAcousticsEdit.h"
#include "AcousticsSharedState.h"
#include "AcousticsEdMode.h"
#include "CollisionGeometryToAcousticMeshConverter.h"
#include "AcousticsSimulationConfiguration.h"
#include "MathUtils.h"
#include "Fonts/SlateFontInfo.h"
#include "Modules/ModuleManager.h"
#include "Editor.h"
#include "EditorViewportClient.h"
#include "EditorModeManager.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Framework/Application/SlateApplication.h"
#include "InputCoreTypes.h"
#include "Editor/PropertyEditor/Public/IDetailsView.h"
#include "Editor/PropertyEditor/Public/PropertyEditorModule.h"
#include "Editor/PropertyEditor/Public/DetailLayoutBuilder.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/Launch/Resources/Version.h"
#include "TritonPreprocessorApi.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SHeader.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformTime.h"
#include "Misc/Char.h"
#include "Misc/FileHelper.h"
#include "ScopedTransaction.h"
#include "SlateOptMacros.h"
#include "PrimitiveDrawingUtils.h"
#include "SceneView.h"
#include "Widgets/Input/SButton.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "MeshDescription.h"

#include "RawMesh.h"
#include "LandscapeProxy.h"
#include "Navmesh/RecastNavMesh.h"
#include "ISourceControlProvider.h"
#include "ISourceControlModule.h"
#include "SourceControlHelpers.h"
#include "Misc/MessageDialog.h"
#include "SourceControlOperations.h"
#include "StaticMeshDescription.h"
// Necessary include for physical material support
#include "PhysicalMaterials/PhysicalMaterial.h"
// Necessary includes for landscape layered materials
#include "LandscapeDataAccess.h"
#include "LandscapeLayerInfoObject.h"
#include "StaticMeshAttributes.h"
#include "MeshUtilitiesCommon.h"
#include "LandscapeStreamingProxy.h"
#include "Landscape.h"
// Added support for Hierarchical Instanced Static Mesh component
#include "Components/InstancedStaticMeshComponent.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Notifications/SErrorText.h"
#include "Misc/ScopedSlowTask.h"
#include "MaterialDomain.h"
#include "Engine/CollisionProfile.h"
#if ENGINE_MAJOR_VERSION >= 5
#include "LevelInstance/LevelInstanceInterface.h"
#include "LevelInstance/LevelInstanceSubsystem.h"
#endif
#include <AcousticsShared.h>

#define LOCTEXT_NAMESPACE "SAcousticsProbesTab"

static const TCHAR* c_ManualProbeListOverrideMarker = TEXT("OrionManualProbeListOverride=true");
static const TCHAR* c_ManualProbeListOverrideMarkerComment = TEXT("\t<!-- OrionManualProbeListOverride=true -->\r\n");
static constexpr double c_DefaultAppendProbeDuplicateToleranceCm = 50.0;

#if ENGINE_MAJOR_VERSION < 5
// In UE4, FVector was float.
// In UE5, FVector is now double. FVector3f is float
// FVector3f does not exist in UE4, so we convert back to FVector
typedef FVector FVector3f;

// In UE4, FVector2D is now float
// In UE5, FVector2D is now double.
// FVector2F does not exist in UE4, so we convert back to FVector2D
typedef FVector2D FVector2f;
#endif

// Helper method copied from UE's source in StaticMeshEdit.cpp
// For some reason, linking against UnrealEd isn't finding this function definition
UStaticMesh*
CreateStaticMesh(struct FRawMesh& RawMesh, TArray<FStaticMaterial>& Materials, UObject* InOuter, FName InName)
{
	// Create the UStaticMesh object.
	FStaticMeshComponentRecreateRenderStateContext RecreateRenderStateContext(
		FindObject<UStaticMesh>(InOuter, *InName.ToString()));
	auto StaticMesh = NewObject<UStaticMesh>(InOuter, InName, RF_Public | RF_Standalone);

	// Add one LOD for the base mesh
	FStaticMeshSourceModel& SrcModel = StaticMesh->AddSourceModel();
	SrcModel.SaveRawMesh(RawMesh);
#if ENGINE_MAJOR_VERSION == 5 || (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 27)
	StaticMesh->SetStaticMaterials(Materials);
	int32 NumSections = StaticMesh->GetStaticMaterials().Num();
#else
	StaticMesh->StaticMaterials = Materials;
	int32 NumSections = StaticMesh->StaticMaterials.Num();
#endif

	// Set up the SectionInfoMap to enable collision
	for (int32 SectionIdx = 0; SectionIdx < NumSections; ++SectionIdx)
	{
		FMeshSectionInfo Info = StaticMesh->GetSectionInfoMap().Get(0, SectionIdx);
		Info.MaterialIndex = SectionIdx;
		Info.bEnableCollision = true;
		StaticMesh->GetSectionInfoMap().Set(0, SectionIdx, Info);
		StaticMesh->GetOriginalSectionInfoMap().Set(0, SectionIdx, Info);
	}

	// Set the Imported version before calling the build
	StaticMesh->SetImportVersion(EImportStaticMeshVersion::LastVersion);

	StaticMesh->Build();
	StaticMesh->MarkPackageDirty();
	return StaticMesh;
}

// Starting in 4.22, UE changed the first parameter to this function
// We still use the first version when constructing meshes ourself, so leaving both versions in
UStaticMesh*
CreateStaticMesh(FMeshDescription& RawMesh, TArray<FStaticMaterial>& Materials, UObject* InOuter, FName InName)
{
	// Create the UStaticMesh object.
	FStaticMeshComponentRecreateRenderStateContext RecreateRenderStateContext(
		FindObject<UStaticMesh>(InOuter, *InName.ToString()));
	auto StaticMesh = NewObject<UStaticMesh>(InOuter, InName, RF_Public | RF_Standalone);

	// Add one LOD for the base mesh
	FStaticMeshSourceModel& SrcModel = StaticMesh->AddSourceModel();
	FMeshDescription* MeshDescription = StaticMesh->CreateMeshDescription(0);
	*MeshDescription = RawMesh;
	StaticMesh->CommitMeshDescription(0);
#if ENGINE_MAJOR_VERSION == 5 || (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 27)
	StaticMesh->SetStaticMaterials(Materials);
	int32 NumSections = StaticMesh->GetStaticMaterials().Num();
#else
	StaticMesh->StaticMaterials = Materials;
	int32 NumSections = StaticMesh->StaticMaterials.Num();
#endif

	// Set up the SectionInfoMap to enable collision
	for (int32 SectionIdx = 0; SectionIdx < NumSections; ++SectionIdx)
	{
		FMeshSectionInfo Info = StaticMesh->GetSectionInfoMap().Get(0, SectionIdx);
		Info.MaterialIndex = SectionIdx;
		Info.bEnableCollision = true;
		StaticMesh->GetSectionInfoMap().Set(0, SectionIdx, Info);
		StaticMesh->GetOriginalSectionInfoMap().Set(0, SectionIdx, Info);
	}

	// Set the Imported version before calling the build
	StaticMesh->SetImportVersion(EImportStaticMeshVersion::LastVersion);

	StaticMesh->Build();
	StaticMesh->MarkPackageDirty();
	return StaticMesh;
}

bool SAcousticsProbesTab::m_CancelRequest = false;
FString SAcousticsProbesTab::m_CurrentStatus = TEXT("");
float SAcousticsProbesTab::m_CurrentProgress = 0.0f;
bool SAcousticsProbesTab::m_ShowSimulationParameters = false;

static const FName c_EditableProbeFolderPath(TEXT("ProjectAcoustics/EditableProbes"));
static const TCHAR* c_EditableProbeActorNamePrefix = TEXT("PA_EditableProbe");
static const TCHAR* c_ManualProbeActorNamePrefix = TEXT("PA_ManualProbe");
static const FName c_ProbeBrushHighlightColorParamName(TEXT("HighlightColor"));
static const FName c_ProbeBrushOpacityParamName(TEXT("OpacityAmount"));
static TArray<TSharedPtr<FString>> g_ResolutionNames = {
	MakeShareable(new FString(TEXT("Coarse"))), MakeShareable(new FString(TEXT("Fine")))};
static TArray<float> g_ResolutionFrequencies = {250, 500};
static constexpr double c_EditableProbeDuplicateToleranceCm = 1.0;
static constexpr double c_ProbeBrushAreaNormalizationCm2 = 1000.0 * 1000.0;
static constexpr double c_ProbeBrushDensityScale = 16.0;
static constexpr float c_ProbeBrushSphereScale = 0.00625f;
static constexpr float c_LargeMapProbeDebugDrawDistanceCm = 500000.0f;

static FResolution LabelToResolution(TSharedPtr<FString> label)
{
	return FString(TEXT("Coarse")).Compare(*label) == 0 ? FResolution::Coarse : FResolution::Fine;
}

static FText FrequencyToResolution(float frequency)
{
	if (frequency == 250)
	{
		return FText::FromString(*g_ResolutionNames[static_cast<uint8>(FResolution::Coarse)]);
	}
	if (frequency == 500)
	{
		return FText::FromString(*g_ResolutionNames[static_cast<uint8>(FResolution::Fine)]);
	}

	// Custom means the user edited the simulation frequency manually outside the dropdown presets.
	return FText::FromString("Custom");
}

static FName GetFoliageStyleSetName()
{
#if ENGINE_MAJOR_VERSION == 4 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
	return FEditorStyle::GetStyleSetName();
#else
	return FAppStyle::GetAppStyleSetName();
#endif
}

static FString FormatProbeCoordinate(double Value)
{
	if (FMath::IsNearlyZero(Value, 0.000001))
	{
		Value = 0.0;
	}

	FString CoordinateText = FString::Printf(TEXT("%.6f"), Value);
	while (CoordinateText.EndsWith(TEXT("0")))
	{
		CoordinateText.LeftChopInline(1);
	}
	if (CoordinateText.EndsWith(TEXT(".")))
	{
		CoordinateText.LeftChopInline(1);
	}
	return CoordinateText;
}

static FString BuildProbeListXml(const TArray<FVector>& ProbeLocations)
{
	FString ProbeListText = TEXT("\t<ProbeList size=\"dynamic\">\r\n");
	for (int32 ProbeIndex = 0; ProbeIndex < ProbeLocations.Num(); ++ProbeIndex)
	{
		const FVector TritonLocation = AcousticsUtils::UnrealPositionToTriton(ProbeLocations[ProbeIndex]);
		ProbeListText += FString::Printf(TEXT("\t\t<value%d>\r\n"), ProbeIndex);
		ProbeListText += FString::Printf(TEXT("\t\t\t<i>%s</i>\r\n"), *FormatProbeCoordinate(TritonLocation.X));
		ProbeListText += FString::Printf(TEXT("\t\t\t<j>%s</j>\r\n"), *FormatProbeCoordinate(TritonLocation.Y));
		ProbeListText += FString::Printf(TEXT("\t\t\t<k>%s</k>\r\n"), *FormatProbeCoordinate(TritonLocation.Z));
		ProbeListText += FString::Printf(TEXT("\t\t</value%d>\r\n"), ProbeIndex);
	}
	ProbeListText += TEXT("\t</ProbeList>");
	return ProbeListText;
}

static bool ReplaceXmlElementInnerText(
	FString& XmlText, const TCHAR* ElementName, const FString& NewInnerText, FString& OutError)
{
	const FString OpenTag = FString::Printf(TEXT("<%s>"), ElementName);
	const FString CloseTag = FString::Printf(TEXT("</%s>"), ElementName);

	const int32 OpenTagStart = XmlText.Find(*OpenTag, ESearchCase::CaseSensitive);
	if (OpenTagStart == INDEX_NONE)
	{
		OutError = FString::Printf(TEXT("ProjectAcoustics config is missing %s."), ElementName);
		return false;
	}

	const int32 InnerStart = OpenTagStart + OpenTag.Len();
	const int32 CloseTagStart =
		XmlText.Find(*CloseTag, ESearchCase::CaseSensitive, ESearchDir::FromStart, InnerStart);
	if (CloseTagStart == INDEX_NONE)
	{
		OutError = FString::Printf(TEXT("ProjectAcoustics config is missing closing %s."), *CloseTag);
		return false;
	}

	XmlText = XmlText.Left(InnerStart) + NewInnerText + XmlText.Mid(CloseTagStart);
	return true;
}

static bool ReplaceProbeListXml(FString& XmlText, const FString& NewProbeListXml, FString& OutError)
{
	const FString ProbeListCloseTag = TEXT("</ProbeList>");
	XmlText.ReplaceInline(c_ManualProbeListOverrideMarkerComment, TEXT(""));
	XmlText.ReplaceInline(*FString::Printf(TEXT("<!-- %s -->\r\n"), c_ManualProbeListOverrideMarker), TEXT(""));
	XmlText.ReplaceInline(*FString::Printf(TEXT("\t<!-- %s -->"), c_ManualProbeListOverrideMarker), TEXT(""));
	XmlText.ReplaceInline(*FString::Printf(TEXT("<!-- %s -->"), c_ManualProbeListOverrideMarker), TEXT(""));

	const int32 ProbeListStart = XmlText.Find(TEXT("<ProbeList"), ESearchCase::CaseSensitive);
	if (ProbeListStart == INDEX_NONE)
	{
		OutError = TEXT("ProjectAcoustics config is missing ProbeList.");
		return false;
	}

	const int32 ProbeListOpenEnd =
		XmlText.Find(TEXT(">"), ESearchCase::CaseSensitive, ESearchDir::FromStart, ProbeListStart);
	if (ProbeListOpenEnd == INDEX_NONE)
	{
		OutError = TEXT("ProjectAcoustics config has an invalid ProbeList opening tag.");
		return false;
	}

	const int32 ProbeListCloseStart =
		XmlText.Find(*ProbeListCloseTag, ESearchCase::CaseSensitive, ESearchDir::FromStart, ProbeListOpenEnd);
	if (ProbeListCloseStart == INDEX_NONE)
	{
		OutError = TEXT("ProjectAcoustics config is missing the closing ProbeList tag.");
		return false;
	}

	const int32 ProbeListCloseEnd = ProbeListCloseStart + ProbeListCloseTag.Len();
	XmlText =
		XmlText.Left(ProbeListStart) + c_ManualProbeListOverrideMarkerComment + NewProbeListXml +
		XmlText.Mid(ProbeListCloseEnd);
	return true;
}

static bool AddUniqueProbeLocationWithTolerance(
	TArray<FVector>& ProbeLocations, const FVector& ProbeLocation, double ToleranceCm)
{
	const double ToleranceSquared = ToleranceCm * ToleranceCm;
	for (const FVector& ExistingLocation : ProbeLocations)
	{
		if (FVector::DistSquared(ExistingLocation, ProbeLocation) <= ToleranceSquared)
		{
			return false;
		}
	}

	ProbeLocations.Add(ProbeLocation);
	return true;
}

static bool AddUniqueProbeLocation(TArray<FVector>& ProbeLocations, const FVector& ProbeLocation)
{
	return AddUniqueProbeLocationWithTolerance(
		ProbeLocations,
		ProbeLocation,
		c_EditableProbeDuplicateToleranceCm);
}

static bool GatherAppendProbeRegionBounds(
	UWorld* EditorWorld, const FName RegionTag, double BoundsPaddingCm, TArray<FBox>& OutRegionBounds)
{
	OutRegionBounds.Reset();
	if (EditorWorld == nullptr || RegionTag.IsNone())
	{
		return false;
	}

	for (TActorIterator<AActor> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AActor* Actor = *ActorIterator;
		if (Actor == nullptr || !Actor->ActorHasTag(RegionTag))
		{
			continue;
		}

		FBox ActorBounds = Actor->GetComponentsBoundingBox(true, true);
		if (!ActorBounds.IsValid)
		{
			ActorBounds = Actor->GetComponentsBoundingBox(false, true);
		}
		if (!ActorBounds.IsValid)
		{
			UE_LOG(
				LogAcoustics,
				Warning,
				TEXT("ProjectAcoustics append probe region actor [%s] has invalid bounds. Ignoring."),
				*Actor->GetName());
			continue;
		}

		if (BoundsPaddingCm > 0.0)
		{
			ActorBounds = ActorBounds.ExpandBy(BoundsPaddingCm);
		}
		OutRegionBounds.Add(ActorBounds);
	}

	return OutRegionBounds.Num() > 0;
}

static bool IsProbeLocationInsideAppendRegion(const FVector& ProbeLocation, const TArray<FBox>& RegionBounds)
{
	for (const FBox& Bounds : RegionBounds)
	{
		if (Bounds.IsInsideOrOn(ProbeLocation))
		{
			return true;
		}
	}

	return false;
}

static FVector GetDefaultEditableProbeLocation()
{
	if (GEditor != nullptr)
	{
		FViewport* ActiveViewport = GEditor->GetActiveViewport();
		if (ActiveViewport != nullptr && ActiveViewport->GetClient() != nullptr)
		{
			FEditorViewportClient* ViewportClient = static_cast<FEditorViewportClient*>(ActiveViewport->GetClient());
			return ViewportClient->GetViewLocation() + ViewportClient->GetViewRotation().Vector() * 300.0f;
		}
	}

	return FVector::ZeroVector;
}

static bool IsProbeActorInEditableProbeFolder(const AAcousticsPinnedProbe* ProbeActor)
{
	return ProbeActor != nullptr &&
		ProbeActor->GetFolderPath().ToString().Equals(c_EditableProbeFolderPath.ToString(), ESearchCase::IgnoreCase);
}

static bool IsProbeActorNamedAsEditableProbe(const AAcousticsPinnedProbe* ProbeActor)
{
	if (ProbeActor == nullptr)
	{
		return false;
	}

	const FString ActorName = ProbeActor->GetName();
	const FString ActorLabel = ProbeActor->GetActorLabel();
	return ActorName.StartsWith(c_EditableProbeActorNamePrefix) ||
		ActorLabel.StartsWith(c_EditableProbeActorNamePrefix) ||
		ActorLabel.StartsWith(c_ManualProbeActorNamePrefix);
}

static bool IsProbeActorManagedByProbeEditor(const AAcousticsPinnedProbe* ProbeActor)
{
	if (ProbeActor == nullptr)
	{
		return false;
	}

	return ProbeActor->bManagedByProbeEditor ||
		ProbeActor->bGeneratedFromSimulationConfiguration ||
		ProbeActor->SourceProbeIndex != INDEX_NONE ||
		IsProbeActorInEditableProbeFolder(ProbeActor) ||
		IsProbeActorNamedAsEditableProbe(ProbeActor);
}

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SAcousticsProbesTab::Construct(const FArguments& InArgs, SAcousticsEdit* ownerEdit)
{
	const FString helpTextTitle = TEXT("Step Three");
	const FString helpText = TEXT(
		"Previewing the probe points helps ensure that probe locations map to the areas in the scene where the user "
		"will travel, as well as evaulating the number of probe points, which affects bake time and cost.\n\nIn "
		"addition, you can preview the voxels to see how portals (doors, windows, etc.) might be affected by the "
		"simulation resolution.The probe points calculated here will be used when you submit your bake.");

	FSlateFontInfo StandardFont = STYLER::GetFontStyle(TEXT("PropertyWindow.NormalFont"));

	// If python isn't initialized, bail out
	if (!AcousticsSharedState::IsInitialized())
	{
		// clang-format off
		ChildSlot
			[
				SNew(STextBlock)
				.Text(FText::FromString(TEXT("Python is required for Project Acoustics baking.\nPlease enable the Python plugin.")))
			];
		// clang-format on
		return;
	}

	FEditorDelegates::MapChange.AddLambda(
		[](uint32 changeType)
		{
			if (changeType == MapChangeEventFlags::NewMap)
			{
				m_CurrentStatus = TEXT("");
			}
		});

	m_OwnerEdit = ownerEdit;

	if (!IsRunningCommandlet())
	{
		// Cache of the pointer to the acoustics edit mode class.
		m_AcousticsEditMode =
			static_cast<FAcousticsEdMode*>(GLevelEditorModeTools().GetActiveMode(FAcousticsEdMode::EM_AcousticsEdModeId));
		if (m_AcousticsEditMode != nullptr)
		{
			m_AcousticsEditMode->SetProbeBrushHandler(this);
		}
		InitializeProbeBrushVisual();
	}

#pragma region ProbesTabUI

	// clang-format off
	ChildSlot
		[
			SNew(SVerticalBox)
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SErrorText)
			.Visibility_Lambda([]() { return !AcousticsSharedState::IsPrebakeActive() ? EVisibility::Collapsed : EVisibility::Visible; })
			.ErrorText(LOCTEXT("ProbesTabMessage", "Clear the preview to make changes"))
			.BackgroundColor(STYLER::GetColor("InfoReporting.BackgroundColor"))
		]
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAcousticsEdit::MakeHelpTextWidget(helpTextTitle, helpText)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("Simulation Resolution")))
		]
	+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SComboBox<TSharedPtr<FString>>)
			.IsEnabled(this, &SAcousticsProbesTab::ShouldEnableForProcessing)
		.OptionsSource(&g_ResolutionNames)
		.ToolTipText(FText::FromString(TEXT("Determines the frequency for simulation processing")))
		.OnGenerateWidget(this, &SAcousticsProbesTab::MakeResolutionOptionsWidget)
		.OnSelectionChanged(this, &SAcousticsProbesTab::OnResolutionChanged)
		[
			SNew(STextBlock)
			.Text(this, &SAcousticsProbesTab::GetCurrentResolutionLabel)
		.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	.InitiallySelectedItem(m_CurrentResolution)
		[
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
		.Text(this, &SAcousticsProbesTab::GetCurrentResolutionLabel)
		]
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("Acoustics Data Folder")))
		.ToolTipText(FText::FromString(TEXT("Path to the acoustics data folder where generated files are stored")))
		]
	+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.FillWidth(1)
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SEditableTextBox)
			.IsReadOnly(true)
		.Text(this, &SAcousticsProbesTab::GetDataFolderPath)
		.MinDesiredWidth(100.0f)
		.ToolTipText(this, &SAcousticsProbesTab::GetDataFolderPath)
		.AllowContextMenu(true)
		]
	+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.IsEnabled(this, &SAcousticsProbesTab::ShouldEnableForProcessing)
		.Text(FText::FromString(TEXT("...")))
		.OnClicked(this, &SAcousticsProbesTab::OnAcousticsDataFolderButtonClick)
		.ToolTipText(FText::FromString(TEXT("Select acoustics data folder")))
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("Acoustics Files Prefix")))
		]
	+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SAssignNew(m_PrefixTextBox, SEditableTextBox)
			.IsEnabled(this, &SAcousticsProbesTab::ShouldEnableForProcessing)
		.Text(this, &SAcousticsProbesTab::GetPrefixText)
		.OnTextCommitted(this, &SAcousticsProbesTab::OnPrefixTextChange)
		.MinDesiredWidth(100.0f)
		.ToolTipText(FText::FromString(TEXT("Prefix used when naming generated files")))
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SSeparator)
			.Orientation(Orient_Horizontal)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(this, &SAcousticsProbesTab::GetCalculateClearText)
		.OnClicked(this, &SAcousticsProbesTab::OnCalculateClearButton)
		.ToolTipText(this, &SAcousticsProbesTab::GetCalculateClearTooltipText)
		.DesiredSizeScale(FVector2D(3.0f, 1.f))
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("Make Probes Editable")))
		.ToolTipText(FText::FromString(TEXT("Create editable AAcousticsPinnedProbe actors from the current generated probe list.")))
		.OnClicked(this, &SAcousticsProbesTab::OnMakeProbesEditableButton)
		.IsEnabled(this, &SAcousticsProbesTab::CanMakeProbesEditable)
		]
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("Add Probe")))
		.ToolTipText(FText::FromString(TEXT("Add one editable probe actor in front of the active editor viewport camera.")))
		.OnClicked(this, &SAcousticsProbesTab::OnAddEditableProbeButton)
		.IsEnabled(this, &SAcousticsProbesTab::CanAddEditableProbe)
		]
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("Apply Probe Edits")))
		.ToolTipText(FText::FromString(TEXT("Write current editable probe actor locations back to the Project Acoustics config file and reload the preview.")))
		.OnClicked(this, &SAcousticsProbesTab::OnApplyProbeEditsButton)
		.IsEnabled(this, &SAcousticsProbesTab::CanApplyProbeEdits)
		]
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("Clear Editable Probe Actors")))
		.ToolTipText(FText::FromString(TEXT("Delete probe actors created by this Project Acoustics probe editor.")))
		.OnClicked(this, &SAcousticsProbesTab::OnClearEditableProbeActorsButton)
		.IsEnabled(this, &SAcousticsProbesTab::CanClearEditableProbeActors)
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Top)
		[
			BuildProbeBrushToolBar()
		]
			+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(STextBlock)
			.Text(this, &SAcousticsProbesTab::GetActiveProbeBrushToolName)
		.TextStyle(STYLER::Get(), "FoliageEditMode.ActiveToolName.Text")
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SHeader)
			.Visibility(this, &SAcousticsProbesTab::GetProbeBrushOptionsVisibility)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ProbeBrushOptionsHeader", "Brush Options"))
		.Font(StandardFont)
			]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			.ToolTipText(LOCTEXT("ProbeBrushSizeTooltip", "The size of the Project Acoustics probe brush."))
			.Visibility(this, &SAcousticsProbesTab::GetProbeBrushOptionsVisibility)
			+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		.Padding(FAcousticsEditSharedProperties::StandardLeftPadding)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("ProbeBrushSizeLabel", "Brush Size"))
		.Font(StandardFont)
		]
			+ SHorizontalBox::Slot()
		.FillWidth(2.0f)
		.MaxWidth(100.0f)
		.VAlign(VAlign_Center)
		.Padding(FAcousticsEditSharedProperties::StandardRightPadding)
		[
			SNew(SNumericEntryBox<float>)
			.Font(StandardFont)
			.AllowSpin(true)
			.MinValue(25.0f)
			.MaxValue(5000.0f)
			.MaxSliderValue(2000.0f)
			.MinDesiredValueWidth(50.0f)
			.SliderExponent(3.0f)
			.Value(this, &SAcousticsProbesTab::GetProbeBrushRadius)
			.OnValueChanged(this, &SAcousticsProbesTab::OnProbeBrushRadiusChanged)
			.IsEnabled(this, &SAcousticsProbesTab::IsProbeBrushEnabled)
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			.ToolTipText(LOCTEXT("ProbePaintDensityTooltip", "The relative density of probes to paint inside the brush. This matches Foliage Mode's 0-1 density control, then maps to Project Acoustics probe sample attempts."))
			.Visibility(this, &SAcousticsProbesTab::GetProbeBrushPaintDensityVisibility)
			+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		.Padding(FAcousticsEditSharedProperties::StandardLeftPadding)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("ProbePaintDensityLabel", "Paint Density"))
		.Font(StandardFont)
		]
			+ SHorizontalBox::Slot()
		.FillWidth(2.0f)
		.MaxWidth(100.0f)
		.VAlign(VAlign_Center)
		.Padding(FAcousticsEditSharedProperties::StandardRightPadding)
		[
			SNew(SNumericEntryBox<float>)
			.Font(StandardFont)
			.AllowSpin(true)
			.MinValue(0.0f)
			.MaxValue(1.0f)
			.MaxSliderValue(1.0f)
			.MinDesiredValueWidth(50.0f)
			.Value(this, &SAcousticsProbesTab::GetProbeBrushPaintDensity)
			.OnValueChanged(this, &SAcousticsProbesTab::OnProbeBrushPaintDensityChanged)
			.IsEnabled(this, &SAcousticsProbesTab::IsProbeBrushPaintTool)
		]
		]
	// Added button to the Probes Tab to check out the config and vox files or mark them for add if they aren't already source controlled.
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("CheckOut / MarkForAdd Vox and Config File")))
		.ToolTipText(FText::FromString(TEXT("Check out the config and vox files or mark them for add if they aren't already in source control.")))
		.OnClicked(this, &SAcousticsProbesTab::OnCheckOutFilesButton)
		.IsEnabled(this, &SAcousticsProbesTab::CanCheckOutFiles)
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SProgressBar)
			.Percent(this, &SAcousticsProbesTab::GetProgressBarPercent)
		.Visibility(this, &SAcousticsProbesTab::GetProgressBarVisibility)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(STextBlock)
			.AutoWrapText(true)
		.Text_Lambda([this]() { return FText::FromString(m_CurrentStatus); })
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SBox)
			[
				SNew(SCheckBox)
		.OnCheckStateChanged(this, &SAcousticsProbesTab::OnCheckStateChanged_ShowSimulationParameters)
		.IsChecked(this, &SAcousticsProbesTab::GetCheckState_ShowSimulationParameters)
		.ToolTipText(LOCTEXT("ShowAdvancedParametersTooltip", "Display advanced bake simulation parameters."))
		[
			SNew(STextBlock)
			.Text(LOCTEXT("AdvancedParams", "Show Advanced Parameters"))
		.Font(StandardFont)
		]
			]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SNew(SButton)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(FText::FromString(TEXT("Reset Simulation Parameters")))
		.OnClicked(this, &SAcousticsProbesTab::OnResetSimulationParametersButton)
		.ToolTipText(FText::FromString(TEXT("Reset Simulation Parameters to their default values")))
		.Visibility(this, &SAcousticsProbesTab::GetSimulationParameterVisibility)
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FAcousticsEditSharedProperties::StandardPadding)
		[
			SAssignNew(m_SimParamsPanel, SAcousticsSimulationParametersPanel)
			.Visibility(this, &SAcousticsProbesTab::GetSimulationParameterVisibility)
			.IsEnabled_Lambda([]() { return !AcousticsSharedState::IsPrebakeActive(); })
		]
	];
	// clang-format on
#pragma endregion
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

SAcousticsProbesTab::~SAcousticsProbesTab()
{
	if (IsRunningCommandlet())
	{
		return;
	}

	FAcousticsEdMode* ActiveAcousticsMode =
		static_cast<FAcousticsEdMode*>(GLevelEditorModeTools().GetActiveMode(FAcousticsEdMode::EM_AcousticsEdModeId));
	if (ActiveAcousticsMode != nullptr)
	{
		ActiveAcousticsMode->ClearProbeBrushHandler(this);
	}

	HideProbeBrushVisual();
}

void SAcousticsProbesTab::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	const bool bIsProbesTabActive = m_OwnerEdit != nullptr && m_OwnerEdit->GetActiveTab() == AcousticsActiveTab::Probes;
	if (bIsProbesTabActive && !m_bWasProbesTabActive)
	{
		RestoreGeneratedProbePreviewFromConfig();
	}

	m_bWasProbesTabActive = bIsProbesTabActive;
}

void SAcousticsProbesTab::OnCheckStateChanged_ShowSimulationParameters(ECheckBoxState InState)
{
	m_ShowSimulationParameters = (InState == ECheckBoxState::Checked ? true : false);
}

ECheckBoxState SAcousticsProbesTab::GetCheckState_ShowSimulationParameters() const
{
	return m_ShowSimulationParameters ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

FReply SAcousticsProbesTab::OnResetSimulationParametersButton()
{
	auto defaultSimParams = AcousticsSharedState::GetDefaultSimulationParameters();
	AcousticsSharedState::SetSimulationParameters(defaultSimParams);
	m_SimParamsPanel->Refresh();
	return FReply::Handled();
}

EVisibility SAcousticsProbesTab::GetSimulationParameterVisibility() const
{
	return m_ShowSimulationParameters ? EVisibility::Visible : EVisibility::Collapsed;
}

TSharedRef<SWidget> SAcousticsProbesTab::MakeResolutionOptionsWidget(TSharedPtr<FString> inString)
{
	return SNew(STextBlock)
		.Font(IDetailLayoutBuilder::GetDetailFont())
		.Text(FText::FromString(*inString))
		.IsEnabled(true);
}

void SAcousticsProbesTab::OnResolutionChanged(TSharedPtr<FString> selection, ESelectInfo::Type info)
{
	auto params = AcousticsSharedState::GetSimulationParameters();
	params.max_frequency = g_ResolutionFrequencies[static_cast<uint8>(LabelToResolution(selection))];
	AcousticsSharedState::SetSimulationParameters(params);
	m_SimParamsPanel->Refresh();
}

FText SAcousticsProbesTab::GetCurrentResolutionLabel() const
{
	auto params = AcousticsSharedState::GetSimulationParameters();
	return FrequencyToResolution(params.max_frequency);
}

FText SAcousticsProbesTab::GetCalculateClearText() const
{
	auto text = TEXT("Clear");
	auto simConfig = AcousticsSharedState::GetSimulationConfiguration();
	if (simConfig != nullptr)
	{
		if (simConfig->GetState() == SimulationConfigurationState::Failed)
		{
			AcousticsSharedState::SetSimulationConfiguration(nullptr);
			ResetPrebakeCalculationState();
			UE_LOG(LogAcoustics, Error, TEXT("Failed to place simulation probes, please check your settings."));
			m_OwnerEdit->SetError(TEXT("Failed to place simulation probes, please check your settings."));
		}
		else
		{
			text = simConfig->IsReady() ? TEXT("Clear") : TEXT("Cancel");
		}
	}
	else
	{
		text = TEXT("Calculate");
	}
	return FText::FromString(text);
}

FText SAcousticsProbesTab::GetCalculateClearTooltipText() const
{
	auto text = TEXT("");
	auto simConfig = AcousticsSharedState::GetSimulationConfiguration();
	if (simConfig != nullptr)
	{
		text = simConfig->IsReady() ? TEXT("Delete previously processed configuration")
									: TEXT("Cancel configuration processing");
	}
	else
	{
		text = TEXT("Generate simulation configuration");
	}
	return FText::FromString(text);
}

FReply SAcousticsProbesTab::OnCalculateClearButton()
{
	// No configuration, we need to run pre-bake
	if (!AcousticsSharedState::IsPrebakeActive())
	{
		auto config = AcousticsSharedState::GetProjectConfiguration();
		if (!FPaths::DirectoryExists(config.content_dir))
		{
			auto created = FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*config.content_dir);
			if (!created)
			{
				auto error = FString(TEXT("Could not create acoustics data folder. Please choose a new location"));
				UE_LOG(LogAcoustics, Error, TEXT("%s"), *error);
				m_OwnerEdit->SetError(error);
				return FReply::Handled();
			}
		}
		if (config.content_dir.IsEmpty())
		{
			auto error = FString(TEXT("Please specify an acoustics data folder"));
			UE_LOG(LogAcoustics, Error, TEXT("%s"), *error);
			m_OwnerEdit->SetError(error);
		}
		else
		{
			// Clear the error text (if set) before starting pre-bake calculations
			m_OwnerEdit->SetError(TEXT(""));
			m_CancelRequest = false;
			ComputePrebake();
		}
	}
	// Have existing pre-bake data, need to clear it
	else
	{
		// Set the read-only flag for the config and vox files to false so that they can be deleted.
		FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*AcousticsSharedState::GetVoxFilepath(), false);
		FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*AcousticsSharedState::GetConfigFilepath(), false);
		// Delete vox and config files
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*AcousticsSharedState::GetVoxFilepath());
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*AcousticsSharedState::GetConfigFilepath());
		// Check if files were successfully deleted.
		if (FPaths::FileExists(AcousticsSharedState::GetVoxFilepath()) ||
			FPaths::FileExists(AcousticsSharedState::GetConfigFilepath()))
		{
			FMessageDialog::Open(
				EAppMsgType::Ok,
				FText::FromString(
					"Unable to delete files " + AcousticsSharedState::GetVoxFilepath() + " and " +
					AcousticsSharedState::GetConfigFilepath() +
					". Make sure the files are not open in another application and are allowed to be deleted and try "
					"again."));
			return FReply::Handled();
		}
		// Set the cancel request and wait for it to take effect
		m_CancelRequest = true;
		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		// Now reset everything else
		ResetPrebakeCalculationState();
	}

	return FReply::Handled();
}

// Definitions for the functions associated with the check out button.
FReply SAcousticsProbesTab::OnCheckOutFilesButton()
{
	CheckOutVoxAndConfigFile();
	return FReply::Handled();
}

void SAcousticsProbesTab::CheckOutVoxAndConfigFile()
{
	if (FAcousticsEdMode::IsSourceControlAvailable())
	{
		USourceControlHelpers::CheckOutOrAddFile(AcousticsSharedState::GetVoxFilepath());
		USourceControlHelpers::CheckOutOrAddFile(AcousticsSharedState::GetConfigFilepath());
	}
}

bool SAcousticsProbesTab::CanCheckOutFiles() const
{
	if (!FAcousticsEdMode::IsSourceControlAvailable())
	{
		return false;
	}

	// Check that prebake files exist and that it's not in progress
	if (AcousticsSharedState::IsPrebakeActive() && AcousticsSharedState::GetSimulationConfiguration()->IsReady())
	{
		return true;
	}

	return false;
}

TSharedRef<SWidget> SAcousticsProbesTab::BuildProbeBrushToolBar()
{
	FVerticalToolBarBuilder Toolbar(TSharedPtr<FUICommandList>(), FMultiBoxCustomization::None);
	Toolbar.SetLabelVisibility(EVisibility::Collapsed);
	Toolbar.SetStyle(&STYLER::Get(), "FoliageEditToolbar");

	Toolbar.AddToolBarButton(
		FUIAction(
			FExecuteAction::CreateSP(this, &SAcousticsProbesTab::OnSetProbeBrushPaint),
			FCanExecuteAction::CreateSP(this, &SAcousticsProbesTab::CanAddEditableProbe),
			FIsActionChecked::CreateSP(this, &SAcousticsProbesTab::IsProbeBrushPaintTool)),
		NAME_None,
		LOCTEXT("ProbeBrushPaint", "Paint"),
		LOCTEXT("ProbeBrushPaintTooltip", "Paint editable Project Acoustics probe actors in the viewport."),
		FSlateIcon(GetFoliageStyleSetName(), "FoliageEditMode.SetPaint"),
		EUserInterfaceActionType::ToggleButton);

	Toolbar.AddToolBarButton(
		FUIAction(
			FExecuteAction::CreateSP(this, &SAcousticsProbesTab::OnSetProbeBrushErase),
			FCanExecuteAction::CreateSP(this, &SAcousticsProbesTab::CanAddEditableProbe),
			FIsActionChecked::CreateSP(this, &SAcousticsProbesTab::IsProbeBrushEraseTool)),
		NAME_None,
		LOCTEXT("ProbeBrushErase", "Erase"),
		LOCTEXT("ProbeBrushEraseTooltip", "Erase editable Project Acoustics probe actors inside the brush."),
		FSlateIcon(GetFoliageStyleSetName(), "FoliageEditMode.Erase"),
		EUserInterfaceActionType::ToggleButton);

	Toolbar.AddToolBarButton(
		FUIAction(
			FExecuteAction::CreateSP(this, &SAcousticsProbesTab::OnSetProbeBrushSelect),
			FCanExecuteAction(),
			FIsActionChecked::CreateSP(this, &SAcousticsProbesTab::IsProbeBrushSelectTool)),
		NAME_None,
		LOCTEXT("ProbeBrushSelect", "Select"),
		LOCTEXT("ProbeBrushSelectTooltip", "Select and move editable Project Acoustics probe actors."),
		FSlateIcon(GetFoliageStyleSetName(), "FoliageEditMode.SetSelect"),
		EUserInterfaceActionType::ToggleButton);

	return
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				SNew(SBorder)
				.HAlign(HAlign_Center)
				.Padding(0)
				.BorderImage(STYLER::GetBrush("NoBorder"))
				.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute())
				[
					Toolbar.MakeWidget()
				]
			]
		];
}

FText SAcousticsProbesTab::GetActiveProbeBrushToolName() const
{
	if (IsProbeBrushPaintTool())
	{
		return LOCTEXT("ProbeBrushActivePaint", "Paint");
	}

	if (IsProbeBrushEraseTool())
	{
		return LOCTEXT("ProbeBrushActiveErase", "Erase");
	}

	return LOCTEXT("ProbeBrushActiveSelect", "Select");
}

EVisibility SAcousticsProbesTab::GetProbeBrushOptionsVisibility() const
{
	return IsProbeBrushEnabled() ? EVisibility::Visible : EVisibility::Collapsed;
}

EVisibility SAcousticsProbesTab::GetProbeBrushPaintDensityVisibility() const
{
	return IsProbeBrushPaintTool() ? EVisibility::Visible : EVisibility::Collapsed;
}

void SAcousticsProbesTab::OnSetProbeBrushSelect()
{
	EndProbeBrushStroke();
	m_bProbeBrushEnabled = false;
	m_bProbeBrushDeleteMode = false;
	m_bProbeBrushQuickDeleteMode = false;
	m_bProbeBrushHasTarget = false;
	HideProbeBrushVisual();
	GEditor->RedrawLevelEditingViewports();
}

void SAcousticsProbesTab::OnSetProbeBrushPaint()
{
	EndProbeBrushStroke();
	m_bProbeBrushEnabled = true;
	m_bProbeBrushDeleteMode = false;
	m_bProbeBrushQuickDeleteMode = false;
	GEditor->RedrawLevelEditingViewports();
}

void SAcousticsProbesTab::OnSetProbeBrushErase()
{
	EndProbeBrushStroke();
	m_bProbeBrushEnabled = true;
	m_bProbeBrushDeleteMode = true;
	m_bProbeBrushQuickDeleteMode = false;
	GEditor->RedrawLevelEditingViewports();
}

bool SAcousticsProbesTab::IsProbeBrushSelectTool() const
{
	return !m_bProbeBrushEnabled;
}

bool SAcousticsProbesTab::IsProbeBrushPaintTool() const
{
	return IsProbeBrushEnabled() && !m_bProbeBrushDeleteMode;
}

bool SAcousticsProbesTab::IsProbeBrushEraseTool() const
{
	return IsProbeBrushEnabled() && m_bProbeBrushDeleteMode;
}

bool SAcousticsProbesTab::IsProbeBrushEnabled() const
{
	return m_bProbeBrushEnabled && CanAddEditableProbe();
}

bool SAcousticsProbesTab::UpdateProbeBrushTarget(
	FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY)
{
	FVector BrushLocation = FVector::ZeroVector;
	FVector BrushNormal = FVector::UpVector;
	m_bProbeBrushHasTarget = TraceProbeBrushTarget(ViewportClient, MouseX, MouseY, BrushLocation, BrushNormal);
	if (m_bProbeBrushHasTarget)
	{
		m_ProbeBrushLocation = BrushLocation;
		m_ProbeBrushNormal = BrushNormal;
	}

	if (Viewport != nullptr)
	{
		Viewport->Invalidate();
	}

	return m_bProbeBrushHasTarget;
}

bool SAcousticsProbesTab::ApplyProbeBrushStroke()
{
	if (!IsProbeBrushEnabled() || !m_bProbeBrushHasTarget)
	{
		return false;
	}

	if (!BeginProbeBrushStroke())
	{
		return false;
	}

	const bool bDeleteMode = IsProbeBrushDeleteModeActive();
	const int32 ChangedCount = bDeleteMode ? DeleteEditableProbeActorsInBrush() : AddEditableProbeActorsInBrush();
	if (ChangedCount <= 0)
	{
		return true;
	}

	m_ProbeBrushStrokeChangeCount += ChangedCount;
	m_CurrentStatus = bDeleteMode
		? FString::Printf(TEXT("Deleted %d editable Project Acoustics probe actors with brush."), m_ProbeBrushStrokeChangeCount)
		: FString::Printf(TEXT("Added %d editable Project Acoustics probe actors with brush."), m_ProbeBrushStrokeChangeCount);
	SetPrebakeError(TEXT(""));
	SetGeneratedProbeDebugRenderingEnabled(false);
	GEditor->RedrawLevelEditingViewports();
	return true;
}

void SAcousticsProbesTab::EndProbeBrushStroke()
{
	if (m_ProbeBrushTransaction.IsValid())
	{
		if (m_ProbeBrushStrokeChangeCount <= 0)
		{
			m_ProbeBrushTransaction->Cancel();
		}
		m_ProbeBrushTransaction.Reset();
	}

	m_bProbeBrushIsPainting = false;
	m_ProbeBrushStrokeChangeCount = 0;
	m_ProbeBrushRandomStream.Reset();
}

void SAcousticsProbesTab::SetProbeBrushQuickDeleteMode(bool bEnabled)
{
	m_bProbeBrushQuickDeleteMode = bEnabled;
}

void SAcousticsProbesTab::AdjustProbeBrushRadius(float Multiplier)
{
	if (!FMath::IsFinite(Multiplier) || Multiplier <= 0.0f)
	{
		return;
	}

	OnProbeBrushRadiusChanged(m_ProbeBrushRadius * Multiplier);
	GEditor->RedrawLevelEditingViewports();
}

void SAcousticsProbesTab::UpdateProbeBrushVisual(FEditorViewportClient* ViewportClient)
{
	if (!IsProbeBrushEnabled() || !m_bProbeBrushHasTarget || ViewportClient == nullptr || !m_ProbeBrushComponent.IsValid())
	{
		HideProbeBrushVisual();
		return;
	}

	UWorld* ViewportWorld = ViewportClient->GetWorld();
	if (ViewportWorld == nullptr)
	{
		HideProbeBrushVisual();
		return;
	}

	const FTransform BrushTransform(
		FQuat::Identity,
		m_ProbeBrushLocation,
		FVector(m_ProbeBrushRadius * c_ProbeBrushSphereScale));
	m_ProbeBrushComponent->SetRelativeTransform(BrushTransform);

	const FColor BrushHighlightColor = IsProbeBrushDeleteModeActive()
		? FColor(255, 32, 16)
		: m_ProbeBrushDefaultHighlightColor;
	if (m_ProbeBrushMaterialInstance.IsValid() && m_ProbeBrushCurrentHighlightColor != BrushHighlightColor)
	{
		m_ProbeBrushCurrentHighlightColor = BrushHighlightColor;
		m_ProbeBrushMaterialInstance->SetVectorParameterValue(c_ProbeBrushHighlightColorParamName, BrushHighlightColor);
	}

	if (m_ProbeBrushComponent->IsRegistered() && m_ProbeBrushComponent->GetWorld() != ViewportWorld)
	{
		m_ProbeBrushComponent->UnregisterComponent();
	}

	if (!m_ProbeBrushComponent->IsRegistered())
	{
		m_ProbeBrushComponent->RegisterComponentWithWorld(ViewportWorld);
	}

	m_ProbeBrushComponent->SetVisibility(true);
}

void SAcousticsProbesTab::RenderProbeBrush(const FSceneView* View, FPrimitiveDrawInterface* PDI) const
{
	if (!m_bProbeBrushEnabled || !m_bProbeBrushHasTarget || View == nullptr || PDI == nullptr)
	{
		return;
	}

	if (m_ProbeBrushComponent.IsValid() && m_ProbeBrushComponent->IsRegistered())
	{
		return;
	}

	FVector AxisX = FVector::ForwardVector;
	FVector AxisY = FVector::RightVector;
	FVector BrushNormal = m_ProbeBrushNormal.GetSafeNormal();
	if (BrushNormal.IsNearlyZero())
	{
		BrushNormal = FVector::UpVector;
	}
	BrushNormal.FindBestAxisVectors(AxisX, AxisY);

	const FLinearColor BrushColor = IsProbeBrushDeleteModeActive()
		? FLinearColor(1.0f, 0.08f, 0.04f, 1.0f)
		: FLinearColor(0.02f, 0.8f, 0.35f, 1.0f);
	DrawCircle(PDI, m_ProbeBrushLocation, AxisX, AxisY, BrushColor, m_ProbeBrushRadius, 64, SDPG_Foreground, 2.0f);
}

void SAcousticsProbesTab::OnCheckStateChanged_EnableProbeBrush(ECheckBoxState InState)
{
	EndProbeBrushStroke();
	m_bProbeBrushEnabled = InState == ECheckBoxState::Checked;
	m_bProbeBrushHasTarget = false;
	m_bProbeBrushQuickDeleteMode = false;
	if (!m_bProbeBrushEnabled)
	{
		HideProbeBrushVisual();
	}
}

ECheckBoxState SAcousticsProbesTab::GetCheckState_EnableProbeBrush() const
{
	return m_bProbeBrushEnabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SAcousticsProbesTab::OnCheckStateChanged_DeleteProbeBrush(ECheckBoxState InState)
{
	EndProbeBrushStroke();
	m_bProbeBrushDeleteMode = InState == ECheckBoxState::Checked;
}

ECheckBoxState SAcousticsProbesTab::GetCheckState_DeleteProbeBrush() const
{
	return m_bProbeBrushDeleteMode ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SAcousticsProbesTab::OnProbeBrushRadiusChanged(float NewValue)
{
	m_ProbeBrushRadius = FMath::Clamp(NewValue, 25.0f, 5000.0f);
}

TOptional<float> SAcousticsProbesTab::GetProbeBrushRadius() const
{
	return m_ProbeBrushRadius;
}

void SAcousticsProbesTab::OnProbeBrushPaintDensityChanged(float NewValue)
{
	m_ProbeBrushPaintDensity = FMath::Clamp(NewValue, 0.0f, 1.0f);
}

TOptional<float> SAcousticsProbesTab::GetProbeBrushPaintDensity() const
{
	return m_ProbeBrushPaintDensity;
}

bool SAcousticsProbesTab::TraceProbeBrushTarget(
	FEditorViewportClient* ViewportClient, int32 MouseX, int32 MouseY, FVector& OutLocation, FVector& OutNormal) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr || ViewportClient == nullptr)
	{
		return false;
	}

	FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
		ViewportClient->Viewport, ViewportClient->GetScene(), ViewportClient->EngineShowFlags)
											.SetRealtimeUpdate(ViewportClient->IsRealtime()));
	FSceneView* View = ViewportClient->CalcSceneView(&ViewFamily);
	if (View == nullptr)
	{
		return false;
	}

	FViewportCursorLocation CursorLocation(View, ViewportClient, MouseX, MouseY);
	FVector TraceStart = CursorLocation.GetOrigin();
	const FVector TraceDirection = CursorLocation.GetDirection();
	if (ViewportClient->IsOrtho())
	{
		TraceStart += -WORLD_MAX * TraceDirection;
	}

	const FVector TraceEnd = TraceStart + TraceDirection * WORLD_MAX;
	FCollisionQueryParams QueryParams(FName(TEXT("ProjectAcousticsProbeBrushTrace")), true);

	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		QueryParams.AddIgnoredActor(*ActorIterator);
	}
	for (TActorIterator<AAcousticsDebugRenderer> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		QueryParams.AddIgnoredActor(*ActorIterator);
	}

	FHitResult HitResult;
	if (!EditorWorld->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
	{
		return false;
	}

	OutLocation = HitResult.ImpactPoint;
	OutNormal = HitResult.ImpactNormal.GetSafeNormal();
	if (OutNormal.IsNearlyZero())
	{
		OutNormal = FVector::UpVector;
	}
	return true;
}

bool SAcousticsProbesTab::TraceProbeBrushSurfaceAtLocation(
	UWorld* EditorWorld, const FVector& CandidateLocation, const FVector& TraceNormal, FVector& OutLocation,
	FVector& OutNormal) const
{
	if (EditorWorld == nullptr)
	{
		return false;
	}

	FVector TraceAxis = TraceNormal.GetSafeNormal();
	if (TraceAxis.IsNearlyZero())
	{
		TraceAxis = FVector::UpVector;
	}

	const double TraceHalfHeight = FMath::Max(static_cast<double>(m_ProbeBrushRadius) * 2.0, 10000.0);
	const FVector TraceStart = CandidateLocation + TraceAxis * TraceHalfHeight;
	const FVector TraceEnd = CandidateLocation - TraceAxis * TraceHalfHeight;
	FCollisionQueryParams QueryParams(FName(TEXT("ProjectAcousticsProbeBrushSurfaceTrace")), true);

	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		QueryParams.AddIgnoredActor(*ActorIterator);
	}
	for (TActorIterator<AAcousticsDebugRenderer> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		QueryParams.AddIgnoredActor(*ActorIterator);
	}

	FHitResult HitResult;
	if (!EditorWorld->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
	{
		return false;
	}

	OutLocation = HitResult.ImpactPoint + FVector::UpVector * GetEditableProbeHeightAboveGroundCm();
	OutNormal = HitResult.ImpactNormal.GetSafeNormal();
	if (OutNormal.IsNearlyZero())
	{
		OutNormal = FVector::UpVector;
	}
	return true;
}

int32 SAcousticsProbesTab::AddEditableProbeActorsInBrush()
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return 0;
	}

	FVector AxisX = FVector::ForwardVector;
	FVector AxisY = FVector::RightVector;
	FVector BrushNormal = m_ProbeBrushNormal.GetSafeNormal();
	if (BrushNormal.IsNearlyZero())
	{
		BrushNormal = FVector::UpVector;
	}
	BrushNormal.FindBestAxisVectors(AxisX, AxisY);

	const double BrushArea = PI * FMath::Square(static_cast<double>(m_ProbeBrushRadius));
	const double DesiredProbeCountFloat =
		BrushArea * GetProbeBrushEffectiveDensity() / c_ProbeBrushAreaNormalizationCm2;
	const int32 DesiredProbeCount = DesiredProbeCountFloat > 1.0
		? FMath::RoundToInt(DesiredProbeCountFloat)
		: (m_ProbeBrushRandomStream.GetFraction() < DesiredProbeCountFloat ? 1 : 0);
	const int32 ExistingProbeCount = CountEditableProbeActorsInBrush(false);
	const int32 ProbeCountToAdd = FMath::Max(0, DesiredProbeCount - ExistingProbeCount);
	if (ProbeCountToAdd <= 0)
	{
		return 0;
	}

	const double MinProbeDistance = GetProbeBrushMinSpacingCm();
	const int32 MaxPlacementAttempts = FMath::Max(ProbeCountToAdd * 12, 24);

	int32 CreatedCount = 0;
	for (int32 AttemptIndex = 0; AttemptIndex < MaxPlacementAttempts && CreatedCount < ProbeCountToAdd; ++AttemptIndex)
	{
		const FVector CandidateLocation = GetRandomLocationInProbeBrush(AxisX, AxisY);

		FVector ProbeLocation = FVector::ZeroVector;
		FVector ProbeNormal = FVector::UpVector;
		if (!TraceProbeBrushSurfaceAtLocation(EditorWorld, CandidateLocation, BrushNormal, ProbeLocation, ProbeNormal))
		{
			continue;
		}

		if (HasEditableProbeNearLocation(ProbeLocation, MinProbeDistance))
		{
			continue;
		}

		if (SpawnEditableProbeActor(ProbeLocation, INDEX_NONE, false) != nullptr)
		{
			++CreatedCount;
		}
	}

	return CreatedCount;
}

int32 SAcousticsProbesTab::DeleteEditableProbeActorsInBrush()
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return 0;
	}

	TArray<AAcousticsPinnedProbe*> ProbeActorsToDelete;

	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor == nullptr || !IsProbeActorManagedByProbeEditor(ProbeActor))
		{
			continue;
		}

		if (IsLocationInsideProbeBrush(ProbeActor->GetActorLocation()))
		{
			ProbeActorsToDelete.Add(ProbeActor);
		}
	}

	for (AAcousticsPinnedProbe* ProbeActor : ProbeActorsToDelete)
	{
		ProbeActor->Modify();
		EditorWorld->EditorDestroyActor(ProbeActor, true);
	}

	if (ProbeActorsToDelete.Num() > 0)
	{
		EditorWorld->MarkPackageDirty();
	}
	return ProbeActorsToDelete.Num();
}

bool SAcousticsProbesTab::BeginProbeBrushStroke()
{
	if (m_ProbeBrushTransaction.IsValid())
	{
		return true;
	}

	m_ProbeBrushStrokeChangeCount = 0;
	m_bProbeBrushIsPainting = true;
	m_ProbeBrushRandomStream.Initialize(static_cast<int32>(FPlatformTime::Cycles()));
	m_ProbeBrushTransaction = MakeUnique<FScopedTransaction>(IsProbeBrushDeleteModeActive()
		? LOCTEXT("DeleteProjectAcousticsProbesWithBrush", "Delete Project Acoustics Probes With Brush")
		: LOCTEXT("AddProjectAcousticsProbesWithBrush", "Add Project Acoustics Probes With Brush"));
	return true;
}

bool SAcousticsProbesTab::IsProbeBrushDeleteModeActive() const
{
	return m_bProbeBrushDeleteMode || m_bProbeBrushQuickDeleteMode;
}

bool SAcousticsProbesTab::IsLocationInsideProbeBrush(const FVector& Location) const
{
	const double RadiusSquared = static_cast<double>(m_ProbeBrushRadius) * static_cast<double>(m_ProbeBrushRadius);
	return FVector::DistSquared(Location, m_ProbeBrushLocation) <= RadiusSquared;
}

int32 SAcousticsProbesTab::CountEditableProbeActorsInBrush(bool bManagedOnly) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return 0;
	}

	int32 ProbeCount = 0;
	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor == nullptr)
		{
			continue;
		}

		const bool bMatchesFilter = bManagedOnly ? IsProbeActorManagedByProbeEditor(ProbeActor) : ProbeActor->bIncludeInManualProbeList;
		if (bMatchesFilter && IsLocationInsideProbeBrush(ProbeActor->GetActorLocation()))
		{
			++ProbeCount;
		}
	}

	return ProbeCount;
}

FVector SAcousticsProbesTab::GetRandomLocationInProbeBrush(const FVector& AxisX, const FVector& AxisY)
{
	const double RandomU = 2.0 * static_cast<double>(m_ProbeBrushRandomStream.GetFraction()) - 1.0;
	const double RandomV =
		(2.0 * static_cast<double>(m_ProbeBrushRandomStream.GetFraction()) - 1.0) *
		FMath::Sqrt(FMath::Max(1.0 - FMath::Square(RandomU), 0.0));
	return m_ProbeBrushLocation + m_ProbeBrushRadius * (AxisX * RandomU + AxisY * RandomV);
}

bool SAcousticsProbesTab::HasEditableProbeNearLocation(const FVector& Location, double MinDistance) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return false;
	}

	const double MinDistanceSquared = MinDistance * MinDistance;
	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor != nullptr && ProbeActor->bIncludeInManualProbeList &&
			FVector::DistSquared(ProbeActor->GetActorLocation(), Location) <= MinDistanceSquared)
		{
			return true;
		}
	}

	return false;
}

double SAcousticsProbesTab::GetProbeBrushMinSpacingCm() const
{
	const FSimulationParameters& SimulationParameters = AcousticsSharedState::GetSimulationParameters();
	return FMath::Max(25.0, static_cast<double>(SimulationParameters.probe_spacing.horizontal_spacing_min));
}

float SAcousticsProbesTab::GetEditableProbeHeightAboveGroundCm() const
{
	const FSimulationParameters& SimulationParameters = AcousticsSharedState::GetSimulationParameters();
	return FMath::Max(0.0f, SimulationParameters.probe_spacing.min_height_above_ground);
}

void SAcousticsProbesTab::InitializeProbeBrushVisual()
{
	if (IsRunningCommandlet() || m_ProbeBrushComponent.IsValid())
	{
		return;
	}

	UMaterial* BrushMaterial = LoadObject<UMaterial>(
		nullptr,
		TEXT("/Engine/EditorLandscapeResources/FoliageBrushSphereMaterial.FoliageBrushSphereMaterial"),
		nullptr,
		LOAD_None,
		nullptr);
	UStaticMesh* BrushMesh =
		LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/EngineMeshes/Sphere.Sphere"), nullptr, LOAD_None, nullptr);
	if (BrushMaterial == nullptr || BrushMesh == nullptr)
	{
		return;
	}

	m_ProbeBrushMaterialInstance.Reset(UMaterialInstanceDynamic::Create(BrushMaterial, GetTransientPackage()));
	if (!m_ProbeBrushMaterialInstance.IsValid())
	{
		return;
	}

	FLinearColor DefaultBrushColor;
	if (m_ProbeBrushMaterialInstance->GetVectorParameterDefaultValue(
			c_ProbeBrushHighlightColorParamName, DefaultBrushColor))
	{
		m_ProbeBrushDefaultHighlightColor = DefaultBrushColor.ToFColor(false);
		m_ProbeBrushCurrentHighlightColor = m_ProbeBrushDefaultHighlightColor;
	}

	m_ProbeBrushMaterialInstance->GetScalarParameterValue(c_ProbeBrushOpacityParamName, m_ProbeBrushDefaultOpacity);
	m_ProbeBrushMaterialInstance->SetScalarParameterValue(c_ProbeBrushOpacityParamName, m_ProbeBrushDefaultOpacity);

	UStaticMeshComponent* BrushComponent =
		NewObject<UStaticMeshComponent>(GetTransientPackage(), TEXT("ProjectAcousticsProbeBrushComponent"));
	if (BrushComponent == nullptr)
	{
		m_ProbeBrushMaterialInstance.Reset();
		return;
	}

	BrushComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	BrushComponent->SetCollisionObjectType(ECC_WorldDynamic);
	BrushComponent->SetStaticMesh(BrushMesh);
	BrushComponent->SetMaterial(0, m_ProbeBrushMaterialInstance.Get());
	BrushComponent->SetAbsolute(true, true, true);
	BrushComponent->SetVisibility(false);
	BrushComponent->CastShadow = false;
	m_ProbeBrushComponent.Reset(BrushComponent);
}

void SAcousticsProbesTab::HideProbeBrushVisual() const
{
	if (!m_ProbeBrushComponent.IsValid())
	{
		return;
	}

	m_ProbeBrushComponent->SetVisibility(false);
	if (m_ProbeBrushComponent->IsRegistered())
	{
		m_ProbeBrushComponent->UnregisterComponent();
	}
}

double SAcousticsProbesTab::GetProbeBrushEffectiveDensity() const
{
	return FMath::Max(1.0, static_cast<double>(m_ProbeBrushPaintDensity) * c_ProbeBrushDensityScale);
}

FReply SAcousticsProbesTab::OnMakeProbesEditableButton()
{
	const AcousticsSimulationConfiguration* SimulationConfiguration =
		AcousticsSharedState::GetSimulationConfiguration();
	if (SimulationConfiguration == nullptr || !SimulationConfiguration->IsReady())
	{
		SetPrebakeError(TEXT("Generate probes before making them editable."));
		return FReply::Handled();
	}

	TArray<FVector> ProbeLocations;
	if (!SimulationConfiguration->GetProbeList(ProbeLocations))
	{
		SetPrebakeError(TEXT("Failed to read generated Project Acoustics probe list."));
		return FReply::Handled();
	}

	const FScopedTransaction Transaction(LOCTEXT("MakeProjectAcousticsProbesEditable", "Make Project Acoustics Probes Editable"));
	ClearEditableProbeActors(true);

	int32 CreatedCount = 0;
	for (int32 ProbeIndex = 0; ProbeIndex < ProbeLocations.Num(); ++ProbeIndex)
	{
		if (SpawnEditableProbeActor(ProbeLocations[ProbeIndex], ProbeIndex, true) != nullptr)
		{
			++CreatedCount;
		}
	}

	m_CurrentStatus = FString::Printf(TEXT("Created %d editable Project Acoustics probe actors."), CreatedCount);
	if (CreatedCount > 0)
	{
		SetGeneratedProbeDebugRenderingEnabled(false);
	}
	SetPrebakeError(TEXT(""));
	return FReply::Handled();
}

FReply SAcousticsProbesTab::OnAddEditableProbeButton()
{
	const FScopedTransaction Transaction(LOCTEXT("AddProjectAcousticsEditableProbe", "Add Project Acoustics Editable Probe"));
	AAcousticsPinnedProbe* ProbeActor = SpawnEditableProbeActor(GetDefaultEditableProbeLocation(), INDEX_NONE, false);
	if (ProbeActor == nullptr)
	{
		SetPrebakeError(TEXT("Failed to spawn editable Project Acoustics probe actor."));
		return FReply::Handled();
	}

	GEditor->SelectNone(true, true, false);
	GEditor->SelectActor(ProbeActor, true, false, true, false);
	GEditor->NoteSelectionChange();

	m_CurrentStatus = TEXT("Added one editable Project Acoustics probe actor.");
	SetGeneratedProbeDebugRenderingEnabled(false);
	SetPrebakeError(TEXT(""));
	return FReply::Handled();
}

FReply SAcousticsProbesTab::OnApplyProbeEditsButton()
{
	TArray<FVector> ProbeLocations;
	if (!CollectEditableProbeLocations(ProbeLocations))
	{
		SetPrebakeError(TEXT("No editable Project Acoustics probe actors found."));
		return FReply::Handled();
	}

	FString Error;
	if (!WriteProbeListOverrideToConfig(ProbeLocations, Error))
	{
		UE_LOG(LogAcoustics, Error, TEXT("%s"), *Error);
		SetPrebakeError(Error);
		return FReply::Handled();
	}

	if (!ReloadProbeConfigurationFromConfig(Error))
	{
		UE_LOG(LogAcoustics, Error, TEXT("%s"), *Error);
		SetPrebakeError(Error);
		return FReply::Handled();
	}

	m_CurrentStatus =
		FString::Printf(TEXT("Applied %d editable Project Acoustics probe locations to config."), ProbeLocations.Num());
	SetGeneratedProbeDebugRenderingEnabled(false);
	SetPrebakeError(TEXT(""));
	return FReply::Handled();
}

FReply SAcousticsProbesTab::OnClearEditableProbeActorsButton()
{
	const FScopedTransaction Transaction(LOCTEXT("ClearProjectAcousticsEditableProbes", "Clear Project Acoustics Editable Probes"));
	const int32 ActorCount = CountEditableProbeActors(true);
	ClearEditableProbeActors(true);

	FString ReloadError;
	AcousticsSharedState::SetSimulationConfiguration(nullptr);
	if (FPaths::FileExists(AcousticsSharedState::GetConfigFilepath()) && !ReloadProbeConfigurationFromConfig(ReloadError))
	{
		UE_LOG(LogAcoustics, Warning, TEXT("%s"), *ReloadError);
		m_CurrentStatus = FString::Printf(
			TEXT("Deleted %d Project Acoustics editable probe actors, but failed to reload the generated probe preview."),
			ActorCount);
		SetGeneratedProbeDebugRenderingEnabled(true);
		SetPrebakeError(ReloadError);
		return FReply::Handled();
	}

	m_CurrentStatus = FString::Printf(
		TEXT("Deleted %d Project Acoustics editable probe actors and reloaded the generated probe preview."),
		ActorCount);
	SetGeneratedProbeDebugRenderingEnabled(true);
	SetPrebakeError(TEXT(""));
	return FReply::Handled();
}

bool SAcousticsProbesTab::CanMakeProbesEditable() const
{
	const AcousticsSimulationConfiguration* SimulationConfiguration =
		AcousticsSharedState::GetSimulationConfiguration();
	return SimulationConfiguration != nullptr && SimulationConfiguration->IsReady();
}

bool SAcousticsProbesTab::CanAddEditableProbe() const
{
	if (GEditor == nullptr || GEditor->GetEditorWorldContext().World() == nullptr)
	{
		return false;
	}

	const AcousticsSimulationConfiguration* SimulationConfiguration =
		AcousticsSharedState::GetSimulationConfiguration();
	return SimulationConfiguration == nullptr || SimulationConfiguration->IsReady();
}

bool SAcousticsProbesTab::CanApplyProbeEdits() const
{
	return CanAddEditableProbe() && FPaths::FileExists(AcousticsSharedState::GetConfigFilepath()) &&
			CountEditableProbeActors(true) > 0;
}

bool SAcousticsProbesTab::CanClearEditableProbeActors() const
{
	return CanAddEditableProbe() && CountEditableProbeActors(true) > 0;
}

int32 SAcousticsProbesTab::CountEditableProbeActors(bool bManagedOnly) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return 0;
	}

	int32 ActorCount = 0;
	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor == nullptr)
		{
			continue;
		}

		const bool bMatchesFilter = bManagedOnly ? IsProbeActorManagedByProbeEditor(ProbeActor) : ProbeActor->bIncludeInManualProbeList;
		if (bMatchesFilter)
		{
			++ActorCount;
		}
	}

	return ActorCount;
}

void SAcousticsProbesTab::ClearEditableProbeActors(bool bManagedOnly) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return;
	}

	TArray<AAcousticsPinnedProbe*> ProbeActorsToDelete;
	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor != nullptr && (!bManagedOnly || IsProbeActorManagedByProbeEditor(ProbeActor)))
		{
			ProbeActorsToDelete.Add(ProbeActor);
		}
	}

	for (AAcousticsPinnedProbe* ProbeActor : ProbeActorsToDelete)
	{
		ProbeActor->Modify();
		EditorWorld->EditorDestroyActor(ProbeActor, true);
	}

	if (ProbeActorsToDelete.Num() > 0)
	{
		EditorWorld->MarkPackageDirty();
	}
}

void SAcousticsProbesTab::SetGeneratedProbeDebugRenderingEnabled(bool bEnabled) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return;
	}

	for (TActorIterator<AAcousticsDebugRenderer> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsDebugRenderer* DebugRenderer = *ActorIterator;
		if (DebugRenderer == nullptr)
		{
			continue;
		}

		const bool bShouldIncreaseDrawDistance =
			bEnabled && DebugRenderer->ProbesDrawDistance < c_LargeMapProbeDebugDrawDistanceCm;
		if (DebugRenderer->ShouldRenderProbes == bEnabled && !bShouldIncreaseDrawDistance)
		{
			continue;
		}

		DebugRenderer->Modify();
		DebugRenderer->ShouldRenderProbes = bEnabled;
		if (bShouldIncreaseDrawDistance)
		{
			DebugRenderer->ProbesDrawDistance = c_LargeMapProbeDebugDrawDistanceCm;
		}
	}

	GEditor->RedrawLevelEditingViewports();
}

void SAcousticsProbesTab::RestoreGeneratedProbePreviewFromConfig() const
{
	if (!FPaths::FileExists(AcousticsSharedState::GetVoxFilepath()) ||
		!FPaths::FileExists(AcousticsSharedState::GetConfigFilepath()))
	{
		return;
	}

	const AcousticsSimulationConfiguration* ExistingConfiguration =
		AcousticsSharedState::GetSimulationConfiguration();
	if (ExistingConfiguration != nullptr && ExistingConfiguration->GetState() == SimulationConfigurationState::InProcess)
	{
		return;
	}

	AcousticsSharedState::LoadSimulationConfigFromFile();
	SetGeneratedProbeDebugRenderingEnabled(true);
}

AAcousticsPinnedProbe* SAcousticsProbesTab::SpawnEditableProbeActor(
	const FVector& Location, int32 SourceProbeIndex, bool bGeneratedFromSimulationConfiguration) const
{
	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return nullptr;
	}

	ULevel* TargetLevel = EditorWorld->PersistentLevel.Get();
	if (TargetLevel == nullptr)
	{
		TargetLevel = EditorWorld->GetCurrentLevel();
	}
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.OverrideLevel = TargetLevel;
	SpawnParameters.ObjectFlags = RF_Transactional;
	SpawnParameters.Name = MakeUniqueObjectName(
		TargetLevel != nullptr ? static_cast<UObject*>(TargetLevel) : static_cast<UObject*>(EditorWorld),
		AAcousticsPinnedProbe::StaticClass(),
		FName(c_EditableProbeActorNamePrefix));

	AAcousticsPinnedProbe* ProbeActor =
		EditorWorld->SpawnActor<AAcousticsPinnedProbe>(Location, FRotator::ZeroRotator, SpawnParameters);
	if (ProbeActor == nullptr)
	{
		return nullptr;
	}

	ProbeActor->SetActorLocation(Location, false, nullptr, ETeleportType::TeleportPhysics);
	const double LocationErrorCm = FVector::Dist(ProbeActor->GetActorLocation(), Location);
	if (LocationErrorCm > 0.1)
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Editable Project Acoustics probe [%s] spawned %.3f cm away from its source world location."),
			*ProbeActor->GetName(),
			LocationErrorCm);
	}

	ProbeActor->Modify();
	ProbeActor->bIncludeInManualProbeList = true;
	ProbeActor->bManagedByProbeEditor = true;
	ProbeActor->bGeneratedFromSimulationConfiguration = bGeneratedFromSimulationConfiguration;
	ProbeActor->SourceProbeIndex = SourceProbeIndex;
	ProbeActor->SetFolderPath(c_EditableProbeFolderPath);

	const FString ActorLabel = SourceProbeIndex == INDEX_NONE
		? TEXT("PA_ManualProbe")
		: FString::Printf(TEXT("PA_EditableProbe_%05d"), SourceProbeIndex);
	ProbeActor->SetActorLabel(ActorLabel);

	EditorWorld->MarkPackageDirty();
	return ProbeActor;
}

bool SAcousticsProbesTab::CollectEditableProbeLocations(TArray<FVector>& OutLocations) const
{
	OutLocations.Reset();

	UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
	if (EditorWorld == nullptr)
	{
		return false;
	}

	for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(EditorWorld); ActorIterator; ++ActorIterator)
	{
		AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
		if (ProbeActor != nullptr && ProbeActor->bIncludeInManualProbeList &&
			IsProbeActorManagedByProbeEditor(ProbeActor))
		{
			AddUniqueProbeLocation(OutLocations, ProbeActor->GetActorLocation());
		}
	}

	return OutLocations.Num() > 0;
}

bool SAcousticsProbesTab::WriteProbeListOverrideToConfig(
	const TArray<FVector>& ProbeLocations, FString& OutError) const
{
	const FString ConfigFilepath = AcousticsSharedState::GetConfigFilepath();
	if (!FPaths::FileExists(ConfigFilepath))
	{
		OutError = FString::Printf(TEXT("ProjectAcoustics config file does not exist: %s"), *ConfigFilepath);
		return false;
	}

	FString ConfigXmlText;
	if (!FFileHelper::LoadFileToString(ConfigXmlText, *ConfigFilepath))
	{
		OutError = FString::Printf(TEXT("Failed to read ProjectAcoustics config file: %s"), *ConfigFilepath);
		return false;
	}

	if (!ReplaceXmlElementInnerText(ConfigXmlText, TEXT("NumProbes"), FString::FromInt(ProbeLocations.Num()), OutError))
	{
		return false;
	}

	if (!ReplaceProbeListXml(ConfigXmlText, BuildProbeListXml(ProbeLocations), OutError))
	{
		return false;
	}

	FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*ConfigFilepath, false);
	if (!FFileHelper::SaveStringToFile(
			ConfigXmlText, *ConfigFilepath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
	{
		OutError = FString::Printf(TEXT("Failed to write ProjectAcoustics config file: %s"), *ConfigFilepath);
		return false;
	}

	return true;
}

bool SAcousticsProbesTab::ReloadProbeConfigurationFromConfig(FString& OutError) const
{
	TUniquePtr<AcousticsSimulationConfiguration> ReloadedConfiguration = AcousticsSimulationConfiguration::Create(
		AcousticsSharedState::GetProjectConfiguration().content_dir,
		AcousticsSharedState::GetConfigFilename());
	if (!ReloadedConfiguration || !ReloadedConfiguration->IsReady())
	{
		OutError = TEXT("ProjectAcoustics wrote the editable probe list, but failed to reload the config.");
		return false;
	}

	AcousticsSharedState::SetSimulationConfiguration(MoveTemp(ReloadedConfiguration));
	return true;
}

FText SAcousticsProbesTab::GetPrefixText() const
{
	return FText::FromString(AcousticsSharedState::GetConfigurationPrefixForLevel());
}

void SAcousticsProbesTab::OnPrefixTextChange(const FText& newText, ETextCommit::Type commitInfo)
{
	// Do nothing if we aborted
	if (commitInfo == ETextCommit::OnEnter || commitInfo == ETextCommit::OnUserMovedFocus)
	{
		auto newString = newText.ToString();
		// Check if the string contains unsupported characters
		for (auto i = 0; i < newString.Len(); ++i)
		{
			if (!FChar::IsAlpha(newString[i]) && !FChar::IsDigit(newString[i]) && newString[i] != TEXT('_'))
			{
				m_PrefixTextBox->SetText(newText);
				FSlateApplication::Get().SetKeyboardFocus(m_PrefixTextBox);
				m_OwnerEdit->SetError(TEXT("Prefix can only contain letters, numbers and underscores"));
				return;
			}
		}
		AcousticsSharedState::SetConfigurationPrefixForLevel(newString);
		m_OwnerEdit->SetError(TEXT(""));
	}
}

FText SAcousticsProbesTab::GetDataFolderPath() const
{
	return FText::FromString(AcousticsSharedState::GetProjectConfiguration().content_dir);
}

FReply SAcousticsProbesTab::OnAcousticsDataFolderButtonClick()
{
	auto desktopPlatform = FDesktopPlatformModule::Get();
	if (desktopPlatform)
	{
		FString folderName;
		desktopPlatform->OpenDirectoryDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			TEXT("Acoustics Data Folder"),
			AcousticsSharedState::GetProjectConfiguration().content_dir,
			folderName);

		if (!folderName.IsEmpty())
		{
			auto config = AcousticsSharedState::GetProjectConfiguration();
			config.content_dir = folderName;
			AcousticsSharedState::SetProjectConfiguration(config);
			m_OwnerEdit->SetError(TEXT(""));
		}
	}
	return FReply::Handled();
}

// Closely based on: UnFbx::FFbxImporter::BuildStaticMeshFromGeometry()
UStaticMesh* ConstructStaticMeshGeo(const TArray<FVector>& verts, const TArray<int32>& indices, FName meshName)
{
	int32 triangleCount = indices.Num() / 3;
	int32 wedgeCount = triangleCount * 3;

	FRawMesh rawMesh;
	rawMesh.FaceMaterialIndices.AddZeroed(triangleCount);
	rawMesh.FaceSmoothingMasks.AddZeroed(triangleCount);
	rawMesh.WedgeIndices.AddZeroed(wedgeCount);
	rawMesh.WedgeTexCoords[0].AddZeroed(wedgeCount);

	TMap<int32, int32> indexMap;
	for (int32 triangleIndex = 0; triangleIndex < triangleCount; triangleIndex++)
	{
		for (int32 cornerIndex = 0; cornerIndex < 3; cornerIndex++)
		{
			int32 wedgeIndex = triangleIndex * 3 + cornerIndex;

			// Store vertex index and position.
			int32 controlPointIndex = indices[wedgeIndex]; // Mesh->GetPolygonVertex(TriangleIndex, CornerIndex);
			int32* existingIndex = indexMap.Find(controlPointIndex);
			if (existingIndex)
			{
				rawMesh.WedgeIndices[wedgeIndex] = *existingIndex;
			}
			else
			{
				int32 vertexIndex = rawMesh.VertexPositions.Add(static_cast<FVector3f>(verts[controlPointIndex]));
				rawMesh.WedgeIndices[wedgeIndex] = vertexIndex;
				indexMap.Add(controlPointIndex, vertexIndex);
			}

			// normals, tangents and binormals : SKIP
			// vertex colors : SKIP

			// uvs: we don't care about these, but these are required for a legal mesh
			rawMesh.WedgeTexCoords[0][wedgeIndex].X = 0.0f;
			rawMesh.WedgeTexCoords[0][wedgeIndex].Y = 0.0f;
		}
		// smoothing mask : SKIP
		// uvs: taken care of above.

		// material index
		rawMesh.FaceMaterialIndices[triangleIndex] = 0;
	}

	TArray<FStaticMaterial> mats;
	mats.Add(FStaticMaterial(CastChecked<UMaterialInterface>(UMaterial::GetDefaultMaterial(MD_Surface))));

	return CreateStaticMesh(rawMesh, mats, GetTransientPackage(), meshName);
}

static const FName c_NavMeshName(TEXT("TritonNavigableArea"));

UStaticMesh* ExtractStaticMeshFromNavigationMesh(const ARecastNavMesh* navMeshActor, UWorld* world)
{
	check(navMeshActor != nullptr);

	// Extract out navmesh triangulated geo
	// Code motivated from UNavMeshRenderingComponent::GatherData() >>> if (NavMesh->bDrawTriangleEdges)...
	TArray<FVector> navVerts;
	TArray<int32> navIndices;

	FRecastDebugGeometry geom;
#if ENGINE_MAJOR_VERSION == 4 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
	navMeshActor->GetDebugGeometry(geom);
#else
	navMeshActor->GetDebugGeometryForTile(geom, FNavTileRef());
#endif

	// Collect all the vertices
	for (auto& vert : geom.MeshVerts)
	{
		navVerts.Add(vert);
	}

	// Collect all the indices
	for (int32 areaIdx = 0; areaIdx < RECAST_MAX_AREAS; ++areaIdx)
	{
		for (int32 idx : geom.AreaIndices[areaIdx])
		{
			navIndices.Add(idx);
		}
	}

	// Create static mesh from nav mesh data
	UStaticMesh* staticMesh = ConstructStaticMeshGeo(navVerts, navIndices, c_NavMeshName);

	if (!staticMesh)
	{
		UE_LOG(LogAcoustics, Error, TEXT("Failed while creating static mesh from nav mesh data"));
		return nullptr;
	}

	return staticMesh;
}

void SAcousticsProbesTab::SetPrebakeError(const FString& Error)
{
	if (m_bCommandletPrebake)
	{
		m_CommandletError = Error;
		return;
	}

	if (m_OwnerEdit != nullptr)
	{
		m_OwnerEdit->SetError(Error);
	}
}

bool SAcousticsProbesTab::ShouldUsePhysicalMaterialForPrebake(const UPhysicalMaterial* physicalMaterial) const
{
	if (physicalMaterial == nullptr || physicalMaterial == GEngine->DefaultPhysMaterial)
	{
		return false;
	}

	if (m_bCommandletPrebake)
	{
		return m_bCommandletUsePhysicalMaterials;
	}

	return m_AcousticsEditMode != nullptr && m_AcousticsEditMode->ShouldUsePhysicalMaterial(physicalMaterial);
}

bool SAcousticsProbesTab::TryGetMappedAcousticMaterialNameForPrebake(
	const FString& MaterialName, FString& AcousticMaterialName) const
{
	if (m_bCommandletPrebake)
	{
		const FString* CommandletMaterial = m_CommandletMaterialToAcousticMaterial.Find(MaterialName);
		if (CommandletMaterial != nullptr)
		{
			AcousticMaterialName = *CommandletMaterial;
			return true;
		}
		return false;
	}

	if (m_AcousticsEditMode == nullptr || !m_AcousticsEditMode->GetMaterialsTab().IsValid())
	{
		return false;
	}

	for (const TSharedPtr<MaterialItem>& Item : m_AcousticsEditMode->GetMaterialsTab()->GetMaterialItemsList())
	{
		if (Item->UEMaterialName == MaterialName)
		{
			AcousticMaterialName = Item->AcousticMaterialName;
			return true;
		}
	}

	return false;
}

// Use this function for probe volume processing code used when adding both static meshes as well as landscapes to the
// acoustic mesh
void SAcousticsProbesTab::ApplyOverridesAndRemapsFromProbeVolumesOnTriangle(
	const TArray<ATKVectorD>& vertices, uint32 index1, uint32 index2, uint32 index3, TritonMaterialCode MaterialCode,
	TritonAcousticMeshTriangleInformation& triangleInfo)
{
	for (auto i = 0; i < m_MaterialOverrideVolumes.Num(); i++)
	{
		// See if any of the triangle vertices is inside or on the override volume
		// if any of them are, use this override value
		AAcousticsProbeVolume* overrideVolume = m_MaterialOverrideVolumes[i];
		if (IsOverlapped(overrideVolume, vertices[index1], vertices[index2], vertices[index3]))
		{
			// Using the override material name prefix.
			if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(
					(AAcousticsProbeVolume::OverrideMaterialNamePrefix + overrideVolume->MaterialName),
					&triangleInfo.MaterialCode))
			{
				UE_LOG(
					LogAcoustics,
					Warning,
					TEXT("The material %s has no acoustic material mapping (it did not show up in the "
							"materials mapping tab), but is used by a mesh. Using the default code."),
					// Using the override material name prefix.
					*(AAcousticsProbeVolume::OverrideMaterialNamePrefix + overrideVolume->MaterialName));
			}
			break;
		}
	}

	// Implemented calculations for remap volumes.
	// remap volumes calculations
	for (int32 i = 0; i < m_MaterialRemapVolumes.Num(); ++i)
	{
		// See if any of the triangle vertices is inside or on the remap volume
		// if any of them are, and the material is supposed to be remapped, do it
		AAcousticsProbeVolume* remapVolume = m_MaterialRemapVolumes[i];
		if (IsOverlapped(remapVolume, vertices[index1], vertices[index2], vertices[index3]))
		{
			TritonAcousticMaterial AcousticMaterial;
			if (!TritonPreprocessor_MaterialLibrary_GetMaterialInfo(
					AcousticsSharedState::GetMaterialsLibrary()->GetHandle(), MaterialCode, &AcousticMaterial))
			{
				break;
			}

			FString acousticMaterialToRemap;
			TryGetMappedAcousticMaterialNameForPrebake(AcousticMaterial.Name, acousticMaterialToRemap);

			FString* RemappedMaterialName = remapVolume->MaterialRemapping.Find(acousticMaterialToRemap);
			if (RemappedMaterialName == nullptr)
			{
				break;
			}

			FString RemappedAcousticMaterialName =
				AAcousticsProbeVolume::RemapMaterialNamePrefix + *RemappedMaterialName;

			if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(
					RemappedAcousticMaterialName, &triangleInfo.MaterialCode))
			{
				UE_LOG(
					LogAcoustics,
					Warning,
					TEXT("Invalid acoustic material %s found in the AcousticMaterialRemapping volume %s."),
					*RemappedAcousticMaterialName,
					*(remapVolume->GetName()));
			}

			break;
		}
	}
}

TritonMaterialCode SAcousticsProbesTab::GetMaterialCodeForStaticMeshFace(
	const UStaticMesh* mesh, const TArray<UMaterialInterface*>& materials, uint32 face,
	TArray<uint32>& materialIDsNotFound, UPhysicalMaterial* physMatOverride)
{
	UMaterialInterface* material = nullptr;
	const auto& renderData = mesh->GetLODForExport(0);
	auto sectionCount = renderData.Sections.Num();

	// Return the materical code for the physical material override if it exists.
	TritonMaterialCode code = TRITON_DEFAULT_WALL_CODE;
	if (ShouldUsePhysicalMaterialForPrebake(physMatOverride) && AcousticsSharedState::GetMaterialsLibrary())
	{
		if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(physMatOverride->GetName(), &code) &&
			!materialIDsNotFound.Contains(physMatOverride->GetUniqueID()))
		{
			materialIDsNotFound.Add(physMatOverride->GetUniqueID());
		}
	}

	// If the physical material override is invalid or doesnt exist,
	// then go through the materials and find the material for the face.
	if (code == TRITON_DEFAULT_WALL_CODE)
	{
		auto totalTriangles = 0u;
		for (const auto& section : renderData.Sections)
		{
			if (face >= totalTriangles && face < (totalTriangles + section.NumTriangles) &&
				section.MaterialIndex < materials.Num())
			{
				// We've found the material for this face, so save it and move on.
				material = materials[section.MaterialIndex];
				break;
			}
			totalTriangles += section.NumTriangles;
		}

		if (material && AcousticsSharedState::GetMaterialsLibrary())
		{
			// If the material is valid, check if it has an associated physical material and
			// attempt to get the material code for that.
			UPhysicalMaterial* physMat = material->GetPhysicalMaterial();
			if (ShouldUsePhysicalMaterialForPrebake(physMat))
			{
				if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(physMat->GetName(), &code) &&
					!materialIDsNotFound.Contains(physMat->GetUniqueID()))
				{
					materialIDsNotFound.Add(physMat->GetUniqueID());
				}
			}
			// Get the material code for the UE material, if material code is not obtained from physical materials.
			if (code == TRITON_DEFAULT_WALL_CODE &&
				!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(material->GetName(), &code) &&
				!materialIDsNotFound.Contains(material->GetUniqueID()))
			{
				UE_LOG(
					LogAcoustics,
					Warning,
					TEXT("The material %s has no acoustic material mapping (it did not show up in the materials "
							"mapping tab), but is used by a mesh. Using the default code."),
					*(material->GetName()));

				materialIDsNotFound.Add(material->GetUniqueID());
			}
		}
	}
	return code;
}

// Function to get the layer code for landscape face
TritonMaterialCode SAcousticsProbesTab::GetMaterialCodeForLandscapeFace(
	const TArray<ULandscapeLayerInfoObject*>& layers, uint32 face, TArray<uint32>& layerMaterialIDsNotFound,
	UPhysicalMaterial* physMatOverride)
{
	TritonMaterialCode code = TRITON_DEFAULT_WALL_CODE;
	if (ShouldUsePhysicalMaterialForPrebake(physMatOverride) && AcousticsSharedState::GetMaterialsLibrary())
	{
		if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(physMatOverride->GetName(), &code) &&
			!layerMaterialIDsNotFound.Contains(physMatOverride->GetUniqueID()))
		{
			layerMaterialIDsNotFound.Add(physMatOverride->GetUniqueID());
		}
	}

	if (code == TRITON_DEFAULT_WALL_CODE && AcousticsSharedState::GetMaterialsLibrary() && layers.Num() > 0 &&
		face < static_cast<uint32>(layers.Num()))
	{
		const ULandscapeLayerInfoObject* layer = layers[face];
		UPhysicalMaterial* layerPhysMat = layer->GetPhysicalMaterial();
		if (ShouldUsePhysicalMaterialForPrebake(layerPhysMat))
		{
			if (!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(layerPhysMat->GetName(), &code) &&
				!layerMaterialIDsNotFound.Contains(layerPhysMat->GetUniqueID()))
			{
				layerMaterialIDsNotFound.Add(layerPhysMat->GetUniqueID());
			}
		}
		// Get the code for the layer, if code is not obtained from physical material
		if (code == TRITON_DEFAULT_WALL_CODE &&
			!AcousticsSharedState::GetMaterialsLibrary()->FindMaterialCode(layer->GetName(), &code) &&
			!layerMaterialIDsNotFound.Contains(layer->GetUniqueID()))
		{
			UE_LOG(
				LogAcoustics,
				Warning,
				TEXT("The layer %s has no acoustic material mapping (it did not show up in the materials "
						"mapping tab), but it is used by the landscape. Using the default code."),
				*(layer->GetName()));

			layerMaterialIDsNotFound.Add(layer->GetUniqueID());
		}
	}
	return code;
}

// worldTransform is where the world transform the mesh's vertices is relative to.
void SAcousticsProbesTab::AddStaticMeshToAcousticMesh(
	AcousticMesh* acousticMesh, AActor* actor, const FTransform& worldTransform, const UStaticMesh* mesh,
	const TArray<UMaterialInterface*>& materials, MeshType type, TArray<uint32>& materialIDsNotFound,
	UPhysicalMaterial* physMatOverride)
{
	TArray<ATKVectorD> vertices;
	TArray<TritonAcousticMeshTriangleInformation> triangleInfos;

	if (mesh == nullptr)
	{
		return;
	}

	const auto checkHasVerts = true;
	const auto LOD = 0;
	if (!mesh->HasValidRenderData(checkHasVerts, LOD))
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Error while adding static mesh [%s], there is no valid render data for LOD %d. Ignoring."),
			*mesh->GetName(),
			LOD);
	}

	const auto& renderData = mesh->GetLODForExport(LOD);
	const auto& vertexBuffer = renderData.VertexBuffers.PositionVertexBuffer;

	auto indexBuffer = renderData.IndexBuffer.GetArrayView();
	auto triangleCount = renderData.GetNumTriangles();
	auto vertexCount = vertexBuffer.GetNumVertices();
	for (auto i = 0u; i < vertexCount; ++i)
	{
		const auto& vertexPos = vertexBuffer.VertexPosition(i);
		// Transform vertex position into world space.
#if ENGINE_MAJOR_VERSION == 5
		const FVector& vertexWorld = worldTransform.TransformPosition(static_cast<FVector3d>(vertexPos));
#else
		const FVector& vertexWorld = worldTransform.TransformPosition(vertexPos);
#endif

		auto vertex = AcousticsUtils::UnrealPositionToTriton(vertexWorld);
		vertices.Add(ATKVectorD{vertex.X, vertex.Y, vertex.Z});
	}

	for (auto triangle = 0; triangle < triangleCount; ++triangle)
	{
		auto index1 = indexBuffer[(triangle * 3) + 0];
		auto index2 = indexBuffer[(triangle * 3) + 1];
		auto index3 = indexBuffer[(triangle * 3) + 2];

		TritonAcousticMeshTriangleInformation triangleInfo;
		triangleInfo.Indices = ATKVectorI{static_cast<int>(index1), static_cast<int>(index2), static_cast<int>(index3)};
		// Only lookup material codes for geometry meshes.
		if (type == MeshTypeGeometry)
		{
			// Cache off the material code for this triangle.
			TritonMaterialCode MaterialCode =
				GetMaterialCodeForStaticMeshFace(mesh, materials, triangle, materialIDsNotFound, physMatOverride);

			// If there are any material override volumes, check those first
			triangleInfo.MaterialCode = MaterialCode;
			ApplyOverridesAndRemapsFromProbeVolumesOnTriangle(
				vertices, index1, index2, index3, MaterialCode, triangleInfo);
		}
		else
		{
			// Metadata meshes like nav meshes will ignore material, provide default.
			triangleInfo.MaterialCode = TRITON_DEFAULT_WALL_CODE;
		}
		triangleInfos.Add(triangleInfo);
	}

	if (type == MeshTypeProbeSpacingVolume)
	{
		// This is the only place we use "actor" parameter.
		auto probeVol = dynamic_cast<AAcousticsProbeVolume*>(actor);
		acousticMesh->AddProbeSpacingVolume(
			vertices.GetData(),
			vertices.Num(),
			triangleInfos.GetData(),
			triangleInfos.Num(),
			probeVol->MaxProbeSpacing);
	}
	else
	{
		acousticMesh->Add(vertices.GetData(), vertices.Num(), triangleInfos.GetData(), triangleInfos.Num(), type);
	}
}

// Function to export the landscape to a static mesh and also store off the layer info for each triangle in the static
// mesh to be used later. This is a duplicate of existing Epic's function (ALandscapeProxy::ExportToRawMesh) with
// modification to extract the layer info for Project Acoustics usage. We did it this way to avoid the need of looping
// through the landscape multiple times, or make changes to Epic code to achieve what we need.
bool SAcousticsProbesTab::ExportLandscapeToRawMesh(
	ALandscapeProxy* LandscapeActor, int32 InExportLOD, FMeshDescription& OutRawMesh,
	TArray<ULandscapeLayerInfoObject*>& TriangleLayerInfo, const FBoxSphereBounds& InBounds,
	bool ShouldIgnoreBounds) const
{
	if (LandscapeActor == nullptr)
	{
		return false;
	}

	TriangleLayerInfo.Empty();

	TInlineComponentArray<ULandscapeComponent*> RegisteredComponents;
	LandscapeActor->GetComponents<ULandscapeComponent>(RegisteredComponents);

	const FIntRect LandscapeSectionRect = LandscapeActor->GetBoundingRect();
	const FVector2D LandscapeUVScale = FVector2D(1.0f, 1.0f) / FVector2D(LandscapeSectionRect.Size());

#if ENGINE_MAJOR_VERSION == 5
	FStaticMeshAttributes Attributes(OutRawMesh);
	TVertexAttributesRef<FVector3f> VertexPositions = Attributes.GetVertexPositions();
	TEdgeAttributesRef<bool> EdgeHardnesses = Attributes.GetEdgeHardnesses();
	TPolygonGroupAttributesRef<FName> PolygonGroupImportedMaterialSlotNames =
		Attributes.GetPolygonGroupMaterialSlotNames();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceNormals = Attributes.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceTangents = Attributes.GetVertexInstanceTangents();
	TVertexInstanceAttributesRef<float> VertexInstanceBinormalSigns = Attributes.GetVertexInstanceBinormalSigns();
	TVertexInstanceAttributesRef<FVector4f> VertexInstanceColors = Attributes.GetVertexInstanceColors();
	TVertexInstanceAttributesRef<FVector2f> VertexInstanceUVs = Attributes.GetVertexInstanceUVs();

	if (VertexInstanceUVs.GetNumChannels() < 2)
	{
		VertexInstanceUVs.SetNumChannels(2);
	}
#else
	TVertexAttributesRef<FVector> VertexPositions =
		OutRawMesh.VertexAttributes().GetAttributesRef<FVector>(MeshAttribute::Vertex::Position);
	TEdgeAttributesRef<bool> EdgeHardnesses =
		OutRawMesh.EdgeAttributes().GetAttributesRef<bool>(MeshAttribute::Edge::IsHard);
	TEdgeAttributesRef<float> EdgeCreaseSharpnesses =
		OutRawMesh.EdgeAttributes().GetAttributesRef<float>(MeshAttribute::Edge::CreaseSharpness);
	TPolygonGroupAttributesRef<FName> PolygonGroupImportedMaterialSlotNames =
		OutRawMesh.PolygonGroupAttributes().GetAttributesRef<FName>(
			MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
	TVertexInstanceAttributesRef<FVector> VertexInstanceNormals =
		OutRawMesh.VertexInstanceAttributes().GetAttributesRef<FVector>(MeshAttribute::VertexInstance::Normal);
	TVertexInstanceAttributesRef<FVector> VertexInstanceTangents =
		OutRawMesh.VertexInstanceAttributes().GetAttributesRef<FVector>(MeshAttribute::VertexInstance::Tangent);
	TVertexInstanceAttributesRef<float> VertexInstanceBinormalSigns =
		OutRawMesh.VertexInstanceAttributes().GetAttributesRef<float>(MeshAttribute::VertexInstance::BinormalSign);
	TVertexInstanceAttributesRef<FVector4> VertexInstanceColors =
		OutRawMesh.VertexInstanceAttributes().GetAttributesRef<FVector4>(MeshAttribute::VertexInstance::Color);
	TVertexInstanceAttributesRef<FVector2D> VertexInstanceUVs =
		OutRawMesh.VertexInstanceAttributes().GetAttributesRef<FVector2D>(
			MeshAttribute::VertexInstance::TextureCoordinate);

	if (VertexInstanceUVs.GetNumIndices() < 2)
	{
		VertexInstanceUVs.SetNumIndices(2);
	}
#endif

	// Make sure InExportLOD is valid.
	if (InExportLOD != INDEX_NONE)
	{
		InExportLOD =
			FMath::Clamp<int32>(InExportLOD, 0, FMath::CeilLogTwo(LandscapeActor->SubsectionSizeQuads + 1) - 1);
	}
	// Take into account of different landscape proxy ExportLOD
	ALandscapeProxy* Landscape = LandscapeActor->IsA<ALandscapeStreamingProxy>()
										? Cast<ALandscapeStreamingProxy>(LandscapeActor)->GetLandscapeActor()
										: LandscapeActor;

	if (!Landscape)
	{
		UE_LOG(
			LogAcoustics,
			Error,
			TEXT("Failed to cast landscape actor. Check if all your Landscape Streaming Proxies have the Landscape "
					"Actor property correctly set."));
		return false;
	}

	// Allow ExportLOD to decide if it needs to be higher LOD.
	int32 LandscapeLODToExport = FMath::Max(InExportLOD, Landscape->ExportLOD);

	// Export data for each component
	for (auto It = RegisteredComponents.CreateConstIterator(); It; ++It)
	{
		ULandscapeComponent* Component = (*It);

		// Early out if the Landscape bounds and given bounds do not overlap at all
		if (!ShouldIgnoreBounds && !FBoxSphereBounds::SpheresIntersect(Component->Bounds, InBounds))
		{
			continue;
		}

		FLandscapeComponentDataInterface CDI(Component, LandscapeLODToExport);
		const int32 ComponentSizeQuadsLOD = ((Component->ComponentSizeQuads + 1) >> LandscapeLODToExport) - 1;
		const int32 SubsectionSizeQuadsLOD = ((Component->SubsectionSizeQuads + 1) >> LandscapeLODToExport) - 1;
		const FIntPoint ComponentOffsetQuads =
			Component->GetSectionBase() - LandscapeActor->GetSectionBase() - LandscapeSectionRect.Min;
		const FVector2D ComponentUVOffsetLOD =
			FVector2D(ComponentOffsetQuads) * ((float) ComponentSizeQuadsLOD / LandscapeActor->ComponentSizeQuads);
		const FVector2D ComponentUVScaleLOD =
			LandscapeUVScale * ((float) LandscapeActor->ComponentSizeQuads / ComponentSizeQuadsLOD);

		const int32 NumFaces = FMath::Square(ComponentSizeQuadsLOD) * 2;
		const int32 NumVertices = NumFaces * 3;

		OutRawMesh.ReserveNewVertices(NumVertices);
		OutRawMesh.ReserveNewPolygons(NumFaces);
		OutRawMesh.ReserveNewVertexInstances(NumVertices);
		OutRawMesh.ReserveNewEdges(NumVertices);

#if ENGINE_MAJOR_VERSION == 5
		FPolygonGroupID PolygonGroupID = INDEX_NONE;
#else
		FPolygonGroupID PolygonGroupID = FPolygonGroupID::Invalid;
#endif
		if (OutRawMesh.PolygonGroups().Num() < 1)
		{
			PolygonGroupID = OutRawMesh.CreatePolygonGroup();
			PolygonGroupImportedMaterialSlotNames[PolygonGroupID] = FName(TEXT("LandscapeMat_0"));
		}
		else
		{
			PolygonGroupID = OutRawMesh.PolygonGroups().GetFirstValidID();
		}

		// Check if there are any holes
		const int32 VisThreshold = 170;
		TArray<uint8> VisDataMap;
		TArray<TArray<uint8>> LayerContributionInfo;
		TArray<FWeightmapLayerAllocationInfo>& ComponentWeightmapLayerAllocations =
			Component->GetWeightmapLayerAllocations();
		LayerContributionInfo.SetNum(ComponentWeightmapLayerAllocations.Num());

		for (int32 AllocIdx = 0; AllocIdx < ComponentWeightmapLayerAllocations.Num(); AllocIdx++)
		{
			FWeightmapLayerAllocationInfo& AllocInfo = ComponentWeightmapLayerAllocations[AllocIdx];
			if (AllocInfo.LayerInfo == ALandscapeProxy::VisibilityLayer)
			{
				CDI.GetWeightmapTextureData(AllocInfo.LayerInfo, VisDataMap);
			}
			else
			{
				CDI.GetWeightmapTextureData(AllocInfo.LayerInfo, LayerContributionInfo[AllocIdx]);
			}
		}

		const FIntPoint QuadPattern[6] = {
			// face 1
			FIntPoint(0, 0),
			FIntPoint(0, 1),
			FIntPoint(1, 1),
			// face 2
			FIntPoint(0, 0),
			FIntPoint(1, 1),
			FIntPoint(1, 0),
		};

		const int32 WeightMapSize = (SubsectionSizeQuadsLOD + 1) * Component->NumSubsections;

		const float SquaredSphereRadius = FMath::Square(InBounds.SphereRadius);

		// We need to not duplicate the vertex position, so we use the FIndexAndZ to achieve fast result
		TArray<FIndexAndZ> VertIndexAndZ;
		VertIndexAndZ.Reserve(ComponentSizeQuadsLOD * ComponentSizeQuadsLOD * UE_ARRAY_COUNT(QuadPattern));
		int32 CurrentIndex = 0;
		TMap<int32, FVector> IndexToPosition;
		IndexToPosition.Reserve(ComponentSizeQuadsLOD * ComponentSizeQuadsLOD * UE_ARRAY_COUNT(QuadPattern));
		for (int32 y = 0; y < ComponentSizeQuadsLOD; y++)
		{
			for (int32 x = 0; x < ComponentSizeQuadsLOD; x++)
			{
				for (int32 i = 0; i < UE_ARRAY_COUNT(QuadPattern); i++)
				{
					int32 VertexX = x + QuadPattern[i].X;
					int32 VertexY = y + QuadPattern[i].Y;
					FVector Position = CDI.GetWorldVertex(VertexX, VertexY);

					// If atleast one vertex is within the given bounds we should process the quad
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0
					// In UE 5.0, FIndexAndZ only supports double
					new (VertIndexAndZ) FIndexAndZ(CurrentIndex, Position);
#else
					new (VertIndexAndZ) FIndexAndZ(CurrentIndex, static_cast<FVector3f>(Position));
#endif
					IndexToPosition.Add(CurrentIndex, Position);
					CurrentIndex++;
				}
			}
		}
		// Sort the vertices by z value
		VertIndexAndZ.Sort(FCompareIndexAndZ());

		auto FindPreviousIndex = [&VertIndexAndZ, &IndexToPosition](int32 Index) -> int32
		{
			const FVector& PositionA = IndexToPosition[Index];
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0
			// In UE 5.0, FIndexAndZ only supports double
			FIndexAndZ CompressPosition(0, PositionA);
#else
			FIndexAndZ CompressPosition(0, static_cast<FVector3f>(PositionA));
#endif
			// Search for lowest index duplicates
			int32 BestIndex = MAX_int32;
			for (int32 i = 0; i < IndexToPosition.Num(); i++)
			{
				if (CompressPosition.Z > (VertIndexAndZ[i].Z + SMALL_NUMBER))
				{
					// We will not find anything there is no point searching more
					break;
				}
				const FVector& PositionB = IndexToPosition[VertIndexAndZ[i].Index];
				if (PointsEqual(static_cast<FVector3f>(PositionA), static_cast<FVector3f>(PositionB), SMALL_NUMBER))
				{
					if (VertIndexAndZ[i].Index < BestIndex)
					{
						BestIndex = VertIndexAndZ[i].Index;
					}
				}
			}
			return BestIndex < MAX_int32 ? BestIndex : Index;
		};

		// Export to MeshDescription
		TMap<int32, FVertexID> IndexToVertexID;
		IndexToVertexID.Reserve(CurrentIndex);
		CurrentIndex = 0;
		for (int32 y = 0; y < ComponentSizeQuadsLOD; y++)
		{
			for (int32 x = 0; x < ComponentSizeQuadsLOD; x++)
			{
				FVector Positions[UE_ARRAY_COUNT(QuadPattern)];
				bool bProcess = ShouldIgnoreBounds;

				// Fill positions
				for (int32 i = 0; i < UE_ARRAY_COUNT(QuadPattern); i++)
				{
					int32 VertexX = x + QuadPattern[i].X;
					int32 VertexY = y + QuadPattern[i].Y;
					Positions[i] = CDI.GetWorldVertex(VertexX, VertexY);

					// If at least one vertex is within the given bounds we should process the quad
					if (!bProcess && InBounds.ComputeSquaredDistanceFromBoxToPoint(Positions[i]) < SquaredSphereRadius)
					{
						bProcess = true;
					}
				}

				if (bProcess)
				{
					// Fill the vertexID we need
					TArray<FVertexID> VertexIDs;
					VertexIDs.Reserve(UE_ARRAY_COUNT(QuadPattern));
					TArray<FVertexInstanceID> VertexInstanceIDs;
					VertexInstanceIDs.Reserve(UE_ARRAY_COUNT(QuadPattern));
					// Fill positions
					for (int32 i = 0; i < UE_ARRAY_COUNT(QuadPattern); i++)
					{
						int32 DuplicateLowestIndex = FindPreviousIndex(CurrentIndex);
						FVertexID VertexID;
						if (DuplicateLowestIndex < CurrentIndex)
						{
							VertexID = IndexToVertexID[DuplicateLowestIndex];
						}
						else
						{
							VertexID = OutRawMesh.CreateVertex();
							VertexPositions[VertexID] = static_cast<FVector3f>(Positions[i]);
						}
						IndexToVertexID.Add(CurrentIndex, VertexID);
						VertexIDs.Add(VertexID);
						CurrentIndex++;
					}

					// Create triangle
					{
						// Whether this vertex is in hole
						bool bInvisible = false;
						int32 TexelX, TexelY;
						CDI.VertexXYToTexelXY(x, y, TexelX, TexelY);
						if (VisDataMap.Num())
						{
							bInvisible = (VisDataMap[CDI.TexelXYToIndex(TexelX, TexelY)] >= VisThreshold);
						}

						// get associated layer info based on layer contribution
						int32 maxContributionLayerIndex = 0;
						uint8 maxContribution = 0;
						for (int32 layerIndex = 0; layerIndex < LayerContributionInfo.Num(); ++layerIndex)
						{
							int32 contributionIndex = CDI.TexelXYToIndex(TexelX, TexelY);
							if (LayerContributionInfo[layerIndex].Num())
							{
								uint8 contribution = LayerContributionInfo[layerIndex][contributionIndex];
								if (contribution >= maxContribution)
								{
									maxContribution = contribution;
									maxContributionLayerIndex = layerIndex;
								}
							}
						}

						if (ComponentWeightmapLayerAllocations.Num() > maxContributionLayerIndex)
						{
							TriangleLayerInfo.Add(
								ComponentWeightmapLayerAllocations[maxContributionLayerIndex].LayerInfo);
							TriangleLayerInfo.Add(
								ComponentWeightmapLayerAllocations[maxContributionLayerIndex].LayerInfo);
						}

						// Add vertexInstance and polygon only if we are visible
						if (!bInvisible)
						{
							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[0]));
							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[1]));
							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[2]));

							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[3]));
							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[4]));
							VertexInstanceIDs.Add(OutRawMesh.CreateVertexInstance(VertexIDs[5]));

							// Fill other vertex data
							for (int32 i = 0; i < UE_ARRAY_COUNT(QuadPattern); i++)
							{
								int32 VertexX = x + QuadPattern[i].X;
								int32 VertexY = y + QuadPattern[i].Y;

								FVector LocalTangentX, LocalTangentY, LocalTangentZ;
								CDI.GetLocalTangentVectors(
									VertexX, VertexY, LocalTangentX, LocalTangentY, LocalTangentZ);

								VertexInstanceTangents[VertexInstanceIDs[i]] = static_cast<FVector3f>(LocalTangentX);
								VertexInstanceBinormalSigns[VertexInstanceIDs[i]] =
									GetBasisDeterminantSign(LocalTangentX, LocalTangentY, LocalTangentZ);
								VertexInstanceNormals[VertexInstanceIDs[i]] = static_cast<FVector3f>(LocalTangentZ);

								FVector2D UV =
									(ComponentUVOffsetLOD + FVector2D(VertexX, VertexY)) * ComponentUVScaleLOD;
								VertexInstanceUVs.Set(VertexInstanceIDs[i], 0, static_cast<FVector2f>(UV));
								// Add lightmap UVs
								VertexInstanceUVs.Set(VertexInstanceIDs[i], 1, static_cast<FVector2f>(UV));
							}
							auto AddTriangle =
								[&OutRawMesh, &EdgeHardnesses, &PolygonGroupID, &VertexIDs, &VertexInstanceIDs](
									int32 BaseIndex)
							{
								// Create a polygon from this triangle
								TArray<FVertexInstanceID> PerimeterVertexInstances;
								PerimeterVertexInstances.SetNum(3);
								for (int32 Corner = 0; Corner < 3; ++Corner)
								{
									PerimeterVertexInstances[Corner] = VertexInstanceIDs[BaseIndex + Corner];
								}
								// Insert a polygon into the mesh
								TArray<FEdgeID> NewEdgeIDs;
								const FPolygonID NewPolygonID =
									OutRawMesh.CreatePolygon(PolygonGroupID, PerimeterVertexInstances, &NewEdgeIDs);
								for (const FEdgeID NewEdgeID : NewEdgeIDs)
								{
									EdgeHardnesses[NewEdgeID] = false;
								}
							};
							AddTriangle(0);
							AddTriangle(3);
						}
					}
				}
				else
				{
					CurrentIndex += UE_ARRAY_COUNT(QuadPattern);
				}
			}
		}
	}

	// Compact the MeshDescription, if there was visibility mask or some bounding box clip, it need to be compacted so
	// the sparse array are from 0 to n with no invalid data in between.
	FElementIDRemappings ElementIDRemappings;
	OutRawMesh.Compact(ElementIDRemappings);
	return OutRawMesh.Polygons().Num() > 0;
}

void SAcousticsProbesTab::AddLandscapeToAcousticMesh(
	AcousticMesh* acousticMesh, ALandscapeProxy* actor, MeshType type, TArray<uint32>& materialIDsNotFound,
	const FBoxSphereBounds& BoundsOfInterest)
{
	FMeshDescription rawMesh;
	FStaticMeshAttributes(rawMesh).Register();

	TArray<ULandscapeLayerInfoObject*> TriangleLayerInfo;
	if (!ExportLandscapeToRawMesh(
			actor,
			actor->ExportLOD,
			rawMesh,
			TriangleLayerInfo,
			BoundsOfInterest,
			BoundsOfInterest.SphereRadius < SMALL_NUMBER))
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Failed to export raw mesh for landscape actor: [%s]. Ignoring."),
			*actor->GetName());
		return;
	}

	TArray<FStaticMaterial> mats;
	UMaterialInterface* landscapeMat = actor->GetLandscapeMaterial();
	if (landscapeMat != nullptr)
	{
		mats.Add(FStaticMaterial(landscapeMat));
	}
	else
	{
		mats.Add(FStaticMaterial(CastChecked<UMaterialInterface>(UMaterial::GetDefaultMaterial(MD_Surface))));
	}

	auto* staticMesh = CreateStaticMesh(rawMesh, mats, GetTransientPackage(), *actor->GetName());

	TArray<ATKVectorD> vertices;
	TArray<TritonAcousticMeshTriangleInformation> triangleInfos;

	if (staticMesh == nullptr)
	{
		return;
	}

	const bool checkHasVerts = true;
	const int32 LOD = 0;
	if (!staticMesh->HasValidRenderData(checkHasVerts, LOD))
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Error while adding static mesh [%s], there is no valid render data for LOD %d. Ignoring."),
			*staticMesh->GetName(),
			LOD);
	}

	const FStaticMeshLODResources& renderData = staticMesh->GetLODForExport(LOD);
	const FPositionVertexBuffer& vertexBuffer = renderData.VertexBuffers.PositionVertexBuffer;

	FIndexArrayView indexBuffer = renderData.IndexBuffer.GetArrayView();
	int32 triangleCount = renderData.GetNumTriangles();
	uint32 vertexCount = vertexBuffer.GetNumVertices();
	for (uint32 i = 0u; i < vertexCount; ++i)
	{
		const FVector& vertexPos = static_cast<FVector>(vertexBuffer.VertexPosition(i));
		const FVector& vertexWorld = vertexPos;
		FVector vertex = AcousticsUtils::UnrealPositionToTriton(vertexWorld);
		vertices.Add(
			ATKVectorD{static_cast<float>(vertex.X), static_cast<float>(vertex.Y), static_cast<float>(vertex.Z)});
	}

	for (int32 triangle = 0; triangle < triangleCount; ++triangle)
	{
		uint32 index1 = indexBuffer[(triangle * 3) + 0];
		uint32 index2 = indexBuffer[(triangle * 3) + 1];
		uint32 index3 = indexBuffer[(triangle * 3) + 2];

		TritonAcousticMeshTriangleInformation triangleInfo;
		triangleInfo.Indices = ATKVectorI{static_cast<int>(index1), static_cast<int>(index2), static_cast<int>(index3)};
		if (type == MeshTypeGeometry)
		{
			TritonMaterialCode MaterialCode = GetMaterialCodeForLandscapeFace(
				TriangleLayerInfo, triangle, materialIDsNotFound, actor->BodyInstance.GetSimplePhysicalMaterial());

			triangleInfo.MaterialCode = MaterialCode;
			ApplyOverridesAndRemapsFromProbeVolumesOnTriangle(
				vertices, index1, index2, index3, MaterialCode, triangleInfo);
		}
		else
		{
			triangleInfo.MaterialCode = TRITON_DEFAULT_WALL_CODE;
		}
		triangleInfos.Add(triangleInfo);
	}

	acousticMesh->Add(vertices.GetData(), vertices.Num(), triangleInfos.GetData(), triangleInfos.Num(), type);
}

void SAcousticsProbesTab::AddVolumeToAcousticMesh(
	AcousticMesh* acousticMesh, AAcousticsProbeVolume* actor, TArray<uint32>& materialIDsNotFound)
{
	TArray<UMaterialInterface*> emptyMaterials;

	MeshType type = MeshTypeInvalid;
	if (actor->VolumeType == AcousticsVolumeType::Include)
	{
		type = MeshTypeIncludeVolume;
	}
	else if (actor->VolumeType == AcousticsVolumeType::Exclude)
	{
		type = MeshTypeExcludeVolume;
	}
	else if (
		actor->VolumeType == AcousticsVolumeType::MaterialOverride ||
		actor->VolumeType == AcousticsVolumeType::MaterialRemap)
	{
		// Do not pass these volumes into Triton. We instead use them to set material properties on static meshes
		return;
	}
	else if (actor->VolumeType == AcousticsVolumeType::ProbeSpacing)
	{
		type = MeshTypeProbeSpacingVolume;
	}
	else
	{
		UE_LOG(LogAcoustics, Warning, TEXT("[Volume: %s] Unknown mesh type for volume. Ignoring."), *actor->GetName());
		return;
	}

	// Create static mesh from brush

	FMeshDescription Mesh;
	FStaticMeshAttributes MeshAttributes(Mesh);
	MeshAttributes.Register();

	TArray<FStaticMaterial> Materials;
	// Pass a null actor pointer, so brush geo doesn't bake-in actor transforms, we take care
	// of that below when its static mesh is exported as part of the actor. Passing in the actor
	// here would apply the actor transform twice.
	GetBrushMesh(nullptr, actor->Brush, Mesh, Materials);

	if (Mesh.Vertices().Num() == 0)
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("[Volume: %s] Mesh created from volume's brush has zero vertex count. Ignoring."),
			*actor->GetName());
		return;
	}

	UStaticMesh* StaticMesh = CreateStaticMesh(Mesh, Materials, GetTransientPackage(), actor->GetFName());

	if (!StaticMesh)
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("[Volume: %s] Failed to create static mesh from volume's raw mesh. Ignoring."),
			*actor->GetName());
		return;
	}

	// This exports the static mesh using the volume actor's transforms
	AddStaticMeshToAcousticMesh(
		acousticMesh, actor, actor->GetTransform(), StaticMesh, emptyMaterials, type, materialIDsNotFound);
}

void SAcousticsProbesTab::AddPinnedProbeToAcousticMesh(AcousticMesh* acousticMesh, const FVector& probeLocation)
{
	acousticMesh->AddPinnedProbe(ATKVectorD(probeLocation.X, probeLocation.Y, probeLocation.Z));
}

void SAcousticsProbesTab::AddNavmeshToAcousticMesh(
	AcousticMesh* acousticMesh, ARecastNavMesh* navActor, TArray<UMaterialInterface*> materials,
	TArray<uint32>& materialIDsNotFound)
{
	auto staticMesh = ExtractStaticMeshFromNavigationMesh(navActor, GEditor->GetWorld());
	if (!staticMesh)
	{
		return;
	}

	const auto checkHasVerts = true;
	const auto LOD = 0;
	if (staticMesh->HasValidRenderData(checkHasVerts, LOD))
	{
		AddStaticMeshToAcousticMesh(
			acousticMesh,
			navActor,
			FTransform::Identity,
			staticMesh,
			materials,
			MeshTypeNavigation,
			materialIDsNotFound);
		return;
	}

	UE_LOG(
		LogAcoustics,
		Warning,
		TEXT("Nav mesh [%s] has no valid render data for LOD %d. Triggering navigation build..."),
		*navActor->GetName(),
		LOD);

	// trigger navigation rebuild and block on it so we can export it
	navActor->RebuildAll();
	navActor->EnsureBuildCompletion();

	auto staticMeshRebuilt = ExtractStaticMeshFromNavigationMesh(navActor, GEditor->GetWorld());
	if (staticMeshRebuilt != nullptr && staticMeshRebuilt->HasValidRenderData(checkHasVerts, LOD))
	{
		UE_LOG(LogAcoustics, Log, TEXT("Nav mesh [%s] successfully rebuilt."), *navActor->GetName());
		AddStaticMeshToAcousticMesh(
			acousticMesh,
			navActor,
			navActor->GetTransform(),
			staticMeshRebuilt,
			materials,
			MeshTypeNavigation,
			materialIDsNotFound);
	}
	else
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Automatic rebuild of nav mesh [%s] failed, investigate in editor. Ignoring and "
					"continuing."),
			*navActor->GetName());
	}
}

void SAcousticsProbesTab::ComputePrebake()
{
	// Make sure material library is up to date. There could have been material volumes added that haven't synced yet.
	if (m_bCommandletPrebake)
	{
		if (AcousticsSharedState::GetMaterialsLibrary() == nullptr)
		{
			UE_LOG(LogAcoustics, Error, TEXT("ProjectAcoustics commandlet has no material library."));
			SetPrebakeError(TEXT("ProjectAcoustics commandlet has no material library."));
			return;
		}
	}
	else if (m_AcousticsEditMode != nullptr && m_AcousticsEditMode->GetMaterialsTab().IsValid())
	{
		m_AcousticsEditMode->GetMaterialsTab()->UpdateUEMaterials();
		m_AcousticsEditMode->GetMaterialsTab()->PublishMaterialLibrary();
	}

	UWorld* EditorWorld = GEditor->GetEditorWorldContext().World();
#if ENGINE_MAJOR_VERSION >= 5
	ULevelInstanceSubsystem* LevelInstanceSubsystem = EditorWorld ? EditorWorld->GetSubsystem<ULevelInstanceSubsystem>() : nullptr;
#endif

	// First, collect all the Acoustic Material Override volumes
	// We use these later to help figure out what material to assign to a mesh
	m_MaterialOverrideVolumes.Empty();
	// Also collect the Acoustic Material Remap volumes.
	m_MaterialRemapVolumes.Empty();
	FBoxSphereBounds BoundsOfInterest(ForceInit);
	auto taggedActors = 0;
	auto taggedGeo = 0;
	auto taggedNav = 0;
	TSet<AActor*> countedTaggedActors;
	TSet<AActor*> countedGeometryActors;
	TSet<AActor*> countedNavigationActors;
	TSet<AActor*> countedMaterialVolumeActors;

	TFunction<void(AActor*, bool, bool)> CountActorForPrebake;
	CountActorForPrebake = [&](AActor* actor, bool inheritGeometryTag, bool inheritNavigationTag)
	{
		if (!actor)
		{
			return;
		}

		if (actor->IsA<AAcousticsProbeVolume>() && !countedMaterialVolumeActors.Contains(actor))
		{
			AAcousticsProbeVolume* volume = Cast<AAcousticsProbeVolume>(actor);
			if (volume->VolumeType == AcousticsVolumeType::MaterialOverride)
			{
				m_MaterialOverrideVolumes.Add(volume);
			}
			// Check material remap volumes as well.
			else if (volume->VolumeType == AcousticsVolumeType::MaterialRemap)
			{
				m_MaterialRemapVolumes.Add(volume);
			}
			BoundsOfInterest = BoundsOfInterest + volume->GetBounds();
			countedMaterialVolumeActors.Add(actor);
		}

		const bool isGeo = inheritGeometryTag || actor->ActorHasTag(c_AcousticsGeometryTag);
		const bool isNav = inheritNavigationTag || actor->ActorHasTag(c_AcousticsNavigationTag);
		if ((isGeo || isNav) && !countedTaggedActors.Contains(actor))
		{
			++taggedActors;
			countedTaggedActors.Add(actor);
		}
		if (isGeo && !countedGeometryActors.Contains(actor))
		{
			++taggedGeo;
			countedGeometryActors.Add(actor);
		}
		if (isNav && !countedNavigationActors.Contains(actor))
		{
			++taggedNav;
			countedNavigationActors.Add(actor);
		}

#if ENGINE_MAJOR_VERSION >= 5
		if (LevelInstanceSubsystem)
		{
			ILevelInstanceInterface* levelInstance = Cast<ILevelInstanceInterface>(actor);
			if (levelInstance && LevelInstanceSubsystem->IsLoaded(levelInstance))
			{
				LevelInstanceSubsystem->ForEachActorInLevelInstance(
					levelInstance,
					[&](AActor* levelActor)
					{
						if (levelActor && levelActor != actor)
						{
							CountActorForPrebake(levelActor, isGeo, isNav);
						}
						return true;
					});
			}
		}
#endif
	};

	for (TActorIterator<AActor> itr(EditorWorld); itr; ++itr)
	{
		CountActorForPrebake(*itr, false, false);
	}

	// Do a precheck for tagged geo and nav before we start processing meshes, which could take a while
	if (taggedNav == 0 || taggedGeo == 0)
	{
		UE_LOG(
			LogAcoustics,
			Error,
			TEXT("Need at least one object tagged for Geometry and one object tagged for Navigation to represent "
					"ground."));
		SetPrebakeError(TEXT("Need at least one object tagged for Geometry and one object tagged for Navigation."));
		return;
	}

	// Used to track any materials that aren't properly mapped
	// Will display error text to help with debugging
	TArray<uint32> materialIDsNotFound;
	TArray<UMaterialInterface*> emptyMaterials;

	// Create the acoustic mesh
	TSharedPtr<AcousticMesh> acousticMesh = MakeShareable<AcousticMesh>(AcousticMesh::Create().Release());
	bool foundMovableMesh = false;
	bool cancelledAcousticMesh = false;
	bool ignoreLargeMeshes = false;

	// Use a scoped task so that UI isn't blocked, user is informed on the progress, and can cancel early
	FScopedSlowTask acousticMeshDialog(
		taggedActors, LOCTEXT("AcousticMeshCreationDialog", "Getting things ready. Adding tagged objects to the Acoustic Mesh..."));
	acousticMeshDialog.MakeDialog(true);
	TSet<AActor*> processedGeometryActors;
	TSet<AActor*> processedNavigationActors;

	TFunction<bool(AActor*, bool, bool)> ProcessActorForPrebake;
	ProcessActorForPrebake = [&](AActor* actor, bool inheritGeometryTag, bool inheritNavigationTag)
	{
		if (!actor)
		{
			return true;
		}

		const bool acousticGeometryTag = inheritGeometryTag || actor->ActorHasTag(c_AcousticsGeometryTag);
		const bool acousticNavigationTag = inheritNavigationTag || actor->ActorHasTag(c_AcousticsNavigationTag);

#if ENGINE_MAJOR_VERSION >= 5
		ILevelInstanceInterface* levelInstance = LevelInstanceSubsystem ? Cast<ILevelInstanceInterface>(actor) : nullptr;
		if (levelInstance)
		{
			if (LevelInstanceSubsystem->IsLoaded(levelInstance))
			{
				bool continueProcessingLevelInstance = true;
				LevelInstanceSubsystem->ForEachActorInLevelInstance(
					levelInstance,
					[&](AActor* levelActor)
					{
						if (levelActor && levelActor != actor)
						{
							continueProcessingLevelInstance = ProcessActorForPrebake(
								levelActor, acousticGeometryTag, acousticNavigationTag);
						}
						return continueProcessingLevelInstance;
					});

				if (!continueProcessingLevelInstance)
				{
					return false;
				}
			}
			else if (acousticGeometryTag || acousticNavigationTag)
			{
				UE_LOG(
					LogAcoustics,
					Warning,
					TEXT("Level Instance [%s] is tagged for acoustics but is not loaded. Only components on the Level Instance actor itself can be baked."),
					*actor->GetName());
			}
		}
#endif

		const bool shouldProcessGeometry = acousticGeometryTag && !processedGeometryActors.Contains(actor);
		const bool shouldProcessNavigation = acousticNavigationTag && !processedNavigationActors.Contains(actor);

		if (!shouldProcessGeometry && !shouldProcessNavigation)
		{
			return true;
		}

		if (shouldProcessGeometry)
		{
			processedGeometryActors.Add(actor);
		}
		if (shouldProcessNavigation)
		{
			processedNavigationActors.Add(actor);
		}

		if (shouldProcessNavigation)
		{
			// Do a safety check for the user to make sure they don't bake a ridiculously large mesh.
			// Use the magnitude of the size of the bounding box, because this helps handle the case
			// where we have a 2D plane, and one of the dimensions is 0.
			auto actorSize = actor->GetComponentsBoundingBox(true, true).GetSize().Size();

			if (actorSize > c_NavigationActorSizeWarning && !ignoreLargeMeshes)
			{
				if (m_bCommandletPrebake && m_bCommandletAutoContinueLargeNavigationMeshes)
				{
					UE_LOG(
						LogAcoustics,
						Warning,
						TEXT("A very large mesh (%s) was tagged for Acoustic Navigation. Commandlet mode will continue."),
						*actor->GetName());
					ignoreLargeMeshes = true;
				}
				else
				{
					auto message = FString(TEXT(
						"Warning: A very large mesh (" + actor->GetName() +
						") was tagged for Acoustic Navigation. This may result in a "
						"long probe calculation time. Make sure "
						"you haven't accidentally tagged a huge mesh like SkySphere. Do you want to continue?"));
					auto consent = FMessageDialog::Open(EAppMsgType::YesNo, FText::FromString(message));

					if (consent == EAppReturnType::No)
					{
						return false;
					}
					else if (consent == EAppReturnType::Yes)
					{
						ignoreLargeMeshes = true;
					}
				}
			}

			// Nav Meshes
			if (actor->IsA<ARecastNavMesh>())
			{
				AddNavmeshToAcousticMesh(
					acousticMesh.Get(), Cast<ARecastNavMesh>(actor), emptyMaterials, materialIDsNotFound);
				// If it's a nav mesh, no need to check if it contains static meshes or landscapes
				// further down. Simply add it to the acoustic mesh and move on to the next actor.
				acousticMeshDialog.EnterProgressFrame();
				return true;
			}
			// Volumes
			else if (actor->IsA<AAcousticsProbeVolume>())
			{
				AddVolumeToAcousticMesh(acousticMesh.Get(), Cast<AAcousticsProbeVolume>(actor), materialIDsNotFound);
			}
			// Pinned probes
			else if (actor->IsA<AAcousticsPinnedProbe>())
			{
				AAcousticsPinnedProbe* PinnedProbe = Cast<AAcousticsPinnedProbe>(actor);
				if (PinnedProbe != nullptr && PinnedProbe->bIncludeInManualProbeList)
				{
					auto probeLoc = AcousticsUtils::UnrealPositionToTriton(actor->GetActorLocation());
					AddPinnedProbeToAcousticMesh(acousticMesh.Get(), probeLoc);
				}
			}
			// Search components
			else
			{
				// dynamic openings
				auto* openingComponent = actor->FindComponentByClass<UAcousticsDynamicOpening>();
				if (openingComponent)
				{
					FVector ProbeLoc;
					if (openingComponent->ComputeCenter(ProbeLoc))
					{
						AddPinnedProbeToAcousticMesh(acousticMesh.Get(), ProbeLoc);
					}
					else
					{
						UE_LOG(
							LogAcoustics,
							Warning,
							TEXT("Failed to add probe for dynamic opening in actor: [%s]. Dynamic opening will "
									"probably mal-function "
									"during "
									"gameplay."),
							*actor->GetName());
					}
				}
			}
		}

		if (shouldProcessNavigation || shouldProcessGeometry)
		{
			// Added support for Hierarchical Instanced Static Mesh component
			TArray<UInstancedStaticMeshComponent*> HIMeshComponents;
			actor->GetComponents<UInstancedStaticMeshComponent>(HIMeshComponents, true);
			for (UInstancedStaticMeshComponent* const& HIMeshComponent : HIMeshComponents)
			{
				UE_LOG(LogAcoustics, Log, TEXT("Found HierarchcalInstancedStaticMesh in %s"), *actor->GetName());
				for (int32 MeshIndex = 0; MeshIndex < HIMeshComponent->PerInstanceSMData.Num(); ++MeshIndex)
				{
					FTransform Transform;
					if (HIMeshComponent->GetInstanceTransform(MeshIndex, Transform, true))
					{
						AddStaticMeshToAcousticMesh(
							acousticMesh.Get(),
							actor,
							Transform,
							HIMeshComponent->GetStaticMesh(),
							HIMeshComponent->GetMaterials(),
							MeshTypeGeometry,
							materialIDsNotFound);
					}
				}
			}

			// Static Meshes
			// Instead of checking for StaticMeshActors, loop through all the
			// static mesh components with static mobility. Add the static mesh for all these found static mesh
			// components. Only loop through the static mesh components if the size of the array of components is
			// greater than zero (ie the actor does actually contain static mesh components).
			TArray<UStaticMeshComponent*> StaticMeshComponents;
			actor->GetComponents<UStaticMeshComponent>(StaticMeshComponents, true);
			// This need to happen before the StaticMeshComponents check as landscape might have
			// HierarchicalInstanceStaticMesh (which is StaticMeshComponent). We handle the
			// HierarchicalInstanceStaticMesh case above. Landscapes
			if (actor->IsA<ALandscapeProxy>())
			{
				if (shouldProcessNavigation)
				{
					AddLandscapeToAcousticMesh(
						acousticMesh.Get(),
						Cast<ALandscapeProxy>(actor),
						MeshTypeNavigation,
						materialIDsNotFound,
						BoundsOfInterest);
				}
				if (shouldProcessGeometry)
				{
					AddLandscapeToAcousticMesh(
						acousticMesh.Get(),
						Cast<ALandscapeProxy>(actor),
						MeshTypeGeometry,
						materialIDsNotFound,
						BoundsOfInterest);
				}
			}
			else if (StaticMeshComponents.Num() > 0)
			{
				for (UStaticMeshComponent* const& meshComponent : StaticMeshComponents)
				{
					// skip instanced static mesh. Transform for instanced static mesh needs to be handled separately.
					if (meshComponent->IsA<UInstancedStaticMeshComponent>())
					{
						continue;
					}

					if (meshComponent)
					{
						// This actor may override materials on the associated static mesh,
						// so make sure we use the correct set.
						TArray<UMaterialInterface*> materials = meshComponent->GetMaterials();

						// Static meshes can be tagged for both AcousticsGeometry and AcousticsNavigation
						// If that's the case, we need to make a copy of their geometry before adding it to the
						// AcousticMesh It's not supported to have the same geometry contain both tags internally
						if (shouldProcessNavigation)
						{
							AddStaticMeshToAcousticMesh(
								acousticMesh.Get(),
								actor,
								meshComponent->GetComponentTransform(),
								meshComponent->GetStaticMesh(),
								materials,
								MeshTypeNavigation,
								materialIDsNotFound,
								meshComponent->BodyInstance.GetSimplePhysicalMaterial());
						}
						if (shouldProcessGeometry)
						{
							AddStaticMeshToAcousticMesh(
								acousticMesh.Get(),
								actor,
								meshComponent->GetComponentTransform(),
								meshComponent->GetStaticMesh(),
								materials,
								MeshTypeGeometry,
								materialIDsNotFound,
								meshComponent->BodyInstance.GetSimplePhysicalMaterial());
						}

						if (meshComponent->Mobility == EComponentMobility::Movable)
						{
							foundMovableMesh = true;
						}
					}
				}
			}
			else
			{
				if (!actor->IsA<AAcousticsPinnedProbe>() && !actor->IsA<UAcousticsDynamicOpening>() &&
					!actor->IsA<AAcousticsProbeVolume>()
#if ENGINE_MAJOR_VERSION >= 5
					&& !Cast<ILevelInstanceInterface>(actor)
#endif
					)
				{
					UE_LOG(
						LogAcoustics, Warning, TEXT("Unsupported Actor tagged for Acoustics: %s"), *actor->GetName());
				}
			}
		}
		acousticMeshDialog.EnterProgressFrame();
		return true;
	};

	for (TActorIterator<AActor> itr(EditorWorld); itr; ++itr)
	{
		if (acousticMeshDialog.ShouldCancel() || !ProcessActorForPrebake(*itr, false, false))
		{
			cancelledAcousticMesh = true;
			break;
		}
	}

	if (foundMovableMesh)
	{
		UE_LOG(
			LogAcoustics,
			Warning,
			TEXT("Found movable meshes tagged for acoustics. Note: only the starting position of a movable mesh will "
					"be used in the bake"));
	}

	// Empty the override volumes list once it's done being used, so
	// that we don't have to assume and depend on the mode deactivation code to clear it.
	m_MaterialOverrideVolumes.Empty();
	// Also empty the material remap volumes.
	m_MaterialRemapVolumes.Empty();

	if (cancelledAcousticMesh)
	{
		UE_LOG(LogAcoustics, Display, TEXT("Cancelling probe calculation."));
		return;
	}

	if (!acousticMesh->HasNavigationMesh() || !acousticMesh->HasGeometryMesh())
	{
		UE_LOG(
			LogAcoustics,
			Error,
			TEXT("Need at least one object tagged for Geometry and one object tagged for Navigation to represent "
					"ground."));
		SetPrebakeError(TEXT("Need at least one object tagged for Geometry and one object tagged for Navigation."));
		return;
	}

#ifdef ENABLE_COLLISION_SUPPORT
	// Add collision geometry from selected actors to acoustic mesh as acoustic geometry
	if (!CollisionGeometryToAcousticMeshConverter::AddCollisionGeometryToAcousticMesh(acousticMesh.Get()))
	{
		UE_LOG(LogAcoustics, Error, TEXT("Failed to add collision meshes to the acoustic mesh."));
		SetPrebakeError(TEXT("Failed to add collision meshes to the acoustic mesh."));
		return;
	}
#endif // ENABLE_COLLISION_SUPPORT

	auto config = AcousticsSimulationConfiguration::Create(
		acousticMesh,
		AcousticsSharedState::GetTritonSimulationParameters(),
		AcousticsSharedState::GetTritonOperationalParameters(),
		AcousticsSharedState::GetMaterialsLibrary(),
		&SAcousticsProbesTab::ComputePrebakeCallback);
	if (config)
	{
		AcousticsSharedState::SetSimulationConfiguration(MoveTemp(config));
		SetPrebakeError(TEXT(""));
	}
	else
	{
		UE_LOG(LogAcoustics, Error, TEXT("Failed to create simulation config"));
		SetPrebakeError(TEXT("Failed to create simulation config"));
	}
}

bool SAcousticsProbesTab::ComputePrebakeForCommandlet(
	const FAcousticsProbeBakeCommandletOptions& Options,
	FAcousticsProbeBakeCommandletResult& Result)
{
	Result = FAcousticsProbeBakeCommandletResult();
	Result.bAppendToExistingProbeList = Options.bAppendToExistingProbeList;
	Result.AppendProbeRegionTag = Options.AppendProbeRegionTag.IsNone()
		? FString()
		: Options.AppendProbeRegionTag.ToString();
	Result.AppendProbeRegionBoundsPaddingCm = Options.AppendProbeRegionBoundsPaddingCm;

	TArray<FVector> ExistingProbeLocations;
	if (Options.bAppendToExistingProbeList)
	{
		const AcousticsSimulationConfiguration* ExistingSimulationConfiguration =
			AcousticsSharedState::GetSimulationConfiguration();
		if (ExistingSimulationConfiguration == nullptr || !ExistingSimulationConfiguration->IsReady())
		{
			Result.Error =
				TEXT("AppendToExistingProbeList requires an existing ready ProjectAcoustics probe preview.");
			return false;
		}

		if (!ExistingSimulationConfiguration->GetProbeList(ExistingProbeLocations))
		{
			Result.Error = TEXT("AppendToExistingProbeList failed to read the existing ProjectAcoustics ProbeList.");
			return false;
		}

		Result.ExistingProbeCount = ExistingProbeLocations.Num();
		if (Result.ExistingProbeCount <= 0)
		{
			Result.Error = TEXT("AppendToExistingProbeList requires at least one existing probe.");
			return false;
		}
	}

	ResetPrebakeCalculationState();
	TSharedRef<SAcousticsProbesTab> ProbeTab = MakeShared<SAcousticsProbesTab>();
	ProbeTab->m_bCommandletPrebake = true;
	ProbeTab->m_bCommandletUsePhysicalMaterials = Options.bUsePhysicalMaterials;
	ProbeTab->m_bCommandletAutoContinueLargeNavigationMeshes = Options.bAutoContinueLargeNavigationMeshes;
	ProbeTab->m_CommandletMaterialToAcousticMaterial = Options.MaterialToAcousticMaterial;
	ProbeTab->ComputePrebake();

	if (!ProbeTab->m_CommandletError.IsEmpty())
	{
		Result.Error = ProbeTab->m_CommandletError;
		return false;
	}

	const AcousticsSimulationConfiguration* SimulationConfiguration =
		AcousticsSharedState::GetSimulationConfiguration();
	if (SimulationConfiguration == nullptr)
	{
		Result.Error = TEXT("ProjectAcoustics did not create a simulation configuration.");
		return false;
	}

	const double StartSeconds = FPlatformTime::Seconds();
	double LastLogSeconds = StartSeconds;
	while (SimulationConfiguration->GetState() == SimulationConfigurationState::InProcess)
	{
		FPlatformProcess::Sleep(1.0f);

		const double NowSeconds = FPlatformTime::Seconds();
		if (NowSeconds - LastLogSeconds >= 10.0)
		{
			UE_LOG(
				LogAcoustics,
				Display,
				TEXT("ProjectAcoustics probe calculation is running: %.0f%%, %s"),
				m_CurrentProgress * 100.0f,
				*m_CurrentStatus);
			LastLogSeconds = NowSeconds;
		}
	}

	const SimulationConfigurationState FinalState = SimulationConfiguration->GetState();
	if (FinalState != SimulationConfigurationState::Ready || !SimulationConfiguration->IsReady())
	{
		Result.Error = ProbeTab->m_CommandletError.IsEmpty()
			? TEXT("ProjectAcoustics probe calculation failed.")
			: ProbeTab->m_CommandletError;
		return false;
	}

	if (Options.bAppendToExistingProbeList)
	{
		TArray<FVector> GeneratedProbeLocations;
		if (!SimulationConfiguration->GetProbeList(GeneratedProbeLocations))
		{
			Result.Error = TEXT("AppendToExistingProbeList failed to read the newly generated ProbeList.");
			return false;
		}

		Result.GeneratedProbeCount = GeneratedProbeLocations.Num();
		TArray<FBox> AppendProbeRegionBounds;
		const bool bFilterToAppendRegion = !Options.AppendProbeRegionTag.IsNone();
		if (bFilterToAppendRegion)
		{
			UWorld* EditorWorld = GEditor != nullptr ? GEditor->GetEditorWorldContext().World() : nullptr;
			GatherAppendProbeRegionBounds(
				EditorWorld,
				Options.AppendProbeRegionTag,
				Options.AppendProbeRegionBoundsPaddingCm,
				AppendProbeRegionBounds);
			Result.AppendProbeRegionActorCount = AppendProbeRegionBounds.Num();
			if (Result.AppendProbeRegionActorCount <= 0)
			{
				Result.Error = FString::Printf(
					TEXT("AppendProbeRegionTag '%s' was set but no tagged region actor with valid bounds was found."),
					*Options.AppendProbeRegionTag.ToString());
				return false;
			}
		}

		const double AppendDuplicateToleranceCm = Options.AppendProbeDuplicateToleranceCm > 0.0
			? Options.AppendProbeDuplicateToleranceCm
			: c_DefaultAppendProbeDuplicateToleranceCm;
		TArray<FVector> MergedProbeLocations = ExistingProbeLocations;
		for (const FVector& GeneratedProbeLocation : GeneratedProbeLocations)
		{
			if (bFilterToAppendRegion && !IsProbeLocationInsideAppendRegion(GeneratedProbeLocation, AppendProbeRegionBounds))
			{
				++Result.AppendProbeOutOfRegionCount;
				continue;
			}

			if (bFilterToAppendRegion)
			{
				++Result.AppendProbeRegionCandidateCount;
			}

			if (AddUniqueProbeLocationWithTolerance(
					MergedProbeLocations,
					GeneratedProbeLocation,
					AppendDuplicateToleranceCm))
			{
				++Result.AppendedProbeCount;
			}
			else
			{
				++Result.DuplicateProbeCount;
			}
		}

		if (bFilterToAppendRegion && Result.AppendProbeRegionCandidateCount <= 0)
		{
			Result.Error = FString::Printf(
				TEXT("AppendProbeRegionTag '%s' found %d region actor(s), but no generated probes were inside them."),
				*Options.AppendProbeRegionTag.ToString(),
				Result.AppendProbeRegionActorCount);
			return false;
		}

		FString MergeError;
		if (!ProbeTab->WriteProbeListOverrideToConfig(MergedProbeLocations, MergeError))
		{
			Result.Error = MergeError;
			return false;
		}

		if (!ProbeTab->ReloadProbeConfigurationFromConfig(MergeError))
		{
			Result.Error = MergeError;
			return false;
		}

		SimulationConfiguration = AcousticsSharedState::GetSimulationConfiguration();
		if (SimulationConfiguration == nullptr || !SimulationConfiguration->IsReady())
		{
			Result.Error = TEXT("AppendToExistingProbeList wrote the merged ProbeList but failed to reload it.");
			return false;
		}

		Result.bProbeListMerged = true;
		UE_LOG(
			LogAcoustics,
			Display,
			TEXT("ProjectAcoustics appended probes. Existing=%d Generated=%d RegionActors=%d RegionCandidates=%d OutOfRegionSkipped=%d Appended=%d DuplicateSkipped=%d Final=%d"),
			Result.ExistingProbeCount,
			Result.GeneratedProbeCount,
			Result.AppendProbeRegionActorCount,
			Result.AppendProbeRegionCandidateCount,
			Result.AppendProbeOutOfRegionCount,
			Result.AppendedProbeCount,
			Result.DuplicateProbeCount,
			MergedProbeLocations.Num());
	}
	else
	{
		Result.GeneratedProbeCount = SimulationConfiguration->GetProbeCount();
	}

	Result.bSucceeded = true;
	TArray<FVector> FinalProbeLocations;
	Result.ProbeCount = SimulationConfiguration->GetProbeList(FinalProbeLocations)
		? FinalProbeLocations.Num()
		: SimulationConfiguration->GetProbeCount();
	Result.EstimatedProcessingMinutes = AcousticsSharedState::EstimateProcessingTime();
	Result.VoxFilepath = AcousticsSharedState::GetVoxFilepath();
	Result.ConfigFilepath = AcousticsSharedState::GetConfigFilepath();
	return true;
}

bool SAcousticsProbesTab::ShouldEnableForProcessing() const
{
	return !AcousticsSharedState::IsPrebakeActive();
}

bool SAcousticsProbesTab::ComputePrebakeCallback(const char* message, int progress)
{
	// Triton will prefix "ERROR" or "WARNING" to messages. Find those so that
	// we use the right log verbosity
	FString uMessage(ANSI_TO_TCHAR(message));
	if (uMessage.Contains("ERROR:"))
	{
		UE_LOG(LogAcoustics, Error, TEXT("%s"), *uMessage);
	}
	else if (uMessage.Contains("WARNING:"))
	{
		UE_LOG(LogAcoustics, Warning, TEXT("%s"), *uMessage);
	}
	else
	{
		UE_LOG(LogAcoustics, Verbose, TEXT("%s"), *uMessage);
	}
	m_CurrentStatus = uMessage;
	m_CurrentProgress = (progress / 100.0f);
	return m_CancelRequest;
}

TOptional<float> SAcousticsProbesTab::GetProgressBarPercent() const
{
	return m_CurrentProgress;
}

EVisibility SAcousticsProbesTab::GetProgressBarVisibility() const
{
	return (m_CurrentProgress > 0 && m_CurrentProgress < 1) ? EVisibility::Visible : EVisibility::Collapsed;
}

void SAcousticsProbesTab::ResetPrebakeCalculationState()
{
	m_CancelRequest = false;
	m_CurrentStatus = TEXT("");
	m_CurrentProgress = 0;
}

bool SAcousticsProbesTab::IsOverlapped(
	const AAcousticsProbeVolume* ProbeVolume, const ATKVectorD& Vertex1, const ATKVectorD& Vertex2,
	const ATKVectorD& Vertex3)
{
	auto bounds = ProbeVolume->GetBounds();
	auto boundsBox = bounds.GetBox();
	return boundsBox.IsInsideOrOn(AcousticsUtils::TritonPositionToUnreal(FVector(Vertex1.x, Vertex1.y, Vertex1.z))) ||
			boundsBox.IsInsideOrOn(AcousticsUtils::TritonPositionToUnreal(FVector(Vertex2.x, Vertex2.y, Vertex2.z))) ||
			boundsBox.IsInsideOrOn(AcousticsUtils::TritonPositionToUnreal(FVector(Vertex3.x, Vertex3.y, Vertex3.z)));
}
#undef LOCTEXT_NAMESPACE
