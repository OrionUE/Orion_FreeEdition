---
name: orion-browser-framework
description: "Use when implementing, modifying, debugging, packaging, or validating the OrionBrowser plugin, CEF browser kernel integration, OrionCEF3 third-party artifacts, OrionBrowserHelper subprocess, UOrionBrowserWidget, UGameUIWebBrowser, HTML popup browser content, browser cursor policy, mouse cursor hand/grab issues, H.264/AAC video playback, or browser runtime staging for Win64/Steam."
---

# Orion Browser Framework

本 Skill 用于处理 `Plugins/OrionBrowser`、CEF 第三方库、浏览器 helper 子进程、GameUI HTML 弹窗接入和 Win64/Steam 打包验证。

## 工作流

1. 先读取 `.uproject`、`Plugins/OrionBrowser/OrionBrowser.uplugin`、`Source/GameUI/GameUI.Build.cs` 和相关 Widget/弹窗代码，确认插件启用、模块依赖和宏。
2. 写或改 C++ 前先读取 `../orion-framework-architecture/SKILL.md`、`../orion-code-style/SKILL.md` 和 `../unreal-source-code-navigator/SKILL.md`。
3. 需要调整 CEF 版本、运行库、helper 或打包路径时，读取 `references/orion-browser-framework.zh-CN.md` 的“CEF 版本和导入规则”。
4. 需要改 GameUI HTML 弹窗时，配合 `../orion-gameui/SKILL.md`，保持 `UGameUIWebBrowser` 兼容入口，不把弹窗业务写进浏览器插件。
5. 不修改安装版 Unreal Engine；引擎 `WebBrowser`、`CEF3`、`EpicWebHelper` 只作为只读参考。
6. 修改后验证 touched code files 的 CRLF/Tab 风格，至少构建相关 Editor/Game 目标；涉及 Steam 打包时验证 staged CEF runtime 和 `OrionBrowserHelper.exe`。
7. 若出现新的 CEF 导入、构建或打包失败路径，把可重复修复步骤写回本 Skill 的 reference。

## 路由

- GameUI 页面、弹窗队列、CommonUI 层栈或 `UUI_HtmlPopupContent`：配合 `../orion-gameui/SKILL.md`。
- CEF 第三方库目录、`Source/ThirdParty` External 声明层、插件根 `ThirdParty` 实体库、RuntimeDependencies 或 SDK staging：配合 `../unreal-thirdparty-plugin/SKILL.md`。
- CEF、Slate、UMG、Build.cs、Target.cs、模块依赖或引擎源码对照：配合 `../unreal-source-code-navigator/SKILL.md`。
- 打包、Steam staged 文件、RuntimeDependencies：配合 `../orion-packaging/SKILL.md` 和 `../orion-online-steam-framework/SKILL.md`。
- Skill 内容更新、路由接入、可发布清理：配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。

## Reference

读取 `references/orion-browser-framework.zh-CN.md` 获取插件分层、CEF 导入脚本、Blueprint 使用、构建验证和常见失败处理。
