# 背包交互系统 Skill 参考

## 目标边界

本参考用于实现和排查世界物品交互、拾取、开箱、搜索、装备、掉落、交互提示 UI 和多人交互同步。

系统分四层：

- `InteractionSystem`：可交互目标接口、交互选项、交互查询、交互 AbilityTask、交互 GameplayTag。
- `JInventorySystem`：物品静态数据、物品实例、容器、库存组件、装备/掉落/搜索和库存复制。
- `IndicatorSystem`：交互目标提示 UI 描述和 PlayerController 上的提示管理组件。
- GAS / Experience / GameFeature：授予玩家交互 GA，绑定 `InputTag.Ability.Interact`，在玩法激活时添加组件、输入、UI 和 AbilitySet。

## 源码定位

常用相对路径：

- `Plugins/GameInventorySystem/Source/InteractionSystem`：交互系统插件模块。
- `Plugins/JInventorySystem/Source/JInventorySystem`：库存、物品、容器和库存 UI 基础模块。
- `Source/AnimFramework/AbilitySystem/GameplayAbilites/GameplayAbility_Interact.*`：玩家侧交互 GA。
- `Source/AnimFramework/AbilitySystem/GameplayAbilites/GA_InventoryAbility.*`：需要库存组件的物品/装备能力基类。
- `Source/AnimFramework/Item/*ByInteraction.*`：物品、武器和配件接入 `IInteractableTarget` 的示例。
- `Source/GameUI/IndicatorSystem`：交互提示 UI 描述、管理组件和按键图标 Widget。
- `Config/DefaultEngine.ini` 的碰撞配置：`TraceChannel_Interaction`、`InteractiveItem`、`Interactable_Search`、`Interactable_BlockDynamic`。

如果当前项目结构不同，先用 `rg --files` 定位同名类和模块，不要假设固定目录。

## 交互层核心类型

`IInteractableTarget` 是交互目标接口。实现类必须提供：

- `GatherInteractionOptions(const FInteractionQuery&, FInteractionOptionBuilder&)`：根据请求方生成一个或多个交互选项。
- `CustomizeInteractionEventData(const FGameplayTag&, FGameplayEventData&)`：可选，用目标对象改写交互事件 payload，例如把 Target 从按钮改成门。
- `OnIsNearestInteractableTarget(bool)`：可选，只用于本地最近目标变化表现，例如高亮轮廓。

接口当前不允许直接在 Blueprint 实现。简单蓝图目标优先继承 `AInteractionItem` 或现有物品交互 Actor；复杂目标用 C++ Actor/ActorComponent 实现接口，再把可配置字段暴露给蓝图。

`FInteractionQuery` 记录请求方：

- `RequestingAvatar`：发起交互的 Pawn/Avatar。
- `RequestingController`：控制者。
- `OptionalObjectData`：额外上下文对象。

`FInteractionOption` 记录一次可执行交互：

- `InteractableTarget`：由 builder 自动填入。
- `Text` / `SubText`：交互 UI 文本，玩家可见静态文本必须是可收集 `FText`。
- `InteractionAbilityToGrant`：靠近后授予玩家 ASC 的交互 Ability。
- `TargetAbilitySystem` / `TargetInteractionAbilityHandle`：目标自身 ASC 上已存在的 Ability 句柄。
- `InteractionWidgetClass`：该选项使用的交互提示 Widget，留空时使用玩家交互 GA 的默认 Widget。

`AInteractionItem` 是最小蓝图配置型交互 Actor：它拥有一个 `FInteractionOption`，`GatherInteractionOptions` 直接把该选项加入 builder，并提供最近目标变化的 Blueprint 事件。

## 交互扫描和触发流程

玩家侧推荐入口是 `UGameplayAbility_Interact`：

