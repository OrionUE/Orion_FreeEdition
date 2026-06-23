---
name: unreal-build-platform-icons
description: "Use when replacing, generating, validating, or routing Unreal Engine project Build folder application icons and logos from a source image, including Build/Windows/Application.ico, Build/Mac/Application.icns, Build/Linux/Application.png, Android res/drawable icon.png, icon_bg.png, adaptive icon XML, app icon, launcher icon, platform logo, and package icon resources."
---

# Unreal Build Platform Icons

本 Skill 用于把一张源 Logo 转成 Unreal 项目 `Build/<Platform>` 下各平台应用图标，不用于普通 `Content/UI` 图标、`Content/Splash` 启动图或运行时加载屏。

## 工作流

1. 先读取 `references/build-platform-icons.zh-CN.md`，确认目标平台文件、尺寸和 Android adaptive icon 规则。
2. 检查源图是否存在，优先使用高分辨率正方形 PNG；非正方形源图必须居中等比适配到正方形画布，不要拉伸。
3. 先读取当前项目 `Build` 下已有图标文件，按现有文件集覆盖；不要删除 `drawable-anydpi-v26/icon.xml` 或随意新增未被引用的图层。
4. 运行 `scripts/update-build-platform-icons.ps1 -SourceLogo <SOURCE_LOGO>` 生成 Windows、Mac、Linux、Android 图标。
5. 生成后重新读取输出，确认 ICO/ICNS 多尺寸条目和 PNG 尺寸都符合 reference 表格。
6. 如果修改了本 Skill 的脚本，按当前仓库的代码格式要求运行对应脚本校验 touched script files。
7. 如果更新了本 Skill 或路由，运行 skill-creator 的 `quick_validate.py`，再运行 `../orion-framework-skill-authoring/scripts/check-skill-portability.ps1 -CheckCRLF -RequireRouting`。

## 脚本

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-build-platform-icons\scripts\update-build-platform-icons.ps1 -SourceLogo <SOURCE_LOGO>
```

可选参数：

- `-ProjectRoot <PROJECT_ROOT>`：不指定时自动从 Skill 目录回到项目根。
- `-DryRun`：只打印将写入的目标文件，不落盘。

脚本依赖当前环境的 `python` 和 `Pillow`。如果环境变量 `PYTHON` 指向指定解释器，脚本会优先使用它。

## 路由

- 用户说 `Build` 平台图标、应用图标、launcher icon、package icon、`Application.ico`、`Application.icns`、`Application.png`、Android `res/drawable` 图标、各平台 Logo 替换时，使用本 Skill。
- 只讨论项目根目录 `Build` 文件夹职责、`Config` / `Content` / `Source` 分层或模块落点时，配合 `../unreal-framework-architecture/SKILL.md`。
- 修改或验证打包结果、Steam Profile、UAT、staging、PSO、movie、本地化时，配合 `../unreal-packaging/SKILL.md`；应用图标生成仍回到本 Skill。
- 创建、移动、导入普通 UE Content 资产时，配合 `../unreal-asset-management/SKILL.md`；`Build/<Platform>` 应用图标不是普通 Content 资产。
- 修改 `Content/Splash/Splash.png`、`EdSplash.png`、BMP 四件套时，使用 `../splash-image-conversion/SKILL.md`，不要走本 Skill。
