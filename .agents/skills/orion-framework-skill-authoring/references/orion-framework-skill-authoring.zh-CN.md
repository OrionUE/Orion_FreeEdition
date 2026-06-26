# UE 框架模块 Skill 生成工作手册

## 目录

- 目标和边界
- 用户说明采集
- 源码学习顺序
- 引擎源码对照
- 能力抽取
- Skill 粒度和命名
- 目标 Skill 结构
- 路由接入规则
- 可发布清理
- 质量门禁
- 常见问题沉淀

## 目标和边界

目标是让另一个 AI 工具在不了解当前开发历史的情况下，也能根据 Skill 快速写出符合框架约定的 Unreal Engine 代码。

用户口述代表设计意图，项目源码代表当前框架事实，引擎源码代表当前 UE 版本事实。三者冲突时，先指出冲突，再以源码证据为准整理 Skill；如果设计意图需要覆盖源码现状，先问用户是否要把框架代码也同步修改。

不要把一次聊天写成日志。Skill 应该提炼成可重复执行的工作流、API 使用规则、代码模板、验证方式和常见失败处理。

## Skill 粒度和命名

创建新 Skill 前先判断能否合并进现有 Skill。满足任一条件时优先合并，不要拆成孤立小 Skill：

- 属于同一 UE 子系统或同一插件，例如 CommonInput、EnhancedInput、UMG、GAS。
- 属于同一 Orion 框架能力，例如代码风格、UI 框架、GameCore、项目配置。
- 共享同一批源码入口、资产入口、验证命令或常见失败模式。
- 新内容只是某个已有 Skill 的一个版本差异、排查分支或参考表。

只有在这些情况下才新建 Skill：

- 触发词和用户任务明显独立，合并会让现有 Skill 难以触发或难以维护。
- 需要独立的脚本、资源目录、验证流程或大量参考表。
- 工作流跨越多个上游 Skill，单独成 Skill 能明显降低后续路由成本。

命名规则：

- UE 引擎源码、UE 原生 API、UE 官方插件行为、跨项目通用 Unreal 子系统和版本差异 Skill，才命名为 `unreal-<domain>`。
- 当前项目、Orion 框架、Orion 项目约定、项目内插件、项目配置、项目打包、Steam/发布流程、Content/Config/Source/Plugins 目录约定、项目清理脚本或可发布框架能力 Skill，必须命名为 `orion-<domain>`；即使底层使用 Unreal API，也不要命名为 `unreal-*`。
- 项目域命名示例：`orion-project-config`、`orion-packaging`、`orion-release-publishing`、`orion-online-steam-framework`、`orion-project-cleanup`、`orion-project-acoustics`。
- 引擎域命名示例：`unreal-enhancedinput`、`unreal-inputcore`、`unreal-gameplayabilities`、`unreal-source-code-navigator`、`unreal-source-index`、`unreal-render-commands`。
- 非 UE 源码也非 Orion 框架的通用工具 Skill 可以使用无前缀领域名，例如纯图片转换或纯格式化工具。
- 不要用 `ue5-`、`5-8-` 这类小版本前缀命名长期 Skill；版本基线写入 `description`、reference 或表格名。
- 如果把一个独立 Skill 合并进已有 Skill，必须同步删除旧路由、旧目录和旧 `agents/openai.yaml`，并用 `rg` 确认没有残留引用。

## 用户说明采集

每次用户介绍一个模块时，先提取这些信息：

- 模块或系统的公开名称，以及它解决的问题。
- 使用者通常会要求 AI 生成什么：Actor、Component、Subsystem、Ability、Widget、Asset、Editor Tool、Config、DataAsset、接口适配层等。
- 使用者应该继承哪个基类、调用哪个入口、注册到哪里、放在哪个模块。
- 哪些 API 是稳定公开能力，哪些只是内部实现。
- 是否需要 Blueprint 暴露、网络同步、存档、配置、资产引用、GameplayTag、输入映射、UI 样式或编辑器扩展。
- 一段最典型的用户请求示例，例如“基于这个框架添加一个新的装备系统条目”。

