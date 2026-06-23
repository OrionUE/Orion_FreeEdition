# Orion 代码格式规范

## 适用范围

- 适用于本项目中新增、修改、重构、格式化的代码文件。
- 重点适用于 Unreal C++：`.h`、`.cpp`、`.Build.cs`、`.Target.cs`。
- 只规范本次新增或触及的代码区域；除非用户明确要求全文件格式化，不要批量重排历史代码。
- 蓝图、配置、资源文件不套用 C++ 细节，但仍遵守对应文件的换行结尾要求。

## 文件格式

- Windows 下生成或修改的代码文件必须使用 CRLF。
- `.h`、`.cpp`、`.Build.cs`、`.Target.cs` 等代码文件末尾保留一个换行。
- `.ini` 文件末尾保留两个换行。
- `.uplugin`、`.uproject` 文件末尾不强制加换行；保持原文件约定。
- 代码文件缩进全部使用 Tab，不使用空格缩进；包括 C++、`.Build.cs`、`.Target.cs`。
- 对齐优先通过换行后的 Tab 层级表达，不使用连续空格做视觉对齐。
- `namespace` 内部内容也必须进入一层 Tab 缩进；不要把 anonymous namespace 里的函数、变量或类型顶格写。
- 代码文件末尾只保留一个文件结束换行；不要留下多行空白行。

## 文件头版权

只有本次任务新创建的代码文件需要添加指定版权头。代码文件顶部版权优先从 `.agents/skills/orion-code-style/config/copyright-header.json` 读取。该配置用于保存用户自定义版权头模板和字段，例如作者、日期、官网或其他需要固定写入代码头部的信息。

如果配置文件缺失，或配置里没有提供非空 `fields.CopyrightNotice`，则回退读取 `Config/DefaultGame.ini` 的 `CopyrightNotice=`。

默认规则：

- 本次任务新建的代码文件必须使用配置渲染后的版权头。
- 已存在的代码文件如果已经有任何版权头，必须保留原版权头；即使它和当前配置模板不一致，也不要为了匹配当前配置而替换或规范化。
- 已存在的代码文件不要因为本次修改而补加或重写版权头；只有用户明确要求补版权头时才处理。
- 只有配置模板显式包含 `Author`、`Date`、`Website` 等字段时，才添加这些行。
- 不要在代码生成时临时手写 `Author` 行、日期行或网站行；先改配置，再按配置生成。
- 如果用户要改版权文案、作者、日期或官网，修改 `copyright-header.json`，不要改检查脚本。
- 校验脚本只对 git 新增代码文件强制检查指定版权头；已有文件只检查 CRLF、Tab 缩进、空 TODO、文件末尾换行等通用格式。

配置示例：

```json
{
	"template": "/*\n * {CopyrightNotice}\n * Author: {Author}\n * Date: {Date}\n * {Website}\n */",
	"fields": {
	"CopyrightNotice": "Copyright (c) 2026 Example Studio. All Rights Reserved.",
	"Author": "Example Author",
	"Date": "2026-06-12",
	"Website": "https://example.com"
	}
}
```

占位符规则：

- `{CopyrightNotice}`：优先使用配置字段；字段为空时使用 `DefaultGame.ini`。
- `{Author}`、`{Date}`、`{Website}`：来自配置字段。
- 其他 `{FieldName}` 也可以添加到 `fields` 中，但模板里出现的占位符必须能被字段替换。
- 不建议使用“当天日期”这类动态值，否则旧文件会在日期变化后无法通过固定头部校验。

## 命名规范

- UE C++ 类型、函数、普通变量使用大驼峰命名。
- 布尔变量使用 `b` 前缀，例如 `bIsReady`、`bLoadClient`。
- Unreal 类型前缀遵循 UE 习惯：`U`、`A`、`F`、`I`、`E`、`T` 等。
- 枚举值、GameplayTag、宏和日志分类保持 UE 风格和现有模块风格。
- 变量名要表达实际含义，不使用无意义缩写。
- 代码和蓝图中除注释、日志文本、用户可见本地化文本外，不要使用中文标识符。

## 空格和标点

- 逗号后空一格：`UPROPERTY(EditAnywhere, BlueprintReadWrite)`。
- 运算符、赋值、判断符号左右各空一格：`int32 Count = 0;`、`if (A == B)`。
- 控制语句关键字和左括号之间空一格：`if (...)`、`for (...)`、`switch (...)`。
- 花括号使用项目现有 Allman 风格：函数、类、if、for、lambda 多行体的 `{` 独占一行。
- 指针和引用符号靠类型侧，右侧空格后接变量名：`const FString& Name`、`UObject* Asset`。
- 模板声明使用 `template<typename T>` 或匹配周围文件风格；不要在同一文件里混用多种风格。
- 宏参数、反射宏参数按 UE 风格保留紧凑写法，例如 `UCLASS(Config=Game)`，除非周围文件已使用带空格写法。

