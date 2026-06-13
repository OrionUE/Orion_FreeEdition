/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionBlueprintGraphToolset.h"

#include "BlueprintEditorLibrary.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphNode_Comment.h"
#include "Engine/Blueprint.h"
#include "Engine/MemberReference.h"
#include "K2Node.h"
#include "K2Node_AddDelegate.h"
#include "K2Node_AssignDelegate.h"
#include "K2Node_BaseMCDelegate.h"
#include "K2Node_CallDelegate.h"
#include "K2Node_CallFunction.h"
#include "K2Node_ClearDelegate.h"
#include "K2Node_ComponentBoundEvent.h"
#include "K2Node_CreateDelegate.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_DynamicCast.h"
#include "K2Node_EditablePinBase.h"
#include "K2Node_Event.h"
#include "K2Node_ExecutionSequence.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_FunctionResult.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_Knot.h"
#include "K2Node_MacroInstance.h"
#include "K2Node_StructOperation.h"
#include "K2Node_Variable.h"
#include "K2Node_RemoveDelegate.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "OrionProjectToolsetUtils.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/Field.h"
#include "UObject/Package.h"
#include "UObject/SoftObjectPath.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionBlueprintGraphToolset)

namespace UE::OrionProjectToolsets::BlueprintGraph
{
static FString BlueprintStatusToString(const UBlueprint* Blueprint)
{
	if (!Blueprint)
	{
		return TEXT("Invalid");
	}

	switch (Blueprint->Status)
	{
	case BS_Dirty:
		return TEXT("Dirty");
	case BS_Error:
		return TEXT("Error");
	case BS_UpToDate:
		return TEXT("UpToDate");
	case BS_BeingCreated:
		return TEXT("BeingCreated");
	case BS_UpToDateWithWarnings:
		return TEXT("UpToDateWithWarnings");
	case BS_Unknown:
	default:
		return TEXT("Unknown");
	}
}

static FName ResolvePinCategory(const FString& Category)
{
	const FString Normalized = Category.ToLower();
	if (Normalized == TEXT("exec"))
	{
		return UEdGraphSchema_K2::PC_Exec;
	}
	if (Normalized == TEXT("bool") || Normalized == TEXT("boolean"))
	{
		return UEdGraphSchema_K2::PC_Boolean;
	}
	if (Normalized == TEXT("byte") || Normalized == TEXT("enum"))
	{
		return UEdGraphSchema_K2::PC_Byte;
	}
	if (Normalized == TEXT("class"))
	{
		return UEdGraphSchema_K2::PC_Class;
	}
	if (Normalized == TEXT("softclass"))
	{
		return UEdGraphSchema_K2::PC_SoftClass;
	}
	if (Normalized == TEXT("int") || Normalized == TEXT("integer"))
	{
		return UEdGraphSchema_K2::PC_Int;
	}
	if (Normalized == TEXT("int64"))
	{
		return UEdGraphSchema_K2::PC_Int64;
	}
	if (Normalized == TEXT("float"))
	{
		return UEdGraphSchema_K2::PC_Float;
	}
	if (Normalized == TEXT("double"))
	{
		return UEdGraphSchema_K2::PC_Double;
	}
	if (Normalized == TEXT("real"))
	{
		return UEdGraphSchema_K2::PC_Real;
	}
	if (Normalized == TEXT("name"))
	{
		return UEdGraphSchema_K2::PC_Name;
	}
	if (Normalized == TEXT("delegate"))
	{
		return UEdGraphSchema_K2::PC_Delegate;
	}
	if (Normalized == TEXT("object"))
	{
		return UEdGraphSchema_K2::PC_Object;
	}
	if (Normalized == TEXT("interface"))
	{
		return UEdGraphSchema_K2::PC_Interface;
	}
	if (Normalized == TEXT("softobject"))
	{
		return UEdGraphSchema_K2::PC_SoftObject;
	}
	if (Normalized == TEXT("string"))
	{
		return UEdGraphSchema_K2::PC_String;
	}
	if (Normalized == TEXT("text"))
	{
		return UEdGraphSchema_K2::PC_Text;
	}
	if (Normalized == TEXT("struct"))
	{
		return UEdGraphSchema_K2::PC_Struct;
	}

	return UEdGraphSchema_K2::PC_Wildcard;
}

static FEdGraphTerminalType MakeTerminalType(const FString& Category, const FString& SubCategory, const FString& SubCategoryObjectPath)
{
	FEdGraphTerminalType TerminalType;
	TerminalType.TerminalCategory = ResolvePinCategory(Category);
	TerminalType.TerminalSubCategory = FName(*SubCategory);
	if (!SubCategoryObjectPath.IsEmpty())
	{
		FString Error;
		TerminalType.TerminalSubCategoryObject = LoadObjectFromPath(SubCategoryObjectPath, Error);
	}
	return TerminalType;
}

static FEdGraphPinType MakePinType(const FOrionBlueprintPinTypeSpec& Spec)
{
	FEdGraphPinType PinType;
	PinType.PinCategory = ResolvePinCategory(Spec.Category);
	PinType.PinSubCategory = FName(*Spec.SubCategory);
	if (!Spec.SubCategoryObjectPath.IsEmpty())
	{
		FString Error;
		PinType.PinSubCategoryObject = LoadObjectFromPath(Spec.SubCategoryObjectPath, Error);
	}
	PinType.ContainerType = FEdGraphPinType::ToPinContainerType(Spec.bIsArray, Spec.bIsSet, Spec.bIsMap);
	PinType.bIsReference = Spec.bIsReference;
	PinType.bIsConst = Spec.bIsConst;

	if (PinType.IsMap())
	{
		PinType.PinValueType = MakeTerminalType(Spec.ValueCategory, Spec.ValueSubCategory, Spec.ValueSubCategoryObjectPath);
	}

	return PinType;
}

static FString PinTypeToString(const FEdGraphPinType& PinType)
{
	TArray<FString> Parts;
	Parts.Add(PinType.PinCategory.ToString());
	if (!PinType.PinSubCategory.IsNone())
	{
		Parts.Add(PinType.PinSubCategory.ToString());
	}
	if (PinType.PinSubCategoryObject.IsValid())
	{
		Parts.Add(PinType.PinSubCategoryObject->GetPathName());
	}
	if (PinType.IsArray())
	{
		Parts.Add(TEXT("Array"));
	}
	else if (PinType.IsSet())
	{
		Parts.Add(TEXT("Set"));
	}
	else if (PinType.IsMap())
	{
		Parts.Add(TEXT("Map"));
	}
	if (PinType.bIsReference)
	{
		Parts.Add(TEXT("Reference"));
	}
	if (PinType.bIsConst)
	{
		Parts.Add(TEXT("Const"));
	}
	return FString::Join(Parts, TEXT("|"));
}

static FString PinDirectionToString(EEdGraphPinDirection Direction)
{
	return Direction == EGPD_Input ? TEXT("Input") : TEXT("Output");
}

static bool DirectionMatches(EEdGraphPinDirection Direction, const FString& DirectionFilter)
{
	if (DirectionFilter.IsEmpty())
	{
		return true;
	}

	const FString Normalized = DirectionFilter.ToLower();
	return (Normalized == TEXT("input") && Direction == EGPD_Input) ||
		(Normalized == TEXT("output") && Direction == EGPD_Output);
}

static FOrionBlueprintPinInfo MakePinInfo(const UEdGraphPin* Pin)
{
	FOrionBlueprintPinInfo Info;
	if (!Pin)
	{
		return Info;
	}

	Info.Name = Pin->PinName.ToString();
	Info.Direction = PinDirectionToString(Pin->Direction);
	Info.Type = PinTypeToString(Pin->PinType);
	Info.DefaultValue = Pin->GetDefaultAsString();
	Info.LinkCount = Pin->LinkedTo.Num();
	return Info;
}

static FOrionBlueprintNodeInfo MakeNodeInfo(const UEdGraphNode* Node)
{
	FOrionBlueprintNodeInfo Info;
	if (!Node)
	{
		return Info;
	}

	Info.Guid = Node->NodeGuid.ToString(EGuidFormats::DigitsWithHyphens);
	Info.Title = Node->GetNodeTitle(ENodeTitleType::ListView).ToString();
	Info.ClassPath = Node->GetClass()->GetPathName();
	Info.NodePosX = Node->NodePosX;
	Info.NodePosY = Node->NodePosY;
	for (const UEdGraphPin* Pin : Node->Pins)
	{
		Info.Pins.Add(MakePinInfo(Pin));
	}
	return Info;
}

static FOrionBlueprintNodeResult MakeNodeResult(bool bSuccess, const FString& Message, const FString& AssetPath, const FString& GraphName, UEdGraphNode* Node)
{
	FOrionBlueprintNodeResult Result;
	Result.bSuccess = bSuccess;
	Result.Message = Message;
	Result.AssetPath = AssetPath;
	Result.GraphName = GraphName;
	Result.Node = MakeNodeInfo(Node);
	return Result;
}

static UEdGraph* FindGraph(UBlueprint* Blueprint, const FString& GraphName)
{
	if (!Blueprint)
	{
		return nullptr;
	}

	TArray<UEdGraph*> Graphs;
	Blueprint->GetAllGraphs(Graphs);
	for (UEdGraph* Graph : Graphs)
	{
		if (Graph && Graph->GetName() == GraphName)
		{
			return Graph;
		}
	}

	return nullptr;
}

static UEdGraphNode* FindNode(UEdGraph* Graph, const FString& NodeGuid)
{
	if (!Graph)
	{
		return nullptr;
	}

	FGuid Guid;
	if (!FGuid::Parse(NodeGuid, Guid))
	{
		return nullptr;
	}

	for (UEdGraphNode* Node : Graph->Nodes)
	{
		if (Node && Node->NodeGuid == Guid)
		{
			return Node;
		}
	}

	return nullptr;
}

static UEdGraphPin* FindPin(UEdGraphNode* Node, const FOrionBlueprintPinSelector& Selector)
{
	if (!Node)
	{
		return nullptr;
	}

	int32 MatchIndex = 0;
	for (UEdGraphPin* Pin : Node->Pins)
	{
		if (!Pin)
		{
			continue;
		}

		const bool bNameMatches = Selector.PinName.IsEmpty() || Pin->PinName.ToString() == Selector.PinName;
		if (bNameMatches && DirectionMatches(Pin->Direction, Selector.Direction))
		{
			if (Selector.PinIndex < 0 || Selector.PinIndex == MatchIndex)
			{
				return Pin;
			}
			++MatchIndex;
		}
	}

	return nullptr;
}

static bool CompileIfRequested(UBlueprint* Blueprint, bool bCompile, FString& OutError)
{
	if (!bCompile)
	{
		return true;
	}

	if (!Blueprint)
	{
		OutError = TEXT("Blueprint is null.");
		return false;
	}

	FCompilerResultsLog CompileLog;
	FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::None, &CompileLog);
	if (Blueprint->Status == BS_Error)
	{
		OutError = TEXT("Blueprint compile failed.");
		return false;
	}

