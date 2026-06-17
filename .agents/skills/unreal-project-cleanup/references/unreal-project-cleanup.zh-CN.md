# Unreal 项目清理参考

## 目标

按 `.gitignore` 找出项目中被忽略的运行生成文件，并用保守规则删除真正的生成物。不要把一次清理变成资产整理、文档归档或源码迁移。

## 默认保护规则

- 永远不删除 Git 已跟踪文件。
- 永远不删除未被 `.gitignore` 忽略的未跟踪文件。
- 永远不删除 `Docs/` 目录下的内容，即使它们被某条 ignore 规则命中。
- `Saved/OrionUE` 目录只在为空时允许删除；只要里面存在任意内容，就保护整个 `Saved/OrionUE` 子树。
- 非生成目录中的用户文档、模型、贴图、音频、视频和源工程文件默认保护。典型后缀包括 `.md`、`.pdf`、`.docx`、`.xlsx`、`.png`、`.tga`、`.psd`、`.fbx`、`.obj`、`.blend`、`.glb`、`.wav`、`.mp4`。
- 运行生成目录中的同类后缀可以清理，例如 `Saved/Screenshots/*.png` 仍按生成截图处理。

生成目录主要包括：

- `.vs/`、`.idea/`
- `Binaries/`、`Plugins/**/Binaries/`
- `Intermediate/`、`Plugins/**/Intermediate/`
- `DerivedDataCache/`
- `Saved/`，但受 `Saved/OrionUE` 例外约束
- 任意 `__pycache__/`

`Build/` 里可能同时存在平台资源和生成输出。脚本只删除 `.gitignore` 命中的文件，并仍保护文档、模型、贴图和媒体类后缀。

## 推荐流程

1. 运行 `git status --short --ignored` 看清当前 ignored 范围。
2. 运行清理脚本 dry-run：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1
```

3. 重点看输出：
	- `Delete candidates`：实际会删除的 ignored 文件。
	- `Protected ignored files`：被 ignore 命中但因用户内容规则保留的文件。
	- `Empty directory candidates`：清理文件后可删除的空生成目录。
4. 确认无误后执行：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1 -Apply
```

5. 再运行 `git status --short --ignored`，确认生成物减少，且 `Docs/`、`Saved/OrionUE` 和用户素材仍在。

## 不要做的事

- 不要直接执行 `git clean -fdX`，它会按 ignore 规则删除，无法表达本项目的用户内容保护规则。
- 不要删除 `Docs/`、设计文档、源模型、源贴图、源音视频或 DCC 工程文件，除非用户明确点名要删。
- 不要把 `Content/` 下的正式 `.uasset`、`.umap`、`.ubulk` 当作清理目标；它们通常不是 `.gitignore` 生成物。
- 不要因为 `Saved/OrionUE` 在 `.gitignore` 范围内就删除它；只要非空就保留。

## 常见情况

### SourceArt 下的贴图被 `.gitignore` 命中

`SourceArt/**/*.png` 和 `SourceArt/**/*.tga` 可能是美术源文件，不是运行生成缓存。脚本会把非生成目录里的贴图类后缀放入保护列表。若用户明确要求清空 `SourceArt`，不要用本 Skill 的默认清理流程，改走资产整理或人工确认。

### Saved 下有截图或日志

`Saved/Logs`、`Saved/Crashes`、`Saved/Screenshots` 属于运行生成目录，默认可清理。唯一特殊规则是非空 `Saved/OrionUE` 整体保留。

### Build 下既有资源又有输出

`.gitignore` 已经放行应用图标、PSO cache 和 Android res 等平台资源。脚本只处理仍被 ignore 命中的条目，并保护明显的文档、模型、贴图和媒体后缀。

### dry-run 显示太多文件

脚本默认只展开前 200 条列表，同时给出总数。需要更多输出时传入更大的 `-ListLimit`：

```powershell
& .agents\skills\unreal-project-cleanup\scripts\clean-ignored-project.ps1 -ListLimit 1000
```

## 脚本维护注意

### 大项目 dry-run 超时

现象：`git ls-files -o -i --exclude-standard` 本身很快，但清理脚本 dry-run 超过 30 秒。

原因：在数万 ignored 文件上逐项调用 `Test-Path`，或对每个文件重复向上收集同一批父目录，会把主要时间耗在 PowerShell 层。

修复：文件存在检查使用 `[System.IO.File]::Exists()`；目录候选用字典去重，并且遇到已经收录过的父目录就停止继续向上遍历。

验证：在真实项目 dry-run 应能完成；如需测试 `-Apply`，用临时 Git 仓库构造 ignored 文件，不要对真实项目直接做破坏性验证。

### Generic List 绑定到 object[] 报错

现象：PowerShell 调用函数时把 `System.Collections.Generic.List[object]` 传给 `[object[]]` 参数，可能报 `Argument types do not match`，错误栈落在 `PSEnumerableBinder`。

原因：某些 PowerShell 运行时对泛型 List 到 object array 的动态绑定不稳定。

修复：传参前显式调用 `.ToArray()`，例如 `$DeleteCandidateArray = $DeleteCandidates.ToArray()`，再把数组传给输出函数。

验证：dry-run 能正常打印 `Delete candidates`、`Protected ignored files` 和 `Empty directory candidates` 三段列表。

### 文件删完后仍剩空生成目录

现象：`Delete candidates` 已经为 0，但 `Intermediate/` 或类似生成目录下还残留只包含空子目录的目录树。

原因：只从删除文件的父目录向上收集目录候选时，可以清掉有文件路径参与的父目录；如果清理后某个生成根里只剩空目录，后续 dry-run 没有文件候选，就不会再发现这些空子目录。

修复：对 `.vs`、`.idea`、`Binaries`、`Intermediate`、`DerivedDataCache`、`Saved`、`Build` 这些生成目录根递归收集目录候选。执行删除时仍只删除空目录，遇到 `Saved/OrionUE` 保护子树或含文件目录会自动跳过。

验证：文件清理后再次执行 `-Apply`，应能移除空生成目录子树；最终 dry-run 的 `Delete candidates` 应为 0。若目录候选仍包含有受保护文件或已跟踪文件的父目录，脚本会保留这些目录。