## 缩进

- 缩进只用 Tab。
- 每进入一层作用域增加一个 Tab。
- `case` 标签与 `switch` 体同级，`case` 内语句再缩进一层 Tab。
- 多行函数调用的续行使用比调用起始行更深一层 Tab，参数逐行排列。
- 不用空格做列对齐。函数注释里为可读性出现的表格式空白也优先用 Tab。

示例：

```cpp
switch (Group)
{
case ECoreAbilityActivationGroup::Independent:
	return false;

case ECoreAbilityActivationGroup::Exclusive_Blocking:
	return true;
}
```

## Include 和文件结构

头文件结构：

```cpp
/*
 * Copyright ...
 */

#pragma once

#include "GameFramework/Actor.h"

#include "MyActor.generated.h"

class UMyComponent;

UCLASS()
class MODULE_API AMyActor : public AActor
{
	GENERATED_BODY()
};
```

`.cpp` 文件结构：

```cpp
/*
 * Copyright ...
 */

#include "Path/MyActor.h"

#include "CoreLogChannels.h"
#include "Components/MyComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MyActor)
```

规则：

- `.cpp` 首个 include 是自身头文件。
- include 分组之间空一行。
- 不要把 `#include "CoreMinimal.h"` 当作模板默认项新增；优先包含实际使用类型所需的最小 UE 头或项目头。已有文件如果已经使用该头，不要仅因为本规则做无关批量删除；只有本次触及区域确实需要整理 include 时再按编译结果处理。
- 版权头、`#pragma once`、普通 include 区、`.generated.h`、前向声明、类/结构体定义等顶层代码模块之间都要用空行隔开。
- `.h` 中的 `.generated.h` 必须放在所有普通 `#include` 之后，并与普通 include 区之间空一行；`.generated.h` 后面不能再出现任何 `#include`。
- `.generated.h` 和后续前向声明或反射声明之间也保留空行。
- 项目头、UE 头、条件编译 include 参考同文件上下文排序。
- `.cpp` 文件 include 后尽量包含 `#include UE_INLINE_GENERATED_CPP_BY_NAME(CPPNAME)`，名称使用当前 `.cpp` 文件基名。
- 前向声明放在 `.generated.h` 之后，且与后续 `UCLASS`、`USTRUCT`、`UENUM` 或普通类型定义之间保留空行；不要破坏 UHT 要求。

## 注释规范

- 注释符号后必须有一个空格：`// Comment`、`/** Comment */`。
- 逻辑注释只解释复杂意图、约束或非显然原因，不重复代码字面含义。
- 变量注释可使用单行 `//` 或 `/** ... */`，紧贴被说明的声明。
- 函数和类注释使用 Doxygen 风格：

```cpp
/**
 * 获取或加载指定类型的 GameData
 *
 * @tparam GameDataClass GameData 类型
 * @param DataPath GameData 路径
 * @return 返回获取或创建的 GameData
 */
template<typename GameDataClass>
const GameDataClass& GetOrLoadTypedGameData(const TSoftObjectPtr<UCoreGameData>& DataPath);
```

- 函数简单且语义清楚时可以用单行注释：

```cpp
/** Returns true if the experience is fully loaded */
bool IsExperienceLoaded() const;
```

- 中文注释允许使用；代码标识符不要使用中文。
- TODO 注释使用 `// TODO: 原因或待办内容`，不要留下空 TODO。

## 函数和长行换行

- 普通函数定义：

```cpp
void UCoreExample::DoWork(const FName& Name)
{
	Super::DoWork(Name);
}
```

- 构造函数初始化列表换行：

```cpp
UCoreExample::UCoreExample(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReady = false;
}
```

- 多项构造函数初始化列表使用逗号起行，不用空格或 Tab 续行对齐到第一项。冒号行使用一个 Tab、冒号、一个空格后接第一项；后续项使用一个 Tab、逗号、一个空格后接成员：

```cpp
FCoreExample::FCoreExample()
	: FirstValue(nullptr)
	, SecondValue(0)
	, bIsReady(false)
{
}
```

- 长函数调用按参数换行：

```cpp
UE_LOG(LogGameCore, Log, TEXT("Loading GameData: %s ..."),
	*DataClassPath.ToString());
```

- 更长的调用可以每个参数一行，续行比调用起始行多一个 Tab：

