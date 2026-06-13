# Unreal 本地化框架参考

## 目录与目标

- 本地化 runtime 资源放在 `Content/Localization/<TargetName>`。典型文件包括 `<TargetName>.manifest`、`<TargetName>.locmeta`、`<Culture>/<TargetName>.archive`、`<Culture>/<TargetName>.locres`、`<TargetName>.po`、`<TargetName>.csv` 和 `<TargetName>_Conflicts.txt`。
- 本地化命令配置放在 `Config/Localization`，常见配置为 `<TargetName>_Gather.ini`、`<TargetName>_Export.ini`、`<TargetName>_Import.ini`、`<TargetName>_Compile.ini`、`<TargetName>_GenerateReports.ini`。
- Localization Dashboard 的 target 状态写在 `Config/DefaultEditor.ini`；运行时加载路径来自 `[Internationalization] LocalizationPaths`；打包语言来自 `ProjectPackagingSettings` 的 `CulturesToStage`。
- 常见 target：`Game` 收集项目源码、配置、Content 和 GameFeature 内容；`EngineOverrides` 用于覆盖需要在游戏中显示的引擎/插件文本。新增 target 必须同时有配置、资源目录、加载路径和打包 staging。

## UI 与源码文本规则

- 玩家可见、作者预设、需要翻译的文本必须是 `FText`，不要用 `FString` 存 UI 文案。
- C++ 静态文本使用：

```cpp
#define LOCTEXT_NAMESPACE "Settings"

const FText DisplayName = LOCTEXT("LanguageSettingName", "Language");
const FText Body = FText::Format(
	LOCTEXT("RestartRequiredFmt", "Restart is required to apply {SettingName}."),
	FText::FromString(SettingName)
);

#undef LOCTEXT_NAMESPACE
```

- 跨文件或无需 `LOCTEXT_NAMESPACE` 时可用 `NSLOCTEXT("Namespace", "StableKey", "Source Text")`。
- 使用稳定 key；不要把临时英文句子、对象名或可变字符串当 key。修改 source text 后要重新 gather，避免 archive 里出现 stale 或 conflict。
- 数字、日期、百分比、货币等显示文本优先用 `FText::AsNumber`、`FText::AsDateTime`、`FText::AsPercent` 等文化感知 API，不要先格式化为 `FString` 再显示。
- 动态且不应翻译的运行时数据可以用 `FText::FromString`：玩家名、好友昵称、存档名、服务器名、设备名、手柄名、文件名、用户输入和调试对象名。
- 永远不需要翻译的固定文本用 `INVTEXT` 或 `FText::AsCultureInvariant`；调试日志和内部 key 可以继续用 `FString`。
- 不要用 `FText::ToString()` 保存、比较或作为业务 key。`FText` 会随 culture 变化，持久化逻辑应保存稳定 ID、GameplayTag、Name 或 enum。

## FText 显示 API 速查

这些 API 适合生成玩家可见的动态显示文本。它们不是 gather 的文本源，但会按当前 culture 处理数字、日期、大小写、分隔符和单位。

```cpp
const FText CountText = FText::AsNumber(ItemCount);
const FText PercentText = FText::AsPercent(0.5);
const FText PriceText = FText::AsCurrency(123.45, TEXT("EUR"));
const FText PriceFromMinorUnit = FText::AsCurrencyBase(12345, TEXT("EUR"));
const FText DateText = FText::AsDate(FDateTime::Now(), EDateTimeStyle::Medium);
const FText DateTimeText = FText::AsDateTime(
	FDateTime::Now(),
	EDateTimeStyle::Medium,
	EDateTimeStyle::Short,
	FText::GetInvariantTimeZone()
);
const FText DurationText = FText::AsTimespan(ElapsedTime);
const FText MemoryText = FText::AsMemory(NumBytes, EMemoryUnitStandard::IEC);
```

- 货币代码使用 ISO 4217 代码，例如 `USD`、`EUR`、`CNY`。不要自己拼接 `$`、`€`、`元` 等符号；不同 culture 下符号、位置、小数位和分隔符可能不同。
- `AsCurrencyBase` 的数值是最小货币单位，常用于把 12345 显示为 123.45；需要强制小数位时使用 `ForceDecimalPlaces`。
- 日期时间显示优先明确 `EDateTimeStyle` 和时区。跨平台、存档或服务器时间不要直接把本地 `FString` 时间写进 UI。
- 文件大小、下载量、显存等显示优先用 `FText::AsMemory`，不要手写 MB/GB；确认要用 IEC(1024) 还是 SI(1000)。

格式化、拼接和修剪：

