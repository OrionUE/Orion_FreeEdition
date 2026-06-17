# 当前项目渲染命令表使用指南

这个文件是 `ue5-render-commands` 实验表的入口索引，用来回答“哪个表是干什么的、哪些命令属于哪个风险分类、哪些已经实际写入项目 Default 配置”。

## 结论入口

- 当前已经实际写入项目 Default 配置：`current_project_applied_config.csv`，共 59 条。
- 手动测试后明确排除：`r.AmbientOcclusionLevels`、`r.Lumen.TranslucencyVolume.Enable`。
- 低风险第一批历史记录：`current_project_applied_low_risk_config.csv`，只表示早先自动应用的 5 条。
- 可以追溯的完整草案：`current_project_config_draft.csv`，核心分类字段是 `application_bucket`。
- 被删除的 Default 旧命令：`removed_default_render_commands.csv`。
- 原始测量结果：`experiment_results.csv`，包含失败、无效、旧协议、warmup 偏差和 repeated-pair 结果，不要直接按这个表应用配置。

## 当前分类计数

| 分类字段 application_bucket | 草案数量 | 已应用数量 | 含义 |
| --- | ---: | ---: | --- |
| `low_risk_default_candidate` | 5 | 5 | 低风险默认候选。已纳入当前 Default 应用清单。 |
| `low_medium_risk_candidate` | 8 | 8 | 低/中风险候选。用户手动测试后已纳入当前 Default 应用清单。 |
| `medium_risk_candidate` | 31 | 31 | 中风险候选。用户手动测试后已纳入当前 Default 应用清单；仍建议后续画面对比。 |
| `quality_tradeoff_or_lower_tier_only` | 9 | 9 | 画质取舍或低档专用。用户手动测试后已纳入当前 Default 应用清单。 |
| `visual_review_candidate` | 8 | 6 | 需要视觉复核候选。用户手动测试后已纳入当前 Default 应用清单。 |

