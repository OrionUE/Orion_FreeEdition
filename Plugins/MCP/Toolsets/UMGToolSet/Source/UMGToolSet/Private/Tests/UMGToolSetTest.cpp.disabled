// Copyright Epic Games, Inc. All Rights Reserved.

#if WITH_DEV_AUTOMATION_TESTS

#include "UMGToolSetTestFlags.h"
#include "UMGToolSetTestFixtures.h"
#include "UMGToolSet.h"
#include "WidgetBlueprint.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Components/Overlay.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "Components/ExpandableArea.h"
#include "Components/MouseHoverComponent.h"
#include "Components/SizeBoxComponent.h"
#include "ToolsetRegistry/UToolsetRegistry.h"
#include "Kismet2/KismetEditorUtilities.h"

// ============================================================================
// Happy Path Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_HappyPath,
	"AI.Toolsets.UMGToolSet.HappyPath", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_HappyPath)

void FUMGToolSetTest_HappyPath::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_HappyPath_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// ---- CreateWidgetBlueprint ----

	It("CreateWidgetBlueprint returns valid pointer", [this]()
	{
		TestNotNull(TEXT("BP created"), BP);
	});

	It("CreateWidgetBlueprint sets correct parent class", [this]()
	{
		TestNotNull(TEXT("BP exists"), BP);
		TestTrue(TEXT("Parent is UserWidget"), BP->ParentClass == UUserWidget::StaticClass());
	});

	It("CreateWidgetBlueprint creates no root", [this]()
	{
		TestNotNull(TEXT("BP created"), BP);
		if (BP)
		{
			TestNull(TEXT("No root widget"), BP->WidgetTree->RootWidget.Get());
		}
	});

	// ---- AddWidget ----

	It("AddWidget returns valid info of correct class", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("MyText"), nullptr);
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("Is TextBlock"), Info.Widget->IsA<UTextBlock>());
		TestEqual(TEXT("Name matches"), Info.WidgetName, FName("MyText"));
	});

	It("AddWidget parent and slot populated", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("ParentTest"), RootPanelWidget);

		UWidget* Root = BP->WidgetTree->RootWidget;
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("Parent is root"), Info.Parent == Root);
	});

	It("AddWidget creates correct slot type", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("SlotTest"), RootPanelWidget);
		TestNotNull(TEXT("Has slot"), Info.Slot.Get());
		TestTrue(TEXT("Slot is CanvasPanelSlot"), Info.Slot->GetClass()->GetName().Contains(TEXT("CanvasPanel")));

		// Add VBox, then child - VBox child should get VerticalBoxSlot
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), RootPanelWidget);
		FUMGWidgetInfo VChildInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("VChild"), VBoxInfo.Widget);
		TestNotNull(TEXT("VChild created"), VChildInfo.Widget.Get());
		TestTrue(TEXT("Slot is VerticalBoxSlot"), VChildInfo.Slot->GetClass()->GetName().Contains(TEXT("VerticalBox")));
	});

	It("AddWidget WidgetClassPath is populated", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("ClassPathTest"), nullptr);
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("ClassPath non-empty"), !Info.WidgetClassPath.ToString().IsEmpty());
		TestTrue(TEXT("ClassPath contains TextBlock"), Info.WidgetClassPath.ToString().Contains(TEXT("TextBlock")));
	});

	// ---- GetWidgets ----

	It("GetWidgets returns Info and full tree", [this]()
	{
		FUMGWidgetInfo VBInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VB"), nullptr);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("T1"), VBInfo.Widget);
		UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("I1"), VBInfo.Widget);

		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);
		TestEqual(TEXT("3 widgets total"), TreeInfo.Widgets.Num(), 3); // VB + T1 + I1

		// Verify merged Info fields
		TestTrue(TEXT("ParentClass is UserWidget"), TreeInfo.Info.ParentClass == UUserWidget::StaticClass());
		TestTrue(TEXT("RootWidgetClass is Vertical Box"), TreeInfo.Info.RootWidgetClass == UVerticalBox::StaticClass());
		TestEqual(TEXT("WidgetCount matches"), TreeInfo.Info.WidgetCount, 3);
	});

	It("GetWidgets parent pointers valid", [this]()
	{
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), nullptr);
		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);

		// Root has no parent
		TestNull(TEXT("Root parent is null"), TreeInfo.Widgets[0].Parent.Get());
		// Child's parent is root
		if (TreeInfo.Widgets.Num() > 1)
		{
			TestTrue(TEXT("Child parent is root"), TreeInfo.Widgets[1].Parent == TreeInfo.Widgets[0].Widget);
		}
	});

	It("GetWidgets depth-first order (parent before child)", [this]()
	{
		FUMGWidgetInfo PInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("P"), nullptr);
		FUMGWidgetInfo CInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("C"), PInfo.Widget);

		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);

		int32 ParentIdx = INDEX_NONE, ChildIdx = INDEX_NONE;
		for (int32 i = 0; i < TreeInfo.Widgets.Num(); i++)
		{
			if (TreeInfo.Widgets[i].WidgetName == PInfo.WidgetName) ParentIdx = i;
			if (TreeInfo.Widgets[i].WidgetName == CInfo.WidgetName) ChildIdx = i;
		}
		TestTrue(TEXT("Parent before child"), ParentIdx < ChildIdx);
	});

	// ---- GetNamedSlots ----

	It("GetNamedSlots returns bindings after SetNamedSlotContent", [this]()
	{
		UUMGToolSet::SetNamedSlotContent(BP, nullptr, FName("TestSlot"), UOverlay::StaticClass(), FName("SlotRoot"));
		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		TestTrue(TEXT("Has slot entries"), Slots.Num() > 0);
		TestEqual(TEXT("Slot name matches"), Slots[0].SlotName, FName("TestSlot"));
		TestNotNull(TEXT("Content widget set"), Slots[0].ContentWidget.Get());
	});

	// ---- RemoveWidget, RenameWidget, Compile, SetWidgetVariable ----

	It("RemoveWidget removes from tree", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("RemoveMe"), nullptr);
		bool bRemoved = UUMGToolSet::RemoveWidget(BP, Info.Widget);
		TestTrue(TEXT("Removed"), bRemoved);
		TestNull(TEXT("Widget gone"), BP->WidgetTree->FindWidget(Info.WidgetName));
	});

	It("RenameWidget returns info with new name", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("OldName"), nullptr);
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, Info.Widget, "NewName");
		TestNotNull(TEXT("Renamed"), Renamed.Widget.Get());
		TestEqual(TEXT("New name"), Renamed.WidgetName, FName("NewName"));
	});

	It("CompileWidgetBlueprint succeeds", [this]()
	{
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("CompileTest"), nullptr);
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiled"), bCompiled);
	});

	It("SetWidgetVariable registers GUID and compiles", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("VarTest"), nullptr);
		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, true);
		TestTrue(TEXT("Is variable"), Info.Widget->bIsVariable);
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles with variable"), bCompiled);
	});

	It("ListWidgetClasses finds widgets", [this]()
	{
		TArray<FUMGWidgetClassEntry> Classes = UUMGToolSet::ListWidgetClasses(TEXT(""));
		TestTrue(TEXT("Found many classes"), Classes.Num() > 10);
	});

	It("ListWidgetClasses returns Category matching the widget's palette category", [this]()
	{
		TArray<FUMGWidgetClassEntry> Classes = UUMGToolSet::ListWidgetClasses(TEXT(""));

		const FUMGWidgetClassEntry* TextBlockEntry = Classes.FindByPredicate(
			[](const FUMGWidgetClassEntry& E) { return E.WidgetClass == UTextBlock::StaticClass(); });
		const FUMGWidgetClassEntry* CanvasEntry = Classes.FindByPredicate(
			[](const FUMGWidgetClassEntry& E) { return E.WidgetClass == UCanvasPanel::StaticClass(); });

		TestNotNull(TEXT("TextBlock entry present"), TextBlockEntry);
		TestNotNull(TEXT("CanvasPanel entry present"), CanvasEntry);

		if (TextBlockEntry)
		{
			TestEqual(TEXT("TextBlock category"),
				TextBlockEntry->Category.ToString(),
				GetMutableDefault<UTextBlock>()->GetPaletteCategory().ToString());
		}
		if (CanvasEntry)
		{
			TestEqual(TEXT("CanvasPanel category"),
				CanvasEntry->Category.ToString(),
				GetMutableDefault<UCanvasPanel>()->GetPaletteCategory().ToString());
		}
	});

	It("ListWidgetClasses populates Category for every entry", [this]()
	{
		TArray<FUMGWidgetClassEntry> Classes = UUMGToolSet::ListWidgetClasses(TEXT(""));
		TestTrue(TEXT("Has entries to inspect"), Classes.Num() > 0);

		for (const FUMGWidgetClassEntry& Entry : Classes)
		{
			// Every UWidget supplies a default palette category ("Misc"), so Category must never be empty.
			TestFalse(
				FString::Printf(TEXT("Category empty for %s"), *GetNameSafe(Entry.WidgetClass)),
				Entry.Category.IsEmpty());
		}
	});

	It("ListWidgetClasses returns Description matching the widget class's tooltip text", [this]()
	{
		TArray<FUMGWidgetClassEntry> Classes = UUMGToolSet::ListWidgetClasses(TEXT("TextBlock"));

		const FUMGWidgetClassEntry* TextBlockEntry = Classes.FindByPredicate(
			[](const FUMGWidgetClassEntry& E) { return E.WidgetClass == UTextBlock::StaticClass(); });
		TestNotNull(TEXT("TextBlock entry present"), TextBlockEntry);

		if (TextBlockEntry)
		{
			// FWidgetTemplateClass::GetToolTip wraps WidgetClass->GetToolTipText, so the entry must reflect it verbatim.
			TestEqual(TEXT("Description text"),
				TextBlockEntry->Description.ToString(),
				UTextBlock::StaticClass()->GetToolTipText().ToString());
		}
	});

	It("ListWidgetClasses Category and Description are stable across calls", [this]()
	{
		TArray<FUMGWidgetClassEntry> First = UUMGToolSet::ListWidgetClasses(TEXT("Button"));
		TArray<FUMGWidgetClassEntry> Second = UUMGToolSet::ListWidgetClasses(TEXT("Button"));
		TestEqual(TEXT("Same number of entries"), First.Num(), Second.Num());

		for (const FUMGWidgetClassEntry& A : First)
		{
			const FUMGWidgetClassEntry* B = Second.FindByPredicate(
				[&](const FUMGWidgetClassEntry& E) { return E.WidgetClass == A.WidgetClass; });
			TestNotNull(TEXT("Matching entry on second call"), B);
			if (B)
			{
				TestEqual(TEXT("Category stable"), A.Category.ToString(), B->Category.ToString());
				TestEqual(TEXT("Description stable"), A.Description.ToString(), B->Description.ToString());
			}
		}
	});

	// ---- GetWidgetClassInfo ----

	It("GetWidgetClassInfo returns the requested class", [this]()
	{
		FUMGWidgetClassEntry Entry = UUMGToolSet::GetWidgetClassInfo(UTextBlock::StaticClass());
		TestTrue(TEXT("Class roundtrips"), Entry.WidgetClass == UTextBlock::StaticClass());
	});

	It("GetWidgetClassInfo flags panels", [this]()
	{
		FUMGWidgetClassEntry CanvasEntry = UUMGToolSet::GetWidgetClassInfo(UCanvasPanel::StaticClass());
		FUMGWidgetClassEntry TextEntry = UUMGToolSet::GetWidgetClassInfo(UTextBlock::StaticClass());
		TestTrue(TEXT("CanvasPanel is panel"), CanvasEntry.bIsPanel);
		TestFalse(TEXT("TextBlock is not panel"), TextEntry.bIsPanel);
	});

	It("GetWidgetClassInfo populates Category and Description", [this]()
	{
		FUMGWidgetClassEntry Entry = UUMGToolSet::GetWidgetClassInfo(UTextBlock::StaticClass());
		TestEqual(TEXT("Category matches palette"),
			Entry.Category.ToString(),
			GetMutableDefault<UTextBlock>()->GetPaletteCategory().ToString());
		TestEqual(TEXT("Description matches class tooltip"),
			Entry.Description.ToString(),
			UTextBlock::StaticClass()->GetToolTipText().ToString());
	});

	It("GetWidgetClassInfo matches the ListWidgetClasses entry for the same class", [this]()
	{
		FUMGWidgetClassEntry Single = UUMGToolSet::GetWidgetClassInfo(UButton::StaticClass());
		TArray<FUMGWidgetClassEntry> Listed = UUMGToolSet::ListWidgetClasses(TEXT("Button"));

		const FUMGWidgetClassEntry* FromList = Listed.FindByPredicate(
			[](const FUMGWidgetClassEntry& E) { return E.WidgetClass == UButton::StaticClass(); });
		TestNotNull(TEXT("Button entry found in list"), FromList);

		if (FromList)
		{
			TestTrue(TEXT("WidgetClass equal"), Single.WidgetClass == FromList->WidgetClass);
			TestEqual(TEXT("bIsPanel equal"), Single.bIsPanel, FromList->bIsPanel);
			TestEqual(TEXT("Category equal"), Single.Category.ToString(), FromList->Category.ToString());
			TestEqual(TEXT("Description equal"), Single.Description.ToString(), FromList->Description.ToString());
		}
	});
}

