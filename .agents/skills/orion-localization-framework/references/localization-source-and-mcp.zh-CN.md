# Unreal 本地化源码与 MCP 自动化参考

## 适用场景

当任务要求操作 Unreal Localization Dashboard、收集文本、导入导出 PO、编译 `.locres`、生成报告、预览当前语言，或需要通过 MCP 自动化本地化流程时，先读本文件。

本文件记录 UE 5.8 源码确认过的路径和操作映射。引擎源码只读；项目侧自动化能力放在编辑器插件 `OrionProjectToolsets` 的 `OrionLocalizationToolset`。

## 官方与网络资料结论

优先使用 Epic 官方文档确认概念和命令边界：

- `Localization Tools in Unreal Engine`：`https://dev.epicgames.com/documentation/en-us/unreal-engine/localization-tools-in-unreal-engine`，用于确认 Localization Dashboard、target、Gather/Import/Export/Compile、PO 和 commandlet 流程。
- `Text Localization in Unreal Engine`：`https://dev.epicgames.com/documentation/en-us/unreal-engine/text-localization-in-unreal-engine`，用于确认 `FText`、`LOCTEXT`、`NSLOCTEXT`、文本历史、格式化与可收集文本。
- `String Tables in Unreal Engine`：`https://dev.epicgames.com/documentation/en-us/unreal-engine/string-tables-in-unreal-engine`，用于确认字符串表资产和 `FText` 引用规则。

网络教程中常见的稳定流程是：先在 Dashboard 配 target 和 culture，再 Gather，导出 PO，翻译后导入 PO，最后 Compile。不要把教程里的手动点击步骤照搬成 MCP 点击；自动化应复用 Dashboard 后端生成的 config 和 commandlet。

## 源码定位

从 `<EngineRoot>/Engine/Source` 查以下文件：

- `Editor/LocalizationDashboard/Public/ILocalizationDashboardModule.h`：公开 `Show()`，可打开真实 Localization Dashboard。
- `Editor/LocalizationDashboard/Private/LocalizationDashboard.cpp`：Dashboard tab、target details、默认打开第一个 game target。
- `Editor/LocalizationDashboard/Private/SLocalizationDashboardTargetRow.*`：target 行上的 Gather、Import、Export、Reports、Compile 按钮。
- `Editor/LocalizationDashboard/Private/SLocalizationTargetEditorCultureRow.*`：culture 行上的单语言 Import/Export/Dialogue/Compile 按钮。
- `Editor/LocalizationCommandletExecution/Public/LocalizationCommandletTasks.h`：Dashboard 按钮调用的公开任务 API。
- `Editor/LocalizationCommandletExecution/Private/LocalizationCommandletTasks.cpp`：每个按钮先生成 config，再调用 `LocalizationCommandletExecution::Execute`。
- `Editor/LocalizationCommandletExecution/Private/LocalizationCommandletExecution.cpp`：`FLocalizationCommandletProcess::Execute` 使用 `GatherText` commandlet、`-config="<ini>"`、`-Unattended` 启动命令进程并读取日志。
- `Developer/Localization/Public/LocalizationSettings.h`：`ULocalizationSettings::GetGameTargetSet()` 与 `GetEngineTargetSet()`。
- `Developer/Localization/Public/LocalizationTargetTypes.h`：`ULocalizationTarget`、target settings、culture stats、gather/export/compile settings。
- `Developer/Localization/Public/LocalizationConfigurationScript.h`：生成所有 dashboard config 的公开函数。
- `Developer/Localization/Private/LocalizationConfigurationScript.cpp`：`*_Gather.ini`、`*_Import.ini`、`*_Export.ini`、`*_Compile.ini`、`*_GenerateReports.ini` 的真实生成逻辑。
- `Editor/UnrealEd/Private/Commandlets/GatherTextCommandlet.cpp`：读取 `GatherTextStepN`，按 `CommandletClass` 调子 commandlet。
- `Editor/UnrealEd/Private/Commandlets/GatherTextFromSourceCommandlet.cpp`、`GatherTextFromAssetsCommandlet.cpp`、`InternationalizationExportCommandlet.cpp`、`GenerateTextLocalizationResourceCommandlet.cpp`、`GenerateTextLocalizationReportCommandlet.cpp`：具体收集、导入导出、编译、报告实现。
- `Runtime/Core/Private/Internationalization/TextLocalizationManager.cpp` 与 `LocalizationResourceTextSource.cpp`：运行时加载 `.locres`、路径、chunk 和 culture 优先级。
- `Runtime/Engine/Private/KismetInternationalizationLibrary.cpp`：蓝图语言切换 API 的底层入口。

