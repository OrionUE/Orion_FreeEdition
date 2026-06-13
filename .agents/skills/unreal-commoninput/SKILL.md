---
name: unreal-commoninput
description: "Use when Codex works on Unreal Engine CommonInput or CommonUI input behavior, 通用UI输入, UI输入模式, 返回键, 点击动作, 输入设备切换, 手柄图标, 按键提示, key brush, gamepad glyphs: UCommonInputSubsystem, UCommonInputSettings, UCommonInputBaseControllerData, UCommonInputPlatformSettings, ECommonInputType, ECommonInputMode, action domains, input preprocessors, input method detection, gamepad type detection, EnhancedInput click/back actions, and UI input mode behavior."
---

# Unreal CommonInput

本 Skill 用于处理 Unreal Engine 的 CommonInput 和 CommonUI 输入行为。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、设置项和调用样例，再修改 UI 输入代码。

详细说明：

`references/commoninput.zh-CN.md`

## 工作流

1. 先用源码导航 Skill 或本 Skill 的查找步骤定位 `CommonUI` 插件、`CommonInput` 模块和当前项目的输入封装层。
2. 涉及输入设备状态时，优先查 `UCommonInputSubsystem`。
3. 涉及默认点击/返回、EnhancedInput 支持、Action Domain 或输入防抖时，优先查 `UCommonInputSettings`。
4. 涉及按键图标、手柄类型、平台差异时，优先查 `UCommonInputBaseControllerData` 和 `UCommonInputPlatformSettings`。
5. 涉及 UI 输入优先级、输入模式、鼠标捕获时，优先查 `UCommonInputActionDomain` 和 `UCommonInputActionDomainTable`。
6. 实现前确认模块依赖；实现后用构建、UHT 和 UI 输入实测验证。

## 路由

- 查源码位置、模块依赖和符号声明时，优先配合 `../unreal-source-code-navigator/SKILL.md`。
- 涉及 `FKey`、`EKeys`、key metadata、key category、paired axis、platform key conversion 或 key 分类时，配合 `../unreal-inputcore/SKILL.md`。
- 只涉及 EnhancedInput action、mapping、trigger、modifier 时，使用 `../unreal-enhancedinput/SKILL.md`。
- 涉及 GameFeature 激活时添加/移除 UI、CommonUI action domain、input mode 或按键提示资源时，使用 `../unreal-gamefeatures/SKILL.md`。
- 涉及技能 UI、GameplayAbility 输入提示、ability cooldown/cost 显示或 GAS 状态驱动 UI 时，使用 `../unreal-gameplayabilities/SKILL.md`。
- 涉及 `CommonInputSystem`、`UInputSystemConfig`、玩家改键设置页、GameFeature 输入注入、`InputTag` 或项目手柄/键鼠设置时，配合 `../unreal-input-framework/SKILL.md`，不要把 CommonInput 原生能力和项目扩展混为一谈。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
