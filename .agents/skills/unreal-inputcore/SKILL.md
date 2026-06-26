---
name: unreal-inputcore
description: "Use when Codex works on Unreal Engine InputCore or low-level input foundations: FKey, EKeys, FKeyDetails, FInputKeyManager, key display names, key categories, gamepad/mouse/touch/modifier/analog classification, platform key conversion, FGenericPlatformInput, UPlayerInput, UInputComponent, legacy action/axis mappings, input component stack, debug key bindings, and EnhancedInput/CommonInput compatibility with Engine input classes."
---

# Unreal InputCore

本 Skill 用于处理 Unreal Engine InputCore 和底层 Engine 输入基础。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、`FKey` 元数据、平台 key 转换和 legacy input 兼容语义，再修改输入代码。

详细说明：

`references/inputcore.zh-CN.md`

## 工作流

1. 先判断问题属于底层 key identity/metadata、EnhancedInput action mapping，还是 CommonInput UI prompt。
2. 涉及 `FKey`、`EKeys`、`FKeyDetails`、`FInputKeyManager`、platform key conversion，优先使用本 Skill。
3. 涉及 `UInputAction`、`UInputMappingContext`、trigger、modifier、mapping lifecycle，路由到 `../unreal-enhancedinput/SKILL.md`。
4. 涉及 current input type、key brush、gamepad glyph、CommonUI input mode，路由到 `../unreal-commoninput/SKILL.md`。
5. 涉及 legacy config action/axis mapping、`UPlayerInput`、`UInputComponent`、input component stack，本 Skill 负责解释底层兼容，再按需要路由到 EnhancedInput。
6. 实现前确认模块依赖；实现后验证 key classification、platform behavior、legacy compatibility 和 higher-level input behavior。

## 路由

- 查源码位置、模块依赖和符号声明：配合 `../unreal-source-code-navigator/SKILL.md`。
- 项目输入框架、`CommonInputSystem`、玩家改键设置、`InputTag`、GameFeature 输入和手柄/键鼠设置：配合 `../orion-input-framework/SKILL.md`。
- EnhancedInput action、mapping、trigger、modifier、user remapping：配合 `../unreal-enhancedinput/SKILL.md`。
- CommonInput current input type、controller data、key brush、UI input mode：配合 `../unreal-commoninput/SKILL.md`。
- GameFeature 激活时添加或移除输入配置：配合 `../orion-gamefeatures/SKILL.md`。
- 输入触发 GameplayAbility：配合 `../unreal-gameplayabilities/SKILL.md`。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