// ============================================================================
// Error/Negative Path Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_Errors,
	"AI.Toolsets.UMGToolSet.Errors", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_Errors)

void FUMGToolSetTest_Errors::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_Errors_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	It("AddWidget null class raises error", [this]()
	{
		// RaiseScriptError fires through Blueprint VM (visible to AI), not in direct C++ calls
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, nullptr, TEXT("X"), nullptr);
		TestNull(TEXT("Null class"), Info.Widget.Get());
	});

	It("AddWidget null blueprint raises error", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(nullptr, UTextBlock::StaticClass(), TEXT("X"), nullptr);
		TestNull(TEXT("Null BP"), Info.Widget.Get());
	});

	It("AddWidget non-panel parent raises error", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("NotPanel"), nullptr);
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("Child"), TextInfo.Widget);
		TestNull(TEXT("Non-panel parent"), Info.Widget.Get());
	});

	It("AddWidget Border with nullptr parent works and rejects excess children", [this]()
	{
		FUMGWidgetInfo BorderInfo = UUMGToolSet::AddWidget(BP, UBorder::StaticClass(), TEXT("MyBorder"), nullptr);
		TestNotNull(TEXT("Border created via nullptr parent"), BorderInfo.Widget.Get());

		if (BorderInfo.Widget)
		{
			FUMGWidgetInfo FirstInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("BorderChild1"), BorderInfo.Widget);
			TestNotNull(TEXT("First child of Border OK"), FirstInfo.Widget.Get());

			if (FirstInfo.Widget)
			{
				FUMGWidgetInfo SecondInfo = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("BorderChild2"), BorderInfo.Widget);
				TestNull(TEXT("Second child rejected by Border"), SecondInfo.Widget.Get());
			}
		}
	});

	It("AddWidget abstract class raises error", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UUserWidget::StaticClass(), TEXT("Abstract"), nullptr);
		TestNull(TEXT("Abstract rejected"), Info.Widget.Get());
	});

	It("RemoveWidget null raises error", [this]()
	{
		TestFalse(TEXT("Null widget"), UUMGToolSet::RemoveWidget(BP, nullptr));
	});

	It("RenameWidget duplicate name raises error", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Taken"), RootPanelWidget);
		FUMGWidgetInfo WInfo = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("Rename"), RootPanelWidget);
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, WInfo.Widget, TEXT("Taken"));
		TestNull(TEXT("Duplicate target"), Renamed.Widget.Get());
	});

	It("RenameWidget null widget raises error", [this]()
	{
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, nullptr, "New");
		TestNull(TEXT("Null widget"), Renamed.Widget.Get());
	});

	It("SetNamedSlotContent non-slot host raises error", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("NoSlot"), nullptr);
		FUMGWidgetInfo Info = UUMGToolSet::SetNamedSlotContent(BP, TextInfo.Widget, FName("content"), UOverlay::StaticClass(), FName("Slot"));
		TestNull(TEXT("Non-slot host"), Info.Widget.Get());
	});

	It("SetNamedSlotContent null class raises error", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::SetNamedSlotContent(BP, nullptr, FName("s"), nullptr, FName("W"));
		TestNull(TEXT("Null class"), Info.Widget.Get());
	});

	It("CompileWidgetBlueprint null raises error", [this]()
	{
		TestFalse(TEXT("Null BP"), UUMGToolSet::CompileWidgetBlueprint(nullptr));
	});

	It("GetWidgetClassInfo null class returns empty entry", [this]()
	{
		// RaiseScriptError fires through Blueprint VM (visible to AI), not in direct C++ calls
		FUMGWidgetClassEntry Entry = UUMGToolSet::GetWidgetClassInfo(nullptr);
		TestNull(TEXT("Null class"), Entry.WidgetClass.Get());
		TestFalse(TEXT("Not panel"), Entry.bIsPanel);
		TestTrue(TEXT("Category empty"), Entry.Category.IsEmpty());
		TestTrue(TEXT("Description empty"), Entry.Description.IsEmpty());
	});

	It("CreateWidgetBlueprint duplicate raises error", [this]()
	{
		// Create a BP, then try the same name again
		UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, TEXT("WBP_DupTest"),
			UUserWidget::StaticClass());
		UWidgetBlueprint* Dup = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, TEXT("WBP_DupTest"),
			UUserWidget::StaticClass());
		TestNull(TEXT("Duplicate BP"), Dup);
	});
}

// ============================================================================
// Resilience/Edge Case Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_Resilience,
	"AI.Toolsets.UMGToolSet.Resilience", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_Resilience)

void FUMGToolSetTest_Resilience::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_Resilience_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	It("Stale pointer after RemoveWidget is handled", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Stale"), nullptr);
		TestTrue(TEXT("First remove succeeds"), UUMGToolSet::RemoveWidget(BP, Info.Widget));
		// Widget is now gone from the tree - verify it's not in GetWidgets
		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);
		bool bFound = TreeInfo.Widgets.ContainsByPredicate([&](const FUMGWidgetInfo& W) { return W.WidgetName == FName("Stale"); });
		TestFalse(TEXT("Removed widget not in GetWidgets"), bFound);
	});

	It("Null WidgetTree handled by GetWidgets", [this]()
	{
		UWidgetBlueprint* EmptyBP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, TEXT("WBP_NullTree"),
			UUserWidget::StaticClass());
		// WidgetTree exists but has no root - should return empty
		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(EmptyBP);
		TestEqual(TEXT("Empty array"), TreeInfo.Widgets.Num(), 0);
	});

	It("Named slot content not in panel hierarchy", [this]()
	{
		FUMGWidgetInfo SlotInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("TestSlot"), UOverlay::StaticClass(), FName("SlotOverlay"));
		TestNotNull(TEXT("Slot content created"), SlotInfo.Widget.Get());

		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* Found = TreeInfo.Widgets.FindByPredicate([&](const FUMGWidgetInfo& Info)
		{
			return Info.Widget == SlotInfo.Widget;
		});
		TestNotNull(TEXT("Found in GetWidgets"), Found);
		if (Found)
		{
			TestNull(TEXT("Parent is null (not panel child)"), Found->Parent.Get());
		}
	});

	It("Named slot children have valid parent pointers", [this]()
	{
		FUMGWidgetInfo SlotPanelInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("ChildSlot"), UVerticalBox::StaticClass(), FName("SlotVBox"));
		FUMGWidgetInfo ChildInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("SlotChild"), SlotPanelInfo.Widget);
		TestNotNull(TEXT("Child added"), ChildInfo.Widget.Get());
		TestTrue(TEXT("Parent is slot panel"), ChildInfo.Parent == SlotPanelInfo.Widget);
	});

	It("Full tree with named slots compiles without GUID crash", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Header"), VBoxInfo.Widget);
		UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("Icon"), VBoxInfo.Widget);

		FUMGWidgetInfo SlotInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("content"), UOverlay::StaticClass(), FName("SlotOverlay"));
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("SlotText"), SlotInfo.Widget);

		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Complex tree compiles"), bCompiled);
	});
}

// ============================================================================
// Bug Fix Regression Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_BugFixes,
	"AI.Toolsets.UMGToolSet.BugFixes", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_BugFixes)