缺失信息不要一次性问太多。若源码能确认，就直接查源码；若缺失信息会影响 Skill 边界，只问一个最关键的问题。

## 源码学习顺序

先从当前工作目录定位工程和模块：

1. 查找 `.uproject`、`.uplugin`、`Source/**`、`Plugins/**`、`Config/**`。
2. 读取相关 `*.Build.cs` 和 `*.Target.cs`，确认模块依赖、Public/Private 边界和目标平台。
3. 用 `rg` 搜索用户提到的类名、函数名、模块名、配置键、GameplayTag、DataAsset 类型和调用点。
4. 同时读取头文件和实现文件，不只看声明。
5. 读取至少一个真实调用点或派生类，避免把底层工具类误写成推荐入口。
6. 若模块依赖资产或配置，读取相对路径、配置节名、类型声明和加载逻辑；不要把本机绝对路径写入 Skill。

需要写代码、解释 API 或判断模块依赖时，配合 `unreal-source-code-navigator`，优先使用它的只读脚本定位类、委托、模块和构建命令。

## 引擎源码对照

当模块涉及 UE 生命周期、反射、委托、网络、资产、编辑器、UMG、GAS、EnhancedInput、OnlineSubsystem、Mass、GameplayTags、WorldSubsystem 或 GameFeature 时，必须对照当前引擎源码或本机可用引擎头文件。

对照重点：

- 父类生命周期函数的调用顺序和重写点。
- `UCLASS`、`USTRUCT`、`UENUM`、`UFUNCTION`、`UPROPERTY` 的元数据要求。
- 所需模块、头文件和 Build.cs 依赖。
- 动态委托、原生委托、异步回调和解绑时机。
- 客户端、服务器、Listen Server、Dedicated Server、Editor、Cooked Build 的差异。
- 当前 UE 版本的 API 变动。

不要复制引擎源码大段内容到 Skill。只记录必要的结论、类名、函数名、模块名和验证依据。

## 能力抽取

把源码学习结果整理成能力图，而不是简单文件列表：

- 入口：使用者应该从哪个类、函数、接口、配置或资产开始。
- 扩展点：新增功能应该继承、实现、注册或覆盖哪里。
- 依赖：需要哪些模块依赖、include、插件启用项和配置节。
- 数据流：运行时对象如何创建、持有、查找、缓存、销毁。
- 线程和生命周期：构造、初始化、BeginPlay、激活、注销、Deinitialize、GC、编辑器保存等注意点。
- Blueprint 边界：哪些应该 BlueprintCallable、BlueprintAssignable、BlueprintType，哪些只应 C++ 使用。
- 验证：最小编译目标、编辑器命令、日志关键字、自动化测试、资产保存检查。
- 失败处理：常见报错、原因和修复步骤。

## 目标 Skill 结构

每个模块 Skill 优先使用这个结构：

```text
<skill-name>/
├── SKILL.md
├── agents/
│   └── openai.yaml
├── references/
│   └── <skill-name>.zh-CN.md
└── scripts/
    └── <optional-check-or-generator>
```

`SKILL.md` 只放：

- frontmatter：`name` 和 `description`。
- 一段说明这个 Skill 用来生成什么代码。
- 5 到 8 步核心工作流。
- `## 路由` 小节：说明它应该和哪些现有 Skill 协作，哪些场景要转给相邻 Skill。
- 何时读取哪个 reference。
- 必要的验证命令。

`references/*.zh-CN.md` 放详细规则：

- 模块能力概览。
- 推荐生成路径和类命名规则。
- C++、Blueprint、配置、资产、编辑器工具的使用模式。
- 代码片段或伪代码模板。
- Build.cs、include、反射宏、网络同步、生命周期规则。
- 常见错误和排查顺序。

只有在操作确定、重复、容易出错时才加 `scripts/`，例如检查配置、生成样板、扫描引用、验证资产保存状态。脚本默认只读，除非 Skill 明确说明会写文件。

