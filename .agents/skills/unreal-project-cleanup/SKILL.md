---
name: unreal-project-cleanup
description: "Use when cleaning an Unreal Engine project workspace, cleaning by .gitignore, removing ignored/generated files, or preparing a clean handoff. Triggers include 清理项目, 项目清理, 清理忽略文件, gitignore 清理, clean project, git clean, Binaries, Intermediate, Saved, DerivedDataCache, IDE files, and Python caches. Always preserve Docs, user-authored document/model/texture/media files outside generated folders, and a non-empty Saved/OrionUE folder."
---

# Unreal Project Cleanup

用于按 `.gitignore` 清理 Unreal Engine 项目里的运行生成文件、IDE 缓存、编译产物和中间文件，同时保留用户手写文档、模型、贴图、媒体和指定的保存目录。

## Workflow

1. 先读取本 Skill 的中文参考：`references/unreal-project-cleanup.zh-CN.md`。
2. 检查当前工作区状态，确认不要误把用户未提交内容当作生成物处理：

```powershell
git status --short --ignored
```

3. 默认先执行 dry-run，不删除任何文件：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1
```

4. 检查输出里的 `Delete candidates` 和 `Protected ignored files`。如果保护列表里出现本次确实想删的文件，先和用户确认，不要绕过保护规则。
5. 只有当用户明确要求清理或 dry-run 结果已经确认后，才加 `-Apply` 执行：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1 -Apply
```

6. 清理后再次运行 `git status --short --ignored` 或目标目录检查，确认生成目录已清掉且用户文档/素材仍存在。

## 路由

- 修改本 Skill、脚本或参考文档时，先读取 `../orion-code-style/SKILL.md`，并配合系统 `skill-creator`。
- 需要批量检查 CRLF、Tab 或脚本写回格式时，读取 `../crlf-mechanical-formatting/SKILL.md`。
- 如果清理范围涉及 `Build`、`Config`、`Content`、`Plugins`、`Source` 的职责边界，先读取 `../unreal-framework-architecture/SKILL.md`。
- 如果用户是为打包、Steam 上传、发布包验证或包体迁移而清理，继续读取 `../unreal-packaging/SKILL.md`。
- 如果用户要求删除、整理或迁移正式资产，使用 `../unreal-asset-management/SKILL.md`；本 Skill 只处理 `.gitignore` 命中的生成物清理。

## Validation

新增或修改脚本后至少运行：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1
& .agents\skills\orion-code-style\scripts\check-code-style.ps1 -Path .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1
python -X utf8 <SKILL_CREATOR_ROOT>\scripts\quick_validate.py .agents\skills\unreal-project-cleanup
```