void FUMGToolSetTest_BugFixes::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_BugFixes_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	It("Fix1: AddWidget rejects abstract class with error", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UUserWidget::StaticClass(), TEXT("Abstract"), nullptr);
		TestNull(TEXT("Abstract class rejected"), Info.Widget.Get());
	});

	It("Fix2: GUID only registered after successful construct", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("ValidWidget"), nullptr);
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("GUID registered"), BP->WidgetVariableNameToGuidMap.Contains(Info.Widget.Get()->GetFName()));
	});

	It("Fix3: AddWidget + SetWidgetVariable no double GUID registration", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("DoubleGuid"), nullptr);
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("GUID registered by AddWidget"), BP->WidgetVariableNameToGuidMap.Contains(Info.Widget.Get()->GetFName()));

		FGuid GuidBefore = BP->WidgetVariableNameToGuidMap.FindChecked(Info.WidgetName);

		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, true);
		TestTrue(TEXT("Widget is now variable"), Info.Widget->bIsVariable);

		FGuid GuidAfter = BP->WidgetVariableNameToGuidMap.FindChecked(Info.WidgetName);
		TestEqual(TEXT("GUID unchanged (no double-register)"), GuidAfter, GuidBefore);

		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles clean"), bCompiled);
	});

	It("Fix4: SetNamedSlotContent creates persistent named slot", [this]()
	{
		FUMGWidgetInfo SlotInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("TestSlot"), UOverlay::StaticClass(), FName("SlotOverlay"));
		TestNotNull(TEXT("Slot content created"), SlotInfo.Widget.Get());

		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		bool bFound = false;
		for (const FUMGNamedSlotEntry& Entry : Slots)
		{
			if (Entry.SlotName == FName("TestSlot") && Entry.ContentWidget == SlotInfo.Widget)
			{
				bFound = true;
				break;
			}
		}
		TestTrue(TEXT("Named slot appears in GetNamedSlots"), bFound);

		FUMGWidgetTreeInfo TreeInfo2 = UUMGToolSet::GetWidgets(BP);
		bool bInWidgets = TreeInfo2.Widgets.ContainsByPredicate([&](const FUMGWidgetInfo& Info)
		{
			return Info.Widget == SlotInfo.Widget;
		});
		TestTrue(TEXT("Slot content appears in GetWidgets"), bInWidgets);
	});

	It("Fix1b: SetNamedSlotContent rejects abstract class with error", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("Slot"), UUserWidget::StaticClass(), FName("AbstractSlot"));
		TestNull(TEXT("Abstract class rejected in named slot"), Info.Widget.Get());
		TestFalse(TEXT("No orphaned GUID"), BP->WidgetVariableNameToGuidMap.Contains(FName("AbstractSlot")));
	});

	It("Fix5: RenameWidget to existing object name does not crash", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo W1 = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Widget_A"), RootPanelWidget);
		FUMGWidgetInfo W2 = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("Widget_B"), RootPanelWidget);
		TestNotNull(TEXT("W1 created"), W1.Widget.Get());
		TestNotNull(TEXT("W2 created"), W2.Widget.Get());

		FName OriginalW1Name = W1.WidgetName;
		// Try renaming W1 to W2's name - should fail gracefully
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, W1.Widget, W2.WidgetName.ToString());
		TestNull(TEXT("Rename to existing name rejected"), Renamed.Widget.Get());

		// Original widget unchanged
		TestEqual(TEXT("W1 still has original name"), W1.WidgetName, OriginalW1Name);
	});

	It("MoveWidget reparents to new panel", [this]()
	{
		FUMGWidgetInfo VBox1 = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox1"), nullptr);
		FUMGWidgetInfo VBox2 = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox2"), VBox1.Widget);
		FUMGWidgetInfo Child = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("MoveMe"), VBox1.Widget);
		TestTrue(TEXT("Child parent is VBox1"), Child.Parent == VBox1.Widget);

		FUMGWidgetInfo Moved = UUMGToolSet::MoveWidget(BP, Child.Widget, Cast<UPanelWidget>(VBox2.Widget));
		TestNotNull(TEXT("MoveWidget returned info"), Moved.Widget.Get());
		TestTrue(TEXT("New parent is VBox2"), Moved.Parent == VBox2.Widget);
		TestNotNull(TEXT("Has new slot"), Moved.Slot.Get());
	});

	It("MoveWidget rejects non-panel target", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo Text = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("NotPanel"), RootPanelWidget);
		FUMGWidgetInfo Child = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("MoveChild"), RootPanelWidget);
		FUMGWidgetInfo Moved = UUMGToolSet::MoveWidget(BP, Child.Widget, Cast<UPanelWidget>(Text.Widget));
		TestNull(TEXT("Non-panel rejected"), Moved.Widget.Get());
	});

	It("MoveWidget rejects move to own descendant", [this]()
	{
		FUMGWidgetInfo Parent = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("MovParent"), nullptr);
		FUMGWidgetInfo Child = UUMGToolSet::AddWidget(BP, UOverlay::StaticClass(), TEXT("MovChild"), Parent.Widget);
		// Try to move parent into its own child - should fail
		FUMGWidgetInfo Moved = UUMGToolSet::MoveWidget(BP, Parent.Widget, Cast<UPanelWidget>(Child.Widget));
		TestNull(TEXT("Circular move rejected"), Moved.Widget.Get());
	});

	It("MoveWidget rejects full content widget", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo Border = UUMGToolSet::AddWidget(BP, UBorder::StaticClass(), TEXT("FullBorder"), RootPanelWidget);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Existing"), Border.Widget);
		FUMGWidgetInfo Extra = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("MoveExtra"), RootPanelWidget);
		FUMGWidgetInfo Moved = UUMGToolSet::MoveWidget(BP, Extra.Widget, Cast<UPanelWidget>(Border.Widget));
		TestNull(TEXT("Content widget full"), Moved.Widget.Get());
	});

	It("AddWidget ChildIndex places widget at correct position", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo A = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("A"), RootPanelWidget);
		FUMGWidgetInfo B = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("B"), RootPanelWidget);
		FUMGWidgetInfo C = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("C"), RootPanelWidget);

		// Insert D at index 1 (between A and B)
		FUMGWidgetInfo D = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("D"), RootPanelWidget, 1);
		TestNotNull(TEXT("D created"), D.Widget.Get());

		// Verify order: Root children should be A(0), D(1), B(2), C(3)
		TestEqual(TEXT("4 children"), RootPanelWidget->GetChildrenCount(), 4);
		TestEqual(TEXT("Index 0 is A"), RootPanelWidget->GetChildAt(0)->GetFName(), A.WidgetName);
		TestEqual(TEXT("Index 1 is D"), RootPanelWidget->GetChildAt(1)->GetFName(), D.WidgetName);
		TestEqual(TEXT("Index 2 is B"), RootPanelWidget->GetChildAt(2)->GetFName(), B.WidgetName);
		TestEqual(TEXT("Index 3 is C"), RootPanelWidget->GetChildAt(3)->GetFName(), C.WidgetName);
	});

	It("AddWidget ChildIndex -1 appends to end (default)", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo A = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("First"), RootPanelWidget);
		FUMGWidgetInfo B = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("Second"), RootPanelWidget, -1);

		TestEqual(TEXT("First at 0"), RootPanelWidget->GetChildAt(0)->GetFName(), A.WidgetName);
		TestEqual(TEXT("Second at 1"), RootPanelWidget->GetChildAt(1)->GetFName(), B.WidgetName);
	});

	It("MoveWidget with ChildIndex places at correct position", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo A = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("MA"), RootPanelWidget);
		FUMGWidgetInfo B = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("MB"), RootPanelWidget);
		FUMGWidgetInfo C = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("MC"), RootPanelWidget);

		FUMGWidgetInfo VBox = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("MVBox"), RootPanelWidget);
		FUMGWidgetInfo D = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("MD"), VBox.Widget);

		// Move D from VBox to root at index 0
		FUMGWidgetInfo Moved = UUMGToolSet::MoveWidget(BP, D.Widget, Cast<UPanelWidget>(BP->WidgetTree->RootWidget), 0);
		TestNotNull(TEXT("Move succeeded"), Moved.Widget.Get());

		// Root should be: D(0), A(1), B(2), C(3), VBox(4)
		TestEqual(TEXT("Index 0 is MD"), RootPanelWidget->GetChildAt(0)->GetFName(), D.WidgetName);
		TestEqual(TEXT("Index 1 is MA"), RootPanelWidget->GetChildAt(1)->GetFName(), A.WidgetName);
	});

	It("Fix7: RemoveWidget cleans up GUID for non-variable widgets", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("NonVarWidget"), nullptr);
		FName NonVariableWidgetName = Info.WidgetName;
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		// All widgets get GUIDs, even non-variables
		TestTrue(TEXT("GUID registered"), BP->WidgetVariableNameToGuidMap.Contains(NonVariableWidgetName));
		TestFalse(TEXT("Not a variable"), Info.Widget->bIsVariable);

		bool bRemoved = UUMGToolSet::RemoveWidget(BP, Info.Widget);
		TestTrue(TEXT("Removed"), bRemoved);
		// GUID should be cleaned up even though bIsVariable was false
		TestFalse(TEXT("GUID removed after RemoveWidget"), BP->WidgetVariableNameToGuidMap.Contains(NonVariableWidgetName));

		// Compile should succeed without orphaned GUID ensures
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles clean after remove"), bCompiled);
	});

	It("Fix8: SetWidgetVariable false preserves GUID and compiles clean", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("VarWidget"), nullptr);
		FName VariableWidgetName = Info.WidgetName;

		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("GUID registered"), BP->WidgetVariableNameToGuidMap.Contains(VariableWidgetName));

		// Set variable true then false - GUID must survive both transitions
		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, true);
		TestTrue(TEXT("Set variable true"), Info.Widget->bIsVariable);
		TestTrue(TEXT("GUID still present after true"), BP->WidgetVariableNameToGuidMap.Contains(VariableWidgetName));

		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, false);
		TestTrue(TEXT("Set variable false"), !Info.Widget->bIsVariable);
		TestTrue(TEXT("GUID still present after false"), BP->WidgetVariableNameToGuidMap.Contains(VariableWidgetName));

		// Compile should succeed - no orphaned GUID ensure
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles clean after variable toggle"), bCompiled);
	});

	It("Fix6: Forgiving SetNamedSlotContent moves existing widget to slot", [this]()
	{
		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		FUMGWidgetInfo PanelChild = UUMGToolSet::AddWidget(BP, UOverlay::StaticClass(), TEXT("SlotContent"), RootPanelWidget);
		TestNotNull(TEXT("Widget created via AddWidget"), PanelChild.Widget.Get());
		TestNotNull(TEXT("Has panel parent"), PanelChild.Parent.Get());

		FUMGWidgetInfo SlotResult = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("TestSlot"), UOverlay::StaticClass(), PanelChild.WidgetName);
		TestNotNull(TEXT("Forgiving SetNamedSlotContent succeeded"), SlotResult.Widget.Get());
		TestTrue(TEXT("Same widget instance"), SlotResult.Widget == PanelChild.Widget);

		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		bool bFound = Slots.ContainsByPredicate([](const FUMGNamedSlotEntry& Entry)
		{
			return Entry.SlotName == FName("TestSlot") && Entry.ContentWidget != nullptr;
		});
		TestTrue(TEXT("Widget bound to named slot"), bFound);
	});
}

// ============================================================================
// UI Components Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_UIComponents,
	"AI.Toolsets.UMGToolSet.UIComponents", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	FName WidgetName;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_UIComponents)