## 路由接入规则

每次生成或更新模块 Skill，都要同时完成路由接入。路由接入不是只在最终回答里提一句，而是写入 Skill 文件或已有路由文件。

必须检查三层路由：

1. 自动触发路由：目标 Skill 的 `description` 必须覆盖用户可能说的中文、英文、类名、模块名、常见任务名和核心 UE 类型。不要只写内部缩写。
2. 目标 Skill 自身路由：目标 `SKILL.md` 必须包含 `## 路由`，说明什么时候配合源码导航、MCP、资产管理、输入、GAS、GameFeature、ReplicationGraph、UMG、Niagara 等相邻 Skill。
3. 上游路由：如果这是一个新的 UE 领域、模块族或常见开发入口，必须更新总路由文件，例如 `.agents/skills/unreal-source-code-navigator/references/routing.zh-CN.md`，让宽泛请求能找到这个 Skill。

交叉领域还要补相邻 Skill：

- 新 Skill 和 EnhancedInput / CommonInput / InputCore 有交叉，就在相关输入 Skill 的 `## 路由` 或 reference 路由规则里补互相指向。
- 新 Skill 和 GameFeatures / GameplayAbilities / ReplicationGraph 有运行时生命周期或多人复制交叉，就补对应 Skill 的路由。
- 新 Skill 涉及通过 MCP 创建、编译、保存资产，就补 MCP 工作流或资产管理 Skill 的查阅顺序。
- 新 Skill 只是某个已有领域的细分参考，不一定新增总路由大节，但目标 Skill 自身仍必须写清楚从哪个上游 Skill 进入。

路由条目要使用相对路径，例如 `../unreal-source-code-navigator/SKILL.md` 或 `../../orion-gamefeatures/SKILL.md`。不要写本机绝对路径。

路由完成后，用搜索确认新 Skill 名至少出现在：

- 目标 Skill 自己的 `SKILL.md` 或 reference。
- 一个上游路由文件，或一个相邻领域 Skill 的 `## 路由` 小节。

## 可发布清理

Skill 文件中禁止出现：

- 私有游戏名、私有项目名、内部代号、未公开目标名。公开品牌名、框架名、插件名可以保留；例如用户明确允许时，`Orion` 和 `OrionSteam` 不需要替换。
- 本机绝对路径、用户名、盘符路径、私有引擎源码路径、私有仓库路径。
- 只能在当前机器成立的编辑器、打包、部署命令。
- 未清理的日志片段、邮箱、账号、Token、机器名。

可以保留：

- 对外发布的框架模块名、插件名、类名、函数名、配置键、GameplayTag 命名约定。
- 相对路径模板，例如 `Source/<ModuleName>/Public`。
- 环境变量和占位符，例如 `<PROJECT_ROOT>`、`<ENGINE_ROOT>`、`<MODULE_NAME>`、`UE_ENGINE_ROOT`。

当本地验证命令必须使用真实路径时，只把它留在聊天或临时记录中；写入 Skill 时改成占位符或自动探测方式。
占位符必须统一使用：

- `<ProjectName>`：私有项目名或未公开游戏名。
- `<ProjectRoot>`：项目根目录。
- `<EngineRoot>`：引擎根目录。
- `<UserLocalAppData>`：用户本机 AppData 路径。
- `<BenchmarkMap>`：本机测试地图或内部关卡路径。
- `<GPU>`：本机显卡型号。
- `<ModuleName>`、`<Platform>`：模块名和平台变量。

清理范围包括 `SKILL.md`、`references/`、`scripts/`、CSV、示例命令、实验记录、故障记录和 README。不要只清理入口文档。

## 质量门禁

生成或更新 Skill 后必须检查：