## Dashboard 操作映射

Dashboard 操作不是直接修改 `.manifest` 或 `.locres`，而是按 target settings 生成 config，再调用 `GatherText` commandlet。

| Dashboard 操作 | Config 生成函数 | 默认 config | 子 commandlet |
| --- | --- | --- | --- |
| Gather Text | `GenerateGatherTextConfigFile` | `<Target>_Gather.ini` | `GatherTextFromSource`、`GatherTextFromAssets`、`GenerateGatherManifest`、`GenerateGatherArchive`、`GenerateTextLocalizationReport` |
| Import Translations | `GenerateImportTextConfigFile` | `<Target>_Import.ini` | `InternationalizationExport` 且 `bImportLoc=true` |
| Export Translations | `GenerateExportTextConfigFile` | `<Target>_Export.ini` | `InternationalizationExport` 且 `bExportLoc=true` |
| Import Dialogue Script | `GenerateImportDialogueScriptConfigFile` | `<Target>_ImportDialogueScript.ini` | `ImportDialogueScript` |
| Export Dialogue Script | `GenerateExportDialogueScriptConfigFile` | `<Target>_ExportDialogueScript.ini` | `ExportDialogueScript` |
| Import Dialogue | `GenerateImportDialogueConfigFile` | `<Target>_ImportDialogue.ini` | `ImportLocalizedDialogue` |
| Generate Reports | `GenerateWordCountReportConfigFile` | `<Target>_GenerateReports.ini` | `GenerateTextLocalizationReport` |
| Compile Translations | `GenerateCompileTextConfigFile` | `<Target>_Compile.ini` | `GenerateTextLocalizationResource` |
| Preview/Regenerate live resources | `GenerateRegenerateResourcesConfigFile` | `Regenerate<Target>.ini` | `FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig` |

单 culture 的 Import/Export/Compile 会生成 culture-specific config。Dashboard 对单 culture 操作使用临时 config，运行后删除，避免污染 `Config/Localization`。

## MCP Toolset

项目 MCP 插件提供：

```text
OrionProjectToolsets.OrionLocalizationToolset
```

工具：

- `OpenLocalizationDashboard()`：打开真实 Localization Dashboard tab。
- `ListLocalizationTargets(targetSet="Game")`：列出 target、native culture、culture word count、config/data/output paths。`targetSet` 支持 `Game`、`Engine`、`All`。
- `RunLocalizationOperation(operation, targetName="", targetSet="Game", cultureName="", pathOverride="", timeoutSeconds=1800)`：同步运行本地化操作，返回每个 target 的 config path、return code、process arguments 和日志尾部。

`operation` 支持以下字符串，大小写、空格、下划线和连字符不敏感：

- `GatherText`
- `ImportText`
- `ExportText`
- `ImportDialogueScript`
- `ExportDialogueScript`
- `ImportDialogue`
- `GenerateReports`
- `CompileText`
- `PreviewTranslations` 或 `RegenerateResources`
- `GenerateConfigFiles`

`targetName` 为空、`*` 或 `All` 时，会对 `targetSet` 中全部 target 顺序执行。默认只操作 game target，避免误跑 Engine/Editor target。

`cultureName` 只对 `ImportText`、`ExportText`、`ImportDialogueScript`、`ExportDialogueScript`、`ImportDialogue`、`CompileText` 有效。调用前必须确认 culture 已在 target 的 `SupportedCulturesStatistics` 中。

`pathOverride` 用于 PO 或 dialogue script 的导入导出：

- target 级操作时传目录。
- culture 级操作时传文件路径。
- 不传时使用 `Content/Localization/<Target>/<Culture>/<Target>.po` 或默认 dialogue script 路径。

## MCP 调用顺序

1. 使用 `orion-mcp-workflow` 建立 MCP session。
2. `list_toolsets` 确认 `OrionProjectToolsets.OrionLocalizationToolset` 存在。
3. `describe_toolset` 查看当前 schema。
4. 先只读调用：

```json
{
  "toolset_name": "OrionProjectToolsets.OrionLocalizationToolset",
  "tool_name": "ListLocalizationTargets",
  "arguments": {
    "targetSet": "Game"
  }
}
```

5. 需要人工核对面板时打开 Dashboard：

```json
{
  "toolset_name": "OrionProjectToolsets.OrionLocalizationToolset",
  "tool_name": "OpenLocalizationDashboard",
  "arguments": {}
}
```

6. 运行典型发布流水线：