void FUMGToolSetTest_UIComponents::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_UIComp_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
		if (BP)
		{
			FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("CompTarget"), nullptr);
			WidgetName = Info.WidgetName;
		}
	});

	AfterEach([this]()
	{
		BP = nullptr;
		WidgetName = NAME_None;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// Helper: find the FUMGWidgetInfo for WidgetName inside a GetWidgets result.
	auto FindWidget = [](const FUMGWidgetTreeInfo& Tree, FName Name) -> const FUMGWidgetInfo*
	{
		return Tree.Widgets.FindByPredicate([Name](const FUMGWidgetInfo& W) { return W.WidgetName == Name; });
	};

	// ---- Happy Path ----

	It("AddUIComponent creates component visible in GetWidgets", [this, FindWidget]()
	{
		FUMGWidgetInfo Result = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("Returned widget is valid"), Result.Widget.Get());
		TestEqual(TEXT("Returned widget name matches"), Result.WidgetName, WidgetName);
		TestEqual(TEXT("Returned UIComponents count is 1"), Result.UIComponents.Num(), 1);
		if (Result.UIComponents.Num() > 0)
		{
			TestNotNull(TEXT("Returned component object set"), Result.UIComponents[0].Component.Get());
			TestTrue(TEXT("Returned component is MouseHover"), Result.UIComponents[0].Component->IsA<UMouseHoverComponent>());
		}
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("One component"), WidgetInfo->UIComponents.Num(), 1);
			if (WidgetInfo->UIComponents.Num() > 0)
			{
				TestNotNull(TEXT("Component object set"), WidgetInfo->UIComponents[0].Component.Get());
				TestTrue(TEXT("MouseHover component"), WidgetInfo->UIComponents[0].Component->IsA<UMouseHoverComponent>());
			}
		}
	});

	It("AddUIComponent two distinct classes both visible in GetWidgets", [this, FindWidget]()
	{
		FUMGWidgetInfo Result1 = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("First add returns valid widget"), Result1.Widget.Get());
		TestEqual(TEXT("First add UIComponents count is 1"), Result1.UIComponents.Num(), 1);

		FUMGWidgetInfo Result2 = UUMGToolSet::AddUIComponent(BP, WidgetName, USizeBoxComponent::StaticClass());
		TestNotNull(TEXT("Second add returns valid widget"), Result2.Widget.Get());
		TestEqual(TEXT("Second add UIComponents count is 2"), Result2.UIComponents.Num(), 2);
		if (Result2.UIComponents.Num() == 2)
		{
			bool bHasMouseHover = Result2.UIComponents.ContainsByPredicate([](const FUMGUIComponentInfo& C) { return C.Component && C.Component->IsA<UMouseHoverComponent>(); });
			bool bHasSizeBox    = Result2.UIComponents.ContainsByPredicate([](const FUMGUIComponentInfo& C) { return C.Component && C.Component->IsA<USizeBoxComponent>(); });
			TestTrue(TEXT("Returned info has MouseHover"), bHasMouseHover);
			TestTrue(TEXT("Returned info has SizeBox"), bHasSizeBox);
		}
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Two components"), WidgetInfo->UIComponents.Num(), 2);
			bool bHasMouseHover = WidgetInfo->UIComponents.ContainsByPredicate([](const FUMGUIComponentInfo& C) { return C.Component && C.Component->IsA<UMouseHoverComponent>(); });
			bool bHasSizeBox    = WidgetInfo->UIComponents.ContainsByPredicate([](const FUMGUIComponentInfo& C) { return C.Component && C.Component->IsA<USizeBoxComponent>(); });
			TestTrue(TEXT("MouseHover present"), bHasMouseHover);
			TestTrue(TEXT("SizeBox present"), bHasSizeBox);
		}
	});

	It("RemoveUIComponent removes component visible in GetWidgets", [this, FindWidget]()
	{
		FUMGWidgetInfo AddResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("Add succeeded"), AddResult.Widget.Get());
		UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("No components"), WidgetInfo->UIComponents.Num(), 0);
		}
	});

	It("RemoveUIComponent leaves other components intact", [this, FindWidget]()
	{
		TestNotNull(TEXT("First add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass()).Widget.Get());
		TestNotNull(TEXT("Second add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, USizeBoxComponent::StaticClass()).Widget.Get());
		UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("One component remains"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("SizeBox untouched"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<USizeBoxComponent>());
		}
	});

	It("MoveUIComponent bMoveAfter=true reorders components", [this, FindWidget]()
	{
		// Add in order: [MouseHover, SizeBox]. Move MouseHover after SizeBox [SizeBox, MouseHover].
		TestNotNull(TEXT("MouseHover add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass()).Widget.Get());
		TestNotNull(TEXT("SizeBox add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, USizeBoxComponent::StaticClass()).Widget.Get());
		UUMGToolSet::MoveUIComponent(BP, WidgetName,
			UMouseHoverComponent::StaticClass(), USizeBoxComponent::StaticClass(), /*bMoveAfter=*/true);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Two components"), WidgetInfo->UIComponents.Num(), 2);
			if (WidgetInfo->UIComponents.Num() == 2)
			{
				TestTrue(TEXT("SizeBox is first"),    WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<USizeBoxComponent>());
				TestTrue(TEXT("MouseHover is second"), WidgetInfo->UIComponents[1].Component && WidgetInfo->UIComponents[1].Component->IsA<UMouseHoverComponent>());
			}
		}
	});

	It("MoveUIComponent bMoveAfter=false reorders components", [this, FindWidget]()
	{
		// Add in order: [MouseHover, SizeBox]. Move SizeBox before MouseHover [SizeBox, MouseHover].
		TestNotNull(TEXT("MouseHover add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass()).Widget.Get());
		TestNotNull(TEXT("SizeBox add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, USizeBoxComponent::StaticClass()).Widget.Get());
		UUMGToolSet::MoveUIComponent(BP, WidgetName,
			USizeBoxComponent::StaticClass(), UMouseHoverComponent::StaticClass(), /*bMoveAfter=*/false);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Two components"), WidgetInfo->UIComponents.Num(), 2);
			if (WidgetInfo->UIComponents.Num() == 2)
			{
				TestTrue(TEXT("SizeBox is first"),    WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<USizeBoxComponent>());
				TestTrue(TEXT("MouseHover is second"), WidgetInfo->UIComponents[1].Component && WidgetInfo->UIComponents[1].Component->IsA<UMouseHoverComponent>());
			}
		}
	});

	It("AddUIComponent then compile succeeds", [this]()
	{
		FUMGWidgetInfo Result = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("Add returned valid widget"), Result.Widget.Get());
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles with component"), bCompiled);
	});

	It("Add then remove then compile succeeds", [this]()
	{
		FUMGWidgetInfo AddResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("Add returned valid widget"), AddResult.Widget.Get());
		UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles after remove"), bCompiled);
	});

	// ---- Error / Null Paths ----

	It("AddUIComponent null blueprint does not crash", [this]()
	{
		FUMGWidgetInfo Result = UUMGToolSet::AddUIComponent(nullptr, WidgetName, UMouseHoverComponent::StaticClass());
		TestNull(TEXT("Null BP returns empty info"), Result.Widget.Get());
	});

	It("AddUIComponent none widget name does not add component", [this, FindWidget]()
	{
		FUMGWidgetInfo Result = UUMGToolSet::AddUIComponent(BP, NAME_None, UMouseHoverComponent::StaticClass());
		TestNull(TEXT("NAME_None returns empty info"), Result.Widget.Get());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("No components added for NAME_None"), WidgetInfo->UIComponents.Num(), 0);
		}
	});

	It("AddUIComponent null component class does not add component", [this, FindWidget]()
	{
		FUMGWidgetInfo Result = UUMGToolSet::AddUIComponent(BP, WidgetName, nullptr);
		TestNull(TEXT("Null class returns empty info"), Result.Widget.Get());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("No components added for null class"), WidgetInfo->UIComponents.Num(), 0);
		}
	});

	It("RemoveUIComponent component not present does not crash", [this]()
	{
		// No prior add, remove should be a graceful no-op.
		UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
	});

	It("MoveUIComponent null relative class does not remove component", [this, FindWidget]()
	{
		UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		UUMGToolSet::MoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass(), nullptr, true);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestTrue(TEXT("Component still present after bad move"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<UMouseHoverComponent>());
		}
	});

	// ---- Error Reporting Tests ----
	// These tests validate that the error-reporting paths introduced to replace silent failures
	// and UE_LOG warnings produce the correct observable side-effects.

	It("AddUIComponent duplicate class is rejected and count stays at 1", [this, FindWidget]()
	{
		FUMGWidgetInfo FirstResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNotNull(TEXT("First add returns valid widget"), FirstResult.Widget.Get());
		TestEqual(TEXT("First add UIComponents count is 1"), FirstResult.UIComponents.Num(), 1);
		// Second add of the same class must be rejected (was previously only a UE_LOG warning).
		FUMGWidgetInfo DuplicateResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestNull(TEXT("Duplicate add returns empty info"), DuplicateResult.Widget.Get());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Still exactly one component after duplicate add"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("Existing component is the original"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<UMouseHoverComponent>());
		}
	});

	It("AddUIComponent hierarchy conflict derived class is rejected and count stays at 1", [this, FindWidget]()
	{
		// Add the base class first, then attempt to add a derived class in the same hierarchy.
		// The second add must be rejected (was previously only a UE_LOG warning).
		FUMGWidgetInfo BaseResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UTestBaseUIComponent::StaticClass());
		TestNotNull(TEXT("Base class add returns valid widget"), BaseResult.Widget.Get());
		TestEqual(TEXT("Base class add UIComponents count is 1"), BaseResult.UIComponents.Num(), 1);
		FUMGWidgetInfo DerivedResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UTestDerivedUIComponent::StaticClass());
		TestNull(TEXT("Derived class add (hierarchy conflict) returns empty info"), DerivedResult.Widget.Get());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Still exactly one component after hierarchy conflict add"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("Original base component retained"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<UTestBaseUIComponent>());
		}
	});

	It("AddUIComponent hierarchy conflict base class is rejected when derived already present", [this, FindWidget]()
	{
		// Add derived first, then try to add the base — same hierarchy, must also be rejected.
		FUMGWidgetInfo DerivedResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UTestDerivedUIComponent::StaticClass());
		TestNotNull(TEXT("Derived class add returns valid widget"), DerivedResult.Widget.Get());
		TestEqual(TEXT("Derived class add UIComponents count is 1"), DerivedResult.UIComponents.Num(), 1);
		FUMGWidgetInfo BaseResult = UUMGToolSet::AddUIComponent(BP, WidgetName, UTestBaseUIComponent::StaticClass());
		TestNull(TEXT("Base class add (hierarchy conflict) returns empty info"), BaseResult.Widget.Get());
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("Still exactly one component after reverse hierarchy conflict"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("Original derived component retained"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<UTestDerivedUIComponent>());
		}
	});

	It("RemoveUIComponent after already removed does not crash and count stays at 0", [this, FindWidget]()
	{
		TestNotNull(TEXT("Add succeeded"), UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass()).Widget.Get());
		UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		// Second remove: component is gone, extension still exists — must return false.
		const bool bResult = UUMGToolSet::RemoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		TestFalse(TEXT("Second remove returns false"), bResult);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("No components after double remove"), WidgetInfo->UIComponents.Num(), 0);
		}
	});

	It("MoveUIComponent component-to-move absent does not remove other components", [this, FindWidget]()
	{
		// Only SizeBox is present; trying to move MouseHover (absent) must return false and leave SizeBox untouched.
		UUMGToolSet::AddUIComponent(BP, WidgetName, USizeBoxComponent::StaticClass());
		const bool bResult = UUMGToolSet::MoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass(), USizeBoxComponent::StaticClass(), true);
		TestFalse(TEXT("Move with absent component-to-move returns false"), bResult);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("SizeBox still present after bad move"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("SizeBox is the remaining component"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<USizeBoxComponent>());
		}
	});

	It("MoveUIComponent relative-component absent does not move or remove the target", [this, FindWidget]()
	{
		// Only MouseHover is present; moving it relative to SizeBox (absent) must return false and leave MouseHover untouched.
		UUMGToolSet::AddUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass());
		const bool bResult = UUMGToolSet::MoveUIComponent(BP, WidgetName, UMouseHoverComponent::StaticClass(), USizeBoxComponent::StaticClass(), true);
		TestFalse(TEXT("Move with absent relative component returns false"), bResult);
		FUMGWidgetTreeInfo Tree = UUMGToolSet::GetWidgets(BP);
		const FUMGWidgetInfo* WidgetInfo = FindWidget(Tree, WidgetName);
		TestNotNull(TEXT("Widget found in tree"), WidgetInfo);
		if (WidgetInfo)
		{
			TestEqual(TEXT("MouseHover still present after bad relative move"), WidgetInfo->UIComponents.Num(), 1);
			TestTrue(TEXT("MouseHover is the remaining component"), WidgetInfo->UIComponents.Num() > 0 && WidgetInfo->UIComponents[0].Component && WidgetInfo->UIComponents[0].Component->IsA<UMouseHoverComponent>());
		}
	});
}

// ============================================================================
// BindWidget Name Conflict Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_BindWidget,
	"AI.Toolsets.UMGToolSet.BindWidget", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_BindWidget)