```cpp
FFormatNamedArguments Args;
Args.Add(TEXT("ItemName"), ItemNameText);
Args.Add(TEXT("ItemCount"), ItemCount);

const FText Message = FText::Format(
	LOCTEXT("InventoryItemCountFmt", "{ItemName} x {ItemCount}"),
	Args
);

const FText Joined = FText::Join(LOCTEXT("CommaDelimiter", ", "), TextItems);
const FText Trimmed = FText::TrimPrecedingAndTrailing(InputText);
```

- 格式化模板如果是作者预设 UI 文案，必须来自 `LOCTEXT`、`NSLOCTEXT` 或资产 `FText`；只有用户输入的自定义模板才用 `FTextFormat::FromString`。
- 翻译必须保留 `{ItemName}`、`{0}` 这类占位符。需要在工具侧检查占位符时，用 `FText::GetFormatPatternParameters(FTextFormat(LocalizedPatternText), OutNames)`。
- 拼接列表时分隔符本身也应是可翻译 `FText`。不同语言可能不用英文逗号或竖线。
- `ToUpper()` / `ToLower()`、`TrimPreceding()`、`TrimTrailing()`、`IsEmptyOrWhitespace()` 会保留 `FText` 语义，优先于转 `FString` 后处理。
- `FText::FromName` 适合把非本地化的内部名、调试名或运行时 ID 显示出来；不要用它替代正式 UI 文案。

## 资产与 UMG

- UMG 的 TextBlock、RichTextBlock、CommonUI 按钮文本、DataTable 中的 `FText` 字段、设置项显示名/描述会被资产 gather 收集。
- 修改 Widget Blueprint、DataTable 或 GameFeature 内容后，先保存资产再 gather；未保存的编辑器内存文本不会进入 manifest。
- GameFeature 插件中的可翻译资产必须被 gather 配置包含。常见配置会包含项目 `Content/*` 和 `Plugins/GameFeatures/*`，新增插件目录时要确认 package filters 覆盖 `.umap` / `.uasset`。
- RichText 翻译要保留标签和占位符。若开启 `bValidateRichTextTags`，编译阶段会捕捉标签不匹配；即使未开启，也应人工检查。

## 本地化流水线

`GatherText` 是总入口，会读取一个或多个 ini，然后按 `GatherTextStep0`、`GatherTextStep1` 顺序执行子 commandlet。

- `*_Gather.ini`：通常执行 `GatherTextFromSource`、`GatherTextFromAssets`、`GenerateGatherManifest`、`GenerateGatherArchive`、`GenerateTextLocalizationReport`。输出/更新 manifest、archive、报告和冲突文件。
- `*_Export.ini`：执行 `InternationalizationExport` 且 `bExportLoc=true`，从 archive 导出 PO。
- `*_Import.ini`：执行 `InternationalizationExport` 且 `bImportLoc=true`，把翻译后的 PO 导回 archive。
- `*_Compile.ini`：执行 `GenerateTextLocalizationResource`，读取 manifest/archive 并生成 `.locmeta` 与每个 culture 下的 `.locres`。
- `*_GenerateReports.ini`：生成词数、冲突等报告。

常用命令模板：

```powershell
<UnrealEditorCmd> <ProjectFile> -run=GatherText -config=Config/Localization/<TargetName>_Gather.ini -unattended -nop4
<UnrealEditorCmd> <ProjectFile> -run=GatherText -config=Config/Localization/<TargetName>_Export.ini -unattended -nop4
<UnrealEditorCmd> <ProjectFile> -run=GatherText -config=Config/Localization/<TargetName>_Import.ini -unattended -nop4
<UnrealEditorCmd> <ProjectFile> -run=GatherText -config=Config/Localization/<TargetName>_Compile.ini -unattended -nop4
<UnrealEditorCmd> <ProjectFile> -run=GatherText -config=Config/Localization/<TargetName>_GenerateReports.ini -unattended -nop4
```

多个 config 可以用 `-config=A.ini;B.ini`，也可以用 `-ConfigList=<ListFile>`。发布前不要只 gather；必须 compile 出 `.locres`。

## 文件含义

- `.manifest`：收集到的源文本、namespace/key、source path 等元数据，是翻译条目的主索引。
- `.archive`：每个 culture 的翻译存储，包含 source、translation 和 key。
- `.po`：给翻译工具或译者使用的导入/导出格式。
- `.locres`：运行时加载的二进制文本资源。游戏中能否显示翻译主要看它是否存在且被加载。
- `.locmeta`：target 元信息，包含 native culture 和 native locres 信息；运行时会用它判断 native culture。
- `_Conflicts.txt` / `.csv`：检查 key/source 冲突、词数和翻译覆盖率。

