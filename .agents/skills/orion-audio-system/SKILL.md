---
name: orion-audio-system
description: "Use when working on the project-local OrionAudioSystem plugin, audio generation components, Blueprint audio playback APIs, runtime attenuation updates, USoundBase/USoundAttenuation playback, multiplayer replicated one-shot audio, Blueprint component visibility/loading issues, or VerifyImport failures for /Script/OrionAudioSystem in Plugins/Audio/OrionAudioSystem. Use for requests mentioning OrionAudioSystem, UOrionAudioGenerationComponent, UOrionFireAndForgetAudioGenerationComponent, 音频生成组件, 世界位置播放音频, 实时衰减, 多人都能听到声音, 组件消失, or 蓝图重新加载后才显示."
---

# Orion Audio System

本 Skill 用于开发、排查和扩展 `Plugins/Audio/OrionAudioSystem` 的运行时音频生成组件。

## 工作流

1. 先读取项目规则 Skill：`../orion-framework-architecture/SKILL.md`、`../orion-code-style/SKILL.md`、`../orion-audio-framework/SKILL.md`。
2. 涉及多人播放、RPC、ActorComponent 复制或 Dedicated Server 路径时，同时读取 `../orion-network-replication-framework/SKILL.md`。
3. 涉及 `UGameplayStatics::SpawnSoundAtLocation`、`UAudioComponent`、`USoundAttenuation` 或反射/RPC 参数时，用 `../unreal-source-code-navigator/SKILL.md` 查本机引擎源码签名。
4. 修改 `Plugins/Audio/OrionAudioSystem` 代码时保持 Runtime 插件边界；不要依赖宿主 `OrionGame`、`GameCore` 或 Editor 模块。
5. 改完代码后对 touched code files 运行 `.agents/skills/orion-code-style/scripts/check-code-style.ps1`，并至少构建 Editor target 触发 UHT/RPC 校验。

## 路由

- 修改或排查插件加载阶段、`.uplugin`、蓝图资产首次打开时组件缺失、`VerifyImport` 或 `/Script/OrionAudioSystem` 时，配合 `../unreal-source-code-navigator/SKILL.md` 和 `references/orion-audio-system.zh-CN.md`。
- 涉及音频资产、Sound、Attenuation、MetaSound、ProjectAcoustics、SteamAudio 或音频配置时，配合 `../orion-audio-framework/SKILL.md`。
- 涉及多人播放、RPC、ActorComponent 复制或 Dedicated Server 路径时，配合 `../orion-network-replication-framework/SKILL.md`。
- 涉及 Blueprint 资产编译、保存、Reload 后恢复、缺失类或迁移损坏时，配合 `../unreal-blueprint-migration-repair/SKILL.md`。
- 涉及资产创建、命名、路径、保存或引用扫描时，配合 `../orion-asset-management/SKILL.md`。

## 关键约束

- `SpawnSoundAtLocation` 只能直接传 `USoundAttenuation` 资产；如果需要运行时覆盖 `FSoundAttenuationSettings`，生成 `UAudioComponent` 后调用 `AdjustAttenuation` 或相关 setter。
- 组件 RPC 依赖所属 Actor 的复制通道。客户端发起 Server RPC 时，组件所属 Actor 必须有 owning connection；否则请求可能被 NetDriver 拒绝。
- NetMulticast 仍受 Actor 相关性影响。如果声音必须全局广播，需要改为 GameState 或专用 always-relevant 音频广播 Actor。
- Dedicated Server 不应本地生成声音；本地播放函数必须跳过 `NM_DedicatedServer`。
- 高可靠性声音可走 Reliable multicast；高频声音默认 Unreliable，避免可靠 RPC 队列堆积。
- 音频资产路径仍按项目音频框架：共享资产放 `Content/Audio`，玩法专属资产放对应 GameFeature Content。

## Reference

读取 `references/orion-audio-system.zh-CN.md` 获取插件结构、蓝图入口、多人行为、实时衰减实现和验证清单。