## 已实际写入 Default 的命令

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| medium_risk_candidate | `r.TemporalAA.Quality` | `1` | Anti Aliasing / TSR | 7.33% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers temporal AA quality. Can reduce anti-aliasing cost but may increase shimmer, ghosting, or edge instability. |
| low_medium_risk_candidate | `r.TSR.History.R11G11B10` | `1` | Anti Aliasing / TSR | 6.04% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Low/Medium: possible subtle TSR precision/banding/stability differences |
| medium_risk_candidate | `r.TSR.History.UpdateQuality` | `1` | Anti Aliasing / TSR | 5.87% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers TSR history update shader quality. May reduce cost but can reduce reconstruction stability on motion/highlights. |
| medium_risk_candidate | `r.TSR.RejectionAntiAliasingQuality` | `1` | Anti Aliasing / TSR | 10.40% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers TSR rejection anti-aliasing quality. Can reduce reconstruction cost but may increase jagged rejected-history areas and shimmer. |
| medium_risk_candidate | `r.TSR.ReprojectionField` | `0` | Anti Aliasing / TSR | 5.46% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: disables TSR reprojection field. Can save cost but may reduce upscale vector/reprojection quality around disocclusion and thin geometry. |
| low_medium_risk_candidate | `r.TSR.Resurrection` | `0` | Anti Aliasing / TSR | 8.15% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Low/Medium: disables TSR resurrection of old discarded details. Can improve predictability and cost but may reduce static fine detail recovery. |
| low_risk_default_candidate | `D3D12.UseUpdateTexture3DComputeShader` | `1` | D3D12 / Materials | 4.48% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: switches 3D texture updates to compute shader path. Expected visual output equivalent; performance depends on update workload and GPU scheduling. |
| medium_risk_candidate | `r.AmbientOcclusionMaxQuality` | `50` | GI / Ambient Occlusion | 3.38% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: clamps screen-space ambient occlusion quality and can reduce crevice/contact darkening detail, especially if SSAO contributes alongside Lumen. |
| medium_risk_candidate | `r.AmbientOcclusionRadiusScale` | `0.5` | GI / Ambient Occlusion | 1.13% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: reduces ambient occlusion radius scale. Can reduce AO cost/extent but may weaken broad contact shading. |
| visual_review_candidate | `foliage.CullDistanceScale` | `0.5` | Landscape / Foliage | 3.03% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium/High: reduces foliage cull distance scale where foliage types opt in. Can improve cost but may remove distant foliage. |
| quality_tradeoff_or_lower_tier_only | `foliage.DensityScale` | `0.8` | Landscape / Foliage | 5.89% | Config/DefaultScalability.ini / FoliageQuality@0;FoliageQuality@1;FoliageQuality@2;FoliageQuality@3;FoliageQuality@Cine | High: visible vegetation density loss |
| medium_risk_candidate | `foliage.LODDistanceScale` | `0.5` | Landscape / Foliage | 2.93% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: changes foliage LOD distance scaling. Can reduce foliage vertex cost but may increase visible LOD transitions. |
| low_medium_risk_candidate | `foliage.MaxOcclusionQueriesPerComponent` | `8` | Landscape / Foliage | 1.91% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: reduces foliage occlusion query granularity. Can reduce query overhead but may reduce culling precision. |
| medium_risk_candidate | `foliage.MinimumScreenSize` | `0.0000075` | Landscape / Foliage | 2.33% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: raises foliage screen-size culling threshold. Can improve distant foliage cost but may remove small/far instances. |
| visual_review_candidate | `r.Lumen.ScreenProbeGather.NumAdaptiveProbes` | `4` | Lumen / GI | 9.58% | Config/DefaultScalability.ini / GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium/High: reduces adaptive Lumen probes. Can improve GI cost but may lose indirect lighting detail in difficult areas. |
| medium_risk_candidate | `r.Lumen.ScreenProbeGather.ShortRangeAO.DownsampleFactor` | `2` | Lumen / GI | 8.81% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium: downsamples Lumen short-range AO. Can improve GI/AO cost but may soften contact occlusion and near-field grounding. |
| visual_review_candidate | `r.LumenScene.DirectLighting.MaxLightsPerTile` | `4` | Lumen / GI | 8.17% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium/High: limits Lumen surface-cache direct lights per tile. Can improve cost in many-light scenes but may drop lower-priority direct-light contribution. |
| quality_tradeoff_or_lower_tier_only | `r.LumenScene.SurfaceCache.AtlasSize` | `2048` | Lumen / GI | 10.16% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: reduces Lumen surface cache atlas size. Can save memory/GPU work but risks lower indirect lighting detail and cache quality. |
| quality_tradeoff_or_lower_tier_only | `r.LumenScene.SurfaceCache.CardTexelDensityScale` | `50` | Lumen / GI | 9.06% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: reduces Lumen card texel density. Can save surface cache cost/memory but may visibly lower indirect lighting detail. |
| quality_tradeoff_or_lower_tier_only | `r.Lumen.HardwareRayTracing.HitLighting.Allowed` | `0` | Lumen / Ray Tracing | 4.82% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: disables Lumen hardware ray tracing hit lighting path where used; can reduce lighting/reflection accuracy and should be reviewed in reflective/interior scenes. |
| medium_risk_candidate | `r.Lumen.Reflections.BilateralFilter.KernelRadius` | `4` | Lumen / Reflections | 1.30% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers/sets screen-space reflection spatial filter kernel radius. Can reduce filtering cost but may change reflection noise/detail. |
| medium_risk_candidate | `r.Lumen.Reflections.DenoiserTonemapRange` | `5` | Lumen / Reflections | 0.74% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers reflection denoiser tonemap range. Can reduce firefly/high-intensity handling cost but may affect bright reflections. |
| medium_risk_candidate | `r.Lumen.Reflections.DownsampleCheckerboard` | `1` | Lumen / Reflections | 3.17% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: uses checkerboard downsampling for Lumen reflections when downsampled. Can improve cost but may affect reflection detail/stability. |
| medium_risk_candidate | `r.Lumen.Reflections.ScreenSpaceReconstruction.KernelRadius` | `4` | Lumen / Reflections | 1.74% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers screen-space reconstruction kernel radius for Lumen reflections. Can reduce cost but may affect reflection filtering. |
| low_risk_default_candidate | `r.Lumen.AsyncCompute` | `1` | Lumen / Scheduling | 1.03% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: enables Lumen async compute scheduling where supported. Visual output should be equivalent, but async contention can hurt. |
| quality_tradeoff_or_lower_tier_only | `r.DetailMode` | `1` | Materials | 7.37% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | High: hides actors/components assigned to higher detail modes. Can boost performance if the map uses detail-mode gating, but can remove scene dressing. |
| quality_tradeoff_or_lower_tier_only | `r.MaterialQualityLevel` | `0` | Materials | 8.02% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | High: switches materials using quality switches to low quality. Can improve shader cost only if project materials use quality branches, but may visibly remove expensive material features. |
| low_risk_default_candidate | `r.Nanite.FastVisBufferClear` | `1` | Nanite | 2.20% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: visual output should be equivalent. |
| medium_risk_candidate | `r.Nanite.RasterSort` | `0` | Nanite | 5.44% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: disables sorting of Nanite rasterizer dispatches/draws. Can reduce sort overhead but may hurt rendering efficiency depending on scene. |
| medium_risk_candidate | `r.PathTracing.Denoiser.Prepass.RankedLuminanceVariance` | `1` | Path Tracing / Denoiser | 7.40% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: changes Path Tracing denoiser prepass luminance variance ranking. It can alter path-traced denoising/noise/detail balance; treat as offline/path-tracing visual review only. |
| medium_risk_candidate | `r.DepthOfFieldQuality` | `1` | Post Processing | 4.30% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: simpler DOF; may affect cinematics and focus blur |
| low_medium_risk_candidate | `r.LensFlareQuality` | `0` | Post Processing | 7.11% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Low/Medium: removes lens flare styling |
| medium_risk_candidate | `r.MotionBlurQuality` | `0` | Post Processing | 4.80% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: disables motion blur; improves clarity but removes cinematic blur |
| low_risk_default_candidate | `r.SceneColorFringeQuality` | `0` | Post Processing | 4.81% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Low: disables chromatic aberration; often improves clarity |
| medium_risk_candidate | `r.Tonemapper.Quality` | `2` | Post Processing | 7.27% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: can change final color/film/grain/vignette behavior |
| low_risk_default_candidate | `r.Bloom.AsyncCompute` | `1` | Post Processing / Bloom | 0.99% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: runs FFT bloom on async compute where active. Visual output should be equivalent, but async contention can hurt. |
| visual_review_candidate | `r.DOF.Gather.RingCount` | `2` | Post Processing / Depth of Field | 0.58% | Config/DefaultScalability.ini / PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium/High: reduces DOF gather kernel ring count from the typical high-quality value. May visibly simplify bokeh blur. |
| medium_risk_candidate | `r.DOF.Kernel.MaxForegroundRadius` | `0.0125` | Post Processing / Depth of Field | 3.36% | Config/DefaultScalability.ini / PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: halves maximum foreground blur radius. Can reduce DOF cost but changes foreground blur strength. |
| medium_risk_candidate | `r.Fog.SeparateComposition` | `0` | Post Processing / Fog | 6.63% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: forces fog separate composition off. Can reduce render target/upscale overhead but may alter height fog, volumetric fog, or local fog composition quality. |
| medium_risk_candidate | `r.SSS.SampleSet` | `1` | Post Processing / SSS | 0.73% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: reduces screen-space subsurface scattering sample set. Can reduce SSS cost but may add banding or lower quality on skin/subsurface materials. |
| medium_risk_candidate | `r.SSS.Scale` | `0.5` | Post Processing / SSS | 3.75% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: reduces screen-space subsurface scattering strength. Can reduce visible SSS contribution and may alter skin/subsurface material look. |
| medium_risk_candidate | `r.VolumetricFog.Filtering.Quality` | `0` | Post Processing / Volumetric Fog | 8.09% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: switches volumetric fog filtering to lower quality/trilinear path. Can reduce cost but may affect fog smoothness. |
| low_medium_risk_candidate | `r.RayTracing.Geometry.InstancedStaticMeshes.Culling` | `1` | Ray Tracing / Geometry | 1.46% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: ensures culling for instanced static meshes in ray tracing. If already enabled, should be neutral; if disabled, can improve RT traversal/build cost. |
| medium_risk_candidate | `r.Reflections.Denoiser.ReconstructionSamples` | `4` | Reflections | 3.62% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers reflection denoiser reconstruction sample count from default 8 to 4. May improve cost but can reduce denoising stability. |
| visual_review_candidate | `r.SSR.Quality` | `1` | Reflections | 5.19% | Config/DefaultScalability.ini / ReflectionQuality@0;ReflectionQuality@1;ReflectionQuality@2;ReflectionQuality@3;ReflectionQuality@Cine | Medium/High: lowers screen-space reflection quality; may no-op or be less visible if Lumen reflections dominate, but reflective materials need review. |
| visual_review_candidate | `r.ContactShadows` | `0` | Shadows | 3.36% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3 | Medium/High: reduces small grounding/contact shadow detail |
| quality_tradeoff_or_lower_tier_only | `r.Shadow.CSM.MaxCascades` | `1` | Shadows | 2.85% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | High: reduces directional-light CSM cascade count. Can improve shadow cost but may visibly reduce shadow coverage and transition quality. |
| medium_risk_candidate | `r.Shadow.DistanceScale` | `0.8` | Shadows | 5.39% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: reduces dynamic shadow distance, improving cost when distant shadows are present but can visibly remove far shadows. |
| medium_risk_candidate | `r.Shadow.MaxCSMResolution` | `2048` | Shadows | 1.83% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: caps CSM shadow map resolution. Can reduce shadow cost but may soften directional-light shadows. |
| medium_risk_candidate | `r.Shadow.MaxResolution` | `2048` | Shadows | 1.32% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: caps shadow map resolution; can soften high-detail shadows and reduce aliasing stability depending on light setup. |
| medium_risk_candidate | `r.Shadow.PreShadowResolutionFactor` | `0.5` | Shadows | 3.60% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: lowers preshadow resolution. Can improve shadow cost but may reduce quality on preshadowed objects. |
| quality_tradeoff_or_lower_tier_only | `r.Shadow.Preshadows` | `0` | Shadows | 0.57% | Config/DefaultEngine.ini / [ConsoleVariables] | High: disables preshadows, including static world casting onto characters. Can improve cost but may visibly remove character/object shadowing detail. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Cache.AllocateViaLRU` | `1` | Shadows / Virtual Shadow Map | 4.63% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: changes VSM physical page allocation policy to prefer recently used cached pages. May improve cache behavior but can cause local instability if workload differs. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Cache.MaxLightAgeSinceLastRequest` | `5` | Shadows / Virtual Shadow Map | 2.49% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: reduces how long unused local-light VSM pages stay cached. May reduce cache memory/maintenance but can increase misses if lights reappear. |
| medium_risk_candidate | `r.Shadow.Virtual.Clipmap.FirstCoarseLevel` | `15` | Shadows / Virtual Shadow Map | 1.68% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: starts VSM coarse page marking farther out. Can reduce near-camera page pressure but may affect systems relying on coarse shadow pages. |
| medium_risk_candidate | `r.Shadow.Virtual.Clipmap.LastCoarseLevel` | `9` | Shadows / Virtual Shadow Map | 1.29% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: shortens VSM coarse page marking range. Can reduce page counts but may affect far coarse shadow information. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Clipmap.UseConservativeCulling` | `0` | Shadows / Virtual Shadow Map | 2.16% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: disables conservative non-Nanite VSM culling if enabled. Can reduce submissions but risks missing conservative shadow coverage in edge cases. |
| medium_risk_candidate | `r.Shadow.Virtual.ResolutionLodBiasLocalMoving` | `1` | Shadows / Virtual Shadow Map | 0.68% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: halves moving local-light VSM resolution relative to default. Can reduce moving local shadow cost but may soften or alias moving-light shadows. |
| quality_tradeoff_or_lower_tier_only | `r.Streaming.MaxEffectiveScreenSize` | `1` | Texture Streaming | 0.88% | Config/DefaultScalability.ini / TextureQuality@0;TextureQuality@1;TextureQuality@2;TextureQuality@3;TextureQuality@Cine | High: clamps effective screen size for texture streaming. Can strongly reduce mip demand but may visibly blur textures. |

## 分类明细

### low_risk_default_candidate（已应用 5 条）

低风险默认候选。已纳入当前 Default 应用清单。

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| low_risk_default_candidate | `D3D12.UseUpdateTexture3DComputeShader` | `1` | D3D12 / Materials | 4.48% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: switches 3D texture updates to compute shader path. Expected visual output equivalent; performance depends on update workload and GPU scheduling. |
| low_risk_default_candidate | `r.Lumen.AsyncCompute` | `1` | Lumen / Scheduling | 1.03% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: enables Lumen async compute scheduling where supported. Visual output should be equivalent, but async contention can hurt. |
| low_risk_default_candidate | `r.Nanite.FastVisBufferClear` | `1` | Nanite | 2.20% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: visual output should be equivalent. |
| low_risk_default_candidate | `r.SceneColorFringeQuality` | `0` | Post Processing | 4.81% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Low: disables chromatic aberration; often improves clarity |
| low_risk_default_candidate | `r.Bloom.AsyncCompute` | `1` | Post Processing / Bloom | 0.99% | Config/DefaultEngine.ini / [ConsoleVariables] | Low: runs FFT bloom on async compute where active. Visual output should be equivalent, but async contention can hurt. |

### low_medium_risk_candidate（已应用 8 条）

低/中风险候选。用户手动测试后已纳入当前 Default 应用清单。

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| low_medium_risk_candidate | `r.TSR.History.R11G11B10` | `1` | Anti Aliasing / TSR | 6.04% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Low/Medium: possible subtle TSR precision/banding/stability differences |
| low_medium_risk_candidate | `r.TSR.Resurrection` | `0` | Anti Aliasing / TSR | 8.15% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Low/Medium: disables TSR resurrection of old discarded details. Can improve predictability and cost but may reduce static fine detail recovery. |
| low_medium_risk_candidate | `foliage.MaxOcclusionQueriesPerComponent` | `8` | Landscape / Foliage | 1.91% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: reduces foliage occlusion query granularity. Can reduce query overhead but may reduce culling precision. |
| low_medium_risk_candidate | `r.LensFlareQuality` | `0` | Post Processing | 7.11% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Low/Medium: removes lens flare styling |
| low_medium_risk_candidate | `r.RayTracing.Geometry.InstancedStaticMeshes.Culling` | `1` | Ray Tracing / Geometry | 1.46% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: ensures culling for instanced static meshes in ray tracing. If already enabled, should be neutral; if disabled, can improve RT traversal/build cost. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Cache.AllocateViaLRU` | `1` | Shadows / Virtual Shadow Map | 4.63% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: changes VSM physical page allocation policy to prefer recently used cached pages. May improve cache behavior but can cause local instability if workload differs. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Cache.MaxLightAgeSinceLastRequest` | `5` | Shadows / Virtual Shadow Map | 2.49% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: reduces how long unused local-light VSM pages stay cached. May reduce cache memory/maintenance but can increase misses if lights reappear. |
| low_medium_risk_candidate | `r.Shadow.Virtual.Clipmap.UseConservativeCulling` | `0` | Shadows / Virtual Shadow Map | 2.16% | Config/DefaultEngine.ini / [ConsoleVariables] | Low/Medium: disables conservative non-Nanite VSM culling if enabled. Can reduce submissions but risks missing conservative shadow coverage in edge cases. |

### medium_risk_candidate（已应用 31 条）

中风险候选。用户手动测试后已纳入当前 Default 应用清单；仍建议后续画面对比。

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| medium_risk_candidate | `r.TemporalAA.Quality` | `1` | Anti Aliasing / TSR | 7.33% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers temporal AA quality. Can reduce anti-aliasing cost but may increase shimmer, ghosting, or edge instability. |
| medium_risk_candidate | `r.TSR.History.UpdateQuality` | `1` | Anti Aliasing / TSR | 5.87% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers TSR history update shader quality. May reduce cost but can reduce reconstruction stability on motion/highlights. |
| medium_risk_candidate | `r.TSR.RejectionAntiAliasingQuality` | `1` | Anti Aliasing / TSR | 10.40% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: lowers TSR rejection anti-aliasing quality. Can reduce reconstruction cost but may increase jagged rejected-history areas and shimmer. |
| medium_risk_candidate | `r.TSR.ReprojectionField` | `0` | Anti Aliasing / TSR | 5.46% | Config/DefaultScalability.ini / AntiAliasingQuality@0;AntiAliasingQuality@1;AntiAliasingQuality@2;AntiAliasingQuality@3;AntiAliasingQuality@Cine | Medium: disables TSR reprojection field. Can save cost but may reduce upscale vector/reprojection quality around disocclusion and thin geometry. |
| medium_risk_candidate | `r.AmbientOcclusionMaxQuality` | `50` | GI / Ambient Occlusion | 3.38% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: clamps screen-space ambient occlusion quality and can reduce crevice/contact darkening detail, especially if SSAO contributes alongside Lumen. |
| medium_risk_candidate | `r.AmbientOcclusionRadiusScale` | `0.5` | GI / Ambient Occlusion | 1.13% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: reduces ambient occlusion radius scale. Can reduce AO cost/extent but may weaken broad contact shading. |
| medium_risk_candidate | `foliage.LODDistanceScale` | `0.5` | Landscape / Foliage | 2.93% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: changes foliage LOD distance scaling. Can reduce foliage vertex cost but may increase visible LOD transitions. |
| medium_risk_candidate | `foliage.MinimumScreenSize` | `0.0000075` | Landscape / Foliage | 2.33% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: raises foliage screen-size culling threshold. Can improve distant foliage cost but may remove small/far instances. |
| medium_risk_candidate | `r.Lumen.ScreenProbeGather.ShortRangeAO.DownsampleFactor` | `2` | Lumen / GI | 8.81% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium: downsamples Lumen short-range AO. Can improve GI/AO cost but may soften contact occlusion and near-field grounding. |
| medium_risk_candidate | `r.Lumen.Reflections.BilateralFilter.KernelRadius` | `4` | Lumen / Reflections | 1.30% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers/sets screen-space reflection spatial filter kernel radius. Can reduce filtering cost but may change reflection noise/detail. |
| medium_risk_candidate | `r.Lumen.Reflections.DenoiserTonemapRange` | `5` | Lumen / Reflections | 0.74% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers reflection denoiser tonemap range. Can reduce firefly/high-intensity handling cost but may affect bright reflections. |
| medium_risk_candidate | `r.Lumen.Reflections.DownsampleCheckerboard` | `1` | Lumen / Reflections | 3.17% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: uses checkerboard downsampling for Lumen reflections when downsampled. Can improve cost but may affect reflection detail/stability. |
| medium_risk_candidate | `r.Lumen.Reflections.ScreenSpaceReconstruction.KernelRadius` | `4` | Lumen / Reflections | 1.74% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers screen-space reconstruction kernel radius for Lumen reflections. Can reduce cost but may affect reflection filtering. |
| medium_risk_candidate | `r.Nanite.RasterSort` | `0` | Nanite | 5.44% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: disables sorting of Nanite rasterizer dispatches/draws. Can reduce sort overhead but may hurt rendering efficiency depending on scene. |
| medium_risk_candidate | `r.PathTracing.Denoiser.Prepass.RankedLuminanceVariance` | `1` | Path Tracing / Denoiser | 7.40% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: changes Path Tracing denoiser prepass luminance variance ranking. It can alter path-traced denoising/noise/detail balance; treat as offline/path-tracing visual review only. |
| medium_risk_candidate | `r.DepthOfFieldQuality` | `1` | Post Processing | 4.30% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: simpler DOF; may affect cinematics and focus blur |
| medium_risk_candidate | `r.MotionBlurQuality` | `0` | Post Processing | 4.80% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: disables motion blur; improves clarity but removes cinematic blur |
| medium_risk_candidate | `r.Tonemapper.Quality` | `2` | Post Processing | 7.27% | Config/DefaultScalability.ini / PostProcessQuality@0;PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: can change final color/film/grain/vignette behavior |
| medium_risk_candidate | `r.DOF.Kernel.MaxForegroundRadius` | `0.0125` | Post Processing / Depth of Field | 3.36% | Config/DefaultScalability.ini / PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium: halves maximum foreground blur radius. Can reduce DOF cost but changes foreground blur strength. |
| medium_risk_candidate | `r.Fog.SeparateComposition` | `0` | Post Processing / Fog | 6.63% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: forces fog separate composition off. Can reduce render target/upscale overhead but may alter height fog, volumetric fog, or local fog composition quality. |
| medium_risk_candidate | `r.SSS.SampleSet` | `1` | Post Processing / SSS | 0.73% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: reduces screen-space subsurface scattering sample set. Can reduce SSS cost but may add banding or lower quality on skin/subsurface materials. |
| medium_risk_candidate | `r.SSS.Scale` | `0.5` | Post Processing / SSS | 3.75% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | Medium: reduces screen-space subsurface scattering strength. Can reduce visible SSS contribution and may alter skin/subsurface material look. |
| medium_risk_candidate | `r.VolumetricFog.Filtering.Quality` | `0` | Post Processing / Volumetric Fog | 8.09% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium: switches volumetric fog filtering to lower quality/trilinear path. Can reduce cost but may affect fog smoothness. |
| medium_risk_candidate | `r.Reflections.Denoiser.ReconstructionSamples` | `4` | Reflections | 3.62% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: lowers reflection denoiser reconstruction sample count from default 8 to 4. May improve cost but can reduce denoising stability. |
| medium_risk_candidate | `r.Shadow.DistanceScale` | `0.8` | Shadows | 5.39% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: reduces dynamic shadow distance, improving cost when distant shadows are present but can visibly remove far shadows. |
| medium_risk_candidate | `r.Shadow.MaxCSMResolution` | `2048` | Shadows | 1.83% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: caps CSM shadow map resolution. Can reduce shadow cost but may soften directional-light shadows. |
| medium_risk_candidate | `r.Shadow.MaxResolution` | `2048` | Shadows | 1.32% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: caps shadow map resolution; can soften high-detail shadows and reduce aliasing stability depending on light setup. |
| medium_risk_candidate | `r.Shadow.PreShadowResolutionFactor` | `0.5` | Shadows | 3.60% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: lowers preshadow resolution. Can improve shadow cost but may reduce quality on preshadowed objects. |
| medium_risk_candidate | `r.Shadow.Virtual.Clipmap.FirstCoarseLevel` | `15` | Shadows / Virtual Shadow Map | 1.68% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: starts VSM coarse page marking farther out. Can reduce near-camera page pressure but may affect systems relying on coarse shadow pages. |
| medium_risk_candidate | `r.Shadow.Virtual.Clipmap.LastCoarseLevel` | `9` | Shadows / Virtual Shadow Map | 1.29% | Config/DefaultEngine.ini / [ConsoleVariables] | Medium: shortens VSM coarse page marking range. Can reduce page counts but may affect far coarse shadow information. |
| medium_risk_candidate | `r.Shadow.Virtual.ResolutionLodBiasLocalMoving` | `1` | Shadows / Virtual Shadow Map | 0.68% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | Medium: halves moving local-light VSM resolution relative to default. Can reduce moving local shadow cost but may soften or alias moving-light shadows. |

### quality_tradeoff_or_lower_tier_only（已应用 9 条）

画质取舍或低档专用。用户手动测试后已纳入当前 Default 应用清单。

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| quality_tradeoff_or_lower_tier_only | `foliage.DensityScale` | `0.8` | Landscape / Foliage | 5.89% | Config/DefaultScalability.ini / FoliageQuality@0;FoliageQuality@1;FoliageQuality@2;FoliageQuality@3;FoliageQuality@Cine | High: visible vegetation density loss |
| quality_tradeoff_or_lower_tier_only | `r.LumenScene.SurfaceCache.AtlasSize` | `2048` | Lumen / GI | 10.16% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: reduces Lumen surface cache atlas size. Can save memory/GPU work but risks lower indirect lighting detail and cache quality. |
| quality_tradeoff_or_lower_tier_only | `r.LumenScene.SurfaceCache.CardTexelDensityScale` | `50` | Lumen / GI | 9.06% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: reduces Lumen card texel density. Can save surface cache cost/memory but may visibly lower indirect lighting detail. |
| quality_tradeoff_or_lower_tier_only | `r.Lumen.HardwareRayTracing.HitLighting.Allowed` | `0` | Lumen / Ray Tracing | 4.82% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | High: disables Lumen hardware ray tracing hit lighting path where used; can reduce lighting/reflection accuracy and should be reviewed in reflective/interior scenes. |
| quality_tradeoff_or_lower_tier_only | `r.DetailMode` | `1` | Materials | 7.37% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | High: hides actors/components assigned to higher detail modes. Can boost performance if the map uses detail-mode gating, but can remove scene dressing. |
| quality_tradeoff_or_lower_tier_only | `r.MaterialQualityLevel` | `0` | Materials | 8.02% | Config/DefaultScalability.ini / EffectsQuality@0;EffectsQuality@1;EffectsQuality@2;EffectsQuality@3;EffectsQuality@Cine | High: switches materials using quality switches to low quality. Can improve shader cost only if project materials use quality branches, but may visibly remove expensive material features. |
| quality_tradeoff_or_lower_tier_only | `r.Shadow.CSM.MaxCascades` | `1` | Shadows | 2.85% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3;ShadowQuality@Cine | High: reduces directional-light CSM cascade count. Can improve shadow cost but may visibly reduce shadow coverage and transition quality. |
| quality_tradeoff_or_lower_tier_only | `r.Shadow.Preshadows` | `0` | Shadows | 0.57% | Config/DefaultEngine.ini / [ConsoleVariables] | High: disables preshadows, including static world casting onto characters. Can improve cost but may visibly remove character/object shadowing detail. |
| quality_tradeoff_or_lower_tier_only | `r.Streaming.MaxEffectiveScreenSize` | `1` | Texture Streaming | 0.88% | Config/DefaultScalability.ini / TextureQuality@0;TextureQuality@1;TextureQuality@2;TextureQuality@3;TextureQuality@Cine | High: clamps effective screen size for texture streaming. Can strongly reduce mip demand but may visibly blur textures. |

### visual_review_candidate（已应用 6 条）

需要视觉复核候选。用户手动测试后已纳入当前 Default 应用清单。

| 分类 | 命令 | 值 | 模块 | FPS变化 | 写入位置 | 说明 |
| --- | --- | --- | --- | ---: | --- | --- |
| visual_review_candidate | `foliage.CullDistanceScale` | `0.5` | Landscape / Foliage | 3.03% | Config/DefaultScalability.ini / ScalabilitySectionReviewRequired | Medium/High: reduces foliage cull distance scale where foliage types opt in. Can improve cost but may remove distant foliage. |
| visual_review_candidate | `r.Lumen.ScreenProbeGather.NumAdaptiveProbes` | `4` | Lumen / GI | 9.58% | Config/DefaultScalability.ini / GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium/High: reduces adaptive Lumen probes. Can improve GI cost but may lose indirect lighting detail in difficult areas. |
| visual_review_candidate | `r.LumenScene.DirectLighting.MaxLightsPerTile` | `4` | Lumen / GI | 8.17% | Config/DefaultScalability.ini / GlobalIlluminationQuality@1;GlobalIlluminationQuality@2;GlobalIlluminationQuality@3;GlobalIlluminationQuality@Cine | Medium/High: limits Lumen surface-cache direct lights per tile. Can improve cost in many-light scenes but may drop lower-priority direct-light contribution. |
| visual_review_candidate | `r.DOF.Gather.RingCount` | `2` | Post Processing / Depth of Field | 0.58% | Config/DefaultScalability.ini / PostProcessQuality@1;PostProcessQuality@2;PostProcessQuality@3;PostProcessQuality@Cine | Medium/High: reduces DOF gather kernel ring count from the typical high-quality value. May visibly simplify bokeh blur. |
| visual_review_candidate | `r.SSR.Quality` | `1` | Reflections | 5.19% | Config/DefaultScalability.ini / ReflectionQuality@0;ReflectionQuality@1;ReflectionQuality@2;ReflectionQuality@3;ReflectionQuality@Cine | Medium/High: lowers screen-space reflection quality; may no-op or be less visible if Lumen reflections dominate, but reflective materials need review. |
| visual_review_candidate | `r.ContactShadows` | `0` | Shadows | 3.36% | Config/DefaultScalability.ini / ShadowQuality@0;ShadowQuality@1;ShadowQuality@2;ShadowQuality@3 | Medium/High: reduces small grounding/contact shadow detail |

## 被排除或删除

| 类型 | 命令 | 说明 |
| --- | --- | --- |
| 手动排除 | `r.AmbientOcclusionLevels` | 用户手动测试后指定不要加，已从 DefaultScalability 移除。 |
| 手动排除 | `r.Lumen.TranslucencyVolume.Enable` | 用户手动测试后指定不要加，当前 Default 中无该命令。 |
| 删除旧命令 | `r.RayTracing.Geometry.InstancedStaticMeshes.AvoidPoping` | `r.RayTracing.Geometry.InstancedStaticMeshes.AvoidPoping=1` |
| 删除旧命令 | `r.RayTracing.NaniteShadowMode.HybirdMode.DepthThreshold` | `r.RayTracing.NaniteShadowMode.HybirdMode.DepthThreshold=10000` |
| 删除旧命令 | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation` | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation=-1` |
| 删除旧命令 | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation` | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation=-1` |
| 删除旧命令 | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation` | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation=-1` |
| 删除旧命令 | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation` | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation=-1` |
| 删除旧命令 | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation` | `r.Shadow.Virtual.Cache.MaxFrameSeperateInvalidation=-1` |