1. Ability 构造中设置 OnSpawn 激活、InstancedPerActor、LocalPredicted。
2. 激活后启动 `UAbilityTask_GrantNearbyInteraction`，按 `InteractionScanRate` 和 `InteractionScanRange` 用碰撞 Profile 做球形扫描。
3. 扫描到实现 `IInteractableTarget` 的 Actor 或 Component 后，调用 `GatherInteractionOptions`。
4. 如果选项有 `InteractionAbilityToGrant`，任务会尝试把该 Ability 授予当前 ASC，并缓存句柄。
5. 蓝图可在 `K2_OnInteractableActorsChanged` 中启动或刷新视线 Trace，再调用 `UpdateInteractions`。
6. `UpdateInteractions` 清理旧 Indicator，按选项创建 `UIndicatorDescriptor`，交给 `UIndicatorManagerComponent` 显示，并把第一个选项视为最近/当前交互项。
7. 输入触发时调用 `TriggerInteraction()`，它取 `CurrentOptions[0]`，构造 `FGameplayEventData`，事件 tag 为 `Ability.Interaction.Activate`，再通过 `TargetAbilitySystem->TriggerAbilityFromGameplayEvent` 激活目标交互 Ability。

`UAbilityTask_WaitForInteractableTargets_SingleLineTrace` 适合从玩家视角做单线 Trace。它会：

- 用 PlayerController 视角修正 Trace 方向。
- 使用传入 `TraceProfile` 做 `LineTraceSingleByProfile`。
- 从 hit actor/component 收集 `IInteractableTarget`。
- 解析选项对应的 AbilitySpec 并过滤 `CanActivateAbility`。
- 只有交互选项变化时才广播 `OnInteractableObjectsChanged`。

调试 CVar：

- `GIS.ShowGrantNearbyInteractionDebug`
- `GIS.ShowInteractionSingleLineTraceDebug`
- `ShowDebugInventory`
- `ShowDebugInventory.Pickup`

## 背包层核心类型

`UJInventoryComponent` 是库存组件，通常挂在 PlayerState 或角色可获取的玩家状态对象上。它负责：

- 复制 `ContainersPtr`、`DefaultContainersPtr`、`CurrentEquippedItem`。
- 用 `ReplicateSubobjects` 复制容器和物品子对象。
- 初始化默认容器配置。
- 添加、移动、丢弃、装备、卸装物品。
- 处理搜索容器/物品、打开其他库存组件或容器。
- 绑定 ASC 的 GameplayEvent 回调。

库存事件 tag 在运行时注册：

- `Event.Inventory.PickUpItem`
- `Event.Inventory.DropItem`
- `Event.Inventory.EquipItem`
- `Event.Inventory.UnEquipItem`

`AItemActor` 是世界物品 Actor：

- 构造中开启 actor 复制和移动复制，并添加 `ITEM` tag。
- 服务器 BeginPlay 时可由 `ItemStaticDataClass` 创建 `UItemInstance`。
- 通过 `ReplicateSubobjects` 复制 `ItemInstance`、动态数据和子容器。
- `PickUp(AActor* OtherActor)` 只在服务器构造 `FGameplayEventData`，把自身作为 Instigator，把 `ItemInstance` 放入 OptionalObject，再通过 `SendGameplayEventToActor` 发给目标 Actor。
- `OnPickUp`、`OnDropped`、`OnEquipped`、`OnUnEquipped` 给蓝图做表现。

`UItemInstance` 是库存内的复制 UObject，支持：

- 静态数据类、动态数据、物品 Actor、数量、旋转、所在容器、子容器、搜索状态和已搜索玩家复制。
- 装备时授予/移除 Ability 或 GameplayEffect。
- `IsSupportedForNetworking()` 返回 true，可作为 replicated subobject。

`UGA_InventoryAbility` 是物品/装备相关 GA 的基类。它要求能从 PlayerState 找到 `UJInventoryComponent`，否则 `CanActivateAbility` 返回 false。写装备能力或库存物品能力时优先继承它，而不是直接继承裸 GA。

## 碰撞和资产配置

世界可交互物体必须同时满足代码接口和碰撞配置：

- 可被扫描：组件 Profile 推荐使用 `Interactable_Search` 或能被交互扫描 Profile overlap/block 的配置。
- 可被视线命中：Trace 通道使用 `TraceChannel_Interaction`。
- 物体类型：可交互物品通常使用 `InteractiveItem`。
- 常用 Profile：`Interactable_Search` 用于查询，`Interactable_BlockDynamic` 用于动态物体阻挡/重叠交互通道。

新增交互相关资产时：