	return true;
}

static void MarkBlueprintChanged(UBlueprint* Blueprint, bool bStructural)
{
	if (!Blueprint)
	{
		return;
	}

	if (bStructural)
	{
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}
	else
	{
		FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
	}
	Blueprint->MarkPackageDirty();
}

static bool HasOrphanedPins(const UEdGraphNode* Node)
{
	if (!Node)
	{
		return false;
	}

	for (const UEdGraphPin* Pin : Node->Pins)
	{
		if (Pin && Pin->bOrphanedPin)
		{
			return true;
		}
	}

	return false;
}

static bool IsInvalidMigrationNode(const UBlueprint* Blueprint, UEdGraphNode* Node, FString& OutReason)
{
	if (!Blueprint || !Node)
	{
		return false;
	}

	if (HasOrphanedPins(Node))
	{
		OutReason = TEXT("orphaned pin");
		return true;
	}

	if (UK2Node_CallFunction* CallFunctionNode = Cast<UK2Node_CallFunction>(Node))
	{
		if (!CallFunctionNode->FunctionReference.GetMemberName().IsNone() && !CallFunctionNode->GetTargetFunction())
		{
			OutReason = FString::Printf(TEXT("missing function %s"), *CallFunctionNode->FunctionReference.GetMemberName().ToString());
			return true;
		}
	}

	if (UK2Node_StructOperation* StructOperationNode = Cast<UK2Node_StructOperation>(Node))
	{
		if (!StructOperationNode->StructType)
		{
			OutReason = TEXT("missing struct type");
			return true;
		}
	}

	if (UK2Node_DynamicCast* DynamicCastNode = Cast<UK2Node_DynamicCast>(Node))
	{
		if (!DynamicCastNode->TargetType)
		{
			OutReason = TEXT("missing cast target");
			return true;
		}
	}

	if (UK2Node_Variable* VariableNode = Cast<UK2Node_Variable>(Node))
	{
		if (!VariableNode->VariableReference.IsLocalScope()
			&& !VariableNode->GetVarName().IsNone()
			&& !VariableNode->GetPropertyForVariable()
			&& !VariableNode->GetPropertyForVariableFromSkeleton())
		{
			OutReason = FString::Printf(TEXT("missing variable %s"), *VariableNode->GetVarName().ToString());
			return true;
		}
	}

	if (UK2Node_ComponentBoundEvent* ComponentBoundEventNode = Cast<UK2Node_ComponentBoundEvent>(Node))
	{
		if (!ComponentBoundEventNode->GetTargetDelegateProperty())
		{
			OutReason = FString::Printf(
				TEXT("invalid component bound event %s"),
				*ComponentBoundEventNode->GetComponentPropertyName().ToString());
			return true;
		}
	}

	return false;
}

