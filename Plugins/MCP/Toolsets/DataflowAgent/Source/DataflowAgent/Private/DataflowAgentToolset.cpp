// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataflowAgentToolset.h"

namespace UE::DataflowAgentToolset::Private
{
static constexpr const TCHAR* UnsupportedMessage =
	TEXT("DataflowAgentToolset requires UE 5.8 Dataflow editor APIs. This project is compiling against the UE 5.6-based source branch, where DataflowTemplateRegistry and several graph editing APIs do not exist.");

static void RaiseUnsupported()
{
	UE::MCPCompat::RaiseScriptError(UnsupportedMessage);
}
}

FString UDataflowAgentToolset::CreateGraph(const FString& Name, const FString& Path)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return FString();
}

FString UDataflowAgentToolset::GetGraphStructure(const UDataflow* Graph)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return FString();
}

FString UDataflowAgentToolset::ListNodeTypes(const bool bCommonOnly)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return TEXT("[]");
}

FString UDataflowAgentToolset::GetNodeTypeSchema(const FString& TypeName)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return TEXT("{}");
}

UDataflowEdNode* UDataflowAgentToolset::AddNode(
	UDataflow* Graph,
	const FString& TypeName,
	const FString& NodeName,
	const FString& JsonParams,
	const int32 X,
	const int32 Y)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return nullptr;
}

void UDataflowAgentToolset::UpdateNode(UDataflowEdNode* Node, const FString& JsonParams)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

FString UDataflowAgentToolset::GetNodeInfo(UDataflowEdNode* Node)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return TEXT("{}");
}

void UDataflowAgentToolset::RepositionNode(UDataflowEdNode* Node, const int32 X, const int32 Y)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

void UDataflowAgentToolset::RemoveNode(UDataflow* Graph, UDataflowEdNode* Node)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

bool UDataflowAgentToolset::ConnectNodePins(
	UDataflowEdNode* FromNode,
	const FString& FromPin,
	UDataflowEdNode* ToNode,
	const FString& ToPin)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return false;
}

void UDataflowAgentToolset::DisconnectNodePins(
	UDataflowEdNode* FromNode,
	const FString& FromPin,
	UDataflowEdNode* ToNode,
	const FString& ToPin)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

FString UDataflowAgentToolset::ListVariables(const UDataflow* Graph)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return TEXT("[]");
}

bool UDataflowAgentToolset::AddVariable(UDataflow* Graph, const FString& Name, const FString& Type)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return false;
}

void UDataflowAgentToolset::RemoveVariable(UDataflow* Graph, const FString& Name)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

bool UDataflowAgentToolset::SetVariable(UDataflow* Graph, const FString& Name, const FString& Value)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return false;
}

FString UDataflowAgentToolset::AddCommentBox(
	UDataflow* Graph,
	const TArray<UDataflowEdNode*>& Nodes,
	const FString& Comment,
	FLinearColor Color)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return FString();
}

void UDataflowAgentToolset::RemoveCommentBox(UDataflow* Graph, const FString& CommentId)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
}

FString UDataflowAgentToolset::ListDataflowCompatibleAssetTypes()
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return TEXT("[]");
}

FString UDataflowAgentToolset::CreateDataflowCompatibleAsset(
	const FString& ClassName,
	const FString& Name,
	const FString& Path)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return FString();
}

FString UDataflowAgentToolset::CreateDataflowCompatibleAssetFromTemplate(
	const FString& ClassName,
	const FString& Name,
	const FString& Path,
	const FString& TemplateId)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return FString();
}

FString UDataflowAgentToolset::ListDataflowTemplatesForAssetClass(
	const FString& ClassName,
	const bool bIncludeBlank)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return bIncludeBlank
		? TEXT("[{\"templateId\":\"\",\"displayName\":\"Blank\",\"tooltip\":\"Create an empty graph.\"}]")
		: TEXT("[]");
}

bool UDataflowAgentToolset::AssignDataflowTemplate(UObject* Asset, const FString& TemplateId)
{
	UE::DataflowAgentToolset::Private::RaiseUnsupported();
	return false;
}