- 通用 Gameplay 蓝图放通用 Gameplay 内容目录。
- 基础 GA 放通用 AbilitySystem/Abilities 目录。
- UI Widget 放通用 UI 目录。
- 玩法专属物品、交互 UI、Experience、AbilitySet、InputAction 等放对应 GameFeature 插件的 `Content/Game`、`Content/UI`、`Content/Experiences`、`Content/Player` 或 `Content/System`。
- 使用资产命名 Skill 确认 `BP_`、`WBP_`、`GA_`、`IA_`、`DA_` 等前缀。

## 常见实现配方

### 简单可交互 Actor

1. 继承 `AInteractionItem` 或现有物品交互 Actor。
2. 设置碰撞 Profile，使其能被 `TraceChannel_Interaction` 和扫描 Profile 命中。
3. 在 `InteractionOption` 中填写 `Text`、`SubText`、`InteractionWidgetClass`。
4. 设置 `InteractionAbilityToGrant` 为交互时要触发的 GA。
5. 确保玩家的交互 GA 已经通过 AbilitySet/PawnData/Experience 授予，并绑定 `InputTag.Ability.Interact`。

### 自定义 C++ 交互目标

1. Actor 或 ActorComponent 实现 `IInteractableTarget`。
2. `GatherInteractionOptions` 中根据 `FInteractionQuery` 判断距离、阵营、权限、锁定状态、是否已被搜索等条件。
3. 用 `FInteractionOptionBuilder::AddInteractionOption` 添加一个或多个选项。
4. 如果目标需要把 payload 改到另一个 Actor，覆盖 `CustomizeInteractionEventData`。
5. 如果最近目标要高亮，覆盖 `OnIsNearestInteractableTarget`，但只做本地表现。

### 世界物品拾取进背包

1. 世界物品使用 `AItemActor` 或其交互派生类，并拥有有效 `ItemStaticDataClass` / `UItemInstance`。
2. 交互选项的 Ability 最终应调用物品 Actor 的 `PickUp(Interactor)` 或发送等价库存事件。
3. `UJInventoryComponent` 必须已初始化并通过 ASC 绑定库存事件 tag。
4. 服务端 `HandleGameplayEventInternal` 会再次校验距离，再调用 `AddItemInstance`。
5. 物品进入库存后，由 `ItemInstance`、容器和 `AItemActor::ItemState` 的复制驱动客户端表现。

### 开箱、搜索和容器交互

1. 容器类目标实现 `IInteractableTarget`，交互 Ability 中调用库存组件的 `Server_OpenContentComponent` 或 `Server_OpenContentContainer`。
2. 搜索过程走 `Server_StartSearchItem`、`FinishCurrentSearchingItem`、`Server_StopCurrentSearchItem`。
3. 多人共享搜索状态依赖 `SearchingPS`、`SearchedPlayerStates`、`PlayersOpenedThisComponent` 和容器/组件的内容变化委托。
4. UI 只展示当前 `CurrentSearchingContent` 和库存复制状态，不直接改库存结构。

### 交互提示 UI

1. 确保 PlayerController 拥有 `UIndicatorManagerComponent`，通常通过 GameFeature Add Components 或 Experience ActionSet 添加。
2. `UGameplayAbility_Interact::UpdateInteractions` 会创建 `UIndicatorDescriptor`，设置目标对象、目标组件、交互接口和 Widget class。
3. 交互 Widget 可继承 `UUI_InteractionWithKeyBrush`，设置 `InputAction` 后，内部 `UCommonActionWidget` 会显示 EnhancedInput 对应的按键图标。
4. Widget 中的文本从 `FInteractionOption.Text` / `SubText` 读取；玩家可见静态文案保持可本地化 `FText`。
5. `UIndicatorDescriptor` 只能绑定一个 manager；不要跨 manager 复用同一个 descriptor。

### GameFeature / Experience 接入

一个玩法交互闭环通常包含：

- GameFeature 内容：物品/门/容器蓝图、交互 Widget、交互 GA、AbilitySet、InputAction、InputConfig、Experience/ActionSet。
- PlayerController 组件：添加 `UIndicatorManagerComponent`。
- PawnData / AbilitySet：授予玩家交互 GA；如果具体交互 Ability 要预授予，也放在 AbilitySet 中。
- InputConfig：把 `IA_Interact` 映射到 `InputTag.Ability.Interact`。
- Experience：组合 ActionSet、PawnData、GameFeature 和 UI。

