# OrionAudioSystem 参考

## 插件结构

- 插件描述：`Plugins/Audio/OrionAudioSystem/OrionAudioSystem.uplugin`
- Runtime 模块：`Plugins/Audio/OrionAudioSystem/Source/OrionAudioSystem`
- Runtime 模块加载阶段必须是 `PreDefault`，因为项目蓝图资产可能在默认模块加载阶段前就反序列化组件类引用。
- 组件头文件：`Public/OrionAudioGenerationComponent.h`
- 一次性播放组件：`Public/OrionFireAndForgetAudioGenerationComponent.h`
- 托管播放组件：`Public/OrionManagedAudioGenerationComponent.h`
- 组件实现：`Private/OrionAudioGenerationComponent.cpp`
- 使用说明：`Source/OrionAudioSystem/orion-audio-generation-component.zh-CN.md`

## 蓝图组件加载

`UOrionFireAndForgetAudioGenerationComponent` 和其他音频生成组件会被蓝图 SCS 节点直接引用。插件模块如果仍用 `LoadingPhase: Default`，编辑器启动时某些蓝图资产可能先于模块加载并出现：

```text
VerifyImport: Failed to find script package for import object 'Package /Script/OrionAudioSystem'
```

表现通常是蓝图打开后组件树里看不到该组件，但手动 Reload 或重新打开蓝图后又恢复。遇到这类问题先检查 `OrionAudioSystem.uplugin`，Runtime 模块应保持 `LoadingPhase: PreDefault`，不要通过重建蓝图组件、改父类或手工编辑 `.uasset` 规避。

验证方式：

- 启动编辑器或命令行加载引用音频组件的蓝图资产。
- 日志不应再出现 `/Script/OrionAudioSystem` 的 `VerifyImport` 警告。
- 蓝图组件树在首次打开时应直接显示 `UOrionFireAndForgetAudioGenerationComponent`。

### 批量 Resave 子蓝图组件缓存

父蓝图组件类型从普通 `AudioComponent` 切到 `UOrionFireAndForgetAudioGenerationComponent` 后，子蓝图可能出现：

```text
Resolved import with name 'WeaponFireAudio_GEN_VARIABLE' ... import class '/Script/Engine.AudioComponent', package class '/Script/OrionAudioSystem.OrionFireAndForgetAudioGenerationComponent'. Resave to fix.
```

处理这类缓存时，不要手工编辑 `.uasset`。使用 UE Python 命令行加载父蓝图和受影响子蓝图，再对受影响子蓝图调用 `unreal.EditorAssetLibrary.save_loaded_asset(asset, only_if_is_dirty=False)` 或 `save_asset` 兜底。当前 UE Python 命令行环境不一定暴露 `unreal.KismetEditorUtilities`，Resave-only 脚本不要硬依赖 `KismetEditorUtilities.compile_blueprint`，否则会在保存前失败。

同一次 Resave 运行里仍可能打印旧的 `Resolved import ... Resave to fix`，因为告警发生在资产加载、保存之前。必须再跑一次独立的只加载验证日志，确认不再出现 `WeaponFireAudio_GEN_VARIABLE`、`/Script/Engine.AudioComponent` 旧导入或 `CreateExport: Failed to load Parent`。

## 组件职责

`UOrionAudioGenerationComponent` 是通用音频发射组件抽象基类，也是 `USceneComponent`。它不表达武器、脚步、UI 或具体玩法语义，只负责维护组件位置、唯一 `Sound`、普通衰减资产、网络广播和蓝图统一入口。

具体播放方式必须落到子类：

- `UOrionFireAndForgetAudioGenerationComponent`：使用 `UGameplayStatics::PlaySoundAtLocation`，适合枪声、脚步声、命中声等高频短音效。
- `UOrionManagedAudioGenerationComponent`：使用 `SpawnSoundAtLocation` 并追踪返回的 `UAudioComponent`，适合需要运行时覆盖衰减、调整已生成音频或手动销毁的长音频。

组件需要作为可移动音频发射点时，必须保持 `USceneComponent` 形态，而不是退回 `UActorComponent`。这样蓝图可以把它 Attach 到 Mesh、Socket、武器、道具或任意其他 Scene Component 上，并通过组件自身 Transform 表达播放点。

## 运行时衰减

本机 UE 源码确认：

- `UGameplayStatics::SpawnSoundAtLocation` 的参数只接受 `USoundAttenuation*`，不会直接接受 `FSoundAttenuationSettings`。
- `UAudioComponent::AdjustAttenuation` 会把组件切到 override 衰减并把新 `FSoundAttenuationSettings` 发送到 active sound。
- `UAudioComponent::SetAttenuationSettings` 可以运行时切换衰减资产。
- `UAudioComponent::SetOverrideAttenuation(false)` 可回到衰减资产路径。

