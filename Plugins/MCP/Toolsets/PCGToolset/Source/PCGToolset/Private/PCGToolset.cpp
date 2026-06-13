// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolset.h"

#include "ToolsetRegistry/ToolCallAsyncResultVoid.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGToolset)

namespace UE::PCGToolset::Private
{
static constexpr const TCHAR* UnsupportedMessage =
	TEXT("PCGToolset requires UE 5.8 PCG editor/runtime APIs. This project is compiling against the UE 5.6-based source branch, where PCGDataView, PCGDefaultActorExecutionSource, and several graph edge/inspection APIs do not exist.");

static void RaiseUnsupported()
{
	UE::MCPCompat::RaiseScriptError(UnsupportedMessage);
}
}

UPCGGraph* UPCGToolset::CreateGraph(const FString& Name, const FString& Path)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return nullptr;
}

FPCGGraphStructure UPCGToolset::GetGraphStructure(const UPCGGraph* Graph)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FPCGGraphStructure();
}

bool UPCGToolset::SetGraphParams(UPCGGraph* Graph, const TArray<FPCGParamDefinition>& Params)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

bool UPCGToolset::RemoveGraphParams(UPCGGraph* Graph, const TArray<FName>& ParamNames)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

FPCGGraphSchema UPCGToolset::GetGraphSchema(const UPCGGraph* Graph)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FPCGGraphSchema();
}

FString UPCGToolset::GetGraphDescription(const UPCGGraph* Graph)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FString();
}

bool UPCGToolset::SetGraphDescription(UPCGGraph* Graph, const FString& Description)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

TArray<FPCGGraphInstanceInfo> UPCGToolset::ListGraphInstances()
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return TArray<FPCGGraphInstanceInfo>();
}

FPCGGraphInstanceInfo UPCGToolset::SpawnGraphInstance(UPCGGraph* Graph, const FString& Name, const FTransform& Transform, const FString& JsonParams)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FPCGGraphInstanceInfo();
}

UPCGExecuteGraphInstanceAsyncResult* UPCGToolset::ExecuteGraphInstance(const APCGVolume* PCGVolume)
{
	UPCGExecuteGraphInstanceAsyncResult* AsyncResult = NewObject<UPCGExecuteGraphInstanceAsyncResult>();
	AsyncResult->SetError(UE::PCGToolset::Private::UnsupportedMessage);
	return AsyncResult;
}

FInstancedPropertyBag UPCGToolset::GetGraphInstanceParams(const APCGVolume* PCGVolume)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FInstancedPropertyBag();
}

bool UPCGToolset::SetGraphInstanceParams(const APCGVolume* PCGVolume, const FString& JsonParams)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

bool UPCGToolset::ResetGraphInstanceParams(const APCGVolume* PCGVolume, const TArray<FName>& ParamNames)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

TArray<FString> UPCGToolset::ListNativeNodes(const bool bCommonOnly)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return TArray<FString>();
}

TArray<FString> UPCGToolset::ListAvailableSubgraphs()
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return TArray<FString>();
}

FPCGNativeNodeSchema UPCGToolset::GetNativeNodeSchema(const FString& NodeName)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FPCGNativeNodeSchema();
}

UPCGNode* UPCGToolset::AddNode(
	UPCGGraph* Graph,
	const FString& NativeNodeType,
	const FString& NodeName,
	const FString& JsonParams,
	const FString& NodeTitle,
	const FString& NodeComment,
	const int32 XPositionIdx,
	const int32 YPositionIdx)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return nullptr;
}

UPCGNode* UPCGToolset::AddSubgraphNode(
	UPCGGraph* Graph,
	UPCGGraph* SubGraphForNode,
	const FString& NodeName,
	const FString& JsonParams,
	const FString& NodeTitle,
	const FString& NodeComment,
	const int32 XPositionIdx,
	const int32 YPositionIdx)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return nullptr;
}

bool UPCGToolset::UpdateNode(UPCGNode* Node, const FString& JsonParams, const FString& NodeTitle)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

bool UPCGToolset::SetNodeComment(UPCGNode* Node, const FString& NodeComment)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

FPCGNodeInfo UPCGToolset::GetNodeInfo(const UPCGNode* Node)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FPCGNodeInfo();
}

bool UPCGToolset::RepositionNode(UPCGNode* Node, const int32 XPositionIdx, const int32 YPositionIdx)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

bool UPCGToolset::RemoveNode(UPCGGraph* Graph, UPCGNode* Node)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

TArray<UPCGNode*> UPCGToolset::ConnectNodePins(UPCGNode* FromNode, const FString& FromPinLabel, UPCGNode* ToNode, const FString& ToPinLabel)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return TArray<UPCGNode*>();
}

bool UPCGToolset::DisconnectNodePins(UPCGNode* FromNode, const FString& FromPinLabel, UPCGNode* ToNode, const FString& ToPinLabel)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

FString UPCGToolset::GetNodeDataView(
	const APCGVolume* PCGVolume,
	const UPCGNode* Node,
	const FString& PinLabel,
	const FString& AttributeName,
	const int32 StartIndex,
	const int32 EndIndex)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return TEXT("{}");
}

FString UPCGToolset::AddCommentBox(UPCGGraph* Graph, const TArray<UPCGNode*>& Nodes, const FString& Comment, FLinearColor Color)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return FString();
}

bool UPCGToolset::UpdateCommentBox(
	UPCGGraph* Graph,
	const FString& CommentId,
	const TArray<UPCGNode*>& Nodes,
	const FString& Comment,
	FLinearColor Color)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

bool UPCGToolset::RemoveCommentBox(UPCGGraph* Graph, const FString& CommentId)
{
	UE::PCGToolset::Private::RaiseUnsupported();
	return false;
}

UToolCallAsyncResultVoid* UPCGToolset::DrawSpline(const FString& ActorLabel, const FString& ActorTag, bool bRedraw, bool bClosedSpline)
{
	UToolCallAsyncResultVoid* AsyncResult = NewObject<UToolCallAsyncResultVoid>();
	AsyncResult->SetError(UE::PCGToolset::Private::UnsupportedMessage);
	return AsyncResult;
}
