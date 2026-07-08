# Unreal MetaSound 源码与 MCP 自动化研究

本文档记录 Unreal Engine MetaSound 的源码入口、Builder API、ProjectAcoustics 参数接口关系，以及通过 MCP 创建和操作 MetaSound 资产的项目内流程。

## 资料来源

- 官方 MetaSounds 总览：https://dev.epicgames.com/documentation/en-us/unreal-engine/metasounds-in-unreal-engine
- 官方 MetaSounds Reference Guide：https://dev.epicgames.com/documentation/en-us/unreal-engine/metasounds-reference-guide-in-unreal-engine
- 官方 MetaSound Builder API：https://dev.epicgames.com/documentation/en-us/unreal-engine/metasound-builder-api-in-unreal-engine
- 官方 MetaSound Function Nodes Reference：https://dev.epicgames.com/documentation/en-us/unreal-engine/metasound-function-nodes-reference-guide-in-unreal-engine
- 官方 Wave Player Node Usage Guide：https://dev.epicgames.com/documentation/en-us/unreal-engine/metasound-wave-player-node-usage-guide-in-unreal-engine
- Epic Developer Community C++ MetaSound Node 快速教程：https://forums.unrealengine.com/t/tutorial-creating-metasound-nodes-in-c-quickstart/559789
- 本地引擎源码：`<EngineRoot>/Engine/Plugins/Runtime/Metasound`
- 项目 MCP Toolset：`Plugins/MCP/OrionProjectToolsets`
- ProjectAcoustics 参数接口：`Plugins/Audio/ProjectAcoustics/Source/ProjectAcousticsNative`

## 核心结论

MetaSound 是 UE 的图式音频 DSP 系统。它不是 Blueprint K2 图，也不是普通 SoundCue。MetaSound Source 是可播放的 `USoundWaveProcedural` 派生资产；MetaSound Patch 是可被其他 MetaSound 图引用的复用子图。自动化创建和编辑 MetaSound 图时，正确入口是 MetaSound Builder API，而不是 Blueprint 图工具。

MCP 若要稳定操作 MetaSound，需要项目暴露一个 Editor-only Toolset，并在 Toolset 内调用：

- `UMetaSoundBuilderSubsystem`：创建 Source/Patch builder、添加节点、添加图输入输出、连接节点。
- `UMetaSoundEditorSubsystem`：把 builder 写入资产、打开已有资产继续构建、设置编辑器节点位置。

当前通用 `ProgrammaticToolset` 适合编排已有 Toolset，但如果执行环境没有 `unreal` 模块，就不能直接调用 `UMetaSoundBuilderSubsystem`。`BlueprintTools` 只能操作 Blueprint/K2 图，不能代替 MetaSound Builder。

## 插件与模块结构

MetaSound 插件入口：

`<EngineRoot>/Engine/Plugins/Runtime/Metasound/Metasound.uplugin`

关键模块：

- `MetasoundGraphCore`：底层图、operator、数据流核心。
- `MetasoundGenerator`：运行时 generator 与音频渲染相关逻辑。
- `MetasoundFrontend`：序列化文档模型、ClassName、节点、边、接口、版本迁移。
- `MetasoundStandardNodes`：标准 DSP 节点，如滤波、振荡器、延迟、混音器等。
- `MetasoundEngine`：UE SoundWave/Source/Patch 集成、Builder Subsystem、Wave Player、Output Format 接口。
- `MetasoundEditor`：编辑器资产创建、图编辑器同步、Builder 写入资产。

项目 Toolset 必须放在 Editor-only 模块内，因为 `UMetaSoundEditorSubsystem` 属于 `MetasoundEditor`，不能被运行时模块依赖。项目内 `OrionProjectToolsets` 插件是 `EditorOnly` 且模块类型为 `EditorNoCommandlet`，适合承载 MCP MetaSound 工具。

## 资产类型