不要把玩法交互规则写进 GameMode；GameMode 只选择 Experience，具体交互逻辑由 Experience/GameFeature/GA/组件组合完成。

## 多人网络规则

- 服务端权威：拾取、掉落、装备、开箱、搜索完成、容器修改、销毁世界物品必须由服务器执行。
- 客户端表现：Indicator、最近目标高亮、按键提示和本地 Trace 只能作为表现或输入意图。
- 二次校验：服务器能力或库存事件必须检查距离、目标存在、物品未被拾取、容器未锁定、玩家权限、队伍/所有权和冷却状态。
- `AItemActor` 已开启复制和移动复制；自定义物品 Actor 也必须正确复制 Actor、ItemInstance、动态数据和子容器。
- `UItemInstance` 和 `UContainer` 属于 replicated subobject 路径；新增子对象要确认 `IsSupportedForNetworking`、outer、生命周期和 `ReplicateSubobjects`。
- `UAbilitySystemComponent::GiveAbility` 只能在权威 owner 上成功。若 `UAbilityTask_GrantNearbyInteraction` 在预测客户端也执行，必须验证日志；生产实现可优先通过 AbilitySet 预授予交互 Ability，或在授权授予逻辑中显式限制为服务器。
- 如果用 `TargetAbilitySystem` 模式，目标 ASC 和 AbilitySpecHandle 必须在服务器有效；客户端只显示可交互 UI，不能信任客户端句柄完成业务。
- `OnIsNearestInteractableTarget` 只在本地控制器上调用，适合高亮，不适合改变权威状态。

## 已知注意点

- `UAbilityTask_GrantNearbyInteraction` 只有在 overlap 数量大于 0 时广播目标变化；全部离开范围时不会主动广播空数组，UI 清理需要结合视线 Trace 或额外逻辑验证。
- `UAbilityTask_GrantNearbyInteraction` 会按 Ability 类缓存授予句柄，但当前路径没有在离开范围时自动移除临时授予的 Ability；若交互 Ability 必须严格临时存在，需要扩展清理策略。
- `UInteractionStatics::GetActorFromInteractableTarget` 支持 Actor 和 ActorComponent；不要把纯 UObject 作为交互目标，否则当前实现会进入未实现路径。
- `UGameplayAbility_Interact::TriggerInteraction` 默认触发 `CurrentOptions[0]`；多选项菜单或优先级排序需要自己控制 CurrentOptions 顺序或扩展选择 UI。
- `UGA_InventoryAbility::CanActivateAbility` 依赖库存组件；没有库存组件的玩家或 AI 不能激活此类 Ability。
- 交互碰撞失败通常比代码失败更常见，先检查 Profile、object channel、trace channel 和组件是否启用 query collision。

## 验证清单

基础验证：

```powershell
rg -n "IInteractableTarget|FInteractionOption|GameplayAbility_Interact|UIndicatorManagerComponent|UJInventoryComponent" Source Plugins
rg -n "TraceChannel_Interaction|InteractiveItem|Interactable_Search|Interactable_BlockDynamic" Config
```

运行时验证：

- PIE 单人：靠近物品后 Indicator 出现，离开/转开后消失。
- 输入：`IA_Interact` 能触发玩家交互 GA，`InputTag.Ability.Interact` 与 AbilitySet 一致。
- UI：CommonInput 键位图标随键鼠/手柄切换更新。
- 服务器：拾取、丢弃、装备、开箱只在服务器修改库存。
- 客户端：所有客户端看到物品消失、库存变化和装备状态同步。
- Dedicated Server：无本地 UI 的服务器不执行 UI-only 逻辑，客户端仍能交互。
- GameFeature：激活时组件、输入、AbilitySet、UI 生效；反激活时清理对称。

调试命令：

```text
GIS.ShowGrantNearbyInteractionDebug 1
GIS.ShowInteractionSingleLineTraceDebug 1
ShowDebugInventory 1
ShowDebugInventory.Pickup 1
```
