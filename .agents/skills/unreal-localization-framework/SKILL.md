---
name: unreal-localization-framework
description: "Use when Codex works on Unreal Engine localization in this framework: UI FText, LOCTEXT, NSLOCTEXT, INVTEXT, FText::Format, FText::FromString, FText::AsNumber, FText::AsCurrency, FText::AsPercent, FText::AsDateTime, FText::AsMemory, FText::Join, trimming FText, culture switching, FInternationalization, FTextLocalizationManager, KismetInternationalizationLibrary, Content/Localization, Config/Localization, Localization Dashboard, GatherText commandlet, Game_Gather.ini, *_Gather.ini, *_Export.ini, *_Import.ini, *_Compile.ini, .manifest, .archive, .po, .locres, .locmeta, localization reports, CulturesToStage, LocalizationPaths, EngineOverrides, UI text, RichText, CommonUI text, packaged localization, or adding a new supported language."
---

# Unreal Localization Framework

本 Skill 用于处理 Unreal Engine 本地化：从 UI 文本写法、源码/资产文本收集、PO 导入导出、`.locres` 编译，到运行时语言切换和打包 staging。

## 工作流

1. 先读取当前工程真实配置：`Config/Localization/*.ini`、`Content/Localization/*`、`Config/DefaultEditor.ini` 的 localization target、`Config/DefaultGame.ini` 的 packaging culture、`Config/DefaultEngine.ini` 的 `[Internationalization]` 路径。
2. 写玩家可见的静态文本时使用可收集的 `FText`：C++ 用 `LOCTEXT` / `NSLOCTEXT`，格式化用 `FText::Format`，UMG/DataTable/设置项用 `FText` 属性。
3. 只把 `FText::FromString` 用在运行时数据、用户输入、好友名、存档名、设备名、日期字符串等不应翻译的内容；不要用它包裹硬编码 UI 文案。
4. 修改文本后运行本地化流水线：Gather 更新 manifest/archive，Export/Import 走 PO，Compile 生成 `.locres`，Reports 检查词数和冲突。
5. 新增语言时同步 target culture、archive/PO、`.locres`、`CulturesToStage`、运行时语言列表和打包验证；缺一项都会导致语言不可选或打包后缺翻译。
6. 切换语言优先使用框架已有设置链；底层依赖 `FInternationalization` / `FTextLocalizationManager` / `UKismetInternationalizationLibrary`，并可能需要重启以刷新早期加载文本。
7. 修改后验证：检查 `_Conflicts.txt`、`.csv` 报告、目标 culture 下 `.locres` 时间戳，编辑器预览或命令行 `-culture=<CultureName>`，再验证 packaged build。

## 路由

- 查 UE 本地化 commandlet、`FTextLocalizationManager`、`FInternationalization`、`FText` 或引擎版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 修改 `Config/Localization`、`DefaultEditor.ini`、`DefaultGame.ini`、`DefaultEngine.ini`、`CulturesToStage`、`LocalizationPaths` 或 packaging culture 时，配合 `../unreal-project-config/SKILL.md`。
- 创建或整理 `Content/Localization` 目标、UMG/DataTable/Widget Blueprint 文本资产、GameFeature 内容中的可翻译文本时，配合 `../unreal-asset-management/SKILL.md`。
- 修改 UI 文案、CommonUI 文本、RichText、TextBlock、按钮文本或 Widget Blueprint 时，配合 `../unreal-umg/SKILL.md`。
- 修改语言设置项、设置页显示名/说明、`UGameSettingValueDiscrete_Language`、运行时 culture 保存/应用或本地化设置 UI 时，配合 `../unreal-game-settings-framework/SKILL.md`。
- 打包后语言缺失、`.locres` 未 staged、chunk、本地化 target staging 或 culture cook 问题，配合 `../unreal-packaging/SKILL.md`。
- 文本来自 GameFeature 插件内容、玩法 UI 或模块化功能时，配合 `../unreal-gamefeatures/SKILL.md`，并确认 gather 配置包含对应插件内容目录。

## Reference

读取 `references/localization-framework.zh-CN.md` 获取文本写法规范、项目目录和 target 约定、GatherText 命令、运行时语言切换、打包验证和常见错误处理。

## 硬规则

- Skill 内容不得写入宿主项目名、绝对路径、用户名或机器路径；命令示例使用 `<UnrealEditorCmd>`、`<ProjectFile>`、`<TargetName>` 占位。
- 不复制 Unreal Engine 源码或长段 API 文档；只记录经源码确认的使用结论。
- `Config/Localization/*` 多数由 Localization Dashboard 生成；需要改 target 结构时优先通过 Dashboard 或明确说明人工改 ini 的风险。
- 玩家可见文本默认必须可本地化，除非它明确来自用户/系统运行时数据或调试日志。