```json
{
  "toolset_name": "OrionProjectToolsets.OrionLocalizationToolset",
  "tool_name": "RunLocalizationOperation",
  "arguments": {
    "operation": "GatherText",
    "targetName": "Game",
    "targetSet": "Game",
    "timeoutSeconds": 1800
  }
}
```

```json
{
  "toolset_name": "OrionProjectToolsets.OrionLocalizationToolset",
  "tool_name": "RunLocalizationOperation",
  "arguments": {
    "operation": "CompileText",
    "targetName": "Game",
    "targetSet": "Game",
    "timeoutSeconds": 1800
  }
}
```

7. 运行后检查返回：

- `bSuccess` 必须为 true。
- 每个 step 的 `returnCode` 必须为 0。
- `logTail` 中不能有 `Error:`、`Warning:` 中的关键本地化失败。
- `.manifest`、`.archive`、`.locres`、`.csv`、`_Conflicts.txt` 的时间戳和内容要符合本次操作预期。

## 推荐流水线

常规文本更新：

1. 保存所有改过的源码、UMG、DataTable、StringTable、GameFeature 资产。
2. `ListLocalizationTargets` 确认 target 和 culture。
3. `RunLocalizationOperation(GatherText, targetName="Game")`。
4. `RunLocalizationOperation(ExportText, targetName="Game")`。
5. 翻译 PO。
6. `RunLocalizationOperation(ImportText, targetName="Game")`。
7. `RunLocalizationOperation(GenerateReports, targetName="Game")`。
8. `RunLocalizationOperation(CompileText, targetName="Game")`。
9. 验证 `.locres` 与 packaged staging。

命令行批处理必须使用参数数组，并把 `-config=<Path>` 作为一个完整字符串传入，避免 PowerShell 或 UE 命令行解析把 `$Config`、`.ini` 扩展名或路径片段拆坏：

```powershell
$ArgsList = @($ProjectFile, "-run=GatherText", "-config=$Config", "-unattended", "-nop4", "-stdout", "-FullStdOutLogOutput")
& $UnrealEditorCmd @ArgsList
```

不要把 `-config=Config/Localization/<Target>_Compile.ini` 裸写在 PowerShell 原生命令参数里；一旦 UE 实际日志里出现 `Loading Config File '<Project>/Config/Localization/<Target>_Compile' failed` 或命令行显示 `<Target>_Compile .ini`，说明参数被拆坏了，改回参数数组。保留日志时用 `-stdout -FullStdOutLogOutput` 再重定向到 `Saved/OrionUE/Localization/commandlet_logs/<Config>.log`，否则启动失败时可能得到空日志。大型项目每次启动编辑器命令行会产生大量无关资产警告，不能只凭控制台滚动输出判断本地化失败。

快速验证已有 archive 是否能生成 runtime 资源：

1. `RunLocalizationOperation(CompileText, targetName="Game")`。
2. 检查 `Content/Localization/<Target>/<Culture>/<Target>.locres`。
3. 用 `-culture=<CultureName>` 或运行时语言设置验证 UI。

## 完整翻译验收

不要只检查 `.archive` 中 `Translation.Text` 是否为空。Unreal 的 source fallback 往往表现为 `Translation.Text == Source.Text`，这会让报告看似“已填充”，但玩家界面仍显示英文。用户要求“翻译完整”“设置界面/按钮也要有多语言”时，至少做三层审计：

1. 对每个 target culture 递归遍历 `.archive` 的 `Children` 与 `Subnamespaces`，统计空译文。
2. 对非 native / 非 English 目标 culture 统计 `NormalizeLineEndings(Translation.Text) == NormalizeLineEndings(Source.Text)` 的 source fallback。
3. 对 source fallback 做白名单分类：品牌名、武器型号、平台/API 名称、路径、输入 action id、占位符、RichText 标签、纯数字和目标语言同形词可以保留；设置页、按钮、菜单、操作提示和发布文案必须由 AI 按 namespace/key/source path 和多人射击游戏语境补译，不能因为非空就算完成。

设置页要单独抽查 namespace/key。`OrionGameUserSetting`、`GameSettings`、`GameSettingValueDiscreteDynamic`、`GameUIPopupTypes`、CommonUI action/button 文本中，`settings_empty` 和“非白名单 source fallback”都必须为 0。`OK`、`PVP/PVE`、`RTX`、`XInput + DualShock` 这类固定缩写或产品/API 名称可以保留原文，但 `ON/OFF`、`LOADOUT`、`START`、`SETTINGS`、`BACK TO MENU` 等玩家可见按钮词必须翻译成目标语言 UI 习惯表达。

