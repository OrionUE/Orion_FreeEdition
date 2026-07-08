---
name: splash-image-conversion
description: Use when converting, cropping, resizing, replacing, importing, or exporting source images into Unreal project Splash startup PNG/BMP/UAsset files, especially JPG/JPEG/WebP/TGA source images, fixed 720x370 outputs, Content/Splash Splash.png/Splash.bmp/EdSplash.png/EdSplash.bmp files, stale Splash uasset deletion, UE import/save of Splash and EdSplash Texture2D assets with Texture Group UI, or repeated image format conversion workflows that should avoid stretching and accidental asset overwrites.
---

# Splash 图片转换

本 Skill 用于把源图居中裁剪到目标比例，再缩放并导出 `.png` / `.bmp`。它只处理图片文件转换；正式 Unreal 启动图目录、固定文件名和覆盖决策仍先遵守 `../orion-asset-management/SKILL.md` 与 `../orion-umg/SKILL.md`。

## 工作流

1. 先判断用户只是要图片转换，还是要替换项目启动 Splash。
2. 如果要替换启动图，先读取 `../orion-asset-management/SKILL.md`；正式输出使用 `Content/Splash/Splash.png`、`Content/Splash/Splash.bmp`、`Content/Splash/EdSplash.png`、`Content/Splash/EdSplash.bmp` 的固定命名。
3. 如果目标文件已存在且用户没有明确要求替换，先输出到源图同目录或临时目录，避免覆盖正式资产。
4. 如果用户要求“直接替换 `Content/Splash`”，执行脚本的 `--replace-unreal-splash --force` 模式：先删除 `Splash.uasset` 和 `EdSplash.uasset`，再生成并覆盖四个 PNG/BMP。
5. 默认使用居中裁剪到目标比例，再缩放到目标尺寸；不要直接拉伸图片。
6. 优先执行 `scripts/crop_splash_image.py`。如果需要了解本项目环境注意事项，读取 `references/splash-image-conversion.zh-CN.md`。
7. 输出后重新打开生成文件，确认格式、尺寸和颜色模式符合要求。
8. 替换正式 Splash 后，优先用 UE Python 命令行执行 `scripts/import_splash_to_ue.py`，把 `Splash.png` 和 `EdSplash.png` 导入为 `/Game/Splash/Splash` 与 `/Game/Splash/EdSplash`，并把 Texture 的 `LODGroup` 设置为 `TEXTUREGROUP_UI` 后保存 `.uasset`。
9. 如果当前环境不能启动 Unreal Editor/Cmd 或导入失败，最终回复必须明确说明 `.uasset` 未重新生成，并提示用户打开 Unreal Editor 后导入/保存 `Splash` 与 `EdSplash`，Texture Group 设为 `UI`。

## 路由

- 替换或整理正式启动图时，先读取 `../orion-asset-management/SKILL.md`，确认 `Content/Splash` 固定目录和固定文件名。
- Splash 属于启动阶段图片，不属于普通 UMG Widget；涉及 UI 路由时配合 `../orion-umg/SKILL.md`。
- 需要给导入后的 Splash Texture 设置 `LODGroup`、排查 UI 贴图属性或批量贴图设置时，配合 `../unreal-texture-management/SKILL.md`。
- 修改本 Skill 或脚本时，配合 `../orion-code-style/SKILL.md`、`../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## 脚本

同目录导出：

```powershell
python .agents\skills\splash-image-conversion\scripts\crop_splash_image.py <SOURCE_IMAGE> --width 720 --height 370 --base-name Splash --force
```

直接替换项目启动图目录并删除旧 `.uasset`：

```powershell
python .agents\skills\splash-image-conversion\scripts\crop_splash_image.py <SOURCE_IMAGE> --width 720 --height 370 --output-dir .\Content\Splash --replace-unreal-splash --force
```

把替换后的 PNG 导入 UE、设置 Texture Group 为 UI，并保存 `Splash.uasset` / `EdSplash.uasset`：

```powershell
& <UnrealEditor-Cmd.exe> <Project.uproject> -run=PythonScript -Script=".\.agents\skills\splash-image-conversion\scripts\import_splash_to_ue.py" -unattended -nop4 -nosplash -NullRHI
```

默认不覆盖已有输出；需要替换时显式传入 `--force`。
