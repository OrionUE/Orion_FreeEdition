# Unreal 贴图管理与优化手册

## 目标

这份文档用于处理 Unreal Engine 贴图过大、打包后体积大、运行时卡顿、Texture Streaming Pool 超预算、贴图模糊、虚拟纹理池压力、以及贴图导入/批量整理问题。

先判断问题属于哪一类：

| 症状 | 优先方向 | 会不会直接减少包体积 |
| --- | --- | --- |
| 打包体积过大 | 移除未使用引用、降低 source/cook 分辨率、改 `MaxTextureSize`、`LODGroup`、`LODBias`、压缩格式、排除不需要 cook 的内容 | 会 |
| 运行时卡顿或 Texture Streaming Pool 超预算 | `stat streaming`、`DumpTextureStreamingStats`、Streaming Pool、贴图流送数据、过多非流送贴图、VT pool | 不一定 |
| 贴图糊 | `r.Streaming.MipBias`、`r.Streaming.MaxEffectiveScreenSize`、`LODGroup`、`LODBias`、缺失 streaming build data、pool 超预算 | 不一定 |
| 超大地形/UDIM/大面积材质 | Streaming Virtual Texture 或 Runtime Virtual Texture | 通常主要减运行时显存和 IO 峰值，不要默认当作包体积优化 |
| UI 图标/字体/数据贴图异常 | `TEXTUREGROUP_UI`、NoMipmaps、sRGB、压缩/alpha 设置 | 视设置而定 |

## 官方文档入口