static bool IsMigratedInvalidObjectPath(const FString& Value)
{
	return false;
}

static bool ClearInvalidMigratedPinDefaults(UEdGraphNode* Node, TArray<FString>& OutDescriptions)
{
	if (!Node)
	{
		return false;
	}

	bool bChanged = false;
	for (UEdGraphPin* Pin : Node->Pins)
	{
		if (!Pin || !IsMigratedInvalidObjectPath(Pin->DefaultValue))
		{
			continue;
		}

		Pin->Modify();
		OutDescriptions.Add(FString::Printf(
			TEXT("%s:%s default %s"),
			*Node->GetName(),
			*Pin->PinName.ToString(),
			*Pin->DefaultValue));
		Pin->DefaultObject = nullptr;
		Pin->DefaultValue = TEXT("None");
		Pin->DefaultTextValue = FText::GetEmpty();
		bChanged = true;
	}

	return bChanged;
}

template<typename NodeType>
static NodeType* AddTypedNode(UEdGraph* Graph, int32 NodePosX, int32 NodePosY)
{
	if (!Graph)
	{
		return nullptr;
	}

	Graph->Modify();
	NodeType* Node = NewObject<NodeType>(Graph);
	Node->CreateNewGuid();
	Node->PostPlacedNewNode();
	Node->NodePosX = NodePosX;
	Node->NodePosY = NodePosY;
	Graph->AddNode(Node, true, false);
	Node->AllocateDefaultPins();
	return Node;
}

static FOrionBlueprintNodeResult FinishNodeMutation(UBlueprint* Blueprint, UEdGraph* Graph, UEdGraphNode* Node, const FString& AssetPath, bool bCompile)
{
	if (!Node)
	{
		return MakeNodeResult(false, TEXT("Failed to create node."), AssetPath, Graph ? Graph->GetName() : FString(), nullptr);
	}

	MarkBlueprintChanged(Blueprint, true);
	FString CompileError;
	if (!CompileIfRequested(Blueprint, bCompile, CompileError))
	{
		return MakeNodeResult(false, CompileError, AssetPath, Graph->GetName(), Node);
	}

	return MakeNodeResult(true, TEXT("Node created."), AssetPath, Graph->GetName(), Node);
}

static FOrionToolResult FinishBlueprintMutation(UBlueprint* Blueprint, const FString& AssetPath, const FString& Message, bool bCompile, bool bStructural = true)
{
	MarkBlueprintChanged(Blueprint, bStructural);
	FString CompileError;
	if (!CompileIfRequested(Blueprint, bCompile, CompileError))
	{
		return MakeResult(false, CompileError, AssetPath);
	}

	return MakeResult(true, Message, AssetPath);
}

static UFunction* ResolveFunction(UBlueprint* Blueprint, const FString& OwnerClassPath, const FString& FunctionName, FString& OutError)
{
	UClass* OwnerClass = nullptr;
	if (OwnerClassPath.IsEmpty())
	{
		OwnerClass = Blueprint ? Blueprint->GeneratedClass : nullptr;
	}
	else
	{
		OwnerClass = LoadClassFromPath(OwnerClassPath, OutError);
	}

	if (!OwnerClass)
	{
		if (OutError.IsEmpty())
		{
			OutError = TEXT("Function owner class is null.");
		}
		return nullptr;
	}

	UFunction* Function = OwnerClass->FindFunctionByName(FName(*FunctionName));
	if (!Function)
	{
		OutError = FString::Printf(TEXT("Function '%s' was not found on '%s'."), *FunctionName, *OwnerClass->GetPathName());
	}
	return Function;
}

static FMulticastDelegateProperty* ResolveDelegateProperty(const FString& OwnerClassPath, const FString& DelegateName, FString& OutError, UClass*& OutOwnerClass)
{
	OutOwnerClass = LoadClassFromPath(OwnerClassPath, OutError);
	if (!OutOwnerClass)
	{
		return nullptr;
	}

	FMulticastDelegateProperty* Property = FindFProperty<FMulticastDelegateProperty>(OutOwnerClass, FName(*DelegateName));
	if (!Property)
	{
		OutError = FString::Printf(TEXT("Delegate '%s' was not found on '%s'."), *DelegateName, *OutOwnerClass->GetPathName());
	}
	return Property;
}

static void SetClassPinDefault(UEdGraphNode* Node, UClass* Class)
{
	if (!Node || !Class)
	{
		return;
	}

	for (UEdGraphPin* Pin : Node->Pins)
	{
		if (Pin && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Class && Pin->Direction == EGPD_Input)
		{
			Pin->DefaultObject = Class;
			Pin->DefaultValue = Class->GetPathName();
			Node->PinDefaultValueChanged(Pin);
			return;
		}
	}
}

static FOrionToolResult LoadBlueprintAndGraph(const FString& BlueprintPath, const FString& GraphName, UBlueprint*& OutBlueprint, UEdGraph*& OutGraph)
{
	FString Error;
	OutBlueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!OutBlueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	OutGraph = FindGraph(OutBlueprint, GraphName);
	if (!OutGraph)
	{
		return MakeResult(false, FString::Printf(TEXT("Graph '%s' was not found."), *GraphName), BlueprintPath);
	}

	return MakeResult(true, TEXT("Loaded."), BlueprintPath);
}
}

