---
name: unreal-enhancedinput
description: "Use when Codex works on Unreal Engine EnhancedInput or gameplay input behavior, 角色输入移动, 输入绑定, 移动输入, look/move actions, UInputAction, UInputMappingContext, FEnhancedActionKeyMapping, FInputActionValue, UEnhancedPlayerInput, UEnhancedInputComponent, UEnhancedInputLocalPlayerSubsystem, IEnhancedInputSubsystemInterface, input triggers, input modifiers, player mappable key profiles, user settings, mapping context rebuilds, input mode filtering, injected input, InputBlueprintNodes, or InputEditor tooling."
---

# Unreal EnhancedInput

本 Skill 用于处理 Unreal Engine EnhancedInput 和 Gameplay 输入链路。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、函数签名和项目封装层，再修改输入代码。

详细说明：

`references/enhancedinput.zh-CN.md`

## 工作流

1. 先定位层级：输入资产、mapping context、runtime evaluation、subsystem lifecycle、component binding、trigger/modifier、user settings、Blueprint node、Editor tooling。
2. 角色移动、镜头、技能输入等 Gameplay 输入，优先查 `UInputAction`、`UInputMappingContext`、`UEnhancedInputLocalPlayerSubsystem`、`UEnhancedInputComponent` 和项目封装层。
3. mapping lifecycle 必须通过 subsystem API 处理；不要直接改 `UEnhancedPlayerInput` 内部 mapping 数组。
4. action binding 必须选择正确 `ETriggerEvent`；不要把 `Triggered` 当作所有场景的 pressed。
5. remapping/key profile 相关需求必须查 `UEnhancedInputUserSettings` 和 player mappable key profile。
6. 实现前确认模块依赖；实现后用构建、UHT 和输入实测验证。

## 路由

- 查源码位置、模块依赖和符号声明时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 涉及 `FKey`、`EKeys`、key metadata、platform key conversion、`UPlayerInput`、`UInputComponent`、legacy input stack 或 key 分类时，配合 `../unreal-inputcore/SKILL.md`。
- 涉及 CommonUI input mode、UI back/click action、按键图标、手柄 glyph 时，配合 `../unreal-commoninput/SKILL.md`。
- 涉及 `CommonInputSystem`、`UInputSystemConfig`、`InputTag`、PawnData InputConfig、GameFeature 输入 Action、玩家改键设置页或手柄/键鼠设置时，配合 `../orion-input-framework/SKILL.md`。
- 涉及 GameFeature 激活时添加/移除 input mapping context、input config 或用户改键可见性时，配合 `../orion-gamefeatures/SKILL.md`。
- 涉及输入触发 GameplayAbility、ability input binding、技能按键或 ability activation 时，配合 `../unreal-gameplayabilities/SKILL.md`。
- 只涉及角色移动、Pawn/Character/Controller、Gameplay Ability 输入绑定时，优先本 Skill，不要默认使用 CommonInput。
- 项目自定义输入组件、输入配置、GameplayTag 绑定、GameFeature 输入注入，以 `../orion-input-framework/SKILL.md` 和当前项目源码为准。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