## 高方差未采纳

| 命令 | 值 | FPS变化 | 原因 |
| --- | --- | ---: | --- |
| `r.MegaLights.FrontLayerTranslucency.Allow` | `1` | -0.84% | Still high variance after latest repeated-pair retest. Do not adopt; retest only with alternate scene or manual visual/perf investigation. |
| `r.AlphaInvertPass` | `1` | -1.03% | Still high variance after latest repeated-pair retest. Do not adopt; retest only with alternate scene or manual visual/perf investigation. |

## 使用规则

1. 想知道当前真正写入 Default 的命令，看 `current_project_applied_config.csv`。
2. 想看原始草案分类，看 `current_project_config_draft.csv` 的 `application_bucket`。
3. 不要直接用 `experiment_results.csv` 或 `current_project_candidates.csv` 改配置。
4. 普通 CVar 放 `DefaultEngine.ini` 的 `[ConsoleVariables]`；Scalability 项放 `DefaultScalability.ini` 对应质量档位。
## RendererSettings 迁移审计

- 审计表：`renderer_settings_migration_audit.csv`
- 源码依据：`<EngineRoot>\Engine\Source\Runtime\Engine\Classes\Engine\RendererSettings.h`
- 审计范围：`DefaultEngine.ini` 中 `[/Script/Engine.RendererSettings]` 与 `[ConsoleVariables]` 的当前活动键。
- 结论：`[/Script/Engine.RendererSettings]` 只保留 UE 5.8 `URendererSettings` 精确支持的 66 个键；161 个不属于 `URendererSettings` 的渲染/图形 CVar 已迁移到 `[ConsoleVariables]`；4 个非 CVar 遗留项目设置暂时留在原 section，避免改变无关项目行为。
- 注意：从 `RendererSettings` 迁到 `[ConsoleVariables]` 的布尔值已从 `True` / `False` 转成 `1` / `0`，因为 CVar 字符串解析与 UPROPERTY 布尔解析不是同一个路径。
## 纹理流送清晰度事故记录