因此后续扩展实时衰减时，不要试图给 `SpawnSoundAtLocation` 硬塞结构体；应该追踪生成出的 `UAudioComponent`，并在运行时 setter 中对仍有效的组件重新应用衰减。

## C++ 实现注意

- `TObjectPtr<T>` 不要直接和裸指针混用三元表达式或函数参数；需要传给裸指针参数时使用 `Sound.Get()` 明确返回裸指针。
- 当前组件已经改为维护唯一 `Sound` 属性，不要再让播放函数接收一次性 `USoundBase*` 或一次性衰减；播放 RPC 只传位置/旋转，实际声音和衰减从组件状态读取。
- `PlayAudioAtCurrentWorldLocation` 必须使用组件自身的 `GetComponentLocation()` 和 `GetComponentRotation()`，不要使用 Owner Actor 位置，否则 Attach 和相对移动会失效。
- 不要在 `UOrionAudioGenerationComponent` 基类里用枚举或 switch 表达播放方式；新增播放后端时派生具体子类并重写本地播放实现。
- `UOrionFireAndForgetAudioGenerationComponent` 本地播放应走 `UGameplayStatics::PlaySoundAtLocation`，行为接近蓝图/脚本常用的一次性声音播放。
- `UOrionManagedAudioGenerationComponent` 本地播放才走 `SpawnSoundAtLocation` 并追踪返回的 `UAudioComponent`；`bAutoDestroyGeneratedAudio` 只控制这条托管组件路径。
- 托管组件播放请求需要携带 `bAutoDestroyGeneratedAudio` 快照；否则多人路径上各客户端可能因为本地组件状态不同而得到不同销毁行为。
- 关闭自动销毁时，播放完成的 `UAudioComponent` 会变成 inactive 但不会销毁；追踪数组不能简单按 `!IsActive()` 移除，否则组件会失去统一清理机会。
- 条件表达式两侧如果分别是 `AActor*` 和组件 `this`，先显式统一为 `const UObject*`，再传给 `UGameplayStatics` 的 WorldContextObject 参数。

## 多人播放模型

默认模型：

1. 蓝图调用 `PlayAudioAtCurrentWorldLocation` 或 `PlayAudioAtLocation(Location, Rotation)`。
2. 如果是 Standalone，直接本地生成声音。
3. 如果是服务端或 listen server，服务端调用 NetMulticast。
4. 如果是客户端，先调用 Server RPC，再由服务端 NetMulticast；高频音效默认使用 Unreliable Server RPC。
5. 客户端收到 multicast 后在本地调用当前具体子类的播放实现。
6. Dedicated Server multicast 实现里不播放本地声音。

注意：

- 客户端发起 Server RPC 需要 owning connection。
- Multicast 不是全局广播，仍受所属 Actor 相关性影响。
- 连续枪声、脚步声、命中声这类高频 transient audio 不能走 Reliable Server RPC，否则网络压力下会排队并在停止触发后继续播放。
- 重要但低频声音可以启用 reliable multicast；普通瞬时音效使用 unreliable。
- 运行时切换 `Sound` 或衰减时通过组件 setter 同步到服务端和相关客户端；不要只改蓝图变量本身。

## 验证清单

- 运行代码风格脚本检查新增 `.h`、`.cpp`、`.Build.cs`。
- 构建 `OrionEditor Win64 Development`，确认 UHT 能处理 RPC 和 `FOrionAudioPlaybackRequest`。
- 在 listen server + 2 clients 验证服务端调用时两个客户端都听到声音。
- 在 owning client 调用时，确认 Server RPC 能到达服务端。
- 在 dedicated server 验证服务器不生成本地音频，客户端仍播放。
- 调用衰减 setter 后，确认仍在播放的声音能收到实时变化。

## Skill 创建注意

在 Windows PowerShell 中把中文作为 `init_skill.py --interface` 参数传入时，可能生成乱码的 `agents/openai.yaml`。创建或更新 Skill 后必须打开 `agents/openai.yaml` 检查中文；如果乱码，直接改成 UTF-8 文本并重新校验 Skill。

带中文内容的 Skill 运行 `quick_validate.py` 时，Windows Python 可能默认按 GBK 读取并报 `UnicodeDecodeError`。遇到这种情况不要改 Skill 内容，改用当前 PowerShell 设置 `PYTHONUTF8=1` 后重新运行校验。

不要对 `agents/openai.yaml` 使用会把行首空格改成 Tab 的代码缩进归一脚本；YAML 缩进应保留空格。只需要修 CRLF 时，用显式 UTF-8 bytes 和 CRLF 写回，不做缩进转换。
