---
name: orion-engine-upgrade-regression-todos
description: "Use when upgrading Unreal Engine, changing installed/source engine versions, retesting known UE-version regressions, asking whether previous engine bugs are fixed, checking if PSO or packaging workarounds can be removed, or maintaining a todo list for future engine-update verification. Covers UE 5.8 PSO .spc BuildPSOSC crashes, stable pipeline cache fallback, packaged Cook MCP HttpListener port conflicts, and related packaging/PSO regression checks."
---

# Orion Engine Upgrade Regression Todos

用于在升级 Unreal Engine 或切换引擎构建后，复测过去发现的引擎版本相关问题，并判断现有 workaround 是否还能删除。它不是普通 bug tracker；只记录“未来引擎更新后值得复测”的问题和必须长期保留的流程防呆项。

## 工作流

1. 先确认用户是否在升级引擎、切换引擎构建、更新 UE 小版本，或询问“之前的问题是否修复”。如果是，读取 `references/engine-upgrade-regression-todos.zh-CN.md`。
2. 查当前引擎版本、项目目标平台和相关工作流：PSO 问题配合 `../orion-pso-caching/SKILL.md`，打包/Cook 问题配合 `../orion-packaging/SKILL.md`，需要源码依据时配合 `../unreal-source-code-navigator/SKILL.md`。
3. 按 reference 中的 todo ID 逐项复测。每项必须记录：是否运行、当前结果、是否仍需 workaround、可删除哪些旧配置或脚本保护。
4. 如果某项已修复，不要立刻删除 workaround；先用一次带 workaround 和一次去掉 workaround 的对照验证，确认打包、运行时日志和 staged manifest 都符合成功标准。
5. 如果发现新 UE 版本问题或旧问题的新变体，把它加入 reference：现象、日志关键字、最小复现、成功标准、当前 workaround、下次复测触发条件。
6. 若只是普通打包、PSO 收集或发布，不主动运行全套 todo；只在日志命中已知问题或用户提到升级/复测时提醒。

## 路由

- PSO `.rec.upipelinecache`、`.shk`、`.spc`、direct stable fallback、`BuildPSOSC` 或 `ShaderPipelineCacheTools` 问题，读取 `../orion-pso-caching/SKILL.md`。
- UAT、Cook、Legacy Project Launcher、Steam CustomConfig、staging manifest、MCP HttpListener 端口冲突，读取 `../orion-packaging/SKILL.md`。
- 需要核对 UE 源码、命令行参数、Cook 源码或 Runtime cache 加载路径时，读取 `../unreal-source-code-navigator/SKILL.md`。
- 渲染配置、ShaderPipelineCache 运行时状态、启动 shader 编译 UI、画质档影响，配合 `../orion-rendering-framework/SKILL.md`。

## References

- 复测清单和新增 todo 模板：`references/engine-upgrade-regression-todos.zh-CN.md`。

## 验证

修改本 Skill 后运行：

```powershell
python -X utf8 <SkillCreatorRoot>\scripts\quick_validate.py .agents\skills\orion-engine-upgrade-regression-todos
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-framework-skill-authoring\scripts\check-skill-portability.ps1 -Path .agents\skills\orion-engine-upgrade-regression-todos -CheckCRLF -RequireRouting
```