FOrionBlueprintDescription UOrionBlueprintGraphToolset::DescribeBlueprint(const FString& BlueprintPath, bool bIncludeNodes)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FOrionBlueprintDescription Description;
	Description.AssetPath = BlueprintPath;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		Description.Message = Error;
		return Description;
	}

	Description.bSuccess = true;
	Description.Message = TEXT("Blueprint described.");
	Description.AssetPath = Blueprint->GetPathName();
	Description.ParentClassPath = GetObjectPathSafe(Blueprint->ParentClass);
	Description.GeneratedClassPath = GetObjectPathSafe(Blueprint->GeneratedClass);
	Description.Status = BlueprintStatusToString(Blueprint);

	TArray<UEdGraph*> Graphs;
	Blueprint->GetAllGraphs(Graphs);
	for (UEdGraph* Graph : Graphs)
	{
		if (!Graph)
		{
			continue;
		}

		FOrionBlueprintGraphInfo GraphInfo;
		GraphInfo.Name = Graph->GetName();
		GraphInfo.SchemaClassPath = GetObjectPathSafe(Graph->Schema);
		GraphInfo.NodeCount = Graph->Nodes.Num();
		if (bIncludeNodes)
		{
			for (UEdGraphNode* Node : Graph->Nodes)
			{
				GraphInfo.Nodes.Add(MakeNodeInfo(Node));
			}
		}
		Description.Graphs.Add(GraphInfo);
	}

	for (const FBPVariableDescription& Variable : Blueprint->NewVariables)
	{
		FOrionBlueprintVariableInfo VariableInfo;
		VariableInfo.Name = Variable.VarName.ToString();
		VariableInfo.Type = PinTypeToString(Variable.VarType);
		VariableInfo.DefaultValue = Variable.DefaultValue;
		VariableInfo.Category = Variable.Category.ToString();
		VariableInfo.bInstanceEditable = (Variable.PropertyFlags & CPF_DisableEditOnInstance) == 0;
		VariableInfo.bExposeOnSpawn = Variable.HasMetaData(FBlueprintMetadata::MD_ExposeOnSpawn);
		Description.Variables.Add(VariableInfo);
	}

	for (UEdGraph* FunctionGraph : Blueprint->FunctionGraphs)
	{
		if (!FunctionGraph)
		{
			continue;
		}

		FOrionBlueprintFunctionInfo FunctionInfo;
		FunctionInfo.Name = FunctionGraph->GetName();
		FunctionInfo.OwnerClassPath = Description.GeneratedClassPath;
		FunctionInfo.bImplementedInBlueprint = true;
		Description.Functions.Add(FunctionInfo);
	}

	if (UClass* ParentClass = Blueprint->ParentClass)
	{
		for (TFieldIterator<UFunction> FunctionIt(ParentClass, EFieldIteratorFlags::IncludeSuper); FunctionIt; ++FunctionIt)
		{
			const UFunction* Function = *FunctionIt;
			if (!Function || Function->HasAnyFunctionFlags(FUNC_Final | FUNC_Static | FUNC_Private))
			{
				continue;
			}

			FOrionBlueprintFunctionInfo FunctionInfo;
			FunctionInfo.Name = Function->GetName();
			FunctionInfo.OwnerClassPath = Function->GetOwnerClass() ? Function->GetOwnerClass()->GetPathName() : FString();
			FunctionInfo.bImplementedInBlueprint = FindGraph(Blueprint, FunctionInfo.Name) != nullptr;
			FunctionInfo.bCanOverride = Function->HasAnyFunctionFlags(FUNC_BlueprintEvent | FUNC_BlueprintCallable | FUNC_BlueprintPure);
			Description.Functions.Add(FunctionInfo);
		}
	}

	return Description;
}

