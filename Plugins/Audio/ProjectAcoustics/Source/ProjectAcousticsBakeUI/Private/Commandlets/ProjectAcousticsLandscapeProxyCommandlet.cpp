/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ProjectAcousticsLandscapeProxyCommandlet.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/StaticMeshComponent.h"
#include "Editor.h"
#include "Engine/Level.h"
#include "Engine/LevelStreaming.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "FileHelpers.h"
#include "HAL/FileManager.h"
#include "LandscapeComponent.h"
#include "LandscapeDataAccess.h"
#include "LandscapeProxy.h"
#include "LevelInstance/LevelInstanceInterface.h"
#include "Materials/Material.h"
#include "MeshDescription.h"
#include "MeshDescriptionBuilder.h"
#include "Misc/FileHelper.h"
#include "Misc/PackageName.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "StaticMeshAttributes.h"
#include "UObject/SavePackage.h"
#include "UObject/SoftObjectPath.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ProjectAcousticsLandscapeProxyCommandlet)

namespace
{
	const FName AcousticGeometryTag(TEXT("AcousticsGeometry"));
	const FName AcousticNavigationTag(TEXT("AcousticsNavigation"));
	const FName AcousticProxyTag(TEXT("AcousticProxy"));
	const FName ProxyStaticMeshFolder(TEXT("ProxyStaticMesh"));

	struct FProjectAcousticsLandscapeOptions
	{
		FString SourceMap;
		FString DestinationMap;
		FString ReportPath = TEXT("Saved/OrionUE/ProjectAcoustics/acoustic-landscape-proxy-report.json");
		FString GeneratedAssetRoot = TEXT("/Game/Acoustics/Generated/Landscape");
		int32 LandscapeStep = 1;
		int32 MaxLevelInstanceDepth = 8;
		bool bOnlyAcousticTagged = false;
	};

	struct FProjectAcousticsLandscapeReport
	{
		int32 MapsScanned = 0;
		int32 MapsSkipped = 0;
		int32 ActorsScanned = 0;
		int32 LevelInstanceActorsSeen = 0;
		int32 LevelInstanceMapsQueued = 0;
		int32 StreamingLevelsSeen = 0;
		int32 StreamingLevelMapsQueued = 0;
		int32 LandscapeActorsScanned = 0;
		int32 LandscapeComponentsScanned = 0;
		int32 LandscapeComponentsUsed = 0;
		int32 LandscapeComponentsSkipped = 0;
		int32 GeneratedMeshAssets = 0;
		int32 SpawnedLandscapeActors = 0;
		int32 GeneratedVertices = 0;
		int32 GeneratedTriangles = 0;
		int32 HiddenQuadsSkipped = 0;
		int32 MaxNestedMapDepthSeen = 0;
	};

	struct FProjectAcousticsLandscapeMeshData
	{
		FString SourceMap;
		FString SourceActorLabel;
		FString SourceComponentName;
		FString MaterialPath;
		FVector ActorLocation = FVector::ZeroVector;
		TArray<FVector> Vertices;
		TArray<FVector2D> UVs;
		TArray<FIntVector> Triangles;
		int32 HiddenQuadCount = 0;
	};

	struct FProjectAcousticsChildMapRequest
	{
		FString SourceMap;
		FTransform ParentTransform = FTransform::Identity;
		TArray<FName> Tags;
		FString SourcePrefix;
	};

	FString JsonEscape(FString Value)
	{
		Value.ReplaceInline(TEXT("\\"), TEXT("\\\\"));
		Value.ReplaceInline(TEXT("\""), TEXT("\\\""));
		Value.ReplaceInline(TEXT("\r"), TEXT("\\r"));
		Value.ReplaceInline(TEXT("\n"), TEXT("\\n"));
		Value.ReplaceInline(TEXT("\t"), TEXT("\\t"));
		return Value;
	}