### MetaSound Source

源码入口：

- `<EngineRoot>/Engine/Plugins/Runtime/Metasound/Source/MetasoundEngine/Public/MetasoundSource.h`

用途：

- 可直接作为 Sound 使用或挂到 Audio Component。
- 输出格式由接口决定，例如 Mono、Stereo、5.1、7.1。
- OneShot Source 需要正确连接 `On Finished`，否则音频生命周期可能不符合预期。

### MetaSound Patch

源码入口：

- `<EngineRoot>/Engine/Plugins/Runtime/Metasound/Source/MetasoundEngine/Public/Metasound.h`

用途：

- 作为可复用 DSP 子图，被其他 MetaSound 图引用。
- 不等同于可直接播放的声音资产。

## Builder API

主要头文件：

- `MetasoundBuilderSubsystem.h`
- `MetasoundBuilderBase.h`
- `MetasoundEditorSubsystem.h`
- `MetasoundDocumentInterface.h`
- `MetasoundFrontendDocument.h`
- `MetasoundFrontendLiteral.h`

创建新资产的典型流程：

1. 从 `UMetaSoundBuilderSubsystem` 创建 builder。
2. 用 builder 添加接口、输入、输出、节点、连接。
3. 调用 `UMetaSoundEditorSubsystem::BuildToAsset` 写入 `/Game/...` 包路径。
4. 保存资产。
5. 用 `DescribeAsset` 或读取 `FMetasoundFrontendDocument` 验证节点和边。

编辑已有资产的典型流程：

1. 加载资产并确认 UObject 实现 `IMetaSoundDocumentInterface`。
2. 调用 `UMetaSoundEditorSubsystem::FindOrBeginBuilding` 获取 builder。
3. 通过 builder 操作图。
4. 调用 `UMetaSoundBuilderBase::BuildAndOverwriteMetaSound` 覆盖原资产文档。
5. `MarkPackageDirty` 并保存。

常用 Builder 方法：

- `CreateSourceBuilder`
- `CreatePatchBuilder`
- `AddInterface`
- `AddGraphInputNode`
- `AddGraphOutputNode`
- `AddNodeByClassName`
- `SetNodeInputDefault`
- `ConnectNodes`
- `ConnectGraphInputToNode`
- `ConnectNodeToGraphOutput`
- `RemoveNode`
- `FindNodeInputByName`
- `FindNodeOutputByName`
- `BuildAndOverwriteMetaSound`

## ClassName 三元组

MetaSound 节点类名是 `FMetasoundFrontendClassName`：

- `Namespace`
- `Name`
- `Variant`

不要只凭编辑器显示名猜测节点。优先从源码或已存在资产中确认 ClassName。

常见例子：

| 用途 | Namespace | Name | Variant |
| --- | --- | --- | --- |
| Wave Player 单声道 | `UE` | `Wave Player` | `Mono` |
| Wave Player 立体声 | `UE` | `Wave Player` | `Stereo` |
| Wave Player 四声道 | `UE` | `Wave Player` | `Quad` |
| Wave Player 5.1 | `UE` | `Wave Player` | `5dot1` |
| Wave Player 7.1 | `UE` | `Wave Player` | `7dot1` |
| Sine 振荡器 | `UE` | `Sine` | `Audio` |
| Noise | `UE` | `Noise` | `Audio` |
| Bitcrusher | `UE` | `Bitcrusher` | `Audio` |
| Trigger Repeat | `UE` | `TriggerRepeat` | 空字符串 |

相关源码入口：

- Wave Player：`MetasoundEngine/Private/MetasoundWavePlayerNode.cpp`
- Engine node 命名：`MetasoundEngine/Public/MetasoundEngineNodesNames.h`
- Standard node 命名：`MetasoundStandardNodes/Public/MetasoundStandardNodesNames.h`
- Standard node 注册：`MetasoundStandardNodes/Private/*.cpp`