```cpp
UGameFeaturesSubsystem::Get().LoadAndActivateGameFeaturePlugin(
	PluginURL,
	FGameFeaturePluginLoadComplete::CreateUObject(this, &ThisClass::OnGameFeaturePluginLoadComplete));
```

- 不为了视觉对齐插入空格；用 Tab 表达缩进层级。

## Lambda 规范

短 lambda 可以单行：

```cpp
FGameFeatureDeactivatingContext Context(TEXT(""), [this](FStringView) { this->OnActionDeactivationCompleted(); });
```

多行 lambda 的 `{` 独占一行，lambda 体使用 Tab 缩进：

```cpp
auto ShouldCancelFunc = [this, Group, IgnoreCoreAbility](const UCoreGameplayAbility* CoreAbility, FGameplayAbilitySpecHandle Handle)
{
	return ((CoreAbility->GetActivationGroup() == Group) && (CoreAbility != IgnoreCoreAbility));
};
```

作为函数参数传入的多行 lambda，闭包行和 `{` 分行，lambda 体再缩进一层：

```cpp
StartupJob.SubstepProgressDelegate.BindLambda([This = this, AccumulatedJobValue, JobValue, TotalJobValue](float NewProgress)
	{
		const float SubstepAdjustment = FMath::Clamp(NewProgress, 0.0f, 1.0f) * JobValue;
		const float OverallPercentWithSubstep = (AccumulatedJobValue + SubstepAdjustment) / TotalJobValue;

		This->UpdateInitialGameContentLoadPercent(OverallPercentWithSubstep);
	});
```

捕获列表要明确表达生命周期意图：

- 成员函数内优先捕获 `this`。
- 需要避免歧义时可使用 `This = this`。
- 委托、Ticker、异步回调优先使用 UE 的弱绑定或对象绑定接口，例如 `CreateWeakLambda`、`CreateUObject`。

## Unreal 反射宏

- `UCLASS`、`USTRUCT`、`UENUM`、`UFUNCTION`、`UPROPERTY` 紧贴声明。
- 宏参数逗号后空一格。
- Blueprint 分类字符串沿用模块命名，例如 `Category = "GameCore|Ability"`。
- `GENERATED_BODY()` 后按访问控制分区组织成员。
- `public:`、`protected:`、`private:` 与类体缩进同级，成员再缩进一层 Tab。

## Build.cs 和 Target.cs

- `.Build.cs`、`.Target.cs` 也使用 Tab 缩进。
- 依赖按功能分组，组间空一行；注释使用英文或中文均可，但注释符号后保留一个空格。
- 项目模块的 `PublicDependencyModuleNames` 默认只能包含 `"Core"`、`"CoreUObject"`、`"Engine"`。不要为了 include 方便把其他模块加到 Public；除非用户本次明确授权，其他依赖一律放入 `PrivateDependencyModuleNames`。
- 不要为了满足上述依赖位置规则删除、隐藏或重构已有 Public API、Blueprint API、Steam 类型接口或业务逻辑；只调整 `Build.cs` 依赖位置并以能编译通过为准，除非用户明确要求重构 API。
- 每个依赖字符串独占一行，逗号保留：

```csharp
PrivateDependencyModuleNames.AddRange(new string[]
{
	// Gameplay
	"CommonGame",
	"GameplayAbilities",
	"GameplayTags",
});
```

## 修改流程

1. 修改代码前读取本规范。
2. 如果本次任务要新建代码文件，先从 `orion-code-style` 的 `config/copyright-header.json` 渲染版权头；缺少版权字段时再读取 `Config/DefaultGame.ini`。如果是修改已有代码文件，保留已有版权头。
3. 生成或修改代码时使用 CRLF 和 Tab 缩进。
4. 只格式化本次触及区域；避免无关重排。
5. 修改后至少检查：
	- 新增或触及代码文件不是 LF-only。
	- 新增代码缩进没有以空格开头。
	- 新增代码文件版权头符合当前 header config 或 `CopyrightNotice`；已有代码文件版权头未被无关改动。
	- Unreal 头文件中的 `.generated.h` 位于所有普通 include 之后，前后都有空行，后面没有其他 include。
	- 没有空 TODO 或模板占位。

批量校验当前 shell 中已收集的文件数组时，直接用 call operator 调用脚本：

```powershell
$CodeFiles = git ls-files -m -o --exclude-standard | Where-Object { $_ -match '\.(h|cpp|cs|ps1)$' }
& .agents\skills\orion-code-style\scripts\check-code-style.ps1 -Path $CodeFiles
```

不要把数组再传给嵌套的 `powershell -File ... -Path $CodeFiles`；Windows PowerShell 可能把后续文件拆成额外位置参数，报 `A positional parameter cannot be found that accepts argument ...`。
