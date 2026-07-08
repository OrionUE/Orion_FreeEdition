---
name: orion-localization-framework
description: "Use when Codex works on Unreal Engine localization in this framework: UI FText, LOCTEXT, NSLOCTEXT, INVTEXT, FText::Format, FText::FromString, FText::AsNumber, FText::AsCurrency, FText::AsPercent, FText::AsDateTime, FText::AsMemory, FText::Join, trimming FText, culture switching, FInternationalization, FTextLocalizationManager, KismetInternationalizationLibrary, Content/Localization, Config/Localization, Localization Dashboard, GatherText commandlet, OrionProjectToolsets.OrionLocalizationToolset, MCP localization operations, Game_Gather.ini, *_Gather.ini, *_Export.ini, *_Import.ini, *_Compile.ini, .manifest, .archive, .po, .locres, .locmeta, localization reports, CulturesToStage, LocalizationPaths, EngineOverrides, UI text, RichText, CommonUI text, packaged localization, adding a supported language, or automating gather/export/import/compile/report through MCP."
---

# Unreal Localization Framework

本 Skill 用于处理 Unreal Engine 本地化：从 UI 文本写法、源码/资产文本收集、PO 导入导出、`.locres` 编译，到运行时语言切换和打包 staging。

## 工作流

1. 先读取当前工程真实配置：`Config/Localization/*.ini`、`Content/Localization/*`、`Config/DefaultEditor.ini` 的 localization target、`Config/DefaultGame.ini` 的 packaging culture、`Config/DefaultEngine.ini` 的 `[Internationalization]` 路径。
2. 写玩家可见的静态文本时使用可收集的 `FText`：C++ 用 `LOCTEXT` / `NSLOCTEXT`，格式化用 `FText::Format`，UMG/DataTable/设置项用 `FText` 属性。
3. 只把 `FText::FromString` 用在运行时数据、用户输入、好友名、存档名、设备名、日期字符串等不应翻译的内容；不要用它包裹硬编码 UI 文案。
4. 修改文本后运行本地化流水线：Gather 更新 manifest/archive，Export/Import 走 PO，Compile 生成 `.locres`，Reports 检查词数和冲突；可用 MCP 的 `OrionProjectToolsets.OrionLocalizationToolset.RunLocalizationOperation` 触发这些动作。
5. 新增语言时同步 target culture、archive/PO、`.locres`、`CulturesToStage`、运行时语言列表和打包验证；缺一项都会导致语言不可选或打包后缺翻译。
6. 用户要求“全部翻译完成”时，不得把剩余项留成“待人工”，也不得把外部翻译程序或机器翻译结果当作最终译文。必须由 AI 读取 source、namespace/key 和游戏上下文，分批产出目标 culture 译文并润色到当前游戏语境；外部 MT 只能在用户明确授权时作为参考草稿，最终写回前仍必须 AI 译审。保留占位符、RichText 标签、输入键位、武器型号、路径、代码和产品名，再重新报告、编译、导出。
7. 切换语言优先使用框架已有设置链；底层依赖 `FInternationalization` / `FTextLocalizationManager` / `UKismetInternationalizationLibrary`，并可能需要重启以刷新早期加载文本。
8. 修改后验证：检查 `_Conflicts.txt`、`.csv` 报告、目标 culture 下 `.locres` 时间戳，编辑器预览或命令行 `-culture=<CultureName>`，再验证 packaged build。

## 路由