Wave Player 常见连接名：

- 输入：`Play`、`Stop`、`Wave Asset`、`Start Time`、`Loop`、`Pitch Shift`
- 输出：`On Play`、`On Finished`、`Out Mono`、`Out Left`、`Out Right`

具体输入输出会随 Variant 和引擎版本变化，连接前应优先用 `DescribeAsset` 或源码确认。

## MetaSound 文档模型

MetaSound 资产内部通过 `FMetasoundFrontendDocument` 序列化。

重要字段：

- `Interfaces`：资产实现的接口集合。
- `RootGraph`：根图类。
- `RootGraph.GetConstDefaultGraph().Nodes`：默认图节点。
- `RootGraph.GetConstDefaultGraph().Edges`：连接边。
- `Dependencies`：节点引用的外部类或原生类依赖。

MCP `DescribeAsset` 读回时应至少输出：

- 资产路径。
- Root ClassName。
- Interfaces。
- Nodes：NodeId、NodeName、ClassName、Inputs、Outputs。
- EdgeCount。

## ProjectAcoustics 与 MetaSound

ProjectAcoustics 可以通过 UE Audio Parameter Interface 向实现了 `ProjectAcoustics` 接口的声音发送声学参数。它不是 MetaSound 的替代品，也不会自动生成 MetaSound DSP 图。

接口源码：

- `AcousticsParameterInterface.h`
- `AcousticsParameterInterface.cpp`

接口名：

`ProjectAcoustics`

输入参数：

- `Dry.Loudness`
- `Dry.PathLength`
- `Dry.ArrivalAzimuth`
- `Dry.ArrivalElevation`
- `Wet.Loudness`
- `Wet.AngularSpread`
- `Wet.DecayTime`
- `Wet.ArrivalAzimuth`
- `Wet.ArrivalElevation`

运行时发送路径：

ProjectAcoustics 的 SourceDataOverride 会检查当前 Sound 是否实现 `ProjectAcoustics` 参数接口；若实现，就通过 `ActiveSound->GetTransmitter()->SetParameters(...)` 推送参数。MetaSound 图内要显式使用这些参数作为输入，才能驱动滤波、增益、wet/dry、空间化前处理或调试输出。

推荐分工：

- ProjectAcoustics：负责预烘焙环境声学查询、遮挡/传输路径、湿声参数、动态 portaling 结果。
- MetaSound：负责每个声音资产内部的程序化播放、随机化、分层、调制、参数映射和 DSP。
- SteamAudio 或 UE 空间化插件：负责最终 HRTF/spatialization/reverb 插件链，具体配置由音频框架 Skill 决定。

如果 ProjectAcoustics 已经提供混响参数，MetaSound 的价值仍然包括：

- 根据 ProjectAcoustics 参数做 per-source 音色变化。
- 将 `Dry.*` 和 `Wet.*` 映射到图内滤波、增益、声源层切换。
- 做武器、脚步、环境音等程序化随机。
- 把声音资产做成可复用 Patch，减少 SoundCue/Blueprint 逻辑。
- 给调试或设计暴露更稳定的参数入口。

## MCP 操作流程

先确认 Unreal Editor 已开启 MCP 端点：

`http://127.0.0.1:18765/mcp`

协议版本：

`2025-11-25`

推荐顺序：

1. `initialize`
2. `notifications/initialized`
3. `tools/list`
4. 通过 top-level `call_tool` 调 `list_toolsets`
5. 查找 `OrionProjectToolsets.OrionMetaSoundToolset`
6. 调 `describe_toolset`
7. 调 MetaSound 工具函数
8. 用 `DescribeAsset` 验证结果

当前项目 Toolset 暴露的 MetaSound 函数：