- [Texture Streaming](https://dev.epicgames.com/documentation/en-us/unreal-engine/texture-streaming-in-unreal-engine)：贴图流送系统、mip 选择和内存预算。
- [Texture Streaming Configuration](https://dev.epicgames.com/documentation/en-us/unreal-engine/texture-streaming-configuration-in-unreal-engine)：`r.Streaming.*` 配置。
- [Building Texture Streaming Data](https://dev.epicgames.com/documentation/en-us/unreal-engine/building-texture-streaming-data-in-unreal-engine)：构建材质/组件流送数据。
- [Streaming Virtual Texturing](https://dev.epicgames.com/documentation/en-us/unreal-engine/streaming-virtual-texturing-in-unreal-engine)：SVT 用于超大贴图、UDIM 和 tile/page 流送。
- [Runtime Virtual Texturing](https://dev.epicgames.com/documentation/en-us/unreal-engine/runtime-virtual-texturing-in-unreal-engine)：RVT 用于地形、贴花、混合材质和运行时缓存。
- [Texture Format Support and Settings](https://dev.epicgames.com/documentation/en-us/unreal-engine/texture-format-support-and-settings-in-unreal-engine)：平台贴图格式、LODGroup 与最大分辨率设置。

## UE 5.8 源码依据

写结论时只记录路径和结论，不复制引擎源码。

| 位置 | 结论 |
| --- | --- |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Classes/Engine/Texture.h` | `UTexture` 暴露 `MaxTextureSize`、`LODBias`、`CompressionSettings`、`LODGroup`、`MipGenSettings`、`VirtualTextureStreaming`、`Availability` 等核心贴图属性。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Private/TextureDerivedData.cpp` | cook/序列化时会基于目标平台 `TextureLODSettings` 计算 `FirstMipToSerialize`，`LODBias`/`MaxTextureSize` 会改变最终写入的 mip 数。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Classes/Engine/TextureLODSettings.h` | `FTextureLODGroup` 支持 `MinLODSize`、`MaxLODSize`、`LODBias`、`NumStreamedMips`、`OptionalLODBias`、`MaxLODSize_*`、`MaxLODSize_VT`、VT tile bias 等批量策略。 |
| `<EngineRoot>/Engine/Config/BaseDeviceProfiles.ini` | 默认 `TextureLODGroups` 在 Device Profile 层定义，项目/平台可覆盖。 |
| `<EngineRoot>/Engine/Config/BaseScalability.ini` | `TextureQuality@0..Cine` 默认配置 `r.Streaming.MipBias`、`r.Streaming.PoolSize`、`r.Streaming.MaxEffectiveScreenSize`、`r.VT.MaxAnisotropy`。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Private/Streaming/TextureStreamingHelpers.cpp` | UE 5.8 注册 `r.TextureStreaming`、`r.Streaming.PoolSize`、`r.Streaming.PoolSizeForVirtualTextures`、`r.Streaming.MipBias`、`r.Streaming.UsePerTextureBias` 等流送 CVar。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Classes/Engine/RendererSettings.h` | `bTextureStreaming` 映射 `r.TextureStreaming`，虚拟纹理支持映射 `r.VirtualTextures`、`r.VT.TileSize`、`r.VT.TileBorderSize`、`r.VT.EnableAutoImport` 等。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Classes/VT/VirtualTexturePoolConfig.h` | VT 物理池通过 `UVirtualTexturePoolConfig` 配置，编辑器 auto grow 与 cooked build 的 `r.VT.PoolAutoGrow` 要分开看。 |
| `<EngineRoot>/Engine/Source/Editor/UnrealEd/Private/EditorBuildUtils.cpp` | 编辑器构建 texture streaming data，并生成 Material Texture Scale、Mesh UV Density、Required Texture Resolution 等 view mode 需要的数据。 |
| `<EngineRoot>/Engine/Source/Runtime/Engine/Private/UnrealEngine.cpp` | `listtextures` 会输出贴图内存/磁盘统计和 TextureGroup 汇总。 |

## 审计顺序

1. 在 Content Browser 用 `Texture2D`、`TextureCube`、`VirtualTexture` 过滤，按磁盘大小、分辨率、LODGroup、Compression、Never Stream/Availability 分组。
2. 对最大资源打开 Size Map 和 Reference Viewer，先确认是否真的会被当前包引用。
3. 用 Asset Audit 或统计窗口找 top offenders，不要对全项目盲目降一档。
4. 在编辑器或 Development 包里运行：

```text
stat streaming
stat texturegroup
listtextures
DumpTextureStreamingStats
TextureGroups
memreport -full
```

5. 如果问题是打包体积，必须用同一打包配置对比 cooked/staged 输出，不要用 Content 目录 `.uasset` 大小推断最终包体积。
6. 如果问题是卡顿，记录 `Texture pool over budget`、streaming requested/resident mips、非流送贴图、VT pool 和 GPU memory。

## 能减包体积的做法

### 单张贴图

- `Max Texture Size`：优先用于明显过大的贴图，例如远景道具、低频材质、UI 背景图、扫描资产。设置后必须保存贴图并重新 cook。
- `LOD Bias`：提高 bias 会丢弃更高分辨率 mip。适合保留源文件但降低 cooked 结果。
- `Mip Gen Settings`：世界/角色/武器默认保留 mip；UI、LUT、数据贴图通常不需要普通 mip。不要为了减包体积把所有贴图 NoMipmaps，否则 3D 物体会闪烁、缓存差且远处更糟。
- `Compression Settings`：
	- BaseColor 用 Default 或 BC7，按质量/体积取舍。
	- Normal 用 Normalmap/BC5。
	- ORM/Mask 用 Masks，关闭 sRGB。
	- 单通道 mask/height/alpha 优先用 Alpha/BC4 或灰度专用设置，避免无意义 RGBA。
	- HDR 只给真正需要高动态范围的贴图，普通颜色不要用 HDR/Float。
- `Compress Without Alpha`：确认 alpha 没被材质或 UI 使用时再开，可让 BC3 回到更小格式。
- `sRGB`：颜色贴图打开；法线、ORM、Roughness、Metallic、AO、mask、height 关闭。错误 sRGB 不一定增包，但会导致材质错误和重复返工。
- `Power of Two`：3D 流送贴图尽量用 2 的幂并有 mip。非 2 的幂常见于 UI 或特殊数据图。

### 批量策略

- `TextureLODGroups`：在 Device Profile 或平台配置里按 World、Character、Weapon、UI、Effects 等组设置 `MaxLODSize`、`LODBias`、`NumStreamedMips`。
- 平台差异：PC/主机/移动不要共用同一套最大分辨率。移动包先从 Device Profile 的 LODGroup 降分辨率，不要只调 runtime pool。
- `TextureQuality`：`DefaultScalability.ini` 的 `TextureQuality@0..Cine` 适合运行时画质档位。它主要影响 runtime mip 需求，不等同于 cook 后包体积减少。
- Optional mips / chunk：对高档材质可以考虑 optional mips 或分 chunk，但这属于分发策略，不是资产本身变小。

### 内容引用

- 用 Reference Viewer 找出最大贴图为什么被 cook。常见原因是测试地图、示例资产、开发目录、未用材质实例、蓝图默认引用、DataAsset 或 PrimaryAsset 规则。
- 只想减少正式包时，先修 packaging/AssetManager/cook map 引用，不要先压缩所有美术源。
- 删除或移动资产前使用资产管理 Skill，避免断引用和 redirector 污染。

## 只能缓解运行时卡顿的做法

- `r.Streaming.PoolSize`：扩大贴图流送池，解决 over budget 或频繁换 mip，但不会减少包体积。
- `r.Streaming.MaxNumTexturesToStreamPerFrame` / `r.Streaming.AmortizeCPUToGPUCopy`：平滑上传峰值，可能让高清 mip 更晚出现。
- `r.Streaming.MipBias`：降低 runtime mip 需求，可能明显变糊。它是画质档位工具，不是默认包体积优化工具。
- `r.Streaming.MaxEffectiveScreenSize`：限制流送按更小屏幕估算，能降显存压力，但非常容易让贴图糊。若 pool 未超预算但画面糊，优先检查它和 `r.Streaming.MipBias`。
- `Never Stream` / UI 组：会让贴图常驻。UI 可以合理使用；世界/角色/武器贴图滥用会造成启动和显存压力。

## Streaming Virtual Texture 与 Runtime Virtual Texture

### Streaming Virtual Texture

适合：

- UDIM、超大地形/建筑扫描、大面积唯一纹理。
- 希望只加载可见 tile，减少 runtime peak memory 和 IO 峰值。
- 贴图大到普通 Texture2D 频繁爆 pool 或超过平台限制。

不适合：

- 小贴图、UI 图标、角色/武器上少量常见 2K/4K 贴图。
- 以为开启 VT 就一定减少打包体积。
- 没有验证 VT pool、page fault、tile upload 的场景。

验证：

```text
stat virtualtexture
r.VT.DumpPoolUsage
r.VT.PoolAutoGrow 0
```

在 cooked build 中不要依赖 editor-only auto grow；按平台配置物理池。

### Runtime Virtual Texture

适合地形材质缓存、贴花/地形混合、复杂 landscape layer 结果复用。它能减少材质采样复杂度和某些 runtime 成本，但不是替代所有普通贴图的通用压缩方案。

## 推荐决策表

| 贴图类型 | 常见设置 | 优化方向 |
| --- | --- | --- |
| BaseColor | sRGB on, Default/BC7, mip on | 先降 MaxTextureSize；近景英雄资产再考虑 BC7。 |
| Normal | sRGB off, Normalmap/BC5, mip on | 不要用 Default；远景 normal 可更低分辨率。 |
| ORM/Masks | sRGB off, Masks, channel packing | 合并 AO/Roughness/Metallic，减少三张单通道图。 |
| Alpha/Opacity | sRGB off, Alpha/BC4 或带 alpha 的颜色图 | 没用 alpha 时开启 Compress Without Alpha。 |
| UI | UI group, 通常 NoMipmaps, 视用途压缩 | 分辨率按实际显示像素定；不要把 4K 全屏图当按钮图。 |
| LUT/Data | NoMipmaps, 关闭 sRGB, 数据格式 | 不走普通颜色压缩；避免被错误 LODGroup 处理。 |
| Landscape/UDIM | SVT/RVT 视场景 | 重点测 VT pool、tile fault、包体积变化。 |

## 实操流程

1. 先列 top 20 大贴图和 top 20 runtime resident 贴图。
2. 给每张贴图标注用途：hero first-person、third-person character、weapon closeup、environment trim、prop、UI、mask、data、debug/test。
3. 对 debug/test/unused 先修引用和 cook 规则。
4. 对 environment/prop 先尝试 `MaxTextureSize=2048` 或 1024。
5. 对 first-person weapon/hand/character 只做局部降级，保留关键近景材质。
6. 对 mask/ORM 做 channel packing 和 sRGB/Compression 修正。
7. 对超大 UDIM/landscape 再评估 SVT/RVT。
8. 保存资产，Fix Up Redirectors，Build Texture Streaming Data。
9. 清理 DDC 不是优化结果，只用于排除缓存影响；最终必须 recook/package 对比。
10. 用固定地图、固定视角、固定画质档位记录包体积、VRAM、pool over budget、FPS hitch 和画质截图。

## 半分辨率批量处理脚本

脚本位置：`scripts/`。这些脚本通过 UE 5.8 MCP `ProgrammaticToolset.execute_tool_script` 调官方 `AssetTools`、`TextureTools`、`ObjectTools`；默认都是 dry-run，只有带 `-Apply` 的资产级脚本才会设置属性并保存 `.uasset`。脚本内部不要写项目特定 Content 路径；调用时必须显式传 `-Folders`。

兼容注意：当前项目的 `AssetTools.find_assets` schema 要求传 `name`；脚本使用 `name: ""` 表示列出目录下全部资产，不要用 `*`。从 `powershell -File` 调用时，`-Folders` 既支持多个参数，也支持逗号分隔字符串，脚本会统一拆分和去空白。

UE 5.8 MCP 注意：`TextureTools.get_size`、`ObjectTools.list_properties`、`ObjectTools.set_property` 等对象类工具要传 UObject 引用对象，例如 `{ "refPath": "/Game/Path/Asset.Asset" }`，不要直接传字符串路径。`ObjectTools.list_properties` 在当前版本直接返回属性字典，不一定包在 `properties` 字段里，脚本要兼容两种返回形态。

大批量注意：MCP HTTP 按资产逐个调用适合小批量审计和局部修复；上千张贴图时更适合用 `UnrealEditor-Cmd.exe -run=PythonScript -Script=<Script>` 跑命令let。命令let脚本可以用 Asset Registry 的 `Dimensions`、`MaxTextureSize`、`LODGroup` 标签先筛选，再只加载需要修改的 `Texture2D`。`ProgrammaticToolset.execute_tool_script` 不能直接 `import unreal`，需要访问 Unreal Python API 时不要走 ProgrammaticToolset，改用 PythonScript 命令let。

配置 `TextureLODGroups` 前先收集当前项目实际使用的组，不要直接复制其他项目的组列表。使用只读命令：

```powershell
& .agents\skills\unreal-texture-management\scripts\collect-texture-groups.ps1
```

默认扫描 `/Game` 加项目 `Plugins/**/*.uplugin` 中 `CanContainContent=true` 的项目插件内容根，输出 `Saved/OrionUE/TextureManagement/texture-groups-report.json` 和 `.csv`。如只查某些虚拟内容根，传 `-Roots /Game,/SomePluginRoot`；如确实要把所有非 Engine 挂载内容也统计进去，传 `-AllMountedNonEngine`。脚本不会保存资产或修改配置。

注意：`-Roots` 会覆盖同一个报告文件。若为了快速验证只跑了 `-Roots /Game`，而配置注释或后续决策要引用全项目口径报告，必须再不带 `-Roots` 跑一次默认扫描。

如需要同时看“引擎有哪些 TextureGroup”和“项目配置当前写了哪些组”，再运行只读汇总：

```powershell
& .agents\skills\unreal-texture-management\scripts\collect-texture-group-sources.ps1
```

该脚本从 UE 源码 `TextureDefines.h` 读取枚举组，从引擎 `BaseDeviceProfiles.ini` 读取引擎默认配置组，从 `Saved/OrionUE/TextureManagement/texture-groups-report.json` 读取项目资产实际组，从 `Config/DefaultDeviceProfiles.ini` 读取项目当前配置组，并输出 JSON/CSV/Markdown 到 `Saved/OrionUE/TextureManagement/`。它不会启动编辑器，也不会修改资产或配置。

实现注意：Asset Registry 的 `LODGroup` 标签名不只贴图使用，StaticMesh 也有 LODGroup。统计 TextureGroup 时必须先按贴图类过滤，再读取 `LODGroup`；不要只靠存在 `LODGroup` 标签判断它是贴图。

验证注意：本项目当前没有 `.agents/scripts/quick_validate.py`。交付或修改该脚本时，使用 `python -m py_compile`、PowerShell `PSParser`、`orion-code-style/scripts/check-code-style.ps1`、CRLF 检查和 `git diff --check` 验证；不要引用不存在的 `quick_validate.py`。

推荐顺序：

1. `mcp-audit-textures.ps1`：先只读列出大贴图、尺寸、LODGroup、`LODBias`、`MaxTextureSize`。
2. `mcp-cap-max-texture-size.ps1`：固定封顶，例如把 4K 或更大的贴图统一设为 `MaxTextureSize=2048`。适合“4K 以上降为 2K”。
3. `mcp-half-by-lod-bias.ps1`：最接近“宽高缩小一半”。`LODBias +1` 会让最高 mip 降一级，cook/runtime 选择大约半分辨率。适合大量同类环境/道具贴图。
4. `mcp-half-by-max-texture-size.ps1`：按每张贴图当前最大边写 `MaxTextureSize = 最大边 / 2`。适合只想给超大资源按比例设置上限，不想叠加现有 `LODBias` 的情况。
5. `mcp-set-texture-lod-group.ps1`：把资产归到一个 LODGroup，再用 DeviceProfile 或 `TextureLODGroups` 管理。它本身不保证半分辨率，是否减半取决于组配置。
6. `mcp-fix-compression-and-srgb.ps1`：修正常见 Normal/ORM/Mask/Color 压缩和 sRGB 错误。它不减半分辨率，但能修正错误格式带来的体积、显存和材质问题。
7. `mcp-enable-virtual-texture-streaming.ps1`：只给很大的扫描、地形、UDIM 或唯一贴图评估。它主要降低运行时 tile 流送压力，不应默认当作包体积减半方案。
8. `mcp-plan-lodgroup-config-no-uasset.ps1`：统计目录内 LODGroup 分布，给出不修改 `.uasset` 的配置级方案。
9. `mcp-plan-source-downscale-reimport.ps1`：列出源图降采样再重导入候选。该方法最彻底，但会修改源图和 `.uasset` bulk data，必须单独评审。

示例命令：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-texture-management\scripts\mcp-audit-textures.ps1 -Folders /Game/<FolderA>,/Game/<FolderB> -MinLongEdge 2048
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-texture-management\scripts\mcp-cap-max-texture-size.ps1 -Folders /Game/<FolderA>,/Game/<FolderB> -SourceThreshold 4096 -TargetMaxTextureSize 2048
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-texture-management\scripts\mcp-half-by-lod-bias.ps1 -Folders /Game/<FolderA>,/Game/<FolderB> -MinLongEdge 2048
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-texture-management\scripts\mcp-half-by-max-texture-size.ps1 -Folders /Game/<FolderA>,/Game/<FolderB> -MinLongEdge 2048
```

真正执行资产修改时才加 `-Apply`。执行前先确认编辑器已打开、MCP endpoint 可用、没有恢复/保存模态窗口。

## 不改 uasset 的边界

可以不改 `.uasset` 的做法：

- Device Profile 或平台配置里的 `TextureLODGroups`：配置级降低某个 TextureGroup 的 `LODBias` 或 `MaxLODSize`。这会影响同组所有贴图，不是按目录生效。
- `DefaultScalability.ini` 里的 `TextureQuality` / `r.Streaming.MipBias`：降低运行时 mip 需求，但通常不减少 cooked 包体积。
- 打包压缩、IoStore/Oodle、Pak 压缩：减少磁盘/下载体积，但不改变贴图分辨率、显存占用或流送压力的根因。
- 修 cook 引用规则：如果大贴图本来不该进入正式包，优先从地图、PrimaryAsset、AssetManager 或 Packaging 规则上排除引用。

桌面和移动平台的封顶都落在 `Config/DefaultDeviceProfiles.ini`，不要只改 Windows。当前项目按本项目扫描结果维护两套基准：`[Windows DeviceProfile]` 使用 2K 封顶；`[Mobile DeviceProfile]` 作为 iOS/Android 的共同父 profile 使用 1K 封顶。为了避免继承链里同一个 TextureGroup 出现重复项，这两个 section 都使用 `!TextureLODGroups=ClearArray` 后完整重建项目实际使用组，并额外保留 Lightmap、Shadowmap、Terrain、Bokeh、MobileFlattened、8BitData、16BitData 等引擎生成/特殊安全组。`TEXTUREGROUP_ColorLookupTable` 和 `TEXTUREGROUP_IESLightProfile` 保持 256 + NoMipmaps；数据组保持 NoMipmaps。这样不会修改贴图资产，只改变 cook/build 的最高 cooked mip。

不能做到的事：

- 只靠配置精确让 `/Game/某目录` 里的贴图减半，同时不影响其他同 LODGroup 贴图。UE 的内置 `TextureLODGroups` 是组级策略，不是目录级策略。
- 既改变单张贴图 `MaxTextureSize`、`LODBias`、`LODGroup`、压缩或 VT 属性，又让 Git 里的 `.uasset` 完全不变。这些都是资产序列化属性，保存后必然改变 `.uasset`。
- 用 `r.Streaming.PoolSize` 缩小包体积。Pool 只管运行时内存预算。

如果要“只影响某几个 Content 子目录且不改现有贴图 `.uasset`”，通常只能选择：接受同 LODGroup 全局影响；或先用一次资产级变更把这批贴图归入独立 LODGroup；或新增项目/编辑器/cook 级路径规则插件。第三种仍需要提交代码或配置，但不会重写每个贴图资产。

## 常见错误

### 只调大 PoolSize

现象：`Texture pool over budget` 消失或减少，但包体积没变。

原因：pool 是运行时内存预算，不改变 cooked texture bulk data。

修复：包体积问题回到 `MaxTextureSize`、`LODBias`、`TextureLODGroups`、压缩、引用/cook 规则。

### 贴图糊但 Pool 没超预算

优先查：

- `r.Streaming.MaxEffectiveScreenSize`
- `r.Streaming.MipBias`
- `r.MipMapLODBias`
- Texture asset `LODBias`
- Texture `LODGroup`
- Device Profile `TextureLODGroups`
- 是否缺少 Build Texture Streaming Data

### 用 NoMipmaps 处理世界贴图

现象：近处还行，远处闪烁、缓存压力变高，运行时更卡。

原因：3D 贴图需要 mip 链做采样和流送。

修复：恢复 mip，改用 `MaxTextureSize`、`LODBias` 或 LODGroup 限制最大 mip。

### UI 或 mask 被普通颜色设置处理

现象：UI 边缘糊、mask 值错、roughness/metallic 看起来不对。

修复：UI 走 UI group；mask/ORM 关闭 sRGB 并使用 Masks/单通道压缩。

### VT 开启后仍卡

优先查：

- `stat virtualtexture`
- `r.VT.DumpPoolUsage`
- VT pool 是否不足
- Tile size/border 是否过大
- 材质采样数量是否过高
- cooked build 是否没有 editor auto grow

## 修改配置时的落点

| 目的 | 推荐位置 |
| --- | --- |
| 全局启用 texture streaming / virtual textures | `Config/DefaultEngine.ini` 的 RendererSettings |
| 平台/设备最大贴图尺寸、LODGroup 策略 | Device Profile 或平台配置 |
| 画质档位的 runtime mip/pool/aniso | `Config/DefaultScalability.ini` 的 `TextureQuality@*` |
| 单张贴图最大尺寸/压缩/sRGB/LOD | 贴图资产本身 |
| 打包是否包含某些资产 | Packaging、AssetManager、PrimaryAsset、map cook 规则 |

修改配置前先读取 `../orion-project-config/SKILL.md`，修改渲染/画质配置时同时读取 `../orion-rendering-framework/SKILL.md`。

## 最小验证清单

- 编辑器：top offenders 已记录，改动前后属性截图或导出表已对比。
- 源码/配置：确认改的是资产、Device Profile、Scalability、RendererSettings 还是 packaging 规则。
- Streaming data：对受影响地图执行 Build Texture Streaming Data。
- Cook/package：使用同一目标平台重新 cook/package。
- 体积：记录 staged/pak/ucas 总体积和最大贴图所属包变化。
- 运行时：`stat streaming`、`stat texturegroup`、`listtextures`、`DumpTextureStreamingStats` 无异常回退。
- 画质：固定视角检查 first-person、UI、角色脸/手/武器、地形、远景、夜景/强光场景。