- 查 UE 本地化 commandlet、`FTextLocalizationManager`、`FInternationalization`、`FText` 或引擎版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 修改 `Config/Localization`、`DefaultEditor.ini`、`DefaultGame.ini`、`DefaultEngine.ini`、`CulturesToStage`、`LocalizationPaths` 或 packaging culture 时，配合 `../orion-project-config/SKILL.md`。
- 创建或整理 `Content/Localization` 目标、UMG/DataTable/Widget Blueprint 文本资产、GameFeature 内容中的可翻译文本时，配合 `../orion-asset-management/SKILL.md`。
- 修改 UI 文案、CommonUI 文本、RichText、TextBlock、按钮文本或 Widget Blueprint 时，配合 `../orion-umg/SKILL.md`。
- 修改语言设置项、设置页显示名/说明、`UGameSettingValueDiscrete_Language`、运行时 culture 保存/应用或本地化设置 UI 时，配合 `../orion-game-settings-framework/SKILL.md`。
- 打包后语言缺失、`.locres` 未 staged、chunk、本地化 target staging 或 culture cook 问题，配合 `../orion-packaging/SKILL.md`。
- 文本来自 GameFeature 插件内容、玩法 UI 或模块化功能时，配合 `../orion-gamefeatures/SKILL.md`，并确认 gather 配置包含对应插件内容目录。
- 需要通过 MCP 打开 Localization Dashboard、列 target、生成配置或运行 Gather/Export/Import/Dialogue/Reports/Compile/Preview 时，先读取 `references/localization-source-and-mcp.zh-CN.md`，并配合 `../orion-mcp-workflow/SKILL.md`。

## Reference

读取 `references/localization-framework.zh-CN.md` 获取文本写法规范、项目目录和 target 约定、GatherText 命令、运行时语言切换、打包验证和常见错误处理。

读取 `references/localization-source-and-mcp.zh-CN.md` 获取 UE 源码定位、官方资料结论、Localization Dashboard 按钮到 commandlet 的映射、以及 MCP `OrionLocalizationToolset` 的调用流程。

## Scripts

- `scripts/fill-unreal-archive-translations.py`：当用户要求补齐全部目标语言翻译时使用。它递归处理 `.archive` 的 `Children` 与 `Subnamespaces`，识别空译文和 source fallback，保护占位符、RichText 标签、路径、品牌/武器名，写回 AI 已审定的短语覆盖和中文繁体转换，并输出 `translation_fill_report.csv` 与 `translation_fill_issues.csv`。默认 `--backend manual`，只做 AI 译文应用、术语保护和缺口报告；缺失译文要由 Codex/AI 分批阅读 source 后补入覆盖表或经审定的导入映射，不允许默认调用翻译程序。只有用户明确授权外部机器翻译作为参考时，才可同时传 `--allow-external-mt --backend bing|deep-google`，且写回前必须重新 AI 译审。运行前确认目标 culture 已在 `Config/Localization` 和 `CulturesToStage` 中；`zh-Hant` 会优先从同 target 的 AI 审定 `zh-Hans` archive 用 OpenCC 转换，保持中文术语一致。
- `scripts/apply-unreal-archive-overrides.py`：应用 AI 已审定的 CSV 覆盖表到 `.archive`。CSV 使用 `target,archive,culture,namespace,key,source,translation,note` 字段，脚本按 namespace/key/source 精确匹配，检查 `{Placeholder}`、RichText 标签和转义 token，并用临时文件替换方式写回，避免 Windows 直接覆盖 archive 时偶发失败。它不调用翻译程序；译文必须先由 Codex/AI 读取 source、key、namespace、UI/玩法语境后写入 CSV。
- `scripts/sync-unreal-archive-native-sources.py`：当 target 的 native culture 不是源码语言，且非 native culture archive 有译文但 PO 导出或 `.locres` 编译仍为空/回退时使用。脚本把非 native archive 的 `Source` 从源码文本同步为 native culture 的 `Translation`，匹配 UE `GetRuntimeText(... NativeText ..., bSkipSourceCheck=false)` 的 source-check；它不生成译文，只修正 `.archive` 数据形态，并输出 `archive_native_source_sync_report.csv`。少量旧 archive 的 source 已漂移时，可在确认 namespace/key 唯一后加 `--allow-key-only` 做 key-only 同步，再用 AI 覆盖表修正译文。

## 硬规则

- Skill 内容不得写入宿主项目名、绝对路径、用户名或机器路径；命令示例使用 `<UnrealEditorCmd>`、`<ProjectFile>`、`<TargetName>` 占位。
- 不复制 Unreal Engine 源码或长段 API 文档；只记录经源码确认的使用结论。
- `Config/Localization/*` 多数由 Localization Dashboard 生成；需要改 target 结构时优先通过 Dashboard 或明确说明人工改 ini 的风险。
- 玩家可见文本默认必须可本地化，除非它明确来自用户/系统运行时数据或调试日志。