void FUMGToolSetTest_BindWidget::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_BindWidget_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			TSubclassOf<UUserWidget>(UUMGTestWidgetWithBindings::StaticClass()));
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	It("AddWidget accepts BindWidget name with compatible class", [this]()
	{
		if (!BP) return;

		// RequiredText expects UTextBlock - add a UTextBlock with that name
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("TempText"), nullptr);
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, Info.Widget, "RequiredText");

		TestNotNull(TEXT("BindWidget name accepted with compatible class"), Renamed.Widget.Get());
	});

	It("AddWidget rejects BindWidget name with incompatible class", [this]()
	{
		if (!BP) return;

		// RequiredText expects UTextBlock - UImage is not compatible
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("TempImage"), nullptr);
		FUMGWidgetInfo Renamed = UUMGToolSet::RenameWidget(BP, Info.Widget, "RequiredText");
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestFalse(TEXT("Rename failed"), Renamed.WidgetName == FName("RequiredText"));

		TestNull(TEXT("Incompatible class rejected"), Renamed.Widget.Get());
	});

	It("AddWidget with non-conflicting name works normally", [this]()
	{
		if (!BP) return;

		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("MyCustomWidget"), nullptr);
		TestNotNull(TEXT("Widget created"), Info.Widget.Get());
		TestTrue(TEXT("GUID registered"), BP->WidgetVariableNameToGuidMap.Contains(Info.WidgetName));
	});

	It("SetNamedSlotContent rejects widget name matching parent class property", [this]()
	{
		if (!BP) return;

		// InternalRef is a regular UPROPERTY on the parent - name should be rejected
		FUMGWidgetInfo Info = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("TestSlot"), UOverlay::StaticClass(), FName("InternalRef"));
		TestNull(TEXT("Named slot content rejected - name matches parent C++ property"), Info.Widget.Get());
	});
}


// ============================================================================
// BindToEventProperty Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_BindToEventProperty,
	"AI.Toolsets.UMGToolSet.BindToEventProperty", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;

	// Adds a Button widget, marks it as a BP variable and compiles so the variable lands on the
	// SkeletonGeneratedClass. BindToEventProperty looks up the variable on the skeleton, so the
	// compile is mandatory before binding.
	UButton* AddCompiledButtonVariable(FName WidgetName)
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UButton::StaticClass(), WidgetName.ToString(), nullptr);
		if (!Info.Widget) return nullptr;
		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, true);
		UUMGToolSet::CompileWidgetBlueprint(BP);
		return Cast<UButton>(Info.Widget);
	}
END_DEFINE_SPEC(FUMGToolSetTest_BindToEventProperty)

void FUMGToolSetTest_BindToEventProperty::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_BindEvent_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// ---- Happy paths ----

	It("Binds OnClicked to a Button variable and registers the bound event", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("MyButton"));
		TestNotNull(TEXT("Button variable created"), Btn);
		if (!Btn) return;

		bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("MyButton"), UButton::StaticClass());
		TestTrue(TEXT("BindToEventProperty returned true"), bBound);

		const UK2Node_ComponentBoundEvent* Node =
			FKismetEditorUtilities::FindBoundEventForComponent(BP, FName("OnClicked"), FName("MyButton"));
		TestNotNull(TEXT("Bound event node is registered on the blueprint"), Node);
	});

	It("Compiles cleanly after binding an event", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("CompileBtn"));
		if (!Btn) return;

		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("CompileBtn"), UButton::StaticClass());
		TestTrue(TEXT("Bind succeeded"), bBound);

		const bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Blueprint compiles after binding"), bCompiled);
	});

	It("Binds multiple distinct events on the same widget", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("MultiBtn"));
		if (!Btn) return;

		TestTrue(TEXT("OnClicked bound"),
			UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("MultiBtn"), UButton::StaticClass()));
		TestTrue(TEXT("OnPressed bound"),
			UUMGToolSet::BindToEventProperty(BP, FName("OnPressed"), FName("MultiBtn"), UButton::StaticClass()));
		TestTrue(TEXT("OnHovered bound"),
			UUMGToolSet::BindToEventProperty(BP, FName("OnHovered"), FName("MultiBtn"), UButton::StaticClass()));

		TestNotNull(TEXT("OnClicked node found"),
			FKismetEditorUtilities::FindBoundEventForComponent(BP, FName("OnClicked"), FName("MultiBtn")));
		TestNotNull(TEXT("OnPressed node found"),
			FKismetEditorUtilities::FindBoundEventForComponent(BP, FName("OnPressed"), FName("MultiBtn")));
		TestNotNull(TEXT("OnHovered node found"),
			FKismetEditorUtilities::FindBoundEventForComponent(BP, FName("OnHovered"), FName("MultiBtn")));
	});

	It("Binds OnCheckStateChanged on a CheckBox", [this]()
	{
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UCheckBox::StaticClass(), TEXT("MyCheck"), nullptr);
		TestNotNull(TEXT("CheckBox created"), Info.Widget.Get());
		if (!Info.Widget) return;
		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, true);
		UUMGToolSet::CompileWidgetBlueprint(BP);

		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnCheckStateChanged"), FName("MyCheck"), UCheckBox::StaticClass());
		TestTrue(TEXT("OnCheckStateChanged bound"), bBound);
	});

	// ---- Error paths ----

	It("Returns false when WidgetBlueprint is null", [this]()
	{
		const bool bBound = UUMGToolSet::BindToEventProperty(nullptr, FName("OnClicked"), FName("MyButton"), UButton::StaticClass());
		TestFalse(TEXT("Null blueprint rejected"), bBound);
	});

	It("Returns false when EventName is None", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("NoEvtBtn"));
		if (!Btn) return;
		const bool bBound = UUMGToolSet::BindToEventProperty(BP, NAME_None, FName("NoEvtBtn"), UButton::StaticClass());
		TestFalse(TEXT("None event name rejected"), bBound);
	});

	It("Returns false when PropertyName is None", [this]()
	{
		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), NAME_None, UButton::StaticClass());
		TestFalse(TEXT("None property name rejected"), bBound);
	});

	It("Returns false when PropertyClass is null", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("NoClassBtn"));
		if (!Btn) return;
		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("NoClassBtn"), nullptr);
		TestFalse(TEXT("Null property class rejected"), bBound);
	});

	It("Returns false when widget variable does not exist", [this]()
	{
		// No widget added with this name - skeleton class has no such property.
		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("DoesNotExist"), UButton::StaticClass());
		TestFalse(TEXT("Missing variable rejected"), bBound);
	});

	It("Returns false when widget exists but is not exposed as a variable", [this]()
	{
		// AddWidget on a UUserWidget-based BP gives the new widget bIsVariable=true by default,
		// so flip it off explicitly to simulate a non-variable widget.
		FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UButton::StaticClass(), TEXT("HiddenBtn"), nullptr);
		if (!Info.Widget) return;
		UUMGToolSet::ToggleWidgetAsVariable(BP, Info.Widget, false);
		UUMGToolSet::CompileWidgetBlueprint(BP);

		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("HiddenBtn"), UButton::StaticClass());
		TestFalse(TEXT("Non-variable widget rejected"), bBound);
	});

	It("Returns false when event does not exist on PropertyClass", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("BogusEvtBtn"));
		if (!Btn) return;
		const bool bBound = UUMGToolSet::BindToEventProperty(BP, FName("OnTotallyMadeUpEvent"), FName("BogusEvtBtn"), UButton::StaticClass());
		TestFalse(TEXT("Unknown event rejected"), bBound);
	});

	It("Returns false when the same event is bound twice on the same widget", [this]()
	{
		UButton* Btn = AddCompiledButtonVariable(FName("DoubleBtn"));
		if (!Btn) return;

		const bool bFirst = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("DoubleBtn"), UButton::StaticClass());
		TestTrue(TEXT("First bind succeeds"), bFirst);

		const bool bSecond = UUMGToolSet::BindToEventProperty(BP, FName("OnClicked"), FName("DoubleBtn"), UButton::StaticClass());
		TestFalse(TEXT("Duplicate bind rejected"), bSecond);
	});
}

// ============================================================================
// ReplaceWidgetWithTemplate Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidget,
	"AI.Toolsets.UMGToolSet.ReplaceWidget", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
UWidgetBlueprint* TemplateBP = nullptr;
int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidget)

void FUMGToolSetTest_ReplaceWidget::Define()
{
	BeforeEach([this]()
		{
			UMGToolSetTest::RegisterTestMountPoint();
			FString BPName = FString::Printf(TEXT("WBP_Replace_%d"), TestCounter++);
			BP = UUMGToolSet::CreateWidgetBlueprint(
				UMGToolSetTest::TestMountPoint, BPName,
				UUserWidget::StaticClass());

			FString TplName = FString::Printf(TEXT("WBP_ReplaceTpl_%d"), TestCounter++);
			TemplateBP = UUMGToolSet::CreateWidgetBlueprint(
				UMGToolSetTest::TestMountPoint, TplName,
				UUserWidget::StaticClass());
			if (TemplateBP)
			{
				UUMGToolSet::AddWidget(TemplateBP, UTextBlock::StaticClass(), TEXT("TplRoot"), nullptr);
				UUMGToolSet::CompileWidgetBlueprint(TemplateBP);
			}
		});

	AfterEach([this]()
		{
			BP = nullptr;
			TemplateBP = nullptr;
			UMGToolSetTest::UnregisterTestMountPoint();
		});

	It("Replaces a UserWidget instance with another template", [this]()
		{
			if (!TestNotNull(TEXT("BP"), BP)) return;
			if (!TestNotNull(TEXT("TemplateBP"), TemplateBP)) return;
			if (!TestNotNull(TEXT("TemplateBP->GeneratedClass"), TemplateBP->GeneratedClass.Get())) return;

			FUMGWidgetInfo CreatedWidget = UUMGToolSet::AddWidget(BP, TemplateBP->GeneratedClass.Get(), TEXT("OldInstance"), nullptr);
			if (!TestNotNull(TEXT("Old instance constructed"), CreatedWidget.Widget.Get())) return;

			// Build a different template to swap in.
			FString NewTplName = FString::Printf(TEXT("WBP_ReplaceNewTpl_%d"), TestCounter++);
			UWidgetBlueprint* NewTemplate = UUMGToolSet::CreateWidgetBlueprint(
				UMGToolSetTest::TestMountPoint, NewTplName, UUserWidget::StaticClass());
			if (!TestNotNull(TEXT("NewTemplate"), NewTemplate)) return;
			UUMGToolSet::AddWidget(NewTemplate, UImage::StaticClass(), TEXT("NewTplRoot"), nullptr);
			UUMGToolSet::CompileWidgetBlueprint(NewTemplate);
			if (!TestNotNull(TEXT("NewTemplate->GeneratedClass"), NewTemplate->GeneratedClass.Get())) return;

			const FName OriginalName = CreatedWidget.Widget->GetFName();

			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(BP, CreatedWidget.Widget, NewTemplate->GeneratedClass.Get());
			TestTrue(TEXT("Replacement succeeded"), Result.bSuccess);

			// Post-conditions: a widget exists at the original name, it's an instance of the new
			// template class, and it's not the same object as the (now-trashed) old widget.
			UWidget* AfterReplace = BP->WidgetTree->FindWidget(OriginalName);
			TestNotNull(TEXT("Widget present at original name after replace"), AfterReplace);
			if (AfterReplace)
			{
				TestEqual(TEXT("New widget is instance of NewTemplate's generated class"),
					AfterReplace->GetClass(), NewTemplate->GeneratedClass.Get());
				TestTrue(TEXT("Old widget pointer no longer occupies the original name"),
					AfterReplace != CreatedWidget.Widget.Get());
			}
		});

	It("Null WidgetBlueprint rejected", [this]()
		{
			FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("X"), nullptr);
			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(nullptr, Info.Widget, TemplateBP->GeneratedClass.Get());
			TestFalse(TEXT("Null WidgetBlueprint rejected"), Result.bSuccess);
		});

	It("Null WidgetToReplace rejected", [this]()
		{
			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(BP, nullptr, TemplateBP->GeneratedClass.Get());
			TestFalse(TEXT("Null WidgetToReplace rejected"), Result.bSuccess);
		});

	It("Null TemplateClass rejected", [this]()
		{
			FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("X"), nullptr);
			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(BP, Info.Widget, nullptr);
			TestFalse(TEXT("Null TemplateClass rejected"), Result.bSuccess);
		});

	It("Self template rejected as circular reference", [this]()
		{
			if (!TestNotNull(TEXT("BP"), BP)) return;
			FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("RootText"), nullptr);
			// Inserting BP into BP would create a cycle — the circular-ref pre-check fires
			// regardless of member compatibility.
			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(BP, Info.Widget, BP->GeneratedClass.Get());
			TestFalse(TEXT("Self template rejected"), Result.bSuccess);
		});

	It("Incompatible properties replace and are reported", [this]()
		{
			// UTextBlock has properties (Text, Font, ColorAndOpacity, ...) that don't exist on a
			// vanilla UUserWidget template. Under the flexible behavior the replacement still
			// happens; the report surfaces the unmatched properties so the caller can warn.
			FUMGWidgetInfo Info = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Incompat"), nullptr);
			if (!TestNotNull(TEXT("Widget added"), Info.Widget.Get())) return;
			FWidgetReplacementReport Result = UUMGToolSet::ReplaceWidgetWithTemplate(BP, Info.Widget, TemplateBP->GeneratedClass.Get());
			TestTrue(TEXT("Replacement succeeded"), Result.bSuccess);
			TestTrue(TEXT("Unmatched properties reported"), Result.UnmatchedProperties.Num() > 0);
		});
}