当用户指出某段 `LOCTEXT` 或某个设置页 key 仍只有中英时，不要只重新跑全量覆盖率统计。必须按 `namespace,key,source` 精确抽查 `.manifest`、每个 culture 的 `.archive`、导出的 `.po`、编译后的 `.locres`，再检查 packaged/staged manifest 是否包含每个目标 culture 的 `Content/Localization/<Target>/<Culture>/<Target>.locres`。如果 archive/locres 中有译文但 staged manifest 只出现 `en` 或少数 culture，问题是运行时/打包加载链，不是 GatherText 收集不到；先查 `ProjectPackagingSettings.CulturesToStage`、`[Internationalization] +LocalizationPaths` 和 UFS staging，再重新 stage/package 验证。

如果 target 的 native culture 不是源码文本语言，例如源码 `LOCTEXT` 是英文但 native culture 是 `zh-Hans`，非 native culture 的 `.archive` 不能只在英文 `Source.Text` 下写入译文。UE 的 PO Export 和 LocRes Compile 会用 `ELocTextExportSourceMethod::NativeText`，并在 `bSkipSourceCheck=false` 时要求目标 archive 的 `Source` 精确等于 native archive 的 `Translation`；否则 `Translation.Text` 虽然非空，也会导出成空 `msgstr`，并在 `.locres` 中回退。修复时先用 `scripts/sync-unreal-archive-native-sources.py --native-culture <NativeCulture>` 同步非 native archive 的 `Source`，再 Export/Compile/Reports，不要通过打开 `bSkipSourceCheck` 来掩盖 stale translation。

编辑器内预览当前 culture：

1. 切换 Editor 当前 culture。
2. `RunLocalizationOperation(PreviewTranslations, targetName="Game")`。
3. 只把它当作 live preview；发布前仍然必须 `CompileText`。

## 常见失败

- `UnrealEditor-Cmd` 启动阶段先跑 `UnrealBuildTool -Mode=ValidatePlatforms -OutputSDKs -AllPlatforms`，并因为无关平台 SDK（例如 VisionOS 缺 `MainVersion`）返回失败：这是 TargetPlatform AutoSDK setup，不是本地化失败。命令行批处理可在当前进程设置 `UE_SKIP_UBT_SDK_SETUP=1` 后再运行 GatherText commandlet，只跳过 SDK setup 检查，不跳过本地化 commandlet。不要为了这个问题修改安装版引擎文件。
- 日志出现 `Skipping out-of-date modules`，随后 `Plugin '<Name>' failed to load because module '<Module>' could not be found`：当前项目/插件二进制 BuildId 与引擎不一致，GatherText 还没真正执行。先用当前项目的 Editor Target 编译一次，例如 `<UnrealBuildTool> <EditorTarget> Win64 Development -Project="<ProjectFile>" -WaitMutex -NoHotReloadFromIDE`，成功后再重新运行 `GenerateReports`、`CompileText`、`ExportText`。
- `Culture '<Name>' is not configured`：先在 target 中加入 culture，再 gather/import/compile。
- Gather 后 manifest 没变化：源码宏不是 `LOCTEXT`/`NSLOCTEXT`，资产未保存，或 gather include path 没覆盖插件/Content。
- Import 成功但游戏不显示翻译：没有运行 `CompileText`，或打包 `CulturesToStage` 没包含该 culture。
- 设置界面语言下拉只显示中英文：不要只依赖 `FTextLocalizationManager::Get().GetLocalizedCultureNames(ELocalizationLoadFlags::Game)` 推导可选语言。该 API 受当前已加载 localization resource 影响，可能只枚举到已加载的 culture。运行时语言设置应合并项目显式支持列表，例如 `ProjectPackagingSettings.CulturesToStage` 或 target culture 配置，再用 `FInternationalization::IsCultureAllowed` / `GetCulture` 过滤非法 culture，最后再追加 `GetLocalizedCultureNames(Game)` 作为补充。
- 设置项 archive/locres 已有多语言但 packaged build 仍显示中英：检查 staged manifest 和包内 UFS 文件，不要停在 `Content/Localization` 源目录。`Saved/StagedBuilds/<Platform>/Manifest_UFSFiles_<Platform>.txt` 或打包日志里必须列出每个目标 culture 的 `Content/Localization/<Target>/<Culture>/<Target>.locres`；如果只列出 `en`，即使本地 `.archive` 全部有译文，玩家也只能看到已 staged 的语言资源。
- Compile 报 format pattern 错误：翻译破坏了 `{Name}`、`{0}`、plural/select 语法。
- Compile 报 RichText tag 警告：翻译破坏 `<Tag>...</>` 配对；开启 `ValidateRichTextTags` 时必须修。
- 打包后少语言：检查 `ProjectPackagingSettings.CulturesToStage`、`LocalizationPaths`、`.locres` 是否 staged。
- 单 culture 导入导出找错文件：culture 级 `pathOverride` 是文件路径，target 级 `pathOverride` 是目录路径。
- PO export 在 `PortableObjectFormatDOM.cpp` 的 `check(!MsgId.IsEmpty())` 断言：优先检查 native culture 的 `.archive` 是否有空 `Translation.Text`。UE 导出 PO 时会用 native 文本作为 `msgid`；native archive 里空翻译会变成空 `msgid`。项目侧修复是让 native culture archive 无空译文，再重新 `GenerateReports`、`CompileText`、`ExportText`，不要改引擎源码。