	FString NormalizePackagePath(FString Value)
	{
		Value.TrimStartAndEndInline();
		Value.ReplaceInline(TEXT("\\"), TEXT("/"));
		if (Value.IsEmpty())
		{
			return Value;
		}

		if (Value.EndsWith(TEXT(".umap")))
		{
			FString LongPackageName;
			if (FPackageName::TryConvertFilenameToLongPackageName(Value, LongPackageName))
			{
				Value = LongPackageName;
			}
			else
			{
				Value.LeftChopInline(5);
				const int32 ContentIndex = Value.Find(TEXT("/Content/"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
				if (ContentIndex != INDEX_NONE)
				{
					Value = TEXT("/Game/") + Value.Mid(ContentIndex + 9);
				}
			}
		}

		int32 DotIndex = INDEX_NONE;
		if (Value.FindChar(TEXT('.'), DotIndex))
		{
			Value.LeftInline(DotIndex);
		}

		if (!Value.StartsWith(TEXT("/")))
		{
			if (Value.StartsWith(TEXT("Content/"), ESearchCase::IgnoreCase))
			{
				Value = TEXT("/Game/") + Value.Mid(8);
			}
			else
			{
				Value = TEXT("/Game/") + Value;
			}
		}

		return Value;
	}

	FString ResolveProjectFilePath(const FString& Path)
	{
		if (FPaths::IsRelative(Path))
		{
			return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), Path);
		}
		return FPaths::ConvertRelativePathToFull(Path);
	}

	FString SanitizeAssetPart(const FString& Value)
	{
		FString Result;
		Result.Reserve(Value.Len());
		bool bLastWasUnderscore = false;
		for (const TCHAR Character : Value)
		{
			const bool bAllowed = FChar::IsAlnum(Character) || Character == TEXT('_');
			if (bAllowed)
			{
				Result.AppendChar(Character);
				bLastWasUnderscore = false;
			}
			else if (!bLastWasUnderscore)
			{
				Result.AppendChar(TEXT('_'));
				bLastWasUnderscore = true;
			}
		}
		while (Result.StartsWith(TEXT("_")))
		{
			Result.RightChopInline(1);
		}
		while (Result.EndsWith(TEXT("_")))
		{
			Result.LeftChopInline(1);
		}
		if (Result.IsEmpty())
		{
			return TEXT("Landscape");
		}
		return Result.Left(72);
	}

	FString MakeMapFilename(const FString& MapPackage)
	{
		return FPackageName::LongPackageNameToFilename(MapPackage, FPackageName::GetMapPackageExtension());
	}

	UWorld* GetCurrentEditorWorld()
	{
		if (GEditor == nullptr)
		{
			return nullptr;
		}
		return GEditor->GetEditorWorldContext().World();
	}