FOrionToolResult UOrionBlueprintGraphToolset::CreateGraph(const FString& BlueprintPath, const FString& GraphName, const FString& GraphType, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	if (FindGraph(Blueprint, GraphName))
	{
		return MakeResult(false, FString::Printf(TEXT("Graph '%s' already exists."), *GraphName), BlueprintPath);
	}

	UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(Blueprint, FName(*GraphName), UEdGraph::StaticClass(), UEdGraphSchema_K2::StaticClass());
	const FString NormalizedType = GraphType.ToLower();
	if (NormalizedType == TEXT("function") || NormalizedType == TEXT("functiongraph"))
	{
		FBlueprintEditorUtils::AddFunctionGraph<UFunction>(Blueprint, Graph, true, nullptr);
	}
	else if (NormalizedType == TEXT("macro") || NormalizedType == TEXT("macrograph"))
	{
		FBlueprintEditorUtils::AddMacroGraph(Blueprint, Graph, true, nullptr);
	}
	else
	{
		FBlueprintEditorUtils::AddUbergraphPage(Blueprint, Graph);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Graph created."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::DeleteGraph(const FString& BlueprintPath, const FString& GraphName, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	UEdGraph* Graph = FindGraph(Blueprint, GraphName);
	if (!Graph)
	{
		return MakeResult(false, FString::Printf(TEXT("Graph '%s' was not found."), *GraphName), BlueprintPath);
	}

	FBlueprintEditorUtils::RemoveGraph(Blueprint, Graph);
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Graph deleted."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::RenameGraph(const FString& BlueprintPath, const FString& GraphName, const FString& NewGraphName, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	UEdGraph* Graph = FindGraph(Blueprint, GraphName);
	if (!Graph)
	{
		return MakeResult(false, FString::Printf(TEXT("Graph '%s' was not found."), *GraphName), BlueprintPath);
	}

	FBlueprintEditorUtils::RenameGraph(Graph, NewGraphName);
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Graph renamed."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::AddFunctionGraph(const FString& BlueprintPath, const FString& FunctionName, bool bCompile)
{
	return CreateGraph(BlueprintPath, FunctionName, TEXT("FunctionGraph"), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::AddFunctionPin(const FString& BlueprintPath, const FString& FunctionName, const FString& PinName, const FOrionBlueprintPinTypeSpec& PinType, const FString& Direction, const FString& DefaultValue, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	UEdGraph* Graph = FindGraph(Blueprint, FunctionName);
	if (!Graph)
	{
		return MakeResult(false, FString::Printf(TEXT("Function graph '%s' was not found."), *FunctionName), BlueprintPath);
	}

	TWeakObjectPtr<UK2Node_EditablePinBase> EntryNode;
	TWeakObjectPtr<UK2Node_EditablePinBase> ResultNode;
	FBlueprintEditorUtils::GetEntryAndResultNodes(Graph, EntryNode, ResultNode);

	const bool bOutput = Direction.ToLower() == TEXT("output");
	UK2Node_EditablePinBase* EditableNode = bOutput ? ResultNode.Get() : EntryNode.Get();
	if (!EditableNode)
	{
		return MakeResult(false, TEXT("Function entry/result node was not found."), BlueprintPath);
	}

	FText ErrorText;
	const EEdGraphPinDirection DesiredDirection = bOutput ? EGPD_Input : EGPD_Output;
	const FEdGraphPinType ResolvedPinType = MakePinType(PinType);
	if (!EditableNode->CanCreateUserDefinedPin(ResolvedPinType, DesiredDirection, ErrorText))
	{
		return MakeResult(false, ErrorText.ToString(), BlueprintPath);
	}

	UEdGraphPin* CreatedPin = EditableNode->CreateUserDefinedPin(FName(*PinName), ResolvedPinType, DesiredDirection);
	if (CreatedPin && !DefaultValue.IsEmpty())
	{
		CreatedPin->DefaultValue = DefaultValue;
		EditableNode->PinDefaultValueChanged(CreatedPin);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Function pin added."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::AddFunctionOverrideGraph(const FString& BlueprintPath, const FString& FunctionOwnerClassPath, const FString& FunctionName, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	if (FindGraph(Blueprint, FunctionName))
	{
		return MakeResult(false, FString::Printf(TEXT("Function graph '%s' already exists."), *FunctionName), BlueprintPath);
	}

	UFunction* Function = ResolveFunction(Blueprint, FunctionOwnerClassPath, FunctionName, Error);
	if (!Function)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(Blueprint, Function->GetFName(), UEdGraph::StaticClass(), UEdGraphSchema_K2::StaticClass());
	FBlueprintEditorUtils::AddFunctionGraph<UFunction>(Blueprint, Graph, true, Function);
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Function override graph added."), bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::SpawnNodeByClass(const FString& BlueprintPath, const FString& GraphName, const FString& NodeClassPath, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UClass* NodeClass = LoadClassFromPath(NodeClassPath, Error);
	if (!NodeClass)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}
	if (!NodeClass->IsChildOf(UEdGraphNode::StaticClass()))
	{
		return MakeNodeResult(false, FString::Printf(TEXT("Class '%s' is not a UEdGraphNode."), *NodeClass->GetPathName()), BlueprintPath, GraphName, nullptr);
	}
	if (NodeClass->HasAnyClassFlags(CLASS_Abstract))
	{
		return MakeNodeResult(false, FString::Printf(TEXT("Class '%s' is abstract and cannot be spawned directly."), *NodeClass->GetPathName()), BlueprintPath, GraphName, nullptr);
	}

	Graph->Modify();
	UEdGraphNode* Node = NewObject<UEdGraphNode>(Graph, NodeClass);
	Node->CreateNewGuid();
	Node->PostPlacedNewNode();
	Node->NodePosX = NodePosX;
	Node->NodePosY = NodePosY;
	Graph->AddNode(Node, true, false);
	Node->AllocateDefaultPins();

	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddCallFunctionNode(const FString& BlueprintPath, const FString& GraphName, const FString& FunctionOwnerClassPath, const FString& FunctionName, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UFunction* Function = ResolveFunction(Blueprint, FunctionOwnerClassPath, FunctionName, Error);
	if (!Function)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_CallFunction* Node = AddTypedNode<UK2Node_CallFunction>(Graph, NodePosX, NodePosY);
	Node->SetFromFunction(Function);
	Node->AllocateDefaultPins();
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddCustomEventNode(const FString& BlueprintPath, const FString& GraphName, const FString& EventName, const TArray<FString>& OutputPinNames, const TArray<FOrionBlueprintPinTypeSpec>& OutputPinTypes, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}
	if (OutputPinNames.Num() != OutputPinTypes.Num())
	{
		return MakeNodeResult(false, TEXT("OutputPinNames and OutputPinTypes must have the same length."), BlueprintPath, GraphName, nullptr);
	}

	UK2Node_CustomEvent* Node = AddTypedNode<UK2Node_CustomEvent>(Graph, NodePosX, NodePosY);
	Node->CustomFunctionName = FName(*EventName);
	for (int32 Index = 0; Index < OutputPinNames.Num(); ++Index)
	{
		Node->CreateUserDefinedPin(FName(*OutputPinNames[Index]), MakePinType(OutputPinTypes[Index]), EGPD_Output);
	}
	Node->AllocateDefaultPins();
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddEventOverrideNode(const FString& BlueprintPath, const FString& GraphName, const FString& EventOwnerClassPath, const FString& EventName, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UFunction* Function = ResolveFunction(Blueprint, EventOwnerClassPath, EventName, Error);
	if (!Function)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_Event* Node = AddTypedNode<UK2Node_Event>(Graph, NodePosX, NodePosY);
	Node->EventReference.SetFromField<UFunction>(Function, Blueprint->GeneratedClass);
	Node->bOverrideFunction = true;
	Node->AllocateDefaultPins();
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddVariableNode(const FString& BlueprintPath, const FString& GraphName, const FString& VariableName, bool bSetter, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	UEdGraphNode* Node = bSetter ?
		static_cast<UEdGraphNode*>(K2Schema->SpawnVariableSetNode(FVector2D(NodePosX, NodePosY), Graph, FName(*VariableName), Blueprint->SkeletonGeneratedClass)) :
		static_cast<UEdGraphNode*>(K2Schema->SpawnVariableGetNode(FVector2D(NodePosX, NodePosY), Graph, FName(*VariableName), Blueprint->SkeletonGeneratedClass));

	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddBranchNode(const FString& BlueprintPath, const FString& GraphName, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_IfThenElse* Node = AddTypedNode<UK2Node_IfThenElse>(Graph, NodePosX, NodePosY);
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddSequenceNode(const FString& BlueprintPath, const FString& GraphName, int32 AdditionalThenPins, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_ExecutionSequence* Node = AddTypedNode<UK2Node_ExecutionSequence>(Graph, NodePosX, NodePosY);
	for (int32 Index = 0; Index < AdditionalThenPins; ++Index)
	{
		Node->AddInputPin();
	}
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddCastNode(const FString& BlueprintPath, const FString& GraphName, const FString& TargetClassPath, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UClass* TargetClass = LoadClassFromPath(TargetClassPath, Error);
	if (!TargetClass)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_DynamicCast* Node = AddTypedNode<UK2Node_DynamicCast>(Graph, NodePosX, NodePosY);
	Node->TargetType = TargetClass;
	Node->AllocateDefaultPins();
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddConstructObjectNode(const FString& BlueprintPath, const FString& GraphName, const FString& ClassPath, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	return SpawnNodeByClass(BlueprintPath, GraphName, TEXT("/Script/BlueprintGraph.K2Node_ConstructObjectFromClass"), NodePosX, NodePosY, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddCreateWidgetNode(const FString& BlueprintPath, const FString& GraphName, const FString& WidgetClassPath, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	UFunction* Function = UWidgetBlueprintLibrary::StaticClass()->FindFunctionByName(TEXT("Create"));
	if (!Function)
	{
		return MakeNodeResult(false, TEXT("UWidgetBlueprintLibrary::Create was not found."), BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UClass* WidgetClass = LoadClassFromPath(WidgetClassPath, Error);
	if (!WidgetClass)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_CallFunction* Node = AddTypedNode<UK2Node_CallFunction>(Graph, NodePosX, NodePosY);
	Node->SetFromFunction(Function);
	Node->AllocateDefaultPins();
	SetClassPinDefault(Node, WidgetClass);
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddDelegateNode(const FString& BlueprintPath, const FString& GraphName, const FString& DelegateOwnerClassPath, const FString& DelegateName, const FString& NodeKind, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	FString Error;
	UClass* OwnerClass = nullptr;
	FMulticastDelegateProperty* DelegateProperty = ResolveDelegateProperty(DelegateOwnerClassPath, DelegateName, Error, OwnerClass);
	if (!DelegateProperty)
	{
		return MakeNodeResult(false, Error, BlueprintPath, GraphName, nullptr);
	}

	const FString NormalizedKind = NodeKind.ToLower();
	TSubclassOf<UK2Node_BaseMCDelegate> NodeClass = UK2Node_AddDelegate::StaticClass();
	if (NormalizedKind == TEXT("assign"))
	{
		NodeClass = UK2Node_AssignDelegate::StaticClass();
	}
	else if (NormalizedKind == TEXT("remove"))
	{
		NodeClass = UK2Node_RemoveDelegate::StaticClass();
	}
	else if (NormalizedKind == TEXT("clear"))
	{
		NodeClass = UK2Node_ClearDelegate::StaticClass();
	}
	else if (NormalizedKind == TEXT("call"))
	{
		NodeClass = UK2Node_CallDelegate::StaticClass();
	}

	Graph->Modify();
	UK2Node_BaseMCDelegate* Node = NewObject<UK2Node_BaseMCDelegate>(Graph, NodeClass);
	Node->CreateNewGuid();
	Node->PostPlacedNewNode();
	Node->NodePosX = NodePosX;
	Node->NodePosY = NodePosY;
	Graph->AddNode(Node, true, false);
	Node->SetFromProperty(DelegateProperty, false, OwnerClass);
	Node->AllocateDefaultPins();
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddRerouteNode(const FString& BlueprintPath, const FString& GraphName, int32 NodePosX, int32 NodePosY, bool bCompile)
{
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	UK2Node_Knot* Node = AddTypedNode<UK2Node_Knot>(Graph, NodePosX, NodePosY);
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, bCompile);
}

FOrionBlueprintNodeResult UOrionBlueprintGraphToolset::AddCommentNode(const FString& BlueprintPath, const FString& GraphName, const FString& CommentText, int32 NodePosX, int32 NodePosY, int32 NodeWidth, int32 NodeHeight)
{
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return MakeNodeResult(false, LoadResult.Message, BlueprintPath, GraphName, nullptr);
	}

	Graph->Modify();
	UEdGraphNode_Comment* Node = NewObject<UEdGraphNode_Comment>(Graph);
	Node->CreateNewGuid();
	Node->NodePosX = NodePosX;
	Node->NodePosY = NodePosY;
	Node->NodeWidth = NodeWidth;
	Node->NodeHeight = NodeHeight;
	Node->NodeComment = CommentText;
	Graph->AddNode(Node, true, false);
	return FinishNodeMutation(Blueprint, Graph, Node, BlueprintPath, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::MoveNode(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, int32 NodePosX, int32 NodePosY)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* Node = FindNode(Graph, NodeGuid);
	if (!Node)
	{
		return MakeResult(false, TEXT("Node was not found."), BlueprintPath);
	}

	Node->Modify();
	Node->NodePosX = NodePosX;
	Node->NodePosY = NodePosY;
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Node moved."), false, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::RemoveNode(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* Node = FindNode(Graph, NodeGuid);
	if (!Node)
	{
		return MakeResult(false, TEXT("Node was not found."), BlueprintPath);
	}

	Node->DestroyNode();
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Node removed."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::ConnectPins(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& FirstPin, const FOrionBlueprintPinSelector& SecondPin, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* FirstNode = FindNode(Graph, FirstPin.NodeGuid);
	UEdGraphNode* SecondNode = FindNode(Graph, SecondPin.NodeGuid);
	UEdGraphPin* PinA = FindPin(FirstNode, FirstPin);
	UEdGraphPin* PinB = FindPin(SecondNode, SecondPin);
	if (!PinA || !PinB)
	{
		return MakeResult(false, TEXT("One or both pins were not found."), BlueprintPath);
	}

	const UEdGraphSchema* Schema = Graph->GetSchema();
	const FPinConnectionResponse Response = Schema->CanCreateConnection(PinA, PinB);
	if (Response.Response == CONNECT_RESPONSE_DISALLOW)
	{
		return MakeResult(false, Response.Message.ToString(), BlueprintPath);
	}

	if (!Schema->TryCreateConnection(PinA, PinB))
	{
		return MakeResult(false, TEXT("TryCreateConnection returned false."), BlueprintPath);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Pins connected."), bCompile, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::DisconnectPin(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& Pin, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* Node = FindNode(Graph, Pin.NodeGuid);
	UEdGraphPin* TargetPin = FindPin(Node, Pin);
	if (!TargetPin)
	{
		return MakeResult(false, TEXT("Pin was not found."), BlueprintPath);
	}

	Graph->GetSchema()->BreakPinLinks(*TargetPin, true);
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Pin disconnected."), bCompile, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetPinDefaultValue(const FString& BlueprintPath, const FString& GraphName, const FOrionBlueprintPinSelector& Pin, const FString& DefaultValue, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* Node = FindNode(Graph, Pin.NodeGuid);
	UEdGraphPin* TargetPin = FindPin(Node, Pin);
	if (!TargetPin)
	{
		return MakeResult(false, TEXT("Pin was not found."), BlueprintPath);
	}

	if (const UEdGraphSchema_K2* K2Schema = Cast<UEdGraphSchema_K2>(Graph->GetSchema()))
	{
		K2Schema->TrySetDefaultValue(*TargetPin, DefaultValue);
	}
	else
	{
		TargetPin->DefaultValue = DefaultValue;
		Node->PinDefaultValueChanged(TargetPin);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Pin default value set."), bCompile, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::AddMemberVariable(const FString& BlueprintPath, const FString& VariableName, const FOrionBlueprintPinTypeSpec& PinType, const FString& DefaultValue, bool bInstanceEditable, bool bExposeOnSpawn, const FString& Category, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	if (!FBlueprintEditorUtils::AddMemberVariable(Blueprint, FName(*VariableName), MakePinType(PinType), DefaultValue))
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to add variable '%s'."), *VariableName), BlueprintPath);
	}

	FBlueprintEditorUtils::SetBlueprintOnlyEditableFlag(Blueprint, FName(*VariableName), !bInstanceEditable);
	FBlueprintEditorUtils::SetBlueprintVariableMetaData(Blueprint, FName(*VariableName), nullptr, FBlueprintMetadata::MD_ExposeOnSpawn, bExposeOnSpawn ? TEXT("true") : TEXT("false"));
	if (!Category.IsEmpty())
	{
		FBlueprintEditorUtils::SetBlueprintVariableCategory(Blueprint, FName(*VariableName), nullptr, FText::FromString(Category), true);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable added."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::RemoveMemberVariable(const FString& BlueprintPath, const FString& VariableName, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	FBlueprintEditorUtils::RemoveMemberVariable(Blueprint, FName(*VariableName));
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable removed."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::RenameMemberVariable(const FString& BlueprintPath, const FString& VariableName, const FString& NewVariableName, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	FBlueprintEditorUtils::RenameMemberVariable(Blueprint, FName(*VariableName), FName(*NewVariableName));
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable renamed."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetMemberVariableDefault(const FString& BlueprintPath, const FString& VariableName, const FString& DefaultValue, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	for (FBPVariableDescription& Variable : Blueprint->NewVariables)
	{
		if (Variable.VarName == FName(*VariableName))
		{
			Variable.DefaultValue = DefaultValue;
			return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable default set."), bCompile);
		}
	}

	return MakeResult(false, FString::Printf(TEXT("Variable '%s' was not found."), *VariableName), BlueprintPath);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetMemberVariableMetadata(const FString& BlueprintPath, const FString& VariableName, const FString& MetadataKey, const FString& MetadataValue, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	FBlueprintEditorUtils::SetBlueprintVariableMetaData(Blueprint, FName(*VariableName), nullptr, FName(*MetadataKey), MetadataValue);
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable metadata set."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetMemberVariableFlags(const FString& BlueprintPath, const FString& VariableName, bool bInstanceEditable, bool bExposeOnSpawn, const FString& Category, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	FBlueprintEditorUtils::SetBlueprintOnlyEditableFlag(Blueprint, FName(*VariableName), !bInstanceEditable);
	FBlueprintEditorUtils::SetBlueprintVariableMetaData(Blueprint, FName(*VariableName), nullptr, FBlueprintMetadata::MD_ExposeOnSpawn, bExposeOnSpawn ? TEXT("true") : TEXT("false"));
	if (!Category.IsEmpty())
	{
		FBlueprintEditorUtils::SetBlueprintVariableCategory(Blueprint, FName(*VariableName), nullptr, FText::FromString(Category), true);
	}
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Member variable flags set."), bCompile);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetBlueprintDefaultProperty(const FString& BlueprintPath, const FString& PropertyPath, const FString& ValueText, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}
	if (!Blueprint->GeneratedClass)
	{
		return MakeResult(false, TEXT("Blueprint has no generated class."), BlueprintPath);
	}

	UObject* CDO = Blueprint->GeneratedClass->GetDefaultObject();
	CDO->Modify();
	if (!SetPropertyByPath(CDO, PropertyPath, ValueText, Error))
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Blueprint default property set."), bCompile, false);
}

FOrionToolResult UOrionBlueprintGraphToolset::SetNodeProperty(const FString& BlueprintPath, const FString& GraphName, const FString& NodeGuid, const FString& PropertyPath, const FString& ValueText, bool bCompile)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	UBlueprint* Blueprint = nullptr;
	UEdGraph* Graph = nullptr;
	FOrionToolResult LoadResult = LoadBlueprintAndGraph(BlueprintPath, GraphName, Blueprint, Graph);
	if (!LoadResult.bSuccess)
	{
		return LoadResult;
	}

	UEdGraphNode* Node = FindNode(Graph, NodeGuid);
	if (!Node)
	{
		return MakeResult(false, TEXT("Node was not found."), BlueprintPath);
	}

	Node->Modify();
	FString Error;
	if (!SetPropertyByPath(Node, PropertyPath, ValueText, Error))
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	Node->ReconstructNode();
	return FinishBlueprintMutation(Blueprint, BlueprintPath, TEXT("Node property set."), bCompile, true);
}

FOrionBlueprintCompileResult UOrionBlueprintGraphToolset::CompileBlueprint(const FString& BlueprintPath)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	FOrionBlueprintCompileResult Result;
	Result.AssetPath = BlueprintPath;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		Result.Message = Error;
		return Result;
	}

	FCompilerResultsLog CompileLog;
	FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::None, &CompileLog);
	Result.AssetPath = Blueprint->GetPathName();
	Result.Status = BlueprintStatusToString(Blueprint);
	Result.bSuccess = Blueprint->Status != BS_Error;
	Result.Message = Result.bSuccess ? TEXT("Blueprint compiled.") : TEXT("Blueprint compile failed.");
	return Result;
}

FOrionToolResult UOrionBlueprintGraphToolset::RemoveInvalidMacroInstanceNodes(const FString& BlueprintPath, bool bCompile, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	const FString ObjectPath = NormalizeObjectPath(BlueprintPath);
	UObject* LoadedObject = StaticLoadObject(UBlueprint::StaticClass(), nullptr, *ObjectPath, nullptr, LOAD_NoWarn | LOAD_DisableCompileOnLoad);
	UBlueprint* Blueprint = Cast<UBlueprint>(LoadedObject);
	if (!Blueprint)
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to load Blueprint '%s' with compile-on-load disabled."), *ObjectPath), BlueprintPath);
	}

	TArray<UEdGraph*> Graphs;
	Blueprint->GetAllGraphs(Graphs);

	TArray<UK2Node_MacroInstance*> InvalidNodes;
	TArray<FString> InvalidNodeDescriptions;
	for (UEdGraph* Graph : Graphs)
	{
		if (!Graph)
		{
			continue;
		}

		for (UEdGraphNode* Node : Graph->Nodes)
		{
			UK2Node_MacroInstance* MacroInstanceNode = Cast<UK2Node_MacroInstance>(Node);
			if (!MacroInstanceNode)
			{
				continue;
			}

			if (!MacroInstanceNode->GetMacroGraph())
			{
				InvalidNodes.Add(MacroInstanceNode);
				InvalidNodeDescriptions.Add(FString::Printf(
					TEXT("%s:%s"),
					*Graph->GetName(),
					*MacroInstanceNode->NodeGuid.ToString(EGuidFormats::DigitsWithHyphens)));
			}
		}
	}

	if (InvalidNodes.IsEmpty())
	{
		return MakeResult(true, TEXT("No invalid macro instance nodes found."), Blueprint->GetPathName());
	}

	for (UK2Node_MacroInstance* InvalidNode : InvalidNodes)
	{
		if (InvalidNode)
		{
			InvalidNode->DestroyNode();
		}
	}

	MarkBlueprintChanged(Blueprint, false);

	FString CompileError;
	if (!CompileIfRequested(Blueprint, bCompile, CompileError))
	{
		return MakeResult(false, FString::Printf(TEXT("Removed %d invalid macro instance node(s), but compile failed: %s"), InvalidNodes.Num(), *CompileError), Blueprint->GetPathName());
	}

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Blueprint, false, SaveError))
		{
			return MakeResult(false, FString::Printf(TEXT("Removed %d invalid macro instance node(s), but save failed: %s"), InvalidNodes.Num(), *SaveError), Blueprint->GetPathName());
		}
	}

	return MakeResult(
		true,
		FString::Printf(TEXT("Removed %d invalid macro instance node(s): %s"), InvalidNodes.Num(), *FString::Join(InvalidNodeDescriptions, TEXT(", "))),
		Blueprint->GetPathName());
}

FOrionToolResult UOrionBlueprintGraphToolset::RepairInvalidMigrationNodes(const FString& BlueprintPath, bool bCompile, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::BlueprintGraph;

	const FString ObjectPath = NormalizeObjectPath(BlueprintPath);
	UObject* LoadedObject = StaticLoadObject(UBlueprint::StaticClass(), nullptr, *ObjectPath, nullptr, LOAD_NoWarn | LOAD_DisableCompileOnLoad);
	UBlueprint* Blueprint = Cast<UBlueprint>(LoadedObject);
	if (!Blueprint)
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to load Blueprint '%s' with compile-on-load disabled."), *ObjectPath), BlueprintPath);
	}

	TArray<UEdGraph*> Graphs;
	Blueprint->GetAllGraphs(Graphs);

	TArray<UEdGraphNode*> NodesToRemove;
	TArray<FString> NodeDescriptions;
	TArray<FString> PinDefaultDescriptions;

	for (UEdGraph* Graph : Graphs)
	{
		if (!Graph)
		{
			continue;
		}

		for (UEdGraphNode* Node : Graph->Nodes)
		{
			FString Reason;
			if (IsInvalidMigrationNode(Blueprint, Node, Reason))
			{
				NodesToRemove.Add(Node);
				NodeDescriptions.Add(FString::Printf(
					TEXT("%s:%s:%s"),
					*Graph->GetName(),
					*Node->GetName(),
					*Reason));
				continue;
			}

			ClearInvalidMigratedPinDefaults(Node, PinDefaultDescriptions);
		}
	}

	if (NodesToRemove.IsEmpty() && PinDefaultDescriptions.IsEmpty())
	{
		return MakeResult(true, TEXT("No invalid migration nodes or pin defaults found."), Blueprint->GetPathName());
	}

	for (UEdGraphNode* NodeToRemove : NodesToRemove)
	{
		if (NodeToRemove)
		{
			NodeToRemove->DestroyNode();
		}
	}

	MarkBlueprintChanged(Blueprint, false);

	FString CompileError;
	if (!CompileIfRequested(Blueprint, bCompile, CompileError))
	{
		return MakeResult(
			false,
			FString::Printf(
				TEXT("Repaired migration nodes, but compile failed: %s. Removed %d node(s), cleared %d pin default(s)."),
				*CompileError,
				NodesToRemove.Num(),
				PinDefaultDescriptions.Num()),
			Blueprint->GetPathName());
	}

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Blueprint, false, SaveError))
		{
			return MakeResult(false, SaveError, Blueprint->GetPathName());
		}
	}

	return MakeResult(
		true,
		FString::Printf(
			TEXT("Repaired invalid migration data. Removed %d node(s), cleared %d pin default(s). Nodes: %s PinDefaults: %s"),
			NodesToRemove.Num(),
			PinDefaultDescriptions.Num(),
			*FString::Join(NodeDescriptions, TEXT(", ")),
			*FString::Join(PinDefaultDescriptions, TEXT(", "))),
		Blueprint->GetPathName());
}

FOrionToolResult UOrionBlueprintGraphToolset::SaveAsset(const FString& AssetPath, bool bOnlyIfIsDirty)
{
	using namespace UE::OrionProjectToolsets;

	FString Error;
	UObject* Asset = LoadObjectFromPath(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	if (!SaveLoadedAsset(Asset, bOnlyIfIsDirty, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return MakeResult(true, TEXT("Asset saved."), Asset->GetPathName());
}

FOrionBlueprintCompileResult UOrionBlueprintGraphToolset::ValidateBlueprint(const FString& BlueprintPath)
{
	return CompileBlueprint(BlueprintPath);
}
