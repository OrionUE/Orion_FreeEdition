---
name: unreal-gameplayabilities
description: "Use when Codex works on Unreal Engine GameplayAbilities, GAS, GA, small gameplay abilities, AbilitySystemComponent, GameplayAbility, GameplayEffect, AttributeSet, AbilityTasks, prediction keys, target data replication, GameplayCues, GameplayEffectComponents, CoreGameplayAbility, CoreAbilitySystemComponent, CoreAbilitySet, AbilitySet grants/removal, PawnData ability sets, Experience ability grants, GameFeature Add Abilities, GamePhaseAbility, gameplay phase abilities, ability input tags, activation policy/group, attribute replication, effect context, custom target data, ability input activation, multiplayer prediction, runtime/editor module boundaries, and gameplay ability system debugging."
---

# Unreal GameplayAbilities

本 Skill 用于处理 Unreal Engine GameplayAbilities / GAS，以及框架内基于 GA 的小玩法、AbilitySet、输入触发和 GamePhase 流程。先从当前机器的引擎、项目和插件源码确认真实类型、模块依赖、函数签名、预测/复制语义和项目封装层，再修改能力系统代码。

详细说明：

`references/gameplayabilities.zh-CN.md`

## 工作流

1. 先判断玩法形态：能抽象成“授予、激活、等待任务/输入/事件、提交消耗、结束/取消”的小玩法，优先用 GA。
2. 先定位层级：ASC、GameplayAbility、GameplayEffect、AttributeSet、AbilityTask、TargetData、Prediction、GameplayCue、GE Component、AbilitySet、PawnData、Experience、GameFeature、GamePhase、Editor tooling。
3. 涉及能力激活、授权、移除或输入触发时，优先查 `UAbilitySystemComponent`、`UGameplayAbility`、`FGameplayAbilitySpec`、`UCoreAbilitySystemComponent`、`UCoreGameplayAbility` 和 `UCoreAbilitySet`。
4. 涉及 AbilitySet、PawnData、Experience 或 GameFeature 授予时，确认服务端授权、句柄回收、feature 反激活和输入 Tag 链路。
5. 涉及数值、生命值、伤害或属性复制时，优先查 `UAttributeSet`、`FGameplayAttributeData`、rep notify 和 GE execution。
6. 涉及 multiplayer、预测、TargetData 或客户端先行表现时，必须查 prediction key、target data RPC/delegate/consume 链路。
7. 涉及 GameplayEffect 新行为时，优先查 modular `UGameplayEffectComponent` 路径和当前版本是否存在 deprecated 字段。
8. 实现前确认模块依赖；实现后验证 authority、prediction、replication、attribute、GE stacking、GameplayCue、AbilitySet 回收、GamePhase 和输入触发行为。

## 路由

- 查源码位置、模块依赖和符号声明时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 使用 `UCoreAbilitySystemComponent`、`UCoreGameplayAbility`、`UCoreAbilitySet`、PawnData ability grant、Core ability input flow 或 GameCore ability extension 时，配合 `../unreal-gamecore-framework/SKILL.md`。
- AbilitySet 被 PawnData 授予、角色 PawnClass/输入配置影响 GA 激活、或需要创建角色蓝图/PawnData 时，配合 `../unreal-character-pawn-framework/SKILL.md`。
- AbilitySet 由 Experience/PawnData/GameFeature 授予、需要创建 Experience、设置 DefaultPawnData、绑定关卡 WorldSettings 或维护 GA/InputTag/InputAction 完整闭环时，配合 `../unreal-gamemode-experience-framework/SKILL.md`。
- 能力由输入触发、绑定或映射时，配合 `../unreal-input-framework/SKILL.md` 和 `../unreal-enhancedinput/SKILL.md`；UI 按键提示再配合 `../unreal-commoninput/SKILL.md`。
- 交互 Ability、`GameplayAbility_Interact`、`GA_InventoryAbility`、`InteractionAbilityToGrant`、`Ability.Interaction.Activate`、`Event.Inventory.*`、物品拾取/装备/掉落或交互 AbilityTask 时，配合 `../unreal-inventory-interaction-framework/SKILL.md`。
- 能力、Attribute、GameplayCue、AbilitySet 或 GamePhase 由 Experience/GameFeature 激活/反激活时，配合 `../unreal-gamefeatures/SKILL.md`。
- 伤害执行、目标过滤、锁定、Buff/Debuff 或 GameplayCue 需要敌友判断、友军伤害规则、`FGenericTeamId` 或队伍展示数据时，配合 `../unreal-teams-framework/SKILL.md`。
- 创建、命名、移动 GA、GE、AttributeSet、AbilitySet、GameplayCue、InputAction 或 GameFeature 内容资产时，配合 `../unreal-asset-management/SKILL.md`。
- Ability 激活失败、AttributeSet 伤害、GameplayCue 参数、GameplayEvent 后续通知、UI 提示或战斗消息需要跨系统广播时，配合 `../unreal-gameplay-message-router/SKILL.md`。
- Ability、ASC、AttributeSet、TargetData、GameplayCue、prediction、owner-only 属性或 AbilityActorInfo 涉及多人复制/RPC 时，配合 `../unreal-network-replication-framework/SKILL.md`。
- 涉及 ability 相关 Actor 的 actor relevancy、owner-only 可见性、dormancy、cull distance、大量 GameplayCue/target actor 复制或 RepGraph placement 时，配合 `../unreal-replicationgraph/SKILL.md`。
- Editor details、Blueprint 节点、GameplayCue editor 或 audit 工具必须保持在 Editor 模块或 `WITH_EDITOR` 保护内。

## 约束

- 不假设固定 UE 小版本；以本机源码为准。
- 不写入项目名、项目绝对路径或引擎绝对路径。
- 不复制引擎源码；只记录定位方法、核心类型和验证要点。
