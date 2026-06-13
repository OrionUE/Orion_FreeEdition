// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolsetLibraryCore.h"

#include "Policies/CondensedJsonPrintPolicy.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

namespace PCGToolsetLibrary
{
namespace Json
{
TSharedPtr<FJsonObject> ParseJson(const FString& JsonString)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
	FJsonSerializer::Deserialize(Reader, JsonObject);
	return JsonObject;
}

FString ToJsonString(const TSharedPtr<FJsonObject>& JsonObject)
{
	if (!JsonObject.IsValid())
	{
		return TEXT("{}");
	}

	FString Out;
	TSharedRef<TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>> Writer =
		TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&Out);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	return Out;
}

FString ToJsonString(const TArray<TSharedPtr<FJsonValue>>& JsonArray)
{
	FString Out;
	TSharedRef<TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>> Writer =
		TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&Out);
	FJsonSerializer::Serialize(JsonArray, Writer);
	return Out;
}
}

namespace Graph
{
FInstancedPropertyBag BuildFilteredBag(const FInstancedPropertyBag& SourceBag)
{
	return SourceBag;
}

void EnablePropertyOverrides(UPCGGraphInstance* GraphInstance, const TSharedPtr<FJsonObject>& JsonKeys)
{
}

bool IsPrimitiveInternalParam(const FProperty* Property)
{
	return false;
}

void RaiseScopedErrors(const PCGUtils::FScopedCall& ScopedCall)
{
}

FString VerbosityToString(ELogVerbosity::Type Verbosity)
{
	switch (Verbosity)
	{
	case ELogVerbosity::Error:
	case ELogVerbosity::Fatal:
		return TEXT("Error");
	case ELogVerbosity::Warning:
		return TEXT("Warning");
	default:
		return TEXT("Log");
	}
}

FInstancedPropertyBag GetGraphParams(const UPCGGraph* Graph)
{
	return FInstancedPropertyBag();
}

FInstancedPropertyBag GetSubgraphNodeParamOverrides(const UPCGSubgraphSettings* SubgraphSettings, const UPCGGraph* Subgraph)
{
	return FInstancedPropertyBag();
}

bool SetGraphInstanceParams(UPCGGraphInstance* GraphInstance, const FString& JsonParams)
{
	return false;
}

TArray<FPCGNodeInfo> GetGraphNodesInfo(const UPCGGraph* Graph)
{
	return TArray<FPCGNodeInfo>();
}

TArray<FProperty*> GetNodePropertiesFromSettings(TSubclassOf<UPCGSettings> InSettingsClass)
{
	return TArray<FProperty*>();
}

const TMap<FName, UPCGSettings*>& GetNodeNameToSettingsMap()
{
	static TMap<FName, UPCGSettings*> EmptyMap;
	return EmptyMap;
}

FPCGNodeInfo GetNodeInfo(const UPCGNode* Node)
{
	return FPCGNodeInfo();
}

TArray<FPCGPinInfo> GetNodePinsSchema(const TArray<FPCGPinProperties>& PinProperties)
{
	return TArray<FPCGPinInfo>();
}

TArray<FPCGEdgeInfo> GetGraphEdges(const UPCGGraph* Graph)
{
	return TArray<FPCGEdgeInfo>();
}

UPCGSettings* GetRealDefaultObject(UClass* PCGSettingClass)
{
	return PCGSettingClass ? Cast<UPCGSettings>(PCGSettingClass->GetDefaultObject()) : nullptr;
}

TArray<FString> FindGraphPaths(const TSet<FName>& PackagePaths, TFunctionRef<bool(const FString&)> PathPredicate)
{
	return TArray<FString>();
}
}

namespace Constants
{
TSet<FName> GetSubgraphDirectories()
{
	return TSet<FName>();
}

TSet<FName> GetExamplesDirectories()
{
	return TSet<FName>();
}

TSet<FName> GetInstantGraphDirectories()
{
	return TSet<FName>();
}
}
}