1. `SKILL.md` frontmatter 只有 `name` 和 `description`，并且 description 能覆盖真实触发场景。
2. `SKILL.md` 简短，不把长篇说明堆在入口文件。
3. `SKILL.md` 必须有 `## 路由` 小节。
4. 中文细节在 `references/*.zh-CN.md`，代码/API/工具名保持英文精确拼写。
5. 没有项目名、绝对路径、用户名、本机引擎路径。
6. 文本文件是 CRLF。
7. `quick_validate.py` 通过。
8. 可发布扫描通过，并启用 `-RequireRouting`。
9. 如果有脚本，至少运行一个代表性命令确认可执行。

建议在目标 Skill 完成后运行：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-framework-skill-authoring\scripts\check-skill-portability.ps1 -Path .agents\skills\<skill-name> -BannedLiteral "<GAME_OR_PROJECT_NAME>" -CheckCRLF -RequireRouting
```

## 常见问题沉淀

当一次实现里出现“旧方法不通，换成新方法才通”的情况，不要只在最终回答里描述。把它写入相关 Skill 的“常见问题”或“验证/排错”小节：

- 现象：具体报错、日志关键字或失败行为。
- 原因：模块依赖、生命周期、资产保存、引擎版本差异、Cook/Editor 差异等。
- 修复：可重复执行的最小步骤。
- 验证：如何确认修复真的有效。

如果问题属于通用 Skill 生成流程，更新本 Skill；如果问题属于某个 UE 模块，更新对应模块 Skill。

### Skill 元数据生成中文失败

现象：生成 `agents/openai.yaml` 时，Python 在 Windows 默认编码下读取包含中文的 `SKILL.md` 失败，日志里出现 `UnicodeDecodeError` 和 `gbk`。

原因：脚本按系统默认文本编码读取文件，而中文 Skill 通常使用 UTF-8 内容。

修复：运行 skill-creator 脚本时显式启用 UTF-8 模式：

```powershell
python -X utf8 <SKILL_CREATOR_ROOT>\scripts\generate_openai_yaml.py .agents\skills\<skill-name> --interface display_name="<DISPLAY_NAME>" --interface short_description="<SHORT_DESCRIPTION>" --interface default_prompt="Use $<skill-name> to ..."
```

验证：命令输出 `[OK] Created agents/openai.yaml`，并且后续 `quick_validate.py` 能通过。

### PowerShell 参数里的 `$skill-name` 被展开

现象：生成 `agents/openai.yaml` 后，`default_prompt` 里的 `$<skill-name>` 前缀丢失，只剩下后半段名称。

原因：PowerShell 双引号会把 `$name` 当变量展开。

修复：在 PowerShell 命令里用单引号包住包含 `$` 的参数，或在 `$` 前加反引号转义；如果已经生成错误，直接修正 `agents/openai.yaml`。

验证：`agents/openai.yaml` 的 `interface.default_prompt` 必须显式包含 `$<skill-name>`。

### YAML frontmatter 中带冒号的 description 解析失败

现象：运行 `generate_openai_yaml.py` 或 `quick_validate.py` 时报告 `Invalid YAML frontmatter: mapping values are not allowed here`，错误位置落在 `description` 的冒号后面。

原因：YAML frontmatter 中未加引号的 description 包含 `:`，解析器把后半段当成新的 mapping。

修复：只保留 `name` 和 `description` 字段，并把包含冒号、中文冒号、反斜杠、引号或复杂标点的 description 用双引号包起来。若文本本身包含双引号，先改写成不需要双引号的表述。

验证：重新运行 `quick_validate.py` 和 `generate_openai_yaml.py`，两者都应通过。

### quick_validate.py 不在项目 Skill 目录

现象：按项目相对路径运行 `.agents/skills/orion-framework-skill-authoring/scripts/quick_validate.py` 失败，提示找不到文件。

原因：`quick_validate.py` 属于系统 `skill-creator` Skill，不是每个项目本地 Skill Authoring 目录都自带。

修复：先定位实际脚本，再运行验证；不要把某台机器的绝对路径写进 Skill。

```powershell
$QuickValidate = Get-ChildItem "$env:USERPROFILE\.codex\skills" -Recurse -File -Filter quick_validate.py |
	Where-Object { $_.FullName -like "*skill-creator*" } |
	Select-Object -First 1 -ExpandProperty FullName