	bool LoadEditorMap(const FString& MapPackage)
	{
		const FString MapFilename = MakeMapFilename(MapPackage);
		if (!FEditorFileUtils::LoadMap(MapFilename, false, false))
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to load map: %s (%s)"), *MapPackage, *MapFilename);
			return false;
		}
		return GetCurrentEditorWorld() != nullptr;
	}

	FTransform ComposeChildTransform(const FTransform& LocalTransform, const FTransform& ParentTransform)
	{
		return LocalTransform * ParentTransform;
	}

	bool HasTag(const TArray<FName>& Tags, const FName& Tag)
	{
		for (const FName& ExistingTag : Tags)
		{
			if (ExistingTag == Tag)
			{
				return true;
			}
		}
		return false;
	}

	TArray<FName> MergeTags(const TArray<FName>& ParentTags, const AActor* Actor)
	{
		TArray<FName> Tags = ParentTags;
		if (Actor != nullptr)
		{
			for (const FName& Tag : Actor->Tags)
			{
				Tags.AddUnique(Tag);
			}
		}
		return Tags;
	}

	bool PassesTagFilter(const TArray<FName>& Tags, const FProjectAcousticsLandscapeOptions& Options)
	{
		return !Options.bOnlyAcousticTagged || HasTag(Tags, AcousticGeometryTag) || HasTag(Tags, AcousticNavigationTag);
	}

	FString GetActorLabelSafe(const AActor* Actor)
	{
		if (Actor == nullptr)
		{
			return TEXT("Actor");
		}
#if WITH_EDITOR
		const FString Label = Actor->GetActorLabel();
		if (!Label.IsEmpty())
		{
			return Label;
		}
#endif
		return Actor->GetName();
	}

	void BuildSampleCoordinates(const int32 ComponentSizeQuads, const int32 Step, TArray<int32>& OutCoordinates)
	{
		OutCoordinates.Reset();
		for (int32 Coordinate = 0; Coordinate < ComponentSizeQuads; Coordinate += Step)
		{
			OutCoordinates.Add(Coordinate);
		}
		OutCoordinates.AddUnique(ComponentSizeQuads);
	}

	bool IsHiddenLandscapeSample(const TArray<uint8>& VisibilityData, const int32 ComponentSizeVerts, const int32 X, const int32 Y)
	{
		if (VisibilityData.Num() != ComponentSizeVerts * ComponentSizeVerts)
		{
			return false;
		}

		const uint8 VisibilityThreshold = static_cast<uint8>(FMath::RoundToInt(255.0f * LANDSCAPE_VISIBILITY_THRESHOLD));
		const int32 ClampedX = FMath::Clamp(X, 0, ComponentSizeVerts - 1);
		const int32 ClampedY = FMath::Clamp(Y, 0, ComponentSizeVerts - 1);
		return VisibilityData[ClampedY * ComponentSizeVerts + ClampedX] > VisibilityThreshold;
	}

	bool HasHiddenLandscapeSampleInQuad(
		const TArray<uint8>& VisibilityData,
		const int32 ComponentSizeVerts,
		const int32 X0,
		const int32 Y0,
		const int32 X1,
		const int32 Y1)
	{
		if (VisibilityData.Num() != ComponentSizeVerts * ComponentSizeVerts)
		{
			return false;
		}

		for (int32 Y = Y0; Y <= Y1; ++Y)
		{
			for (int32 X = X0; X <= X1; ++X)
			{
				if (IsHiddenLandscapeSample(VisibilityData, ComponentSizeVerts, X, Y))
				{
					return true;
				}
			}
		}
		return false;
	}

	bool BuildLandscapeComponentMeshData(
		ULandscapeComponent* Component,
		const FTransform& ParentTransform,
		const FString& SourceMap,
		const FString& SourceActorLabel,
		const int32 LandscapeStep,
		FProjectAcousticsLandscapeMeshData& OutMeshData,
		FProjectAcousticsLandscapeReport& Report)
	{
		if (Component == nullptr)
		{
			return false;
		}

		const int32 ComponentSizeQuads = Component->ComponentSizeQuads;
		if (ComponentSizeQuads <= 0)
		{
			return false;
		}

		const int32 Step = FMath::Max(1, LandscapeStep);
		const int32 ComponentSizeVerts = ComponentSizeQuads + 1;

		FLandscapeComponentDataInterface ComponentData(Component, 0, true);
		TArray<uint8> VisibilityData;
		ComponentData.GetWeightmapTextureData(ALandscapeProxy::VisibilityLayer, VisibilityData, false, true);

		TArray<int32> SampleXs;
		TArray<int32> SampleYs;
		BuildSampleCoordinates(ComponentSizeQuads, Step, SampleXs);
		BuildSampleCoordinates(ComponentSizeQuads, Step, SampleYs);
		if (SampleXs.Num() < 2 || SampleYs.Num() < 2)
		{
			return false;
		}

		const FTransform ComponentToBake = Component->GetComponentTransform() * ParentTransform;
		TArray<FVector> WorldVertices;
		WorldVertices.Reserve(SampleXs.Num() * SampleYs.Num());
		OutMeshData.UVs.Reserve(SampleXs.Num() * SampleYs.Num());

		for (const int32 Y : SampleYs)
		{
			for (const int32 X : SampleXs)
			{
				WorldVertices.Add(ComponentToBake.TransformPosition(ComponentData.GetLocalVertex(X, Y)));
				OutMeshData.UVs.Add(FVector2D(
					static_cast<double>(Component->GetSectionBase().X + X),
					static_cast<double>(Component->GetSectionBase().Y + Y)));
			}
		}

		if (WorldVertices.IsEmpty())
		{
			return false;
		}

		OutMeshData.ActorLocation = WorldVertices[0];
		OutMeshData.Vertices.Reserve(WorldVertices.Num());
		for (const FVector& WorldVertex : WorldVertices)
		{
			OutMeshData.Vertices.Add(WorldVertex - OutMeshData.ActorLocation);
		}

		const auto SampleIndex = [&SampleXs](const int32 XIndex, const int32 YIndex)
		{
			return YIndex * SampleXs.Num() + XIndex;
		};

		for (int32 YIndex = 0; YIndex + 1 < SampleYs.Num(); ++YIndex)
		{
			for (int32 XIndex = 0; XIndex + 1 < SampleXs.Num(); ++XIndex)
			{
				const int32 X0 = SampleXs[XIndex];
				const int32 X1 = SampleXs[XIndex + 1];
				const int32 Y0 = SampleYs[YIndex];
				const int32 Y1 = SampleYs[YIndex + 1];
				if (HasHiddenLandscapeSampleInQuad(VisibilityData, ComponentSizeVerts, X0, Y0, X1, Y1))
				{
					++OutMeshData.HiddenQuadCount;
					continue;
				}

				const int32 V00 = SampleIndex(XIndex, YIndex);
				const int32 V10 = SampleIndex(XIndex + 1, YIndex);
				const int32 V01 = SampleIndex(XIndex, YIndex + 1);
				const int32 V11 = SampleIndex(XIndex + 1, YIndex + 1);
				OutMeshData.Triangles.Add(FIntVector(V00, V10, V01));
				OutMeshData.Triangles.Add(FIntVector(V10, V11, V01));
			}
		}

		if (OutMeshData.Triangles.IsEmpty())
		{
			Report.HiddenQuadsSkipped += OutMeshData.HiddenQuadCount;
			return false;
		}

		UMaterialInterface* Material = Component->GetLandscapeMaterial();
		if (Material == nullptr)
		{
			Material = UMaterial::GetDefaultMaterial(MD_Surface);
		}

		OutMeshData.SourceMap = SourceMap;
		OutMeshData.SourceActorLabel = SourceActorLabel;
		OutMeshData.SourceComponentName = Component->GetName();
		OutMeshData.MaterialPath = Material ? FSoftObjectPath(Material).ToString() : FString();
		Report.HiddenQuadsSkipped += OutMeshData.HiddenQuadCount;
		return true;
	}

	void CollectLandscapeActor(
		ALandscapeProxy* Landscape,
		const FTransform& ParentTransform,
		const FString& SourceMap,
		const FString& SourceLabel,
		const FProjectAcousticsLandscapeOptions& Options,
		TArray<FProjectAcousticsLandscapeMeshData>& OutMeshData,
		FProjectAcousticsLandscapeReport& Report)
	{
		if (Landscape == nullptr)
		{
			return;
		}

		++Report.LandscapeActorsScanned;

		TArray<ULandscapeComponent*> Components;
		Landscape->GetComponents<ULandscapeComponent>(Components);
		for (ULandscapeComponent* Component : Components)
		{
			++Report.LandscapeComponentsScanned;
			FProjectAcousticsLandscapeMeshData MeshData;
			if (BuildLandscapeComponentMeshData(
				Component,
				ParentTransform,
				SourceMap,
				SourceLabel,
				Options.LandscapeStep,
				MeshData,
				Report))
			{
				Report.GeneratedVertices += MeshData.Vertices.Num();
				Report.GeneratedTriangles += MeshData.Triangles.Num();
				++Report.LandscapeComponentsUsed;
				OutMeshData.Add(MoveTemp(MeshData));
			}
			else
			{
				++Report.LandscapeComponentsSkipped;
			}
		}
	}

	void CollectMapRecursive(
		const FString& InSourceMap,
		const FTransform& ParentTransform,
		const TArray<FName>& InheritedTags,
		const FString& SourcePrefix,
		const int32 Depth,
		const TSet<FString>& Stack,
		const FProjectAcousticsLandscapeOptions& Options,
		TArray<FProjectAcousticsLandscapeMeshData>& OutMeshData,
		FProjectAcousticsLandscapeReport& Report)
	{
		const FString SourceMap = NormalizePackagePath(InSourceMap);
		if (SourceMap.IsEmpty() || Depth > Options.MaxLevelInstanceDepth || Stack.Contains(SourceMap))
		{
			++Report.MapsSkipped;
			return;
		}

		if (!LoadEditorMap(SourceMap))
		{
			++Report.MapsSkipped;
			return;
		}

		UWorld* World = GetCurrentEditorWorld();
		if (World == nullptr)
		{
			++Report.MapsSkipped;
			return;
		}

		++Report.MapsScanned;
		Report.MaxNestedMapDepthSeen = FMath::Max(Report.MaxNestedMapDepthSeen, Depth);

		TArray<FProjectAcousticsChildMapRequest> ChildMaps;
		for (TActorIterator<AActor> ActorIt(World); ActorIt; ++ActorIt)
		{
			AActor* Actor = *ActorIt;
			if (Actor == nullptr)
			{
				continue;
			}

			++Report.ActorsScanned;
			const TArray<FName> Tags = MergeTags(InheritedTags, Actor);
			const FString ActorLabel = GetActorLabelSafe(Actor);
			const FString SourceLabel = SourcePrefix.IsEmpty() ? ActorLabel : SourcePrefix + ActorLabel;

			if (ILevelInstanceInterface* LevelInstance = Cast<ILevelInstanceInterface>(Actor))
			{
				++Report.LevelInstanceActorsSeen;
				const FString ChildMap = NormalizePackagePath(LevelInstance->GetWorldAssetPackage());
				if (!ChildMap.IsEmpty())
				{
					FProjectAcousticsChildMapRequest& ChildRequest = ChildMaps.AddDefaulted_GetRef();
					ChildRequest.SourceMap = ChildMap;
					ChildRequest.ParentTransform = ComposeChildTransform(Actor->GetActorTransform(), ParentTransform);
					ChildRequest.Tags = Tags;
					ChildRequest.SourcePrefix = SourceLabel + TEXT("/");
					++Report.LevelInstanceMapsQueued;
				}
			}

			if (!PassesTagFilter(Tags, Options))
			{
				continue;
			}

			if (ALandscapeProxy* Landscape = Cast<ALandscapeProxy>(Actor))
			{
				CollectLandscapeActor(Landscape, ParentTransform, SourceMap, SourceLabel, Options, OutMeshData, Report);
			}
		}

		for (ULevelStreaming* StreamingLevel : World->GetStreamingLevels())
		{
			++Report.StreamingLevelsSeen;
			if (StreamingLevel == nullptr)
			{
				continue;
			}

			const FString ChildMap = NormalizePackagePath(StreamingLevel->GetWorldAssetPackageName());
			if (!ChildMap.IsEmpty())
			{
				FProjectAcousticsChildMapRequest& ChildRequest = ChildMaps.AddDefaulted_GetRef();
				ChildRequest.SourceMap = ChildMap;
				ChildRequest.ParentTransform = ComposeChildTransform(StreamingLevel->LevelTransform, ParentTransform);
				ChildRequest.Tags = InheritedTags;
				ChildRequest.SourcePrefix = SourcePrefix + SanitizeAssetPart(FPaths::GetBaseFilename(ChildMap)) + TEXT("/");
				++Report.StreamingLevelMapsQueued;
			}
		}

		TSet<FString> ChildStack = Stack;
		ChildStack.Add(SourceMap);
		for (const FProjectAcousticsChildMapRequest& ChildMap : ChildMaps)
		{
			CollectMapRecursive(
				ChildMap.SourceMap,
				ChildMap.ParentTransform,
				ChildMap.Tags,
				ChildMap.SourcePrefix,
				Depth + 1,
				ChildStack,
				Options,
				OutMeshData,
				Report);
		}
	}

	UStaticMesh* CreateLandscapeStaticMeshAsset(
		const FProjectAcousticsLandscapeMeshData& MeshData,
		const FProjectAcousticsLandscapeOptions& Options,
		const FString& RunId,
		const int32 MeshIndex)
	{
		if (MeshData.Vertices.IsEmpty() || MeshData.Triangles.IsEmpty())
		{
			return nullptr;
		}

		const FString DestinationName = SanitizeAssetPart(FPaths::GetBaseFilename(Options.DestinationMap));
		const FString ComponentName = SanitizeAssetPart(MeshData.SourceComponentName);
		const FString AssetName = FString::Printf(TEXT("SM_%s_Landscape_%s_%03d_%s"), *DestinationName, *RunId, MeshIndex, *ComponentName).Left(120);
		FString GeneratedAssetRoot = Options.GeneratedAssetRoot;
		GeneratedAssetRoot.RemoveFromEnd(TEXT("/"));
		const FString PackageName = GeneratedAssetRoot + TEXT("/") + AssetName;
		UPackage* Package = CreatePackage(*PackageName);
		if (Package == nullptr)
		{
			return nullptr;
		}

		FMeshDescription MeshDescription;
		FStaticMeshAttributes StaticMeshAttributes(MeshDescription);
		StaticMeshAttributes.Register();

		FMeshDescriptionBuilder Builder;
		Builder.SetMeshDescription(&MeshDescription);
		Builder.EnablePolyGroups();
		Builder.SetNumUVLayers(1);
		Builder.ReserveNewVertices(MeshData.Vertices.Num());
		Builder.ReserveNewUVs(MeshData.Vertices.Num(), 0);

		TArray<FVertexID> VertexIds;
		VertexIds.Reserve(MeshData.Vertices.Num());
		for (const FVector& Vertex : MeshData.Vertices)
		{
			VertexIds.Add(Builder.AppendVertex(Vertex));
		}

		const FPolygonGroupID PolygonGroupId = Builder.AppendPolygonGroup(TEXT("Landscape"));
		for (const FIntVector& Triangle : MeshData.Triangles)
		{
			if (!VertexIds.IsValidIndex(Triangle.X) || !VertexIds.IsValidIndex(Triangle.Y) || !VertexIds.IsValidIndex(Triangle.Z))
			{
				continue;
			}

			const FVertexInstanceID Instance0 = Builder.AppendInstance(VertexIds[Triangle.X]);
			const FVertexInstanceID Instance1 = Builder.AppendInstance(VertexIds[Triangle.Y]);
			const FVertexInstanceID Instance2 = Builder.AppendInstance(VertexIds[Triangle.Z]);
			Builder.SetInstanceUV(Instance0, MeshData.UVs.IsValidIndex(Triangle.X) ? MeshData.UVs[Triangle.X] : FVector2D::ZeroVector);
			Builder.SetInstanceUV(Instance1, MeshData.UVs.IsValidIndex(Triangle.Y) ? MeshData.UVs[Triangle.Y] : FVector2D::ZeroVector);
			Builder.SetInstanceUV(Instance2, MeshData.UVs.IsValidIndex(Triangle.Z) ? MeshData.UVs[Triangle.Z] : FVector2D::ZeroVector);
			Builder.AppendTriangle(Instance0, Instance1, Instance2, PolygonGroupId);
		}

		UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, *AssetName, RF_Public | RF_Standalone);
		if (StaticMesh == nullptr)
		{
			return nullptr;
		}

		UMaterialInterface* Material = Cast<UMaterialInterface>(FSoftObjectPath(MeshData.MaterialPath).TryLoad());
		if (Material == nullptr)
		{
			Material = UMaterial::GetDefaultMaterial(MD_Surface);
		}

		StaticMesh->SetNumSourceModels(1);
		FMeshBuildSettings& BuildSettings = StaticMesh->GetSourceModel(0).BuildSettings;
		BuildSettings.bRecomputeNormals = true;
		BuildSettings.bRecomputeTangents = true;
		BuildSettings.bGenerateLightmapUVs = false;
		TArray<FStaticMaterial> StaticMaterials;
		StaticMaterials.Add(FStaticMaterial(Material, FName(TEXT("Landscape"))));
		StaticMesh->SetStaticMaterials(StaticMaterials);

		UStaticMesh::FBuildMeshDescriptionsParams BuildParams;
		BuildParams.bBuildSimpleCollision = false;
		BuildParams.bCommitMeshDescription = true;
		BuildParams.bMarkPackageDirty = true;
		BuildParams.bUseHashAsGuid = true;
		if (!StaticMesh->BuildFromMeshDescriptions({ &MeshDescription }, BuildParams))
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to build landscape proxy static mesh: %s"), *PackageName);
			return nullptr;
		}

		FAssetRegistryModule::AssetCreated(StaticMesh);
		Package->MarkPackageDirty();

		const FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		IFileManager::Get().MakeDirectory(*FPaths::GetPath(PackageFileName), true);

		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
		if (!UPackage::SavePackage(Package, StaticMesh, *PackageFileName, SaveArgs))
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to save landscape proxy static mesh: %s"), *PackageFileName);
			return nullptr;
		}

		return StaticMesh;
	}

	bool SpawnLandscapeProxyActor(UWorld* DestinationWorld, UStaticMesh* StaticMesh, const FProjectAcousticsLandscapeMeshData& MeshData, const int32 MeshIndex)
	{
		if (DestinationWorld == nullptr || StaticMesh == nullptr)
		{
			return false;
		}

		AStaticMeshActor* Actor = DestinationWorld->SpawnActor<AStaticMeshActor>(MeshData.ActorLocation, FRotator::ZeroRotator);
		if (Actor == nullptr)
		{
			return false;
		}

#if WITH_EDITOR
		const FString Label = FString::Printf(TEXT("ACPX_LAND_%05d_%s"), MeshIndex, *SanitizeAssetPart(MeshData.SourceActorLabel).Left(48));
		Actor->SetActorLabel(Label);
		Actor->SetFolderPath(ProxyStaticMeshFolder);
#endif

		Actor->Tags.AddUnique(AcousticProxyTag);
		Actor->Tags.AddUnique(AcousticGeometryTag);

		UStaticMeshComponent* StaticMeshComponent = Actor->GetStaticMeshComponent();
		if (StaticMeshComponent != nullptr)
		{
			StaticMeshComponent->SetMobility(EComponentMobility::Static);
			StaticMeshComponent->SetStaticMesh(StaticMesh);
			if (UMaterialInterface* Material = Cast<UMaterialInterface>(FSoftObjectPath(MeshData.MaterialPath).TryLoad()))
			{
				StaticMeshComponent->SetMaterial(0, Material);
			}
			StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}

		Actor->MarkPackageDirty();
		return true;
	}

	bool WriteReport(
		const FProjectAcousticsLandscapeOptions& Options,
		const FProjectAcousticsLandscapeReport& Report,
		const bool bCompleted)
	{
		const FString ResolvedReportPath = ResolveProjectFilePath(Options.ReportPath);
		IFileManager::Get().MakeDirectory(*FPaths::GetPath(ResolvedReportPath), true);
		const FString Json = FString::Printf(
			TEXT("{\n")
			TEXT("  \"summary\": {\n")
			TEXT("    \"completed\": %s,\n")
			TEXT("    \"sourceMap\": \"%s\",\n")
			TEXT("    \"destinationMap\": \"%s\",\n")
			TEXT("    \"generatedAssetRoot\": \"%s\",\n")
			TEXT("    \"landscapeStep\": %d,\n")
			TEXT("    \"mapsScanned\": %d,\n")
			TEXT("    \"mapsSkipped\": %d,\n")
			TEXT("    \"actorsScanned\": %d,\n")
			TEXT("    \"levelInstanceActorsSeen\": %d,\n")
			TEXT("    \"levelInstanceMapsQueued\": %d,\n")
			TEXT("    \"streamingLevelsSeen\": %d,\n")
			TEXT("    \"streamingLevelMapsQueued\": %d,\n")
			TEXT("    \"landscapeActorsScanned\": %d,\n")
			TEXT("    \"landscapeComponentsScanned\": %d,\n")
			TEXT("    \"landscapeComponentsUsed\": %d,\n")
			TEXT("    \"landscapeComponentsSkipped\": %d,\n")
			TEXT("    \"generatedMeshAssets\": %d,\n")
			TEXT("    \"spawnedLandscapeActors\": %d,\n")
			TEXT("    \"generatedVertices\": %d,\n")
			TEXT("    \"generatedTriangles\": %d,\n")
			TEXT("    \"hiddenQuadsSkipped\": %d,\n")
			TEXT("    \"proxyStaticMeshFolder\": \"%s\",\n")
			TEXT("    \"maxNestedMapDepthSeen\": %d\n")
			TEXT("  }\n")
			TEXT("}\n"),
			bCompleted ? TEXT("true") : TEXT("false"),
			*JsonEscape(Options.SourceMap),
			*JsonEscape(Options.DestinationMap),
			*JsonEscape(Options.GeneratedAssetRoot),
			Options.LandscapeStep,
			Report.MapsScanned,
			Report.MapsSkipped,
			Report.ActorsScanned,
			Report.LevelInstanceActorsSeen,
			Report.LevelInstanceMapsQueued,
			Report.StreamingLevelsSeen,
			Report.StreamingLevelMapsQueued,
			Report.LandscapeActorsScanned,
			Report.LandscapeComponentsScanned,
			Report.LandscapeComponentsUsed,
			Report.LandscapeComponentsSkipped,
			Report.GeneratedMeshAssets,
			Report.SpawnedLandscapeActors,
			Report.GeneratedVertices,
			Report.GeneratedTriangles,
			Report.HiddenQuadsSkipped,
			*JsonEscape(ProxyStaticMeshFolder.ToString()),
			Report.MaxNestedMapDepthSeen);
		return FFileHelper::SaveStringToFile(Json, *ResolvedReportPath);
	}
}

