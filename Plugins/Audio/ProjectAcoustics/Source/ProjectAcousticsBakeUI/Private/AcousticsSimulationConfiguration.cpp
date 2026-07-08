// Copyright (c) 2022 Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "AcousticsSimulationConfiguration.h"
#include "MathUtils.h"
#include "XmlFile.h"
#include "Misc/FileHelper.h"
// Include for ENGINE_MAJOR_VERSION
#include "Runtime/Launch/Resources/Version.h"

namespace
{
	static const TCHAR* c_ManualProbeListOverrideMarker = TEXT("OrionManualProbeListOverride=true");

	bool TryParseXmlNodeDouble(const FXmlNode* ParentNode, const TCHAR* ChildNodeName, double& OutValue)
	{
		const FXmlNode* ChildNode = ParentNode != nullptr ? ParentNode->FindChildNode(ChildNodeName) : nullptr;
		if (ChildNode == nullptr)
		{
			return false;
		}

		FString ValueText = ChildNode->GetContent();
		ValueText.TrimStartAndEndInline();
		return LexTryParseString(OutValue, *ValueText);
	}

	bool TryParseXmlNodeInt(const FXmlNode* ParentNode, const TCHAR* ChildNodeName, int32& OutValue)
	{
		const FXmlNode* ChildNode = ParentNode != nullptr ? ParentNode->FindChildNode(ChildNodeName) : nullptr;
		if (ChildNode == nullptr)
		{
			return false;
		}

		FString ValueText = ChildNode->GetContent();
		ValueText.TrimStartAndEndInline();
		return LexTryParseString(OutValue, *ValueText);
	}

	bool IsProbeValueNode(const FXmlNode* ProbeNode)
	{
		return ProbeNode != nullptr && ProbeNode->GetTag().StartsWith(TEXT("value"));
	}
}

AcousticsSimulationConfiguration::~AcousticsSimulationConfiguration()
{
	if (m_CreateProbesFuture.IsValid())
	{
		m_CreateProbesFuture.Wait();
	}
	TritonPreprocessor_SimulationConfiguration_Destroy(m_Handle);
}

TUniquePtr<AcousticsSimulationConfiguration>
AcousticsSimulationConfiguration::Create(const FString workingDir, const FString& configFile)
{
	auto instance = TUniquePtr<AcousticsSimulationConfiguration>(new AcousticsSimulationConfiguration());
	if (!instance->Initialize(workingDir, configFile))
	{
		instance.Reset();
	}
	return instance;
}

TUniquePtr<AcousticsSimulationConfiguration> AcousticsSimulationConfiguration::Create(
	TSharedPtr<AcousticMesh> mesh, const TritonSimulationParameters& simulationParams,
	const TritonOperationalParameters& opParams, const AcousticsMaterialLibrary* library,
	TritonPreprocessorCallback callback)
{
	auto instance = TUniquePtr<AcousticsSimulationConfiguration>(new AcousticsSimulationConfiguration());
	if (!instance->Initialize(mesh, simulationParams, opParams, library, callback))
	{
		instance.Reset();
	}
	return instance;
}

SimulationConfigurationState AcousticsSimulationConfiguration::GetState() const
{
	// If there's a valid handle then config is ready
	if (m_Handle)
	{
		return SimulationConfigurationState::Ready;
	}

	// Otherwise check for async processing state
	if (m_CreateProbesFuture.IsValid())
	{
		// Result is not ready, processing is currently active
		if (m_CreateProbesFuture.IsReady() == false)
		{
			return SimulationConfigurationState::InProcess;
		}
		// Result is ready, check for state
		else
		{
			return (
				m_CreateProbesFuture.Get() == false ? SimulationConfigurationState::Failed
													: SimulationConfigurationState::Ready);
		}
	}

	// No handle, no future, no config
	return SimulationConfigurationState::Unavailable;
}

bool AcousticsSimulationConfiguration::IsReady() const
{
	// Config is ready when the handle is valid
	return GetState() == SimulationConfigurationState::Ready;
}

int AcousticsSimulationConfiguration::GetProbeCount() const
{
	auto count = 0;
	TritonPreprocessor_SimulationConfiguration_GetProbeCount(m_Handle, &count);
	return count;
}

bool AcousticsSimulationConfiguration::GetProbeList(TArray<FVector>& locations) const
{
	if (TryReadProbeListFromConfigFile(locations))
	{
		return true;
	}

	int probeCount = 0;
	if (!TritonPreprocessor_SimulationConfiguration_GetProbeCount(m_Handle, &probeCount))
	{
		return false;
	}

	locations.SetNum(probeCount);

	for (auto index = 0; index < probeCount; ++index)
	{
		ATKVectorD pos;
		if (!TritonPreprocessor_SimulationConfiguration_GetProbePoint(m_Handle, index, &pos))
		{
			return false;
		}
		locations[index] = AcousticsUtils::TritonPositionToUnreal(AcousticsUtils::ToFVector(pos));
	}

	return true;
}