python -X utf8 $QuickValidate .agents\skills\<skill-name>
```

验证：命令输出 `Skill is valid!`，然后继续运行本 Skill 的 `check-skill-portability.ps1`。

### init_skill.py 元数据校验失败后留下半成品目录

现象：`init_skill.py` 输出已创建 Skill 目录和 `SKILL.md`，随后因为 `short_description` 长度、`default_prompt` 或其他 interface 参数不合规而失败，目录内缺少 `agents/openai.yaml` 或资源目录。

原因：初始化脚本会先创建基础文件，再生成 UI 元数据；后半段失败不会自动回滚前半段。

修复：不要删除目录重来，先检查已生成文件；补齐或重写 `SKILL.md`、`references/` 等内容后，单独运行 `generate_openai_yaml.py` 生成 `agents/openai.yaml`。

验证：确认 `SKILL.md`、`agents/openai.yaml`、必要的 `references/` 均存在，再运行 `quick_validate.py` 和 portability check。

### Windows 下 interface 中文参数生成无效 UTF-8

现象：`init_skill.py --interface short_description="中文..."` 成功创建 `agents/openai.yaml`，但后续 `apply_patch`、读取或 YAML 工具报告 `invalid utf-8 sequence`，PowerShell 输出显示为乱码。

原因：Windows 命令行参数编码、Python 默认编码和脚本写文件编码不一致，中文 interface 参数可能在进入脚本前已经损坏。

修复：`agents/openai.yaml` 的 `display_name`、`short_description`、`default_prompt` 优先使用英文 ASCII；中文说明放入 `SKILL.md` 和 `references/*.zh-CN.md`。如果文件已损坏，用 UTF-8 无 BOM 直接重写该 YAML，再运行校验。

验证：`Get-Content` 能正常显示 `agents/openai.yaml`，`quick_validate.py` 和 portability check 都通过。

### PowerShell 版本缺少新 .NET 路径 API

现象：校验脚本在某些 Windows PowerShell 环境中调用 `[System.IO.Path]::GetRelativePath` 失败。

原因：该 API 并非所有随系统安装的 .NET 运行时都提供。

修复：脚本内用“根路径前缀 + substring”的方式计算相对路径，不依赖 `GetRelativePath`。后续为 Skill 写 PowerShell 工具时，也优先使用 Windows PowerShell 5.1 可用 API。

验证：脚本可以在当前 shell 中直接运行，并输出 `OK: ... file(s) checked.`。

### PowerShell 脚本中的中文正则被乱码解析

现象：PowerShell 脚本校验 `## 路由` 这类中文标题时，明明文件里存在该标题，仍报告缺少路由小节，输出里的中文变成乱码。

原因：Windows PowerShell 可能按系统 ANSI 编码解析 UTF-8 无 BOM 脚本源码，导致脚本里的中文字面量在解析阶段已经损坏。

修复：脚本源码里的判断逻辑尽量保持 ASCII。必须匹配中文时，用 Unicode code point 组合字符串，例如 `[char]0x8DEF` 和 `[char]0x7531` 组成“路由”，再用 `[Regex]::Escape()` 生成正则。

验证：同一个 UTF-8 无 BOM 脚本可以在当前 PowerShell 中识别 `## 路由`，并通过 `-RequireRouting` 校验。

### 用户 PDF 文档读取缺少解析库

现象：用系统默认 `python` 读取用户提供的 PDF 文档时，`pdfplumber`、`pypdf` 或 `PyPDF2` 模块缺失，无法抽取文本。

原因：当前 shell 的 Python 环境不一定包含文档处理依赖；Codex 工作区可能另有打包的 Python 和 PDF 库。

修复：先调用工作区依赖发现能力，使用返回的 bundled Python 执行 PDF 抽取脚本；如果 `pdfplumber` 不可用，优先尝试 `pypdf`。

验证：脚本能打印 PDF 页数和每页文本摘要，再把抽取内容与用户说明和源码证据交叉整理进目标 Skill。