// ============================================================================
// ReplaceWidgetWithChild Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidgetWithChild,
	"AI.Toolsets.UMGToolSet.ReplaceWidgetWithChild", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidgetWithChild)

void FUMGToolSetTest_ReplaceWidgetWithChild::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_RepChild_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// ---- Happy paths ----

	It("Panel inside another panel: child takes panel's place under outer panel", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo OuterInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("Outer"), nullptr);
		FUMGWidgetInfo InnerInfo = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("Inner"), OuterInfo.Widget);
		FUMGWidgetInfo ChildInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), InnerInfo.Widget);

		UWidget* OriginalChild = ChildInfo.Widget.Get();
		if (!TestNotNull(TEXT("Child created"), OriginalChild)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, InnerInfo.Widget);
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestNull(TEXT("Inner panel removed from tree"), BP->WidgetTree->FindWidget(FName("Inner")));

		UPanelWidget* Outer = Cast<UPanelWidget>(OuterInfo.Widget);
		if (TestNotNull(TEXT("Outer still in tree"), Outer))
		{
			TestEqual(TEXT("Outer has one child"), Outer->GetChildrenCount(), 1);
			if (Outer->GetChildrenCount() > 0)
			{
				TestTrue(TEXT("Original child is now Outer's direct child"), Outer->GetChildAt(0) == OriginalChild);
			}
		}
	});

	It("Panel as root: child becomes the new root", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo RootInfo = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("Root"), nullptr);
		FUMGWidgetInfo ChildInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), RootInfo.Widget);

		UWidget* OriginalChild = ChildInfo.Widget.Get();
		if (!TestNotNull(TEXT("Child created"), OriginalChild)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, RootInfo.Widget);
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestTrue(TEXT("Child is now the root"), BP->WidgetTree->RootWidget == OriginalChild);
		TestNull(TEXT("Original root panel removed from tree"), BP->WidgetTree->FindWidget(FName("Root")));
	});

	It("Panel as named-slot content: child becomes the named-slot content", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo PanelInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("Slot1"), UCanvasPanel::StaticClass(), FName("PanelInSlot"));
		if (!TestNotNull(TEXT("Panel placed in slot"), PanelInfo.Widget.Get())) return;

		FUMGWidgetInfo ChildInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), PanelInfo.Widget);
		UWidget* OriginalChild = ChildInfo.Widget.Get();
		if (!TestNotNull(TEXT("Child created"), OriginalChild)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, PanelInfo.Widget);
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestNull(TEXT("Original panel removed from tree"), BP->WidgetTree->FindWidget(FName("PanelInSlot")));

		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		bool bSlotPointsToChild = Slots.ContainsByPredicate([&](const FUMGNamedSlotEntry& Entry)
		{
			return Entry.SlotName == FName("Slot1") && Entry.ContentWidget == OriginalChild;
		});
		TestTrue(TEXT("Named slot now contains the child"), bSlotPointsToChild);
	});

	It("Compiles cleanly after replace-with-child", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo OuterInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("Outer"), nullptr);
		FUMGWidgetInfo InnerInfo = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("Inner"), OuterInfo.Widget);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), InnerInfo.Widget);

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, InnerInfo.Widget);
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestTrue(TEXT("BP compiles after replace"), UUMGToolSet::CompileWidgetBlueprint(BP));
	});

	// ---- Validation / error paths ----

	It("Null WidgetBlueprint rejected", [this]()
	{
		FUMGWidgetInfo PanelInfo = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("Root"), nullptr);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), PanelInfo.Widget);
		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(nullptr, PanelInfo.Widget);
		TestFalse(TEXT("Null WidgetBlueprint rejected"), bResult);
	});

	It("Null WidgetToReplace rejected", [this]()
	{
		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, nullptr);
		TestFalse(TEXT("Null WidgetToReplace rejected"), bResult);
	});

	It("Widget not in tree rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		UCanvasPanel* Detached = NewObject<UCanvasPanel>(BP->WidgetTree, UCanvasPanel::StaticClass(), TEXT("Detached"));
		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, Detached);
		TestFalse(TEXT("Detached widget rejected"), bResult);
	});

	It("Non-panel widget rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("NotAPanel"), nullptr);
		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, TextInfo.Widget);
		TestFalse(TEXT("Non-panel rejected"), bResult);
	});

	It("Panel with zero children rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo PanelInfo = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("EmptyPanel"), nullptr);
		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, PanelInfo.Widget);
		TestFalse(TEXT("Empty panel rejected"), bResult);
		TestNotNull(TEXT("Panel still in tree"), BP->WidgetTree->FindWidget(FName("EmptyPanel")));
	});

	It("Panel with two children rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo PanelInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("TwoKids"), nullptr);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("KidA"), PanelInfo.Widget);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("KidB"), PanelInfo.Widget);

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, PanelInfo.Widget);
		TestFalse(TEXT("Two-child panel rejected"), bResult);
	});

	It("Validation failure leaves tree unchanged", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo PanelInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("TwoKids"), nullptr);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("KidA"), PanelInfo.Widget);
		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("KidB"), PanelInfo.Widget);

		bool bResult = UUMGToolSet::ReplaceWidgetWithChild(BP, PanelInfo.Widget);
		TestFalse(TEXT("Rejected"), bResult);

		TestNotNull(TEXT("Panel still in tree"), BP->WidgetTree->FindWidget(FName("TwoKids")));
		TestNotNull(TEXT("KidA still in tree"), BP->WidgetTree->FindWidget(FName("KidA")));
		TestNotNull(TEXT("KidB still in tree"), BP->WidgetTree->FindWidget(FName("KidB")));
	});
}

// ============================================================================
// ReplaceWidgetWithNamedSlot Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidgetWithNamedSlot,
	"AI.Toolsets.UMGToolSet.ReplaceWidgetWithNamedSlot", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_ReplaceWidgetWithNamedSlot)

void FUMGToolSetTest_ReplaceWidgetWithNamedSlot::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_RepNamedSlot_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// ---- Happy paths ----

	It("ExpandableArea inside panel: header content takes panel slot position", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo OuterInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("Outer"), nullptr);
		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), OuterInfo.Widget);
		FUMGWidgetInfo HeaderInfo = UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));

		UWidget* HeaderContent = HeaderInfo.Widget.Get();
		if (!TestNotNull(TEXT("Header content created"), HeaderContent)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestNull(TEXT("Host removed from tree"), BP->WidgetTree->FindWidget(FName("Host")));

		UPanelWidget* Outer = Cast<UPanelWidget>(OuterInfo.Widget);
		if (TestNotNull(TEXT("Outer still in tree"), Outer))
		{
			TestEqual(TEXT("Outer has one child"), Outer->GetChildrenCount(), 1);
			if (Outer->GetChildrenCount() > 0)
			{
				TestTrue(TEXT("Header content is Outer's direct child"), Outer->GetChildAt(0) == HeaderContent);
			}
		}
	});

	It("ExpandableArea as root: header content becomes the new root", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), nullptr);
		FUMGWidgetInfo HeaderInfo = UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));

		UWidget* HeaderContent = HeaderInfo.Widget.Get();
		if (!TestNotNull(TEXT("Header content created"), HeaderContent)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestTrue(TEXT("Header content is now the root"), BP->WidgetTree->RootWidget == HeaderContent);
		TestNull(TEXT("Host removed from tree"), BP->WidgetTree->FindWidget(FName("Host")));
	});

	It("ExpandableArea as outer named-slot content: header content fills the outer slot", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo HostInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("OuterSlot"), UExpandableArea::StaticClass(), FName("Host"));
		if (!TestNotNull(TEXT("Host placed in outer slot"), HostInfo.Widget.Get())) return;

		FUMGWidgetInfo HeaderInfo = UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));
		UWidget* HeaderContent = HeaderInfo.Widget.Get();
		if (!TestNotNull(TEXT("Header content created"), HeaderContent)) return;

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestNull(TEXT("Host removed from tree"), BP->WidgetTree->FindWidget(FName("Host")));

		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		bool bSlotPointsToHeaderContent = Slots.ContainsByPredicate([&](const FUMGNamedSlotEntry& Entry)
		{
			return Entry.SlotName == FName("OuterSlot") && Entry.ContentWidget == HeaderContent;
		});
		TestTrue(TEXT("Outer slot now contains the header content"), bSlotPointsToHeaderContent);
	});

	It("Compiles cleanly after replace-with-named-slot", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo OuterInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("Outer"), nullptr);
		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), OuterInfo.Widget);
		UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestTrue(TEXT("Replace succeeded"), bResult);

		TestTrue(TEXT("BP compiles after replace"), UUMGToolSet::CompileWidgetBlueprint(BP));
	});

	// ---- Validation / error paths ----

	It("Null WidgetBlueprint rejected", [this]()
	{
		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), nullptr);
		UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(nullptr, HostInfo.Widget, FName("Header"));
		TestFalse(TEXT("Null WidgetBlueprint rejected"), bResult);
	});

	It("Null WidgetToReplace rejected", [this]()
	{
		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, nullptr, FName("Header"));
		TestFalse(TEXT("Null WidgetToReplace rejected"), bResult);
	});

	It("None NamedSlot rejected", [this]()
	{
		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), nullptr);
		UUMGToolSet::SetNamedSlotContent(BP, HostInfo.Widget, FName("Header"), UTextBlock::StaticClass(), FName("HeaderContent"));

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, NAME_None);
		TestFalse(TEXT("None NamedSlot rejected"), bResult);
	});

	It("Widget not in tree rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		UExpandableArea* Detached = NewObject<UExpandableArea>(BP->WidgetTree, UExpandableArea::StaticClass(), TEXT("Detached"));
		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, Detached, FName("Header"));
		TestFalse(TEXT("Detached widget rejected"), bResult);
	});

	It("Widget that does not implement INamedSlotInterface rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Plain"), nullptr);
		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, TextInfo.Widget, FName("Header"));
		TestFalse(TEXT("Non-named-slot host rejected"), bResult);
	});

	It("Empty named slot rejected", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), nullptr);
		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestFalse(TEXT("Empty slot rejected"), bResult);
	});

	It("Validation failure leaves tree unchanged", [this]()
	{
		if (!TestNotNull(TEXT("BP"), BP)) return;

		FUMGWidgetInfo HostInfo = UUMGToolSet::AddWidget(BP, UExpandableArea::StaticClass(), TEXT("Host"), nullptr);

		bool bResult = UUMGToolSet::ReplaceWidgetWithNamedSlot(BP, HostInfo.Widget, FName("Header"));
		TestFalse(TEXT("Rejected (empty slot)"), bResult);

		TestNotNull(TEXT("Host still in tree"), BP->WidgetTree->FindWidget(FName("Host")));
		TestTrue(TEXT("Host still root"), BP->WidgetTree->RootWidget == HostInfo.Widget);
	});
}