bool AcousticsSimulationConfiguration::TryReadProbeListFromConfigFile(TArray<FVector>& locations) const
{
	locations.Reset();
	if (!m_LoadedFromConfigFile || m_WorkingDir.IsEmpty() || m_ConfigFilename.IsEmpty())
	{
		return false;
	}

	const FString ConfigFilePath =
		FPaths::ConvertRelativePathToFull(FPaths::Combine(m_WorkingDir, m_ConfigFilename));
	FString ConfigXmlText;
	if (!FFileHelper::LoadFileToString(ConfigXmlText, *ConfigFilePath) ||
		!ConfigXmlText.Contains(c_ManualProbeListOverrideMarker))
	{
		return false;
	}

	FXmlFile ConfigXml(ConfigFilePath);
	if (!ConfigXml.IsValid())
	{
		return false;
	}

	const FXmlNode* RootNode = ConfigXml.GetRootNode();
	int32 ExpectedProbeCount = 0;
	if (!TryParseXmlNodeInt(RootNode, TEXT("NumProbes"), ExpectedProbeCount))
	{
		return false;
	}

	const FXmlNode* ProbeListNode = RootNode != nullptr ? RootNode->FindChildNode(TEXT("ProbeList")) : nullptr;
	if (ProbeListNode == nullptr)
	{
		return ExpectedProbeCount == 0;
	}

	for (const FXmlNode* ProbeNode : ProbeListNode->GetChildrenNodes())
	{
		if (!IsProbeValueNode(ProbeNode))
		{
			continue;
		}

		double TritonX = 0.0;
		double TritonY = 0.0;
		double TritonZ = 0.0;
		if (!TryParseXmlNodeDouble(ProbeNode, TEXT("i"), TritonX) ||
			!TryParseXmlNodeDouble(ProbeNode, TEXT("j"), TritonY) ||
			!TryParseXmlNodeDouble(ProbeNode, TEXT("k"), TritonZ))
		{
			locations.Reset();
			return false;
		}

		locations.Add(AcousticsUtils::TritonPositionToUnreal(FVector(TritonX, TritonY, TritonZ)));
	}

	if (locations.Num() != ExpectedProbeCount)
	{
		locations.Reset();
		return false;
	}

	return true;
}

bool AcousticsSimulationConfiguration::Initialize(
	TSharedPtr<AcousticMesh> mesh, const TritonSimulationParameters& simulationParams,
	const TritonOperationalParameters& opParams, const AcousticsMaterialLibrary* library,
	TritonPreprocessorCallback& callback)
{
	// Async processing to avoid blocking the UI thread
#if __cplusplus < 202002L  // pre-C++20 code
	m_CreateProbesFuture = Async(EAsyncExecution::ThreadPool, [=]() {
#else
	m_CreateProbesFuture = Async(EAsyncExecution::ThreadPool, [=, this]() {
#endif
		auto libraryHandle = library ? library->GetHandle() : nullptr;
		return TritonPreprocessor_SimulationConfiguration_Create(
			mesh->GetHandle(),
			const_cast<TritonSimulationParameters*>(&simulationParams),
			const_cast<TritonOperationalParameters*>(&opParams),
			libraryHandle,
			callback,
			&m_Handle);
	});
	return true;
}

bool AcousticsSimulationConfiguration::Initialize(const FString& workingDir, const FString& configFilename)
{
	m_WorkingDir = workingDir;
	m_ConfigFilename = configFilename;
	m_LoadedFromConfigFile = true;
	return TritonPreprocessor_SimulationConfiguration_CreateFromFile(
		TCHAR_TO_ANSI(*workingDir), TCHAR_TO_ANSI(*configFilename), &m_Handle);
}

bool AcousticsSimulationConfiguration::GetVoxelMapInfo(
	FBox& box, FBox& boxTriton, FIntVector& voxelCounts, float& cellSize) const
{
	TritonBoundingBox tritonBox;
	ATKVectorI counts;
	float tritonCellSize;
	auto success =
		TritonPreprocessor_SimulationConfiguration_GetVoxelMapInfo(m_Handle, &tritonBox, &counts, &tritonCellSize);
	if (success)
	{
		boxTriton = FBox(
			FVector(tritonBox.MinCorner.x, tritonBox.MinCorner.y, tritonBox.MinCorner.z),
			FVector(tritonBox.MaxCorner.x, tritonBox.MaxCorner.y, tritonBox.MaxCorner.z));

		// Convert from Triton to UE world space. Need to recompute box after coordinate transform.
		FVector v0 = AcousticsUtils::TritonPositionToUnreal(boxTriton.Min);
		FVector v1 = AcousticsUtils::TritonPositionToUnreal(boxTriton.Max);
		box = FBox(v0.ComponentMin(v1), v0.ComponentMax(v1));

		// Since coordinate transform is just flip in Y, total count along (x,y,z) resp. is preserved
		voxelCounts = FIntVector(counts.x, counts.y, counts.z);

		cellSize = tritonCellSize * 100;
	}
	return success;
}

bool AcousticsSimulationConfiguration::IsVoxelOccupied(int x, int y, int z) const
{
	bool occupied = false;
	if (!TritonPreprocessor_SimulationConfiguration_IsVoxelOccupied(m_Handle, ATKVectorI{x, y, z}, &occupied))
	{
		return false;
	}
	return occupied;
}
