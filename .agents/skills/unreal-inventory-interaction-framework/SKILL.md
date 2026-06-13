---
name: unreal-inventory-interaction-framework
description: "Use when Codex works on Unreal Engine inventory interaction and item interaction systems: GameInventorySystem, InteractionSystem, JInventorySystem, interactable item actors, item pickup/drop/equip, inventory containers, IInteractableTarget, AInteractionItem, FInteractionOption, FInteractionQuery, UAbilityTask_GrantNearbyInteraction, UAbilityTask_WaitForInteractableTargets, GameplayAbility_Interact, IndicatorSystem, UIndicatorManagerComponent, UIndicatorDescriptor, UUI_InteractionWithKeyBrush, interaction widgets, InputTag.Ability.Interact, Event.Inventory.* gameplay events, TraceChannel_Interaction, InteractiveItem collision, multiplayer item interaction, replicated inventory item actors, and GameFeature-delivered interaction gameplay."
---

# Unreal Inventory Interaction Framework

本 Skill 用于框架内“可交互物品 -> 交互提示 UI -> 输入触发 -> GA/库存事件 -> 多人权威处理”的完整链路。它覆盖交互发现层、背包数据层、GameUI IndicatorSystem、AbilitySet/InputTag 接入和多人拾取校验。

详细说明：

`references/inventory-interaction-framework.zh-CN.md`

## 工作流

1. 先分层：`InteractionSystem` 负责发现交互目标和生成 `FInteractionOption`；`JInventorySystem` 负责物品实例、容器、装备、搜索和库存复制；`IndicatorSystem` 负责交互提示 UI；GA 负责输入、预测和最终触发业务。
2. 先读真实源码：交互接口、AbilityTask、玩家交互 GA、库存组件、物品 Actor、Indicator 组件、目标 GameFeature/Experience/PawnData/AbilitySet。
3. 新增世界物品交互时，优先复用已有交互 Actor/组件或实现 `IInteractableTarget`，通过 `FInteractionOption` 指定展示文本、交互 UI 和要触发的 Ability。
4. 交互输入默认走 `InputTag.Ability.Interact`，玩家侧交互 GA 默认通过 AbilitySet/PawnData/Experience 或 GameFeature 授予，不在 GameMode 中写交互业务。
5. 交互 UI 默认通过 `UIndicatorManagerComponent` 挂到 PlayerController，并使用 `UIndicatorDescriptor` 描述目标；不要直接在物品 Actor 上手动 `AddToViewport`。
6. 多人游戏中，客户端 Trace/Indicator 只做发现和表现；拾取、开箱、装备、掉落、销毁世界物品和修改库存必须在服务器权威路径里再次校验距离、状态、所有权和可用性。
7. 实现后验证：碰撞 Profile、输入绑定、AbilitySet 授予、Indicator 显示/移除、服务器拾取、客户端同步、Listen Server、Dedicated Server、延迟/丢包和 GameFeature 反激活清理。

## 路由

- 查源码位置、模块依赖、include、AbilityTask 生命周期或引擎版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 创建或整理可交互物品、GA、WBP、InputAction、AbilitySet、PawnData、Experience 或 GameFeature 内容资产时，配合 `../unreal-asset-management/SKILL.md`。
- 交互 GA、InteractionAbilityToGrant、GameplayEvent、AbilitySet、InputTag、prediction 或 target ability 触发时，配合 `../unreal-gameplayabilities/SKILL.md`。
- 交互输入、`InputTag.Ability.Interact`、`IA_Interact`、InputConfig、IMC 或改键可见性时，配合 `../unreal-input-framework/SKILL.md` 和 `../unreal-enhancedinput/SKILL.md`。
- 交互提示 UI、Indicator widget、CommonActionWidget、按键图标或 CommonUI/UMG 布局时，配合 `../unreal-umg/SKILL.md`、`../unreal-commoninput/SKILL.md`。
- 交互组件、IndicatorManager、输入、AbilitySet 或物品玩法随 Experience/GameFeature 启停时，配合 `../unreal-gamefeatures/SKILL.md` 和 `../unreal-gamemode-experience-framework/SKILL.md`。
- 世界物品、库存组件、ItemInstance、Container、RPC、replicated subobject、拾取/掉落/装备同步或多人交互 bug 时，配合 `../unreal-network-replication-framework/SKILL.md`。
- 交互结果需要跨 UI、任务、提示、统计或系统解耦广播时，配合 `../unreal-gameplay-message-router/SKILL.md`。

## 约束

- 不把宿主项目名、绝对路径、用户名、私有文档地址或机器路径写进 Skill、示例代码或生成文档。
- 不默认修改核心框架层；业务交互优先落在宿主 Game 派生层、GameFeature 插件、DataAsset 或 Blueprint 配置。
- 不把客户端 UI 命中当作服务器事实；多人交互必须有服务端权威校验。
- 不绕过 `JInventorySystem` 私自维护库存数组；物品实例、容器、装备、搜索和复制优先走库存组件已有 API。