- 问题现象：`r.TextureStreaming=0` 后贴图立即清晰，但调高 `r.Streaming.PoolSize` 无效。
- 根因命令：`r.Streaming.MaxEffectiveScreenSize=1`。
- 原因：该值会把 Texture Streaming 的有效屏幕尺寸钳到极低，Streamer 会认为高 mip 不需要加载，导致场景贴图发糊；打开贴图资产或关闭 Texture Streaming 时全 mip 被加载，所以会暂时清晰。
- 修正：在所有 `TextureQuality` 档位中把 `r.Streaming.MaxEffectiveScreenSize=1` 改为 `r.Streaming.MaxEffectiveScreenSize=0`，表示不限制有效屏幕尺寸。
- 注意：遇到贴图糊但 Pool 未超预算时，优先查 `r.Streaming.MaxEffectiveScreenSize`、`r.Streaming.MipBias`、`r.MipMapLODBias`、`TextureGroup`，不要只调 `r.Streaming.PoolSize`。
## Low 档 Shadow / GI 白盒化事故记录

- 问题现象：把 Shadow 和 Global Illumination 调到 Low 后，画面突然变得像白盒/平光，没有正常渲染层次。
- 根因命令：`GlobalIlluminationQuality@0` 关闭了核心 Lumen GI 路径，包括 `r.Lumen.DiffuseIndirect.Allow=0`、`r.LumenScene.Radiosity=0`、`r.gs.LumenDisableStaticMeshAffectIndirectLighting=1`；同时 `ShadowQuality` 档位里 `r.Shadow.Virtual.Enable=0` 会关闭项目依赖的 Virtual Shadow Map 路径。
- 修正策略：Low 档不关闭核心渲染路径，只降低预算、分辨率、采样数和更新频率。`r.Lumen.DiffuseIndirect.Allow`、`r.LumenScene.Radiosity`、`r.Shadow.Virtual.Enable` 必须保持开启。
- 当前修正：所有 `ShadowQuality` 档位保持 `r.Shadow.Virtual.Enable=1`；`GlobalIlluminationQuality@0` 保持 Lumen Diffuse Indirect、Radiosity、Static Mesh Affect Indirect Lighting 开启，并取消 Low 档 Lower Hemisphere 白化覆盖。
## ShadowQuality@0 局部阴影丢失修正

