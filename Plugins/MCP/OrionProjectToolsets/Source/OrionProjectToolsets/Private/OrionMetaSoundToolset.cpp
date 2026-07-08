/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionMetaSoundToolset.h"

#include "Editor.h"
#include "Interfaces/MetasoundOutputFormatInterfaces.h"
#include "MetasoundBuilderBase.h"
#include "MetasoundBuilderSubsystem.h"
#include "MetasoundDocumentInterface.h"
#include "MetasoundEditorSubsystem.h"
#include "MetasoundFrontendDocument.h"
#include "MetasoundFrontendLiteral.h"
#include "Misc/PackageName.h"
#include "OrionProjectToolsetUtils.h"
#include "ScopedTransaction.h"
#include "String/LexFromString.h"
#include "UObject/Object.h"
#include "UObject/Package.h"
#include "UObject/ScriptInterface.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionMetaSoundToolset)

namespace UE::OrionProjectToolsets::MetaSound
{
	static constexpr const TCHAR* ProjectAcousticsInterfaceName = TEXT("ProjectAcoustics");

	static FString TrimString(const FString& Value)
	{
		return Value.TrimStartAndEnd();
	}

	static FString NormalizePackagePath(const FString& PackagePath)
	{
		FString Path = TrimString(PackagePath);
		Path.ReplaceInline(TEXT("\\"), TEXT("/"));
		if (Path.StartsWith(TEXT("Content/")))
		{
			Path = TEXT("/Game/") + Path.RightChop(8);
		}
		while (Path.EndsWith(TEXT("/")))
		{
			Path.LeftChopInline(1);
		}
		return Path;
	}

	static FString MakeObjectPath(const FString& PackagePath, const FString& AssetName)
	{
		return PackagePath + TEXT("/") + AssetName + TEXT(".") + AssetName;
	}

	static FName MakeBuilderName(const FString& BaseName)
	{
		return FName(*FString::Printf(
		TEXT("OrionMetaSound_%s_%s"),
		*BaseName,
		*FGuid::NewGuid().ToString(EGuidFormats::Digits)));
	}

	static FString GuidToString(const FGuid& Guid)
	{
		return Guid.ToString(EGuidFormats::DigitsWithHyphensLower);
	}

	static FOrionMetaSoundNodeResult MakeNodeResult(
	bool bSuccess,
	const FString& Message,
	const FString& AssetPath = FString(),
	const FGuid& NodeId = FGuid(),
	const FGuid& VertexId = FGuid())
	{
		FOrionMetaSoundNodeResult Result;
		Result.bSuccess = bSuccess;
		Result.Message = Message;
		Result.AssetPath = AssetPath;
		if (NodeId.IsValid())
		{
			Result.NodeId = GuidToString(NodeId);
		}
		if (VertexId.IsValid())
		{
			Result.VertexId = GuidToString(VertexId);
		}
		return Result;
	}

	static FOrionMetaSoundDescription MakeDescriptionResult(bool bSuccess, const FString& Message, const FString& AssetPath = FString())
	{
		FOrionMetaSoundDescription Result;
		Result.bSuccess = bSuccess;
		Result.Message = Message;
		Result.AssetPath = AssetPath;
		return Result;
	}

	static FOrionMetaSoundVertexInfo MakeVertexInfo(const FMetasoundFrontendVertex& Vertex)
	{
		FOrionMetaSoundVertexInfo Info;
		Info.VertexId = GuidToString(Vertex.VertexID);
		Info.Name = Vertex.Name.ToString();
		Info.DataType = Vertex.TypeName.ToString();
		return Info;
	}

	static const FMetasoundFrontendClass* FindClassById(const FMetasoundFrontendDocument& Document, const FGuid& ClassId)
	{
		if (Document.RootGraph.ID == ClassId)
		{
			return &Document.RootGraph;
		}

		for (const FMetasoundFrontendGraphClass& Subgraph : Document.Subgraphs)
		{
			if (Subgraph.ID == ClassId)
			{
				return &Subgraph;
			}
		}

		for (const FMetasoundFrontendClass& Dependency : Document.Dependencies)
		{
			if (Dependency.ID == ClassId)
			{
				return &Dependency;
			}
		}

		return nullptr;
	}

	static FString GetClassNameForNode(const FMetasoundFrontendDocument& Document, const FMetasoundFrontendNode& Node)
	{
		if (const FMetasoundFrontendClass* Class = FindClassById(Document, Node.ClassID))
		{
			return Class->Metadata.GetClassName().ToString();
		}

		return FString();
	}

