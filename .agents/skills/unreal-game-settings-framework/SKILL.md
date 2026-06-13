---
name: unreal-game-settings-framework
description: "Use when Codex works on the Unreal Engine GameSettings plugin and this framework's player/world settings: GameSettings plugin classes, UGameSettingRegistry, UGameSettingScreen, UGameSettingVisualData, UOrionGameSettingRegistry, UOrionGameWorldSettingRegistry, UOrionSettingsLocal, UOrionSettingsShared, GameSettingRegistry_*.cpp, settings UI in GameUI, GameUserSettingsClassName, platform GameUserSettings.ini defaults, settings save/apply/cancel, audio/video/input/language/subtitle/gamepad settings, key remapping settings, or adding a new configurable option."
---

# Unreal Game Settings Framework

本 Skill 用于处理框架内玩家设置、世界设置、设置 UI、保存/应用流程，以及 GameSettings 插件的通用设置模型。它是音频、视频、输入、本地化等“玩家可调选项”的汇合层。

## 工作流

1. 先分清设置类型：本机设备/画质/音频设备走 `UOrionSettingsLocal`；跨设备或账号偏好走 `UOrionSettingsShared`；房间/世界创建参数走 `UOrionGameWorldSettingRegistry` 和对应 SaveGame；纯运行时调试项不要直接混入玩家设置。
2. 读取真实源码，不凭记忆生成：`Plugins/GameSettings`、`Source/<GameModule>/Settings/User`、`Source/<GameModule>/Settings/Game`、`Source/<UIModule>/Settings`、目标 `Config/*.ini`。
3. 新增普通设置时，优先使用 `UGameSettingValueScalarDynamic`、`UGameSettingValueDiscreteDynamic_*`、`UGameSettingAction`、`UGameSettingValueEditable_*` 和 `FGameSettingDataSourceDynamic`；只有动态枚举、设备列表、语言、分辨率、DLSS/RTX 等复杂行为才新增自定义 setting class。
4. 玩家可见文案使用 `LOCTEXT` / `FText`，不要把 `FString` 文案写成最终 UI；设置项 `DevName` 必须稳定且在同一个 registry 内唯一。
5. UI 逻辑默认在 C++：`UGameSettingScreen` + `UGameSettingPanel` + `UGameSettingListView` + `UGameSettingVisualData`。Widget Blueprint 主要负责布局、绑定控件、VisualData 和美术表现。
6. 改键设置走 `UGameSettingInput`、EnhancedInput 用户设置、项目的 mappable key profile 和 mapping extension；不要为每个 `UInputAction` 手写一套独立 UI。
7. 实现后至少验证：注册表可初始化、设置可显示、Apply/Cancel 行为正确、保存重启后生效、平台 gating 正确、相关领域的运行时系统收到新值。

## 路由

- 查类声明、调用点、模块依赖、引擎 `UGameUserSettings` 或 EnhancedInput 用户设置源码时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 修改 `DefaultEngine.ini` 的 `GameUserSettingsClassName`、`DefaultInput.ini` 的 EnhancedInput user settings、平台 `GameUserSettings.ini` 默认值或配置 section 时，配合 `../unreal-project-config/SKILL.md`。
- 设置项属于音频音量、设备、HDR/LDR、空间音频或语音聊天时，配合 `../unreal-audio-framework/SKILL.md`。
- 设置项属于渲染、分辨率、画质、DLSS、RTX、帧率、Scalability 或 PSO 启动流程时，配合 `../unreal-rendering-framework/SKILL.md`。
- 设置项属于输入、按键重映射、CommonInput 手柄类型、glyph、EnhancedInput mappable profile 或 gamepad 参数时，配合 `../unreal-input-framework/SKILL.md`、`../unreal-enhancedinput/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- 设置页、Widget Blueprint、CommonUI 层栈、列表 entry、按钮、返回键或 VisualData 资产相关工作，配合 `../unreal-umg/SKILL.md`。
- 语言切换、字幕文本、设置项显示名/说明、Localization 收集/编译/打包，配合 `../unreal-localization-framework/SKILL.md`。
- 世界/房间设置与 `WorldOption`、`LevelMeta`、存档保存、前端 phase 或玩法流程相关时，配合 `../unreal-savegame-framework/SKILL.md`、`../unreal-system-framework/SKILL.md`、`../unreal-gamemode-experience-framework/SKILL.md` 和 `../unreal-online-steam-framework/SKILL.md`。
- 判断代码落点、GameCore 只读边界、宿主 Game 模块和 GameFeature 插件职责时，配合 `../unreal-framework-architecture/SKILL.md` 和 `../unreal-gamecore-framework/SKILL.md`。

## Reference

读取 `references/game-settings-framework.zh-CN.md` 获取 GameSettings 插件结构、现有设置清单、Local/Shared/World 存储选择、设置 UI 绑定、输入改键链路、新增设置模板和验证清单。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、机器路径或私有文档 URL 写进 Skill、文档、注释、配置示例或脚本。
- 可以保留框架模块名、插件名、类名、函数名、配置 section、GameplayTag、相对路径模板和占位符。
- `Source/GameCore` 默认只读；新增业务设置优先写在宿主 Game 模块或 GameFeature 插件，除非用户明确允许修改核心基座。
- 不把设置逻辑塞进 Widget Blueprint graph；业务值、保存、应用、依赖和平台条件必须在 registry、setting class、settings object 或 subsystem 中处理。
- 不直接从 UI 写 CVar 或全局状态来替代持久化 owner；需要保存的值必须有明确的 Local/Shared/World 存储与 Apply/Save 语义。