- `DescribeAsset(MetaSoundPath)`
- `CreateSourceAsset(PackagePath, AssetName, OutputFormat, bIsOneShot, bAddProjectAcousticsInterface, bSave)`
- `CreatePatchAsset(PackagePath, AssetName, bSave)`
- `AddInterface(MetaSoundPath, InterfaceName, bSave)`
- `AddGraphInput(MetaSoundPath, InputName, DataType, LiteralType, LiteralValue, bIsConstructorInput, bSave)`
- `AddGraphOutput(MetaSoundPath, OutputName, DataType, LiteralType, LiteralValue, bIsConstructorOutput, bSave)`
- `AddNodeByClassName(MetaSoundPath, Namespace, Name, Variant, MajorVersion, LocationX, LocationY, bSave)`
- `SetNodeInputDefault(MetaSoundPath, NodeId, InputName, LiteralType, LiteralValue, bSave)`
- `ConnectNodes(MetaSoundPath, SourceNodeId, SourceOutputName, DestinationNodeId, DestinationInputName, bSave)`
- `ConnectGraphInputToNode(MetaSoundPath, GraphInputName, DestinationNodeId, DestinationInputName, bSave)`
- `ConnectNodeToGraphOutput(MetaSoundPath, SourceNodeId, SourceOutputName, GraphOutputName, bSave)`
- `RemoveNode(MetaSoundPath, NodeId, bRemoveUnusedDependencies, bSave)`

只读探测：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-metasound\scripts\Test-MetaSoundMcp.ps1
```

创建真实测试资产：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-metasound\scripts\Test-MetaSoundMcp.ps1 -CreateProbeAsset
```

## 常见失败与处理

### MCP 连得上，但没有 MetaSound Toolset

说明当前 Editor 进程还没有加载项目新增的 Toolset。处理：

1. 编译 `OrionProjectToolsets`。
2. 重启 Unreal Editor。
3. 重新初始化 MCP session。
4. 再跑 `Test-MetaSoundMcp.ps1`。

### ProgrammaticToolset 不能直接创建 MetaSound

如果 `get_execution_environment` 显示只能导入少量标准库，且没有 `unreal` 模块，就不能在 ProgrammaticToolset 里直接调用 UE Python API。解决方式是通过项目 C++ Toolset 暴露语义函数，再让 ProgrammaticToolset 编排这些函数。

### AddNodeByClassName 失败

优先检查：

- `Namespace/Name/Variant` 是否匹配源码里的 `FMetasoundFrontendClassName`。
- MajorVersion 是否正确，默认通常为 `1`。
- 节点所属模块是否加载，例如 Wave Player 依赖 `MetasoundEngine`，标准节点依赖 `MetasoundStandardNodes`。
- 该节点是否只在特定构建或插件启用状态下注册。

### ConnectNodes 失败

优先检查：

- Source/Destination NodeId 是否来自同一个资产的当前图。
- 输出名和输入名是否完全匹配。
- 数据类型是否兼容，例如 `Audio` 不能直接连到 `Float`。
- 构造期输入和运行期输入的访问类型是否兼容。

### ProjectAcoustics 参数没有进入 MetaSound

优先检查：

- Sound 是否实现 `ProjectAcoustics` 参数接口。
- SourceDataOverride 是否启用并运行。
- MetaSound 图内是否真的使用了对应输入。
- 当前声音是否走的是 MetaSound Source，而不是未实现该接口的普通 SoundWave/SoundCue。

## 修改代码时的验证要求

改动 MetaSound MCP C++ 或脚本后至少运行：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-code-style\scripts\check-code-style.ps1 -Path <touched-code-files>
```

编译 Editor 目标后，重启 Editor 才能让 MCP 看到新注册的 Toolset。

修改 Skill 后运行：

```powershell
python <SkillCreatorRoot>\scripts\quick_validate.py .agents\skills\unreal-metasound
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-framework-skill-authoring\scripts\check-skill-portability.ps1 -Path .agents\skills\unreal-metasound -CheckCRLF -RequireRouting
```