	static bool ValidateNewAssetArgs(const FString& PackagePath, const FString& AssetName, FString& OutObjectPath, FString& OutError)
	{
		if (PackagePath.IsEmpty())
		{
			OutError = TEXT("PackagePath is empty.");
			return false;
		}

		if (AssetName.IsEmpty())
		{
			OutError = TEXT("AssetName is empty.");
			return false;
		}

		const FString PackageName = PackagePath + TEXT("/") + AssetName;
		FText Reason;
		if (!FPackageName::IsValidLongPackageName(PackageName, true, &Reason))
		{
			OutError = FString::Printf(TEXT("Asset package '%s' is invalid: %s"), *PackageName, *Reason.ToString());
			return false;
		}

		OutObjectPath = MakeObjectPath(PackagePath, AssetName);
		if (StaticLoadObject(UObject::StaticClass(), nullptr, *OutObjectPath))
		{
			OutError = FString::Printf(TEXT("Asset '%s' already exists."), *OutObjectPath);
			return false;
		}

		return true;
	}

	static bool ParseOutputFormat(const FString& OutputFormatText, EMetaSoundOutputAudioFormat& OutFormat, FString& OutError)
	{
		FString Normalized = TrimString(OutputFormatText).ToLower();
		Normalized.ReplaceInline(TEXT("_"), TEXT(""));
		Normalized.ReplaceInline(TEXT("-"), TEXT(""));
		Normalized.ReplaceInline(TEXT(" "), TEXT(""));

		if (Normalized.IsEmpty() || Normalized == TEXT("mono"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::Mono;
			return true;
		}
		if (Normalized == TEXT("stereo"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::Stereo;
			return true;
		}
		if (Normalized == TEXT("quad"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::Quad;
			return true;
		}
		if (Normalized == TEXT("fivedotone") || Normalized == TEXT("5.1") || Normalized == TEXT("51"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::FiveDotOne;
			return true;
		}
		if (Normalized == TEXT("sevendotone") || Normalized == TEXT("7.1") || Normalized == TEXT("71"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::SevenDotOne;
			return true;
		}
		if (Normalized == TEXT("channelagnostic"))
		{
			OutFormat = EMetaSoundOutputAudioFormat::ChannelAgnostic;
			return true;
		}

		OutError = FString::Printf(TEXT("Unsupported MetaSound output format '%s'."), *OutputFormatText);
		return false;
	}

	static bool ParseGuid(const FString& GuidText, FGuid& OutGuid, FString& OutError)
	{
		if (FGuid::Parse(TrimString(GuidText), OutGuid) && OutGuid.IsValid())
		{
			return true;
		}

		OutError = FString::Printf(TEXT("NodeId '%s' is not a valid GUID."), *GuidText);
		return false;
	}

	static bool ParseBoolLiteral(const FString& ValueText, bool& OutValue, FString& OutError)
	{
		const FString Normalized = TrimString(ValueText).ToLower();
		if (Normalized == TEXT("true") || Normalized == TEXT("1") || Normalized == TEXT("yes"))
		{
			OutValue = true;
			return true;
		}
		if (Normalized == TEXT("false") || Normalized == TEXT("0") || Normalized == TEXT("no"))
		{
			OutValue = false;
			return true;
		}

		OutError = FString::Printf(TEXT("Cannot parse '%s' as Bool literal."), *ValueText);
		return false;
	}

	static bool MakeLiteral(const FString& LiteralTypeText, const FString& LiteralValue, FMetasoundFrontendLiteral& OutLiteral, FString& OutError)
	{
		const FString LiteralType = TrimString(LiteralTypeText).ToLower();
		if (LiteralType.IsEmpty() || LiteralType == TEXT("none") || LiteralType == TEXT("default"))
		{
			OutLiteral.Set(FMetasoundFrontendLiteral::FDefault());
			return true;
		}

		if (LiteralType == TEXT("bool") || LiteralType == TEXT("boolean"))
		{
			bool Value = false;
			if (!ParseBoolLiteral(LiteralValue, Value, OutError))
			{
				return false;
			}
			OutLiteral.Set(Value);
			return true;
		}

		if (LiteralType == TEXT("float"))
		{
			float Value = 0.0f;
			if (!LexTryParseString(Value, *TrimString(LiteralValue)))
			{
				OutError = FString::Printf(TEXT("Cannot parse '%s' as Float literal."), *LiteralValue);
				return false;
			}
			OutLiteral.Set(Value);
			return true;
		}

		if (LiteralType == TEXT("int") || LiteralType == TEXT("int32") || LiteralType == TEXT("integer"))
		{
			int32 Value = 0;
			if (!LexTryParseString(Value, *TrimString(LiteralValue)))
			{
				OutError = FString::Printf(TEXT("Cannot parse '%s' as Int32 literal."), *LiteralValue);
				return false;
			}
			OutLiteral.Set(Value);
			return true;
		}

		if (LiteralType == TEXT("string"))
		{
			OutLiteral.Set(LiteralValue);
			return true;
		}

		OutError = FString::Printf(TEXT("Unsupported MetaSound literal type '%s'."), *LiteralTypeText);
		return false;
	}

	static UMetaSoundBuilderSubsystem* GetBuilderSubsystem(FString& OutError)
	{
		UMetaSoundBuilderSubsystem* BuilderSubsystem = UMetaSoundBuilderSubsystem::Get();
		if (!BuilderSubsystem)
		{
			OutError = TEXT("MetaSoundBuilderSubsystem is not available.");
		}
		return BuilderSubsystem;
	}

	static UMetaSoundEditorSubsystem* GetEditorSubsystem(FString& OutError)
	{
		UMetaSoundEditorSubsystem* EditorSubsystem = GEditor ? GEditor->GetEditorSubsystem<UMetaSoundEditorSubsystem>() : nullptr;
		if (!EditorSubsystem)
		{
			OutError = TEXT("MetaSoundEditorSubsystem is not available.");
		}
		return EditorSubsystem;
	}

	static bool LoadMetaSoundDocument(const FString& MetaSoundPath, TScriptInterface<IMetaSoundDocumentInterface>& OutDocument, FString& OutError)
	{
		UObject* Object = UE::OrionProjectToolsets::LoadObjectFromPath(MetaSoundPath, OutError);
		if (!Object)
		{
			return false;
		}

		if (!Object->GetClass()->ImplementsInterface(UMetaSoundDocumentInterface::StaticClass()))
		{
			OutError = FString::Printf(TEXT("Object '%s' does not implement IMetaSoundDocumentInterface."), *Object->GetPathName());
			return false;
		}

		IMetaSoundDocumentInterface* DocumentInterface = Cast<IMetaSoundDocumentInterface>(Object);
		if (!DocumentInterface)
		{
			OutError = FString::Printf(TEXT("Object '%s' could not be cast to IMetaSoundDocumentInterface."), *Object->GetPathName());
			return false;
		}

		OutDocument.SetObject(Object);
		OutDocument.SetInterface(DocumentInterface);
		return true;
	}

	static UMetaSoundBuilderBase* FindBuilderForAsset(
	UMetaSoundEditorSubsystem* EditorSubsystem,
	const TScriptInterface<IMetaSoundDocumentInterface>& Document,
	FString& OutError)
	{
		if (!EditorSubsystem)
		{
			OutError = TEXT("MetaSoundEditorSubsystem is null.");
			return nullptr;
		}

		EMetaSoundBuilderResult BuilderResult = EMetaSoundBuilderResult::Failed;
		UMetaSoundBuilderBase* Builder = EditorSubsystem->FindOrBeginBuilding(Document, BuilderResult);
		if (!Builder || BuilderResult != EMetaSoundBuilderResult::Succeeded)
		{
			OutError = FString::Printf(TEXT("Failed to begin building MetaSound '%s'."), *UE::OrionProjectToolsets::GetObjectPathSafe(Document.GetObject()));
			return nullptr;
		}

		return Builder;
	}

	static FOrionToolResult FinishDocumentEdit(
	UMetaSoundBuilderBase* Builder,
	const TScriptInterface<IMetaSoundDocumentInterface>& Document,
	const FString& Message,
	bool bSave)
	{
		using namespace UE::OrionProjectToolsets;

		if (!Builder)
		{
			return MakeResult(false, TEXT("MetaSound builder is null."));
		}

		UObject* Asset = Document.GetObject();
		if (!Asset)
		{
			return MakeResult(false, TEXT("MetaSound document object is null."));
		}

		Asset->Modify();
		Builder->BuildAndOverwriteMetaSound(Document, false);
		Asset->MarkPackageDirty();

		if (bSave)
		{
			FString SaveError;
			if (!SaveLoadedAsset(Asset, false, SaveError))
			{
				return MakeResult(false, SaveError, Asset->GetPathName());
			}
		}

		return MakeResult(true, Message, Asset->GetPathName());
	}

	static FOrionToolResult LoadBuilderAndEdit(
	const FString& MetaSoundPath,
	bool bSave,
	TFunctionRef<bool(UMetaSoundBuilderBase& Builder, TScriptInterface<IMetaSoundDocumentInterface>& Document, FString& OutError)> EditFunction,
	const FString& SuccessMessage)
	{
		using namespace UE::OrionProjectToolsets;

		FString Error;
		UMetaSoundEditorSubsystem* EditorSubsystem = GetEditorSubsystem(Error);
		if (!EditorSubsystem)
		{
			return MakeResult(false, Error, MetaSoundPath);
		}

		TScriptInterface<IMetaSoundDocumentInterface> Document;
		if (!LoadMetaSoundDocument(MetaSoundPath, Document, Error))
		{
			return MakeResult(false, Error, MetaSoundPath);
		}

		UMetaSoundBuilderBase* Builder = FindBuilderForAsset(EditorSubsystem, Document, Error);
		if (!Builder)
		{
			return MakeResult(false, Error, MetaSoundPath);
		}

		const FScopedTransaction Transaction(NSLOCTEXT("OrionMetaSoundToolset", "EditMetaSound", "Edit MetaSound"));
		if (!EditFunction(*Builder, Document, Error))
		{
			return MakeResult(false, Error, MetaSoundPath);
		}

		return FinishDocumentEdit(Builder, Document, SuccessMessage, bSave);
	}

	static FOrionMetaSoundNodeResult LoadBuilderAndEditNode(
	const FString& MetaSoundPath,
	bool bSave,
	TFunctionRef<bool(UMetaSoundBuilderBase& Builder, TScriptInterface<IMetaSoundDocumentInterface>& Document, FGuid& OutNodeId, FGuid& OutVertexId, FString& OutError)> EditFunction,
	const FString& SuccessMessage)
	{
		FString Error;
		UMetaSoundEditorSubsystem* EditorSubsystem = GetEditorSubsystem(Error);
		if (!EditorSubsystem)
		{
			return MakeNodeResult(false, Error, MetaSoundPath);
		}

		TScriptInterface<IMetaSoundDocumentInterface> Document;
		if (!LoadMetaSoundDocument(MetaSoundPath, Document, Error))
		{
			return MakeNodeResult(false, Error, MetaSoundPath);
		}

		UMetaSoundBuilderBase* Builder = FindBuilderForAsset(EditorSubsystem, Document, Error);
		if (!Builder)
		{
			return MakeNodeResult(false, Error, MetaSoundPath);
		}

		FGuid NodeId;
		FGuid VertexId;
		const FScopedTransaction Transaction(NSLOCTEXT("OrionMetaSoundToolset", "EditMetaSoundNode", "Edit MetaSound Node"));
		if (!EditFunction(*Builder, Document, NodeId, VertexId, Error))
		{
			return MakeNodeResult(false, Error, MetaSoundPath);
		}

		const FOrionToolResult FinishResult = FinishDocumentEdit(Builder, Document, SuccessMessage, bSave);
		return MakeNodeResult(FinishResult.bSuccess, FinishResult.Message, FinishResult.AssetPath, NodeId, VertexId);
	}
}

FOrionMetaSoundDescription UOrionMetaSoundToolset::DescribeAsset(const FString& MetaSoundPath)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::MetaSound;

	FString Error;
	TScriptInterface<IMetaSoundDocumentInterface> Document;
	if (!LoadMetaSoundDocument(MetaSoundPath, Document, Error))
	{
		return MakeDescriptionResult(false, Error, MetaSoundPath);
	}

	const IMetaSoundDocumentInterface* DocumentInterface = Document.GetInterface();
	if (!DocumentInterface)
	{
		return MakeDescriptionResult(false, TEXT("MetaSound document interface is null."), MetaSoundPath);
	}

	const FMetasoundFrontendDocument& FrontendDocument = DocumentInterface->GetConstDocument();
	const FMetasoundFrontendGraph& Graph = FrontendDocument.RootGraph.GetConstDefaultGraph();

	FOrionMetaSoundDescription Description = MakeDescriptionResult(true, TEXT("MetaSound asset described."), GetObjectPathSafe(Document.GetObject()));
	Description.RootClassName = FrontendDocument.RootGraph.Metadata.GetClassName().ToString();
	Description.EdgeCount = Graph.Edges.Num();

	for (const FMetasoundFrontendVersion& Interface : FrontendDocument.Interfaces)
	{
		Description.Interfaces.Add(Interface.ToString());
	}
	Description.Interfaces.Sort();

	for (const FMetasoundFrontendNode& Node : Graph.Nodes)
	{
		FOrionMetaSoundNodeInfo NodeInfo;
		NodeInfo.NodeId = GuidToString(Node.GetID());
		NodeInfo.NodeName = Node.Name.ToString();
		NodeInfo.ClassName = GetClassNameForNode(FrontendDocument, Node);

		for (const FMetasoundFrontendVertex& Input : Node.Interface.Inputs)
		{
			NodeInfo.Inputs.Add(MakeVertexInfo(Input));
		}

		for (const FMetasoundFrontendVertex& Output : Node.Interface.Outputs)
		{
			NodeInfo.Outputs.Add(MakeVertexInfo(Output));
		}

		Description.Nodes.Add(MoveTemp(NodeInfo));
	}

	return Description;
}

FOrionToolResult UOrionMetaSoundToolset::CreateSourceAsset(
	const FString& PackagePath,
	const FString& AssetName,
	const FString& OutputFormat,
	bool bIsOneShot,
	bool bAddProjectAcousticsInterface,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::MetaSound;

	FString Error;
	const FString NormalizedPackagePath = NormalizePackagePath(PackagePath);
	const FString NormalizedAssetName = TrimString(AssetName);

	FString ObjectPath;
	if (!ValidateNewAssetArgs(NormalizedPackagePath, NormalizedAssetName, ObjectPath, Error))
	{
		return MakeResult(false, Error, ObjectPath);
	}

	EMetaSoundOutputAudioFormat ParsedOutputFormat = EMetaSoundOutputAudioFormat::Mono;
	if (!ParseOutputFormat(OutputFormat, ParsedOutputFormat, Error))
	{
		return MakeResult(false, Error, ObjectPath);
	}

	UMetaSoundBuilderSubsystem* BuilderSubsystem = GetBuilderSubsystem(Error);
	if (!BuilderSubsystem)
	{
		return MakeResult(false, Error, ObjectPath);
	}

	UMetaSoundEditorSubsystem* EditorSubsystem = GetEditorSubsystem(Error);
	if (!EditorSubsystem)
	{
		return MakeResult(false, Error, ObjectPath);
	}

	EMetaSoundBuilderResult BuilderResult = EMetaSoundBuilderResult::Failed;
	FMetaSoundBuilderNodeOutputHandle OnPlayNodeOutput;
	FMetaSoundBuilderNodeInputHandle OnFinishedNodeInput;
	TArray<FMetaSoundBuilderNodeInputHandle> AudioOutNodeInputs;
	UMetaSoundSourceBuilder* Builder = BuilderSubsystem->CreateSourceBuilder(
		MakeBuilderName(NormalizedAssetName),
		OnPlayNodeOutput,
		OnFinishedNodeInput,
		AudioOutNodeInputs,
		BuilderResult,
		ParsedOutputFormat,
		bIsOneShot);

	if (!Builder || BuilderResult != EMetaSoundBuilderResult::Succeeded)
	{
		return MakeResult(false, TEXT("Failed to create MetaSound Source builder."), ObjectPath);
	}

	if (bAddProjectAcousticsInterface)
	{
		Builder->AddInterface(FName(ProjectAcousticsInterfaceName), BuilderResult);
		if (BuilderResult != EMetaSoundBuilderResult::Succeeded)
		{
			return MakeResult(false, TEXT("Failed to add ProjectAcoustics interface to MetaSound Source builder."), ObjectPath);
		}
	}

	EMetaSoundBuilderResult BuildResult = EMetaSoundBuilderResult::Failed;
	TScriptInterface<IMetaSoundDocumentInterface> NewMetaSound = EditorSubsystem->BuildToAsset(
		Builder,
		TEXT("Orion MCP"),
		NormalizedAssetName,
		NormalizedPackagePath,
		BuildResult);

	UObject* Asset = NewMetaSound.GetObject();
	if (!Asset || BuildResult != EMetaSoundBuilderResult::Succeeded)
	{
		return MakeResult(false, TEXT("Failed to build MetaSound Source asset."), ObjectPath);
	}

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Asset, false, SaveError))
		{
			return MakeResult(false, SaveError, Asset->GetPathName());
		}
	}

	return MakeResult(true, TEXT("MetaSound Source asset created."), Asset->GetPathName());
}

FOrionToolResult UOrionMetaSoundToolset::CreatePatchAsset(const FString& PackagePath, const FString& AssetName, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::MetaSound;

	FString Error;
	const FString NormalizedPackagePath = NormalizePackagePath(PackagePath);
	const FString NormalizedAssetName = TrimString(AssetName);

	FString ObjectPath;
	if (!ValidateNewAssetArgs(NormalizedPackagePath, NormalizedAssetName, ObjectPath, Error))
	{
		return MakeResult(false, Error, ObjectPath);
	}

	UMetaSoundBuilderSubsystem* BuilderSubsystem = GetBuilderSubsystem(Error);
	if (!BuilderSubsystem)
	{
		return MakeResult(false, Error, ObjectPath);
	}

	UMetaSoundEditorSubsystem* EditorSubsystem = GetEditorSubsystem(Error);
	if (!EditorSubsystem)
	{
		return MakeResult(false, Error, ObjectPath);
	}

	EMetaSoundBuilderResult BuilderResult = EMetaSoundBuilderResult::Failed;
	UMetaSoundPatchBuilder* Builder = BuilderSubsystem->CreatePatchBuilder(MakeBuilderName(NormalizedAssetName), BuilderResult);
	if (!Builder || BuilderResult != EMetaSoundBuilderResult::Succeeded)
	{
		return MakeResult(false, TEXT("Failed to create MetaSound Patch builder."), ObjectPath);
	}

	EMetaSoundBuilderResult BuildResult = EMetaSoundBuilderResult::Failed;
	TScriptInterface<IMetaSoundDocumentInterface> NewMetaSound = EditorSubsystem->BuildToAsset(
		Builder,
		TEXT("Orion MCP"),
		NormalizedAssetName,
		NormalizedPackagePath,
		BuildResult);

	UObject* Asset = NewMetaSound.GetObject();
	if (!Asset || BuildResult != EMetaSoundBuilderResult::Succeeded)
	{
		return MakeResult(false, TEXT("Failed to build MetaSound Patch asset."), ObjectPath);
	}

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Asset, false, SaveError))
		{
			return MakeResult(false, SaveError, Asset->GetPathName());
		}
	}

	return MakeResult(true, TEXT("MetaSound Patch asset created."), Asset->GetPathName());
}

