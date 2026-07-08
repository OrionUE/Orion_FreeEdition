---
name: unreal-texture-management
description: "Use when working on Unreal Engine texture and image asset optimization: 贴图太大, 纹理太大, 包体积大, packaged build size, Texture2D, TextureCube, UDIM, virtual texture, runtime virtual texture, streaming virtual texture, Texture Streaming Pool over budget, r.Streaming.PoolSize, r.Streaming.MipBias, sg.TextureQuality, TextureQuality, TextureLODGroups, LODGroup, LODBias, MaxTextureSize, mipmaps, compression settings, Oodle/BC formats, sRGB, channel packing, Size Map, Asset Audit, Reference Viewer, cooked texture size, texture streaming build data, or texture-related stutter."
---

# Unreal Texture Management

Use this Skill to audit and optimize Unreal Engine textures for package size, cooked disk size, runtime memory, streaming stability, and visual quality.

## Workflow

1. Identify the user's actual symptom: package size, VRAM/runtime memory, streaming hitching, blurry textures, or import/organization hygiene.
2. Read `references/texture-management.zh-CN.md` before recommending texture changes.
3. Separate package-size fixes from runtime-only fixes. `r.Streaming.PoolSize` can reduce over-budget streaming pressure, but it does not shrink cooked packages.
4. Inspect real project settings before changing advice: texture assets, `Config/DefaultEngine.ini`, `Config/DefaultScalability.ini`, platform `DeviceProfiles`, and packaging cook rules.
5. Prefer reversible bulk-edit plans: audit top offenders first, then change `MaxTextureSize`, `LODGroup`, `LODBias`, compression, mip generation, sRGB, channel packing, or source asset resolution.
6. Rebuild texture streaming data after material/mesh/UV changes, then recook/package before claiming package-size wins.
7. Validate in editor and cooked build with texture stats, streaming stats, package size comparison, and visual spot checks.
8. For MCP-assisted bulk work, use the scripts in `scripts/`. They default to dry-run and require explicit `-Apply` before saving texture assets.

## 路由

- For asset naming, Content folder organization, bulk asset moves, import conventions, or Texture2D asset creation, use `../orion-asset-management/SKILL.md`.
- For render config placement, `DefaultScalability.ini`, video settings, DLSS/TSR interactions, or project rendering policy, use `../orion-rendering-framework/SKILL.md`.
- For exact CVar lookup such as `r.Streaming.*`, `r.VT.*`, `sg.TextureQuality`, or runtime/startup editability, use `../unreal-render-commands/SKILL.md`.
- For package, cook, staging, IoStore, or Steam build-size validation, use `../orion-packaging/SKILL.md`.
- For Unreal source confirmation, engine version differences, or property/module ownership, use `../unreal-source-code-navigator/SKILL.md`.

## Reference

Read `references/texture-management.zh-CN.md` for the full Chinese workflow, official documentation links, UE 5.8 source evidence, optimization matrix, validation commands, and common failure cases.

## Scripts

- `scripts/mcp-audit-textures.ps1`: read-only audit for large `Texture2D` assets under explicitly provided folders.
- `scripts/mcp-cap-max-texture-size.ps1`: dry-run or apply a fixed `MaxTextureSize` cap, such as 4K-or-larger textures capped to 2K.
- `scripts/mcp-half-by-lod-bias.ps1`: dry-run or apply `LODBias += 1` to approximate half-resolution cooked/runtime mips.
- `scripts/mcp-half-by-max-texture-size.ps1`: dry-run or apply `MaxTextureSize = current long edge / 2`.
- `scripts/mcp-set-texture-lod-group.ps1`: dry-run or apply a `LODGroup` assignment so DeviceProfile/TextureLODGroups can manage the group.
- `scripts/mcp-fix-compression-and-srgb.ps1`: dry-run or apply heuristic Normal/Mask/Color compression and sRGB fixes.
- `scripts/mcp-enable-virtual-texture-streaming.ps1`: dry-run or apply `VirtualTextureStreaming` for very large texture candidates.
- `scripts/mcp-plan-lodgroup-config-no-uasset.ps1`: read-only group distribution report for no-uasset config strategies.
- `scripts/mcp-plan-source-downscale-reimport.ps1`: read-only source-downscale/reimport candidate report.
- `scripts/collect-texture-groups.ps1`: read-only Unreal commandlet wrapper that scans Asset Registry texture assets and writes actual TextureGroup usage reports.
- `scripts/collect-texture-group-sources.ps1`: read-only report that merges UE enum groups, engine BaseDeviceProfiles groups, project asset groups, and project DefaultDeviceProfiles groups.