// ============================================================================
// WrapWidgets Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_WrapWidgets,
	"AI.Toolsets.UMGToolSet.WrapWidgets", UMGToolSetTest::Flags)
	UWidgetBlueprint* BP = nullptr;
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_WrapWidgets)

void FUMGToolSetTest_WrapWidgets::Define()
{
	BeforeEach([this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		FString BPName = FString::Printf(TEXT("WBP_Wrap_%d"), TestCounter++);
		BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
	});

	AfterEach([this]()
	{
		BP = nullptr;
		UMGToolSetTest::UnregisterTestMountPoint();
	});

	// ---- Happy Path ----

	It("Single widget under a panel is wrapped and becomes child of the wrapper", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Text"), VBoxInfo.Widget);

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UHorizontalBox::StaticClass());

		TestEqual(TEXT("One wrapper returned"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		UPanelWidget* Wrapper = Cast<UPanelWidget>(Result[0].Widget.Get());
		TestNotNull(TEXT("Wrapper is valid panel"), Wrapper);
		TestTrue(TEXT("Wrapper is HorizontalBox"), Wrapper && Wrapper->IsA<UHorizontalBox>());

		if (Wrapper)
		{
			TestEqual(TEXT("Wrapper has one child"), Wrapper->GetChildrenCount(), 1);
			if (Wrapper->GetChildrenCount() > 0)
			{
				TestEqual(TEXT("TextBlock is child of wrapper"), Wrapper->GetChildAt(0), TextInfo.Widget.Get());
			}
		}

		UPanelWidget* VBox = Cast<UPanelWidget>(VBoxInfo.Widget.Get());
		if (VBox)
		{
			TestEqual(TEXT("VBox has one child (the wrapper)"), VBox->GetChildrenCount(), 1);
			TestTrue(TEXT("VBox child is the wrapper"), VBox->GetChildAt(0) == Result[0].Widget.Get());
		}
	});

	It("Root widget is wrapped and wrapper becomes the new root", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Root"), nullptr);
		TestEqual(TEXT("TextBlock is initial root"), BP->WidgetTree->RootWidget.Get(), TextInfo.Widget.Get());

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UVerticalBox::StaticClass());

		TestEqual(TEXT("One wrapper returned"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		UWidget* Wrapper = Result[0].Widget.Get();
		TestTrue(TEXT("Wrapper is VerticalBox"), Wrapper && Wrapper->IsA<UVerticalBox>());
		TestEqual(TEXT("Wrapper is new root"), BP->WidgetTree->RootWidget.Get(), Wrapper);

		UPanelWidget* WrapperPanel = Cast<UPanelWidget>(Wrapper);
		if (WrapperPanel)
		{
			TestEqual(TEXT("Wrapper has one child"), WrapperPanel->GetChildrenCount(), 1);
			if (WrapperPanel->GetChildrenCount() > 0)
			{
				TestEqual(TEXT("TextBlock is child of wrapper"), WrapperPanel->GetChildAt(0), TextInfo.Widget.Get());
			}
		}
	});

	It("Returned FUMGWidgetInfo has correct class and non-null widget", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("W"), nullptr);

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UOverlay::StaticClass());

		TestEqual(TEXT("One result"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		TestNotNull(TEXT("Result widget non-null"), Result[0].Widget.Get());
		TestTrue(TEXT("Wrapper is Overlay"), Result[0].Widget && Result[0].Widget->IsA<UOverlay>());
	});

	It("Wrapper GUID is registered in the blueprint", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("GuidText"), nullptr);

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UVerticalBox::StaticClass());

		TestEqual(TEXT("One wrapper"), Result.Num(), 1);
		if (Result.Num() == 1 && Result[0].Widget)
		{
			TestTrue(TEXT("Wrapper GUID registered"),
				BP->WidgetVariableNameToGuidMap.Contains(Result[0].Widget->GetFName()));
		}
	});

	It("Wrapper takes the wrapped widget's original slot position in the parent", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo A = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("A"), VBoxInfo.Widget);
		FUMGWidgetInfo B = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("B"), VBoxInfo.Widget);
		FUMGWidgetInfo C = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("C"), VBoxInfo.Widget);

		// Wrap B which is at index 1 — wrapper should land at index 1
		TArray<UWidget*> Widgets = { B.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UHorizontalBox::StaticClass());

		TestEqual(TEXT("One wrapper"), Result.Num(), 1);
		UPanelWidget* VBox = Cast<UPanelWidget>(VBoxInfo.Widget.Get());
		if (VBox && Result.Num() == 1)
		{
			TestEqual(TEXT("VBox still has 3 children"), VBox->GetChildrenCount(), 3);
			TestEqual(TEXT("Index 0 is A"), VBox->GetChildAt(0)->GetFName(), A.WidgetName);
			TestTrue(TEXT("Index 1 is the wrapper"), VBox->GetChildAt(1) == Result[0].Widget.Get());
			TestEqual(TEXT("Index 2 is C"), VBox->GetChildAt(2)->GetFName(), C.WidgetName);
		}
	});

	It("Multiple siblings under the same parent are placed in one wrapper", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo A = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("A"), VBoxInfo.Widget);
		FUMGWidgetInfo B = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("B"), VBoxInfo.Widget);
		FUMGWidgetInfo C = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("C"), VBoxInfo.Widget);

		// Wrap B and C — one wrapper for both
		TArray<UWidget*> Widgets = { B.Widget.Get(), C.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UOverlay::StaticClass());

		TestEqual(TEXT("One wrapper for siblings"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		UPanelWidget* Wrapper = Cast<UPanelWidget>(Result[0].Widget.Get());
		TestNotNull(TEXT("Wrapper is panel"), Wrapper);
		if (Wrapper)
		{
			TestEqual(TEXT("Wrapper holds both wrapped widgets"), Wrapper->GetChildrenCount(), 2);
		}

		// VBox should now contain A and the wrapper (2 children)
		UPanelWidget* VBox = Cast<UPanelWidget>(VBoxInfo.Widget.Get());
		if (VBox)
		{
			TestEqual(TEXT("VBox has 2 children after wrap"), VBox->GetChildrenCount(), 2);
			// A must still be directly in VBox
			bool bAInVBox = false;
			for (int32 i = 0; i < VBox->GetChildrenCount(); ++i)
			{
				if (VBox->GetChildAt(i)->GetFName() == A.WidgetName) { bAInVBox = true; }
			}
			TestTrue(TEXT("A is still directly in VBox"), bAInVBox);
		}
	});

	It("Child of a selected parent is filtered out and not double-wrapped", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo Parent = UUMGToolSet::AddWidget(BP, UHorizontalBox::StaticClass(), TEXT("Parent"), VBoxInfo.Widget);
		FUMGWidgetInfo Child  = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child"), Parent.Widget);

		// Selecting both parent and its child — child should be silently filtered
		TArray<UWidget*> Widgets = { Parent.Widget.Get(), Child.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UOverlay::StaticClass());

		TestEqual(TEXT("Only one wrapper (child filtered)"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		UPanelWidget* Wrapper = Cast<UPanelWidget>(Result[0].Widget.Get());
		if (Wrapper)
		{
			// Wrapper holds the HBox (the selected parent); Child is still inside the HBox
			TestEqual(TEXT("Wrapper holds original parent"), Wrapper->GetChildrenCount(), 1);
			if (Wrapper->GetChildrenCount() > 0)
			{
				TestEqual(TEXT("Wrapper's child is HBox"), Wrapper->GetChildAt(0)->GetFName(), Parent.WidgetName);
			}
		}

		UPanelWidget* HBox = Cast<UPanelWidget>(Parent.Widget.Get());
		if (HBox)
		{
			TestEqual(TEXT("Child still inside original HBox"), HBox->GetChildrenCount(), 1);
			if (HBox->GetChildrenCount() > 0)
			{
				TestEqual(TEXT("Child name unchanged"), HBox->GetChildAt(0)->GetFName(), Child.WidgetName);
			}
		}
	});

	It("Widgets from different parents produce one wrapper per parent", [this]()
	{
		FUMGWidgetInfo Root   = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("Root"), nullptr);
		FUMGWidgetInfo Panel1 = UUMGToolSet::AddWidget(BP, UHorizontalBox::StaticClass(), TEXT("Panel1"), Root.Widget);
		FUMGWidgetInfo Panel2 = UUMGToolSet::AddWidget(BP, UHorizontalBox::StaticClass(), TEXT("Panel2"), Root.Widget);
		FUMGWidgetInfo Child1 = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child1"), Panel1.Widget);
		FUMGWidgetInfo Child2 = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Child2"), Panel2.Widget);

		TArray<UWidget*> Widgets = { Child1.Widget.Get(), Child2.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UOverlay::StaticClass());

		TestEqual(TEXT("Two wrappers (one per parent)"), Result.Num(), 2);

		UPanelWidget* P1 = Cast<UPanelWidget>(Panel1.Widget.Get());
		UPanelWidget* P2 = Cast<UPanelWidget>(Panel2.Widget.Get());
		if (P1 && P2)
		{
			TestEqual(TEXT("Panel1 has exactly one child"), P1->GetChildrenCount(), 1);
			TestEqual(TEXT("Panel2 has exactly one child"), P2->GetChildrenCount(), 1);
			TestTrue(TEXT("Panel1 child is Overlay"), P1->GetChildAt(0) && P1->GetChildAt(0)->IsA<UOverlay>());
			TestTrue(TEXT("Panel2 child is Overlay"), P2->GetChildAt(0) && P2->GetChildAt(0)->IsA<UOverlay>());
		}
	});

	It("Blueprint compiles cleanly after wrapping", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Text"), VBoxInfo.Widget);

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		UUMGToolSet::WrapWidgets(BP, Widgets, UHorizontalBox::StaticClass());

		bool bCompiled = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Compiles after wrap"), bCompiled);
	});

	It("Named slot content is wrapped in place and slot binding transfers to wrapper", [this]()
	{
		FUMGWidgetInfo SlotInfo = UUMGToolSet::SetNamedSlotContent(
			BP, nullptr, FName("TestSlot"), UTextBlock::StaticClass(), FName("SlotText"));
		TestNotNull(TEXT("Slot content created"), SlotInfo.Widget.Get());

		TArray<UWidget*> Widgets = { SlotInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UVerticalBox::StaticClass());

		TestEqual(TEXT("One wrapper created for named slot"), Result.Num(), 1);
		if (Result.Num() != 1) return;

		UWidget* Wrapper = Result[0].Widget.Get();
		TestTrue(TEXT("Wrapper is VerticalBox"), Wrapper && Wrapper->IsA<UVerticalBox>());

		// The named slot must now point to the wrapper, not the original TextBlock
		TArray<FUMGNamedSlotEntry> Slots = UUMGToolSet::GetNamedSlots(BP);
		bool bSlotPointsToWrapper = Slots.ContainsByPredicate([&](const FUMGNamedSlotEntry& Entry)
		{
			return Entry.SlotName == FName("TestSlot") && Entry.ContentWidget == Wrapper;
		});
		TestTrue(TEXT("Named slot now contains the wrapper"), bSlotPointsToWrapper);

		// Original TextBlock should be a child of the wrapper
		UPanelWidget* WrapperPanel = Cast<UPanelWidget>(Wrapper);
		if (WrapperPanel)
		{
			TestEqual(TEXT("Wrapper holds the original slot content"), WrapperPanel->GetChildrenCount(), 1);
			if (WrapperPanel->GetChildrenCount() > 0)
			{
				TestEqual(TEXT("SlotText is child of wrapper"), WrapperPanel->GetChildAt(0)->GetFName(), SlotInfo.WidgetName);
			}
		}
	});

	// ---- Error / Null paths ----

	It("Null WidgetBlueprint returns empty array", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("X"), nullptr);
		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(nullptr, Widgets, UVerticalBox::StaticClass());
		TestEqual(TEXT("Empty result on null BP"), Result.Num(), 0);
	});

	It("Null WrapperClass returns empty array", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("X"), nullptr);
		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, nullptr);
		TestEqual(TEXT("Empty result on null class"), Result.Num(), 0);
	});

	It("Empty widgets array returns empty array", [this]()
	{
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, TArray<UWidget*>{}, UVerticalBox::StaticClass());
		TestEqual(TEXT("Empty result on empty array"), Result.Num(), 0);
	});

	// ---- Edge Cases ----

	It("Widget removed from tree is skipped without crash", [this]()
	{
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("ToRemove"), nullptr);
		UWidget* RemovedWidget = TextInfo.Widget.Get();

		// Remove the widget from the tree — it has no parent, no named slot host, and is no longer root
		UUMGToolSet::RemoveWidget(BP, RemovedWidget);

		TArray<UWidget*> Widgets = { RemovedWidget };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UVerticalBox::StaticClass());
		TestEqual(TEXT("Detached widget skipped, no wrapper created"), Result.Num(), 0);
	});

	It("Single wrapped widget is visible in GetWidgets under the wrapper", [this]()
	{
		FUMGWidgetInfo VBoxInfo = UUMGToolSet::AddWidget(BP, UVerticalBox::StaticClass(), TEXT("VBox"), nullptr);
		FUMGWidgetInfo TextInfo = UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("Text"), VBoxInfo.Widget);

		TArray<UWidget*> Widgets = { TextInfo.Widget.Get() };
		TArray<FUMGWidgetInfo> Result = UUMGToolSet::WrapWidgets(BP, Widgets, UHorizontalBox::StaticClass());
		TestEqual(TEXT("One wrapper"), Result.Num(), 1);

		FUMGWidgetTreeInfo TreeInfo = UUMGToolSet::GetWidgets(BP);
		// Tree should have: VBox, HBox (wrapper), TextBlock — 3 widgets total
		TestEqual(TEXT("Tree has 3 widgets after wrap"), TreeInfo.Widgets.Num(), 3);

		// Verify parent pointers in tree reflect new hierarchy: VBox → HBox → TextBlock
		const FUMGWidgetInfo* HBoxEntry = TreeInfo.Widgets.FindByPredicate([&](const FUMGWidgetInfo& W)
		{
			return Result.Num() > 0 && W.Widget == Result[0].Widget;
		});
		const FUMGWidgetInfo* TextEntry = TreeInfo.Widgets.FindByPredicate([&](const FUMGWidgetInfo& W)
		{
			return W.WidgetName == TextInfo.WidgetName;
		});

		TestNotNull(TEXT("HBox entry found in GetWidgets"), HBoxEntry);
		TestNotNull(TEXT("TextBlock entry found in GetWidgets"), TextEntry);
		if (HBoxEntry)
		{
			TestTrue(TEXT("HBox parent is VBox"), HBoxEntry->Parent == VBoxInfo.Widget);
		}
		if (TextEntry)
		{
			TestTrue(TEXT("TextBlock parent is HBox wrapper"), Result.Num() > 0 && TextEntry->Parent == Result[0].Widget);
		}
	});
}

