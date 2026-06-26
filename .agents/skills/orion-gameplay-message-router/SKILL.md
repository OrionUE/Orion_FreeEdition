---
name: orion-gameplay-message-router
description: "Use when Codex works on Unreal Engine GameplayMessageRouter or tag-based gameplay messaging in this framework: UGameplayMessageSubsystem, GameplayMessageRuntime, BroadcastMessage, RegisterListener, FGameplayMessageListenerHandle, EGameplayMessageMatch, UAsyncAction_ListenForGameplayMessage, FGameplayVerbMessage, FCoreVerbMessage, FGameplayNotificationMessage, message channels with GameplayTags, ability failure messages, damage/elimination notifications, UI toast feeds, GameFeature decoupled communication, or deciding whether to use messages instead of delegates."
---

# Unreal Gameplay Message Router

本 Skill 用于在框架里编写、审查和排查基于 GameplayTag channel 的游戏消息收发。它适合让互不直接引用的 gameplay、Ability、UI、GameFeature、通知和状态处理系统解耦通信。

## 工作流

1. 先读取 `.uproject` 和目标模块 `*.Build.cs`，确认 `GameplayMessageRouter` 插件启用，代码模块依赖 `GameplayMessageRuntime`。
2. 读取 `references/gameplay-message-router.zh-CN.md`，先判断任务应该用 GameplayMessageRouter、委托、接口、GameplayEvent、复制变量还是 RPC。
3. 选择消息 channel：使用稳定的 `GameplayTag`，通常用 `Verb.*.Message`、`Ability.*.Message`、`Gameplay.*.Message` 或 UI/系统命名空间。
4. 选择 payload：优先使用已有 `FCoreVerbMessage` 或 `FGameplayVerbMessage`；复杂业务用新的 `USTRUCT(BlueprintType)`，同一个 channel 的发送者和监听者必须约定同一 payload 类型。
5. C++ 发送使用 `UGameplayMessageSubsystem::Get(WorldContext).BroadcastMessage(Channel, Payload)`；C++ 监听保存 `FGameplayMessageListenerHandle` 并在 `EndPlay`、`Deinitialize` 或失效点注销。
6. Blueprint 监听使用 `Listen For Gameplay Messages` async node，指定 `PayloadType`，收到后用输出 payload；Blueprint 发送使用 `Broadcast Message`。
7. 多人游戏先判断网络边界：本地 message router 不自动复制。需要跨端时通过 GameState multicast、PlayerState client RPC、replicated fast array 或现有网络系统把消息送到目标端，再在目标端本地广播。
8. 调试时可启用 `GameplayMessageSubsystem.LogMessages 1`，同时检查 channel、payload struct、match type 和监听生命周期。

## 路由

- 查插件源码、类声明、模块依赖、Blueprint 节点或引擎版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 判断消息发送代码应落在 GameCore、宿主 Game 模块、GameFeature 插件、UI 模块还是 BBL 时，配合 `../orion-framework-architecture/SKILL.md` 和 `../orion-gamecore-framework/SKILL.md`；GameCore 默认只读。
- Ability 激活失败、AttributeSet 伤害、GameplayCue、GameplayEvent、GameplayEffect context 或 GAS tag 数据需要发消息时，配合 `../unreal-gameplayabilities/SKILL.md`。
- 队伍变更、队伍比分、占点、击杀归属、TeamDisplayAsset 刷新、友军伤害提示或基于团队的 UI 通知需要发消息时，配合 `../orion-teams-framework/SKILL.md`。
- GameFeature 玩法插件之间、Feature Action 激活/反激活、玩法独立 UI/系统需要解耦通信时，配合 `../orion-gamefeatures/SKILL.md`。
- 消息跨网络、server-to-all-clients、server-to-one-client、replicated state、owner-only 行为或 MessageRouter 网络桥接时，配合 `../orion-network-replication-framework/SKILL.md`；需要 actor relevancy/RepGraph placement 再配合 `../unreal-replicationgraph/SKILL.md`。
- UI toast、击杀提示、错误提示、CommonUI Widget 监听消息时，配合 `../orion-umg/SKILL.md` 和 `../unreal-commoninput/SKILL.md`。
- 新增 GameplayTag、tag table、Blueprint 资产、Widget 资产或 GameFeature 内容目录时，配合 `../orion-asset-management/SKILL.md` 和项目配置/GameplayTags 规则。

## Reference

读取 `references/gameplay-message-router.zh-CN.md` 获取消息系统能力图、委托对比、C++/Blueprint 模板、网络桥接规则、常见错误和验证清单。

## 硬规则

- 不把宿主项目名、绝对路径、用户名或本机引擎路径写进 Skill、示例代码或生成文档。
- 不为了单个玩法修改 GameCore 消息结构；优先在宿主 Game 模块或对应 GameFeature 插件定义 payload/tag/processor。
- 不把 GameplayMessageRouter 当作网络复制系统；它是本地 GameInstance 范围的同步分发器，跨端必须显式桥接。
- 不把所有回调都替换成消息。强耦合一对一、需要返回值、需要调用顺序保证、高频 per-frame 或组件内部生命周期事件，优先使用委托、接口或直接调用。