## Archive 脚本处理注意

`.manifest` 与 `.archive` 都可能包含嵌套 `Subnamespaces`。写脚本统计或修复翻译时必须递归遍历 `Children` 和 `Subnamespaces`，只扫顶层 `Children` 会漏条目。

如果 C++ 源码改了 `LOCTEXT_NAMESPACE`，Gather 会把同一 key/source 收进新 namespace，旧 namespace 的 archive 译文不会自动匹配。修复顺序：先备份旧 namespace 的 `(culture, key, source, translation)`，再 Gather 生成新 namespace 条目，然后按 `(culture, key, source)` 迁移旧译文到新 namespace。迁移只是恢复覆盖率，不代表翻译质量合格；短词必须再按新 namespace、key 和 UI 语境做 AI 译审。

AI 审定覆盖建议写成 CSV 后用 `scripts/apply-unreal-archive-overrides.py` 应用。CSV 至少包含 `target, archive, culture, namespace, key, source, translation`；脚本会按 namespace/key/source 精确匹配并检查 `{Placeholder}`、RichText 标签和转义 token。写 archive 时用临时文件替换目标文件，不要直接覆盖目标 JSON；Windows 上直接 `write_text` 某些 archive 偶发 `Errno 22` 或锁冲突。

原生文化兜底修复只用于解除 PO 导出和 runtime 空文本风险：当 native culture 的 `Translation.Text` 为空且 `Source.Text` 非空时，可以把 native translation 填成 source fallback，并把变更记录到 `Saved/OrionUE/Localization/native_source_fallback_report.csv`。这不代表目标语言翻译完成。

当用户要求全部翻译完成时，非 native culture 的缺口必须继续分批补齐，直到 `translation_remaining_untranslated.csv` 为空或报告中所有目标 culture 的空条目为 0。译文应由 Codex/AI 读取 source、namespace/key、周边文本和游戏类型后直接产出并润色；翻译记忆和术语表可以作为一致性依据，但外部机器翻译程序不能作为默认译文来源。只有用户明确授权时，机器翻译草稿才可作为参考材料，最终写回 archive 前仍必须由 AI 按目标语言语境复核和改写，不能只把缺口导出后留给用户。

使用官方引擎本地化作为 translation memory 时，优先匹配 `(namespace, key, source)`，再谨慎匹配 source 文本。适合覆盖 Engine、Editor、PropertyNames、ToolTips、Keywords、Category 等官方文本。游戏专有 UI、多人射击术语、Steam 发布文案、武器说明和玩法提示必须按上下文进行 AI 译审：短 UI 要简洁可扫读，设置项要符合平台习惯，武器/配件/操作要符合射击游戏表达，Steam 面向玩家的文案要自然、不像直译。写回前必须做术语保护、占位符保护、RichText 标签保护、区域用语检查和基础 QA。

特别注意短词歧义：`Back` 在 CommonUI/action bar/menu 语境是“返回”，不是方向“后方”；`Fast` 在手柄灵敏度是“快/快速”，不是宗教或禁食含义；`Far` 在 View Distance 是远距离/远处，不是“距离”这个名词；`Epic` 在画质等级是最高/极高/エピック/Очень высокое 等设置等级，不是叙事“史诗般”。`Unmount` 在 DLC/插件内容语境是卸载/取消挂载，不是下马。检查这些词时必须同时看 namespace、key 和 source path。

## 边界

- 不通过 MCP 自动改 Engine target，除非用户明确要求；默认只跑 `targetSet="Game"`。
- 不在安装版引擎目录生成、修改或格式化任何文件。
- 不用 Dashboard 私有 Slate 类做业务逻辑；按钮点击只作为人工 UI 验证手段。
- 不用 `FText::FromString` 包硬编码 UI 文案来“快速修本地化”；这类文本不会被 gather。
- `PreviewTranslations` 只更新当前 Editor live entries，不替代 `.locres` 编译。