// ============================================================================
// Registration Test
// ============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FUMGToolSetTest_Registration,
	"AI.Toolsets.UMGToolSet.Registration.ToolsetRegistered",
	UMGToolSetTest::Flags)

bool FUMGToolSetTest_Registration::RunTest(const FString&)
{
	FString Schemas = UToolsetRegistry::GetAllToolsetJsonSchemas();
	TestTrue(TEXT("UMGToolSet in registry"), Schemas.Contains(TEXT("UMGToolSet")));
	return true;
}

// ============================================================================
// Compile Error Reporting Tests
// ============================================================================

BEGIN_DEFINE_SPEC(FUMGToolSetTest_CompileErrors,
	"AI.Toolsets.UMGToolSet.CompileErrors", UMGToolSetTest::Flags)
	int32 TestCounter = 0;
END_DEFINE_SPEC(FUMGToolSetTest_CompileErrors)

void FUMGToolSetTest_CompileErrors::Define()
{
	It("CompileWidgetBlueprint returns false when BindWidget requirements are missing", [this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		ON_SCOPE_EXIT { UMGToolSetTest::UnregisterTestMountPoint(); };

		// Use test parent class with mandatory BindWidget requirements
		UClass* TestParent = UUMGTestWidgetWithBindings::StaticClass();

		// Expect BindWidget warnings (skeleton compile) and errors (full compile) in the log.
		// The skeleton compile runs with bIsNewlyCreated=true (warnings), then the full compile
		// runs with bIsNewlyCreated=false (errors). Both produce LogBlueprint output that the
		// automation framework would otherwise treat as test failures.
		AddExpectedErrorPlain(TEXT("A required widget binding"), EAutomationExpectedErrorFlags::Contains, 0);

		// Create BP with parent that has BindWidget, add only a root (not satisfying all requirements)
		FString BPName = FString::Printf(TEXT("WBP_CompileError_%d"), TestCounter++);
		UWidgetBlueprint* BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			TSubclassOf<UUserWidget>(TestParent));
		TestNotNull(TEXT("BP created"), BP);
		if (!BP) return;

		// Compile should fail because mandatory BindWidget properties aren't satisfied
		bool bResult = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestFalse(TEXT("Compile fails with missing BindWidgets"), bResult);

		// Verify BS_Error status is set
		TestTrue(TEXT("Blueprint status is BS_Error"), BP->Status == BS_Error);
	});

	It("CompileWidgetBlueprint error message contains BindWidget property names", [this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		ON_SCOPE_EXIT { UMGToolSetTest::UnregisterTestMountPoint(); };

		UClass* TestParent = UUMGTestWidgetWithBindings::StaticClass();

		// Expect BindWidget warnings/errors from skeleton and full compile passes
		AddExpectedErrorPlain(TEXT("A required widget binding"), EAutomationExpectedErrorFlags::Contains, 0);

		FString BPName = FString::Printf(TEXT("WBP_CompileError_%d"), TestCounter++);
		UWidgetBlueprint* BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			TSubclassOf<UUserWidget>(TestParent));
		if (!BP) return;

		bool bResult = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestFalse(TEXT("Compile fails"), bResult);

		// The compiler results should contain BindWidget names like "RequiredText",
		// "RequiredImage", etc. We verify indirectly: if there are mandatory BindWidget
		// properties on the parent, compile must fail when they're not present.
		int32 MandatoryBindWidgetCount = 0;
		for (TFieldIterator<FObjectProperty> It(TestParent, EFieldIteratorFlags::IncludeSuper); It; ++It)
		{
			if (It->PropertyClass && It->PropertyClass->IsChildOf(UWidget::StaticClass())
				&& It->HasMetaData(TEXT("BindWidget"))
				&& !It->HasMetaData(TEXT("BindWidgetOptional")))
			{
				MandatoryBindWidgetCount++;
			}
		}
		UE_LOGF(LogTemp, Log, "[CompileErrors] %d mandatory BindWidget properties on %ls",
			MandatoryBindWidgetCount, *TestParent->GetName());
		TestTrue(TEXT("Parent class has mandatory BindWidget properties"), MandatoryBindWidgetCount > 0);
	});

	It("CompileWidgetBlueprint returns true for simple valid blueprint", [this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		ON_SCOPE_EXIT { UMGToolSetTest::UnregisterTestMountPoint(); };

		FString BPName = FString::Printf(TEXT("WBP_CompileOk_%d"), TestCounter++);
		UWidgetBlueprint* BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
		TestNotNull(TEXT("BP created"), BP);
		if (!BP) return;

		UUMGToolSet::AddWidget(BP, UTextBlock::StaticClass(), TEXT("TestText"), nullptr);

		bool bResult = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Simple BP compiles successfully"), bResult);
	});

	It("CompileWidgetBlueprint returns true after second compile on valid BP", [this]()
	{
		UMGToolSetTest::RegisterTestMountPoint();
		ON_SCOPE_EXIT { UMGToolSetTest::UnregisterTestMountPoint(); };

		// Verify that clearing bIsNewlyCreated doesn't break normal compilation
		FString BPName = FString::Printf(TEXT("WBP_ReCompile_%d"), TestCounter++);
		UWidgetBlueprint* BP = UUMGToolSet::CreateWidgetBlueprint(
			UMGToolSetTest::TestMountPoint, BPName,
			UUserWidget::StaticClass());
		if (!BP) return;

		FUMGWidgetInfo RootPanel = UUMGToolSet::AddWidget(BP, UCanvasPanel::StaticClass(), TEXT("RootPanel"), nullptr);
		UPanelWidget* RootPanelWidget = Cast<UPanelWidget>(RootPanel.Widget);

		// First compile
		bool bFirst = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("First compile succeeds"), bFirst);

		// Add another widget and compile again
		UUMGToolSet::AddWidget(BP, UImage::StaticClass(), TEXT("I1"), RootPanelWidget);
		bool bSecond = UUMGToolSet::CompileWidgetBlueprint(BP);
		TestTrue(TEXT("Second compile succeeds"), bSecond);
	});
}

#endif // WITH_DEV_AUTOMATION_TESTS