- 问题现象：整体 Scalability 设为 Low 时画面可接受，但单独把 Shadow 从中调到低后，局部阴影突然消失，画面变亮。
- 原因：单独应用 `ShadowQuality@0` 不会重新应用 GI、曝光、后处理等其它组；如果 Shadow Low 把局部灯光 VSM 路径关得太狠，就会出现状态切换后的阴影缺失。
- 修正：`ShadowQuality@0` 保留基础局部阴影路径，只降低质量和预算。关键值：`r.Shadow.Virtual.SMRT.RayCountLocal=1`、`r.Shadow.Virtual.SMRT.SamplesPerRayLocal=1`、`r.Shadow.Virtual.RadiusThreshold=0.12`、`r.Shadow.RadiusThreshold=0.08`、`r.Shadow.StaticMeshLODBias=1`、`r.Shadow.Virtual.MaxPhysicalPages=512`。
## ShadowQuality@0 总开关覆盖修正

- 问题现象：单独把 Shadow 从中调到低后，阴影仍然消失、画面变亮；只调 `r.Shadow.Virtual.SMRT.*` 等细项无效。
- 根因：UE 5.8 `Engine/Config/BaseScalability.ini` 的 `[ShadowQuality@0]` 默认包含 `r.ShadowQuality=0`，项目 `DefaultScalability.ini` 的 `[ShadowQuality@0]` 没有覆盖该总开关。应用 Shadow Low 时动态阴影总开关先被置 0，后续 VSM/SMRT 细项即使开启也无法恢复阴影。
- 修正：项目所有 `ShadowQuality` 档位显式写入 `r.ShadowQuality`。当前低档使用 `r.ShadowQuality=3` 保留基础动态阴影；中档 `3`，高/史诗/Cine 为 `5`。
- 实时测试注意：如果编辑器已经打开，改 ini 后需要重启编辑器，或先在控制台输入 `r.ShadowQuality 3` 验证阴影恢复；否则内存中的 Scalability 配置可能仍是旧值。

