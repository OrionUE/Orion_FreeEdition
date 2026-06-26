---
name: orion-release-publishing
description: "Use when preparing, reviewing, publishing, or releasing an Unreal Engine Windows or Steam build, especially for Steamworks release setup, required redistributables, Steam Common Redistributables, Visual C++ runtime, Microsoft GameInput redistributable, Steam install scripts, prereq installer choices, release readiness checks, or explaining what dependencies must be configured before publishing."
---

# Unreal Release Publishing

本 Skill 用于发布前检查 Unreal Windows / Steam 构建，重点处理运行库依赖、Steamworks 后台设置、Steam Common Redistributables、自定义 InstallScript 和发布验证。

## 工作流

1. 先确认目标：Steam、独立安装包、测试分支、公开分支、Demo、Dedicated Server 或本地 QA 包。
2. 先回答依赖结论：Visual C++ Runtime 优先用 Steamworks 的 Common Redistributables；Microsoft GameInput 不要假设在 Steam Common Redistributables 里，Steam 发布时按自定义安装脚本或随包安装器处理。
3. 读取 `references/release-publishing.zh-CN.md`，按其中的发布依赖清单检查 VC++、GameInput、DirectX、Steamworks App Admin、Depot install script 和干净机器验证。
4. 如果用户要求实际修改 Steam 发布配置，先区分“Steamworks 后台勾选项”和“仓库内 depot/installscript/build script 文件”；只改本地文件时提醒用户还需要在 Steamworks 后台发布配置。
5. 如果用户问“能不能自动安装依赖”，说明 Steam Common Redistributables 只覆盖后台列出的通用组件；不在列表里的依赖要用 Steam InstallScript 或自己的安装器，并使用静默参数。
6. 如果用户问 UE 打包的 prereq/bootstrapper，区分它和 Steam 的 Common Redistributables：Steam 发行为主时优先用 Steamworks 后台和 InstallScript，避免玩家看到重复安装器。
7. 发布前建议用干净 Windows VM 或新系统镜像验证首次启动，不能只在开发机验证。

## 路由

- 打包、Project Launcher Profile、UAT、Pak/IoStore、always cook/stage、启动崩溃或 packaged runtime 验证，配合 `../orion-packaging/SKILL.md`。
- Steam AppID、Steam target、Steam depot、SteamCMD、分支发布、OnlineSubsystem Steam 配置，配合 `../orion-online-steam-framework/SKILL.md`。
- `Config/DefaultGame.ini`、`ProjectPackagingSettings`、`[GameInput] IncludeRedistFiles`、平台配置和 GameUserSettings 默认值，配合 `../orion-project-config/SKILL.md`。
- GameInput 插件、Preferred Input API、CommonInput / EnhancedInput 输入切换问题，配合 `../orion-input-framework/SKILL.md`。

## Reference

读取 `references/release-publishing.zh-CN.md` 获取发布依赖结论、Steam Common Redistributables 与 InstallScript 分工、GameInput MSI 静默安装模板和验证清单。
