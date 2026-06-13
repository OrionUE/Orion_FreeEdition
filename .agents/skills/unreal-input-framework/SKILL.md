---
name: unreal-input-framework
description: "Use when Codex works on the reusable Unreal Engine input framework: CommonInputSystem, UInputSystemConfig, UInputSystemComponent, InputTag, InputAction, InputMappingContext, PawnData InputConfig, CorePawnControlComponent, OrionPawnControlComponent, GameFeatureAction_AddInputContextMapping, GameFeatureAction_AddInputBinding, player key remapping, GameSettingRegistry_MouseAndKeyboard, GameSettingRegistry_Gamepad, CommonInput controller glyphs, EnhancedInput user settings, gamepad or mouse keyboard settings, and Steam gamepad troubleshooting."
---

# Unreal Input Framework

本 Skill 用于在本框架中新增、排查或整理输入系统：Gameplay 输入、Ability 输入、GameFeature 输入注入、玩家改键、手柄图标、键鼠/手柄设置和相关配置。

详细说明：

`references/input-framework.zh-CN.md`

## 工作流

1. 先分层：InputCore 负责 `FKey`，EnhancedInput 负责 `UInputAction` / `UInputMappingContext`，CommonInput 负责输入设备和 UI glyph，`CommonInputSystem` 负责把输入动作、`InputTag`、GAS 和改键设置接起来。
2. 默认不要改 `Source/GameCore`；新业务输入优先放在 OrionGame 派生类或 `Plugins/GameFeatures/<FeatureName>` 的资产和 ActionSet 中。
3. 新增 Native 输入时，从 OrionGame 的 PawnControl 派生层绑定 `NativeInputActions`；新增 Ability 输入时，维护 `AbilityInputActions`、AbilitySet 的 `InputTag` 和 GameFeature/PawnData 配置。
4. 新增或修改 IMC 时，确认它是否通过 `UGameFeatureAction_AddInputContextMapping` 注册到玩家设置；只改 PawnData 的 `InputConfig` 不等于加载或注册 IMC。
5. 改键、按键设置或手柄图标需求必须同时检查 `UInputSystemUserSettings`、`UInputSystemPlayerMappableKeyProfile`、`UGameSettingInput`、平台 `ControllerData` 和 CommonInput 当前手柄名。
6. 配置相关改动必须核对 `DefaultInput.ini`、`DefaultGame.ini` 和目标平台 `Config/<Platform>/<Platform>Game.ini`。
7. 实现后至少验证构建、PIE 输入、GameFeature 激活/反激活、改键保存/恢复、键鼠与手柄切换、UI glyph 和目标平台手柄行为。

## 路由

- 查源码、模块依赖、include、类声明和调用点时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断代码落点、GameCore 只读边界、OrionGame 派生层或 GameFeature 插件职责时，配合 `../unreal-framework-architecture/SKILL.md` 和 `../unreal-gamecore-framework/SKILL.md`。
- 角色移动、PawnControl、PawnData 的 `InputConfig`、`BP_CharacterBase`、HeroComponent 或角色蓝图输入组件链路时，配合 `../unreal-character-pawn-framework/SKILL.md`。
- 输入属于某个关卡玩法 Experience、需要创建 Experience、配置 PawnData、AbilitySet、InputAction/InputTag 闭环或把 Experience 指定到关卡时，配合 `../unreal-gamemode-experience-framework/SKILL.md`。
- `UInputAction`、`UInputMappingContext`、trigger、modifier、binding、user settings 和 mappable profile 的引擎细节，配合 `../unreal-enhancedinput/SKILL.md`。
- 玩家改键设置页、`GameSettingRegistry_MouseAndKeyboard.cpp`、`GameSettingRegistry_Gamepad.cpp`、`UGameSettingInput`、设置保存/应用/取消或 GameSettings UI 行为，配合 `../unreal-game-settings-framework/SKILL.md`。
- `FKey`、`EKeys`、key category、`IsGamepadKey`、legacy input stack 或平台 key 转换，配合 `../unreal-inputcore/SKILL.md`。
- 当前输入设备、CommonUI input mode、Action Domain、返回键、点击、手柄类型和 key brush，配合 `../unreal-commoninput/SKILL.md`。
- Ability 输入、AbilitySet、ASC 输入队列、prediction 或技能激活行为，配合 `../unreal-gameplayabilities/SKILL.md`。
- 交互输入、`IA_Interact`、`InputTag.Ability.Interact`、拾取/开箱/搜索按键、交互提示 key brush 或交互 GA 输入闭环，配合 `../unreal-inventory-interaction-framework/SKILL.md`。
- Experience、ActionSet、GameFeature Action、feature 激活和反激活，配合 `../unreal-gamefeatures/SKILL.md`。
- 创建或整理 `IA_`、`IMC_`、`InputData_`、CommonInput controller data、UI 按键提示资产时，配合 `../unreal-asset-management/SKILL.md`。
- 通过 MCP 修改 Experience / ActionSet 的 input binding 或 input mapping action 时，配合 `../unreal-mcp-project-toolsets/SKILL.md`。
- 修改 `DefaultInput.ini`、`DefaultGame.ini`、平台 CommonInput settings 或玩家设置默认值时，配合 `../unreal-project-config/SKILL.md`。

## 约束

- Skill 和生成内容中不得写入宿主项目名、绝对路径、用户名、机器路径或私有文档 URL。
- 可以保留公开框架模块名、插件名、类名、函数名、配置 section、GameplayTag 前缀和相对路径模板。
- `Source/GameCore` 默认只读；需要修改时先向用户说明为什么派生层、GameFeature、DataAsset 或配置不能解决，并等待明确允许。