UProjectAcousticsLandscapeProxyCommandlet::UProjectAcousticsLandscapeProxyCommandlet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}

int32 UProjectAcousticsLandscapeProxyCommandlet::Main(const FString& Params)
{
	TArray<FString> Tokens;
	TArray<FString> Switches;
	TMap<FString, FString> ParamVals;
	ParseCommandLine(*Params, Tokens, Switches, ParamVals);

	FProjectAcousticsLandscapeOptions Options;
	ParamVals.RemoveAndCopyValue(TEXT("SourceMap"), Options.SourceMap);
	ParamVals.RemoveAndCopyValue(TEXT("DestinationMap"), Options.DestinationMap);
	ParamVals.RemoveAndCopyValue(TEXT("Report"), Options.ReportPath);
	ParamVals.RemoveAndCopyValue(TEXT("GeneratedAssetRoot"), Options.GeneratedAssetRoot);

	FString LandscapeStepText;
	if (ParamVals.RemoveAndCopyValue(TEXT("LandscapeStep"), LandscapeStepText))
	{
		LexFromString(Options.LandscapeStep, *LandscapeStepText);
	}
	FString MaxDepthText;
	if (ParamVals.RemoveAndCopyValue(TEXT("MaxLevelInstanceDepth"), MaxDepthText))
	{
		LexFromString(Options.MaxLevelInstanceDepth, *MaxDepthText);
	}
	Options.bOnlyAcousticTagged = Switches.Contains(TEXT("OnlyAcousticTagged"));

	Options.SourceMap = NormalizePackagePath(Options.SourceMap);
	Options.DestinationMap = NormalizePackagePath(Options.DestinationMap);
	Options.GeneratedAssetRoot = NormalizePackagePath(Options.GeneratedAssetRoot);
	Options.LandscapeStep = FMath::Max(1, Options.LandscapeStep);
	Options.MaxLevelInstanceDepth = FMath::Max(0, Options.MaxLevelInstanceDepth);

	FProjectAcousticsLandscapeReport Report;
	if (Options.SourceMap.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Missing -SourceMap=/Game/..."));
		WriteReport(Options, Report, false);
		return 1;
	}
	if (Options.DestinationMap.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Missing -DestinationMap=/Game/..."));
		WriteReport(Options, Report, false);
		return 1;
	}
	if (!Options.GeneratedAssetRoot.StartsWith(TEXT("/Game/")))
	{
		UE_LOG(LogTemp, Error, TEXT("GeneratedAssetRoot must be under /Game: %s"), *Options.GeneratedAssetRoot);
		WriteReport(Options, Report, false);
		return 1;
	}

	UE_LOG(LogTemp, Display, TEXT("Landscape acoustic proxy source: %s"), *Options.SourceMap);
	UE_LOG(LogTemp, Display, TEXT("Landscape acoustic proxy destination: %s"), *Options.DestinationMap);
	UE_LOG(LogTemp, Display, TEXT("Landscape step: %d"), Options.LandscapeStep);

	TArray<FProjectAcousticsLandscapeMeshData> MeshData;
	CollectMapRecursive(
		Options.SourceMap,
		FTransform::Identity,
		TArray<FName>(),
		FString(),
		0,
		TSet<FString>(),
		Options,
		MeshData,
		Report);

	if (!LoadEditorMap(Options.DestinationMap))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load destination map: %s"), *Options.DestinationMap);
		WriteReport(Options, Report, false);
		return 1;
	}

	UWorld* DestinationWorld = GetCurrentEditorWorld();
	if (DestinationWorld == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Destination world is null after loading: %s"), *Options.DestinationMap);
		WriteReport(Options, Report, false);
		return 1;
	}

	const FString RunId = FGuid::NewGuid().ToString(EGuidFormats::Short);
	for (int32 MeshIndex = 0; MeshIndex < MeshData.Num(); ++MeshIndex)
	{
		UStaticMesh* StaticMesh = CreateLandscapeStaticMeshAsset(MeshData[MeshIndex], Options, RunId, MeshIndex + 1);
		if (StaticMesh == nullptr)
		{
			continue;
		}

		++Report.GeneratedMeshAssets;
		if (SpawnLandscapeProxyActor(DestinationWorld, StaticMesh, MeshData[MeshIndex], MeshIndex + 1))
		{
			++Report.SpawnedLandscapeActors;
		}
	}

	bool bSavedMap = true;
	if (DestinationWorld->PersistentLevel != nullptr)
	{
		DestinationWorld->MarkPackageDirty();
		bSavedMap = FEditorFileUtils::SaveLevel(DestinationWorld->PersistentLevel);
	}

	WriteReport(Options, Report, bSavedMap);
	UE_LOG(LogTemp, Display, TEXT("Landscape proxy meshes: assets=%d actors=%d components=%d vertices=%d triangles=%d hiddenQuads=%d"),
		Report.GeneratedMeshAssets,
		Report.SpawnedLandscapeActors,
		Report.LandscapeComponentsUsed,
		Report.GeneratedVertices,
		Report.GeneratedTriangles,
		Report.HiddenQuadsSkipped);

	return bSavedMap ? 0 : 1;
}