## 运行时语言切换

- 获取可用语言使用 `FTextLocalizationManager::Get().GetLocalizedCultureNames(ELocalizationLoadFlags::Game)` 或蓝图库 `GetLocalizedCultures`。这些 API 会根据本地化路径下实际存在的 `.locres` 目录返回 culture。
- 切换语言使用 `FInternationalization::Get().SetCurrentCulture(CultureName)`，蓝图可用 `UKismetInternationalizationLibrary::SetCurrentCulture(CultureName, SaveToConfig)`。
- 保存用户语言时写入 `GGameUserSettingsIni` 的 `[Internationalization] Culture`；引擎初始化会按命令行、用户配置、游戏配置、引擎配置、默认系统语言的优先级决定 culture。
- 命令行可用 `-culture=<CultureName>`，底层还支持 `-language=<CultureName>` 与 `-locale=<CultureName>`。`-culture` 会同时作为 language/locale fallback。
- UI 设置页如果切换后提示重启，是为了早期加载屏、启动资源、字体缓存或已构建 Widget 能稳定刷新。不要擅自删除重启提示，除非完整验证所有前端状态。

## 打包与加载

- `ProjectPackagingSettings.CulturesToStage` 决定哪些 language data 会被 cook、stage、package。新增 culture 后必须加入这里。
- `InternationalizationPreset` 决定随包携带哪些 ICU/internationalization 基础数据；语言存在但 ICU 数据不足时，日期、数字、排序等格式可能异常。
- `LocalizationPaths` 决定运行时扫描哪些 target。`FPaths::GetGameLocalizationPaths()` 会从 game 配置读取路径；插件本地化可通过 Additional locres path 回调加载。
- chunked localization target 需要检查 `LocalizationTargetsToChunk` 和 `LocalizationTargetCatchAllChunkId`；不做 chunk 时也要保证 `Content/Localization/<TargetName>` 被 cook/stage。
- 如果打包后语言列表少一项，优先检查：目标 culture 是否有 `.locres`、`CulturesToStage` 是否包含、target path 是否在 `LocalizationPaths`、culture 是否被 allow/deny 配置过滤。

## EngineOverrides

- `EngineOverrides` 用于覆盖游戏中会露出的引擎或插件文本，例如安装、补丁、平台输入、运行时错误提示等。
- 它通常以 `en` 为 native culture，再提供项目支持语言的翻译。
- 只把玩家可见且确实需要覆盖的引擎文本放入该 target；不要把编辑器专用文本或大量无关引擎文本纳入发布包。
- 配置新增 engine override target 后，要在 `[Internationalization] LocalizationPaths` 中加入对应 `Content/Localization/<TargetName>` 路径，并打包对应 culture。

## 新增语言清单

1. 在 Localization Dashboard 或 `Config/Localization/<TargetName>_*.ini` 中给相关 target 增加 culture。
2. 运行 gather 更新 manifest/archive。
3. Export PO，交给翻译或机器翻译流程处理。
4. Import PO，把翻译写回 archive。
5. Compile 生成 `<Culture>/<TargetName>.locres` 和 `.locmeta`。
6. 在 `ProjectPackagingSettings.CulturesToStage` 中加入 culture。
7. 检查运行时语言列表是否能通过 `GetLocalizedCultureNames(Game)` 返回该 culture。
8. 用 `-culture=<CultureName>` 启动编辑器预览或游戏包，检查 UI、设置页、加载屏、CommonUI 按钮、RichText 和 GameFeature UI。
9. 检查 `_Conflicts.txt` 与 `.csv`，确认没有关键冲突或明显缺失。

## 常见错误

- UI 写成 `FString`：gather 不会收集，翻译无法进入 manifest。改为 `FText` 属性或 `LOCTEXT`。
- 硬编码 UI 文案使用 `FText::FromString`：运行时能显示但不可翻译。改为 `LOCTEXT` 或资产 `FText`。
- 只改 archive/PO 没 compile：编辑器资源看似有翻译，运行时 `.locres` 仍是旧的。
- 只加了 culture 没 staging：编辑器可选，打包后不可选或回退 native。
- 改了 source text 复用旧 key：可能造成 translation stale 或 conflict。确认 key/source 语义一致，必要时换 key。
- 格式化占位符翻译丢失：`FText::Format` 编译验证会失败或运行时显示错误。翻译必须保留 `{Name}`、`{0}` 等占位符。
- GameFeature UI 文本没进 manifest：检查 gather 的 package include 路径是否覆盖该插件内容，资产是否保存。