FOrionToolResult UOrionMetaSoundToolset::AddInterface(const FString& MetaSoundPath, const FString& InterfaceName, bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&InterfaceName](UMetaSoundBuilderBase& Builder, TScriptInterface<IMetaSoundDocumentInterface>&, FString& OutError)
		{
			const FString NormalizedInterfaceName = TrimString(InterfaceName);
			if (NormalizedInterfaceName.IsEmpty())
			{
				OutError = TEXT("InterfaceName is empty.");
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			Builder.AddInterface(FName(*NormalizedInterfaceName), Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(TEXT("Failed to add MetaSound interface '%s'."), *InterfaceName);
				return false;
			}

			return true;
		},
		TEXT("MetaSound interface added."));
}

FOrionMetaSoundNodeResult UOrionMetaSoundToolset::AddGraphInput(
	const FString& MetaSoundPath,
	const FString& InputName,
	const FString& DataType,
	const FString& LiteralType,
	const FString& LiteralValue,
	bool bIsConstructorInput,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEditNode(
		MetaSoundPath,
		bSave,
		[&InputName, &DataType, &LiteralType, &LiteralValue, bIsConstructorInput](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FGuid& OutNodeId,
			FGuid& OutVertexId,
			FString& OutError)
		{
			FMetasoundFrontendLiteral Literal;
			if (!MakeLiteral(LiteralType, LiteralValue, Literal, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			const FMetaSoundBuilderNodeOutputHandle Handle = Builder.AddGraphInputNode(
				FName(*TrimString(InputName)),
				FName(*TrimString(DataType)),
				Literal,
				Result,
				bIsConstructorInput);

			if (Result != EMetaSoundBuilderResult::Succeeded || !Handle.NodeID.IsValid())
			{
				OutError = FString::Printf(TEXT("Failed to add MetaSound graph input '%s'."), *InputName);
				return false;
			}

			OutNodeId = Handle.NodeID;
			OutVertexId = Handle.VertexID;
			return true;
		},
		TEXT("MetaSound graph input added."));
}

FOrionMetaSoundNodeResult UOrionMetaSoundToolset::AddGraphOutput(
	const FString& MetaSoundPath,
	const FString& OutputName,
	const FString& DataType,
	const FString& LiteralType,
	const FString& LiteralValue,
	bool bIsConstructorOutput,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEditNode(
		MetaSoundPath,
		bSave,
		[&OutputName, &DataType, &LiteralType, &LiteralValue, bIsConstructorOutput](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FGuid& OutNodeId,
			FGuid& OutVertexId,
			FString& OutError)
		{
			FMetasoundFrontendLiteral Literal;
			if (!MakeLiteral(LiteralType, LiteralValue, Literal, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			const FMetaSoundBuilderNodeInputHandle Handle = Builder.AddGraphOutputNode(
				FName(*TrimString(OutputName)),
				FName(*TrimString(DataType)),
				Literal,
				Result,
				bIsConstructorOutput);

			if (Result != EMetaSoundBuilderResult::Succeeded || !Handle.NodeID.IsValid())
			{
				OutError = FString::Printf(TEXT("Failed to add MetaSound graph output '%s'."), *OutputName);
				return false;
			}

			OutNodeId = Handle.NodeID;
			OutVertexId = Handle.VertexID;
			return true;
		},
		TEXT("MetaSound graph output added."));
}

FOrionMetaSoundNodeResult UOrionMetaSoundToolset::AddNodeByClassName(
	const FString& MetaSoundPath,
	const FString& Namespace,
	const FString& Name,
	const FString& Variant,
	int32 MajorVersion,
	float LocationX,
	float LocationY,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEditNode(
		MetaSoundPath,
		bSave,
		[&Namespace, &Name, &Variant, MajorVersion, LocationX, LocationY](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FGuid& OutNodeId,
			FGuid& OutVertexId,
			FString& OutError)
		{
			FString NormalizedNamespace = TrimString(Namespace);
			FString NormalizedName = TrimString(Name);
			FString NormalizedVariant = TrimString(Variant);
			if (NormalizedNamespace.IsEmpty() || NormalizedName.IsEmpty())
			{
				OutError = TEXT("Namespace and Name are required for MetaSound node class names.");
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			const FMetasoundFrontendClassName NodeClassName{
				FName(*NormalizedNamespace),
				FName(*NormalizedName),
				FName(*NormalizedVariant)
			};
			const FMetaSoundNodeHandle NodeHandle = Builder.AddNodeByClassName(NodeClassName, Result, MajorVersion);
			if (Result != EMetaSoundBuilderResult::Succeeded || !NodeHandle.NodeID.IsValid())
			{
				OutError = FString::Printf(TEXT("Failed to add MetaSound node '%s'."), *NodeClassName.ToString());
				return false;
			}

			Result = EMetaSoundBuilderResult::Failed;
			Builder.SetNodeLocation(NodeHandle, FVector2D(LocationX, LocationY), Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(TEXT("MetaSound node '%s' was added, but setting its location failed."), *NodeClassName.ToString());
				return false;
			}

			OutNodeId = NodeHandle.NodeID;
			return true;
		},
		TEXT("MetaSound node added."));
}

FOrionToolResult UOrionMetaSoundToolset::SetNodeInputDefault(
	const FString& MetaSoundPath,
	const FString& NodeId,
	const FString& InputName,
	const FString& LiteralType,
	const FString& LiteralValue,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&NodeId, &InputName, &LiteralType, &LiteralValue](UMetaSoundBuilderBase& Builder, TScriptInterface<IMetaSoundDocumentInterface>&, FString& OutError)
		{
			FGuid ParsedNodeId;
			if (!ParseGuid(NodeId, ParsedNodeId, OutError))
			{
				return false;
			}

			FMetasoundFrontendLiteral Literal;
			if (!MakeLiteral(LiteralType, LiteralValue, Literal, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			const FMetaSoundNodeHandle NodeHandle(ParsedNodeId);
			const FMetaSoundBuilderNodeInputHandle InputHandle = Builder.FindNodeInputByName(NodeHandle, FName(*TrimString(InputName)), Result);
			if (Result != EMetaSoundBuilderResult::Succeeded || !InputHandle.NodeID.IsValid())
			{
				OutError = FString::Printf(TEXT("MetaSound node input '%s' was not found."), *InputName);
				return false;
			}

			Result = EMetaSoundBuilderResult::Failed;
			Builder.SetNodeInputDefault(InputHandle, Literal, Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(TEXT("Failed to set MetaSound node input default '%s'."), *InputName);
				return false;
			}

			return true;
		},
		TEXT("MetaSound node input default set."));
}

FOrionToolResult UOrionMetaSoundToolset::ConnectNodes(
	const FString& MetaSoundPath,
	const FString& SourceNodeId,
	const FString& SourceOutputName,
	const FString& DestinationNodeId,
	const FString& DestinationInputName,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&SourceNodeId, &SourceOutputName, &DestinationNodeId, &DestinationInputName](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FString& OutError)
		{
			FGuid ParsedSourceNodeId;
			if (!ParseGuid(SourceNodeId, ParsedSourceNodeId, OutError))
			{
				return false;
			}

			FGuid ParsedDestinationNodeId;
			if (!ParseGuid(DestinationNodeId, ParsedDestinationNodeId, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			Builder.ConnectNodes(
				FMetaSoundNodeHandle(ParsedSourceNodeId),
				FName(*TrimString(SourceOutputName)),
				FMetaSoundNodeHandle(ParsedDestinationNodeId),
				FName(*TrimString(DestinationInputName)),
				Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(
					TEXT("Failed to connect MetaSound node output '%s' to input '%s'."),
					*SourceOutputName,
					*DestinationInputName);
				return false;
			}

			return true;
		},
		TEXT("MetaSound nodes connected."));
}

FOrionToolResult UOrionMetaSoundToolset::ConnectGraphInputToNode(
	const FString& MetaSoundPath,
	const FString& GraphInputName,
	const FString& DestinationNodeId,
	const FString& DestinationInputName,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&GraphInputName, &DestinationNodeId, &DestinationInputName](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FString& OutError)
		{
			FGuid ParsedDestinationNodeId;
			if (!ParseGuid(DestinationNodeId, ParsedDestinationNodeId, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			Builder.ConnectGraphInputToNode(
				FName(*TrimString(GraphInputName)),
				FMetaSoundNodeHandle(ParsedDestinationNodeId),
				FName(*TrimString(DestinationInputName)),
				Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(
					TEXT("Failed to connect MetaSound graph input '%s' to node input '%s'."),
					*GraphInputName,
					*DestinationInputName);
				return false;
			}

			return true;
		},
		TEXT("MetaSound graph input connected to node."));
}

FOrionToolResult UOrionMetaSoundToolset::ConnectNodeToGraphOutput(
	const FString& MetaSoundPath,
	const FString& SourceNodeId,
	const FString& SourceOutputName,
	const FString& GraphOutputName,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&SourceNodeId, &SourceOutputName, &GraphOutputName](
			UMetaSoundBuilderBase& Builder,
			TScriptInterface<IMetaSoundDocumentInterface>&,
			FString& OutError)
		{
			FGuid ParsedSourceNodeId;
			if (!ParseGuid(SourceNodeId, ParsedSourceNodeId, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			Builder.ConnectNodeToGraphOutput(
				FMetaSoundNodeHandle(ParsedSourceNodeId),
				FName(*TrimString(SourceOutputName)),
				FName(*TrimString(GraphOutputName)),
				Result);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(
					TEXT("Failed to connect MetaSound node output '%s' to graph output '%s'."),
					*SourceOutputName,
					*GraphOutputName);
				return false;
			}

			return true;
		},
		TEXT("MetaSound node connected to graph output."));
}

FOrionToolResult UOrionMetaSoundToolset::RemoveNode(
	const FString& MetaSoundPath,
	const FString& NodeId,
	bool bRemoveUnusedDependencies,
	bool bSave)
{
	using namespace UE::OrionProjectToolsets::MetaSound;

	return LoadBuilderAndEdit(
		MetaSoundPath,
		bSave,
		[&NodeId, bRemoveUnusedDependencies](UMetaSoundBuilderBase& Builder, TScriptInterface<IMetaSoundDocumentInterface>&, FString& OutError)
		{
			FGuid ParsedNodeId;
			if (!ParseGuid(NodeId, ParsedNodeId, OutError))
			{
				return false;
			}

			EMetaSoundBuilderResult Result = EMetaSoundBuilderResult::Failed;
			Builder.RemoveNode(FMetaSoundNodeHandle(ParsedNodeId), Result, bRemoveUnusedDependencies);
			if (Result != EMetaSoundBuilderResult::Succeeded)
			{
				OutError = FString::Printf(TEXT("Failed to remove MetaSound node '%s'."), *NodeId);
				return false;
			}

			return true;
		},
		TEXT("MetaSound node removed."));
}
