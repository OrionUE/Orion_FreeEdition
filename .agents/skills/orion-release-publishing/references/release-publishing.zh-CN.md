# Unreal / Steam 发布依赖检查

## 核心结论

发布 Unreal Windows / Steam 构建时，先把运行库分成两类：

- Steamworks 已列出的通用运行库：优先在 Steamworks App Admin 的 `Installation > Redistributables` 勾选 Common Redistributables。
- Steamworks 未列出的运行库或项目特定安装器：放入 depot，并用 Steam InstallScript 或自己的安装器静默安装。

UE 5.8 Windows 包常见依赖里，必须重点检查：

| 依赖 | Steam 发布建议 | 说明 |
| --- | --- | --- |
| Microsoft Visual C++ Redistributable x64 | 使用 Steam Common Redistributables | Steamworks Common Redistributables 覆盖 Microsoft Visual C++，在后台勾选与构建工具链匹配的最新 VC++ redist，例如 Visual Studio 2015-2022 x64 或后台列出的等效项。 |
| Microsoft GameInput Redistributable | 使用自定义 Steam InstallScript 或安装器流程 | 不要假设 GameInput 已在 Steam Common Redistributables。Microsoft 文档要求 PC 游戏把 GameInput redistributable 纳入安装流程；开发机可用 `winget install Microsoft.GameInput`，发布包应使用 `GameInputRedist.msi`。 |
| DirectX / OpenAL / XNA / PhysX | 如果项目实际需要，优先用 Steam Common Redistributables | 只勾确实需要的组件。 |

不要把 `winget install Microsoft.GameInput` 当成 Steam 玩家机器的发布安装方案。Winget 适合开发机或运维测试，玩家机器可能没有 winget、没有网络权限或不允许命令行安装。Steam 发布应随 depot 带 `GameInputRedist.msi` 并静默运行。

## Steam Common Redistributables

在 Steamworks App Admin：

1. 打开目标 App。
2. 进入 `Installation > Redistributables`。
3. 勾选项目需要的 Common Redistributables。
4. 对 UE 5.8 Windows Steam 构建，至少检查 Microsoft Visual C++ Redistributable x64；如果后台列出 2015-2022 或更新等效项，使用与当前工具链兼容的最新项。
5. 保存并发布 Steamworks 配置。只上传 depot build 不等于发布了 redistributable 配置。

Steam 文档说明 Common Redistributables 由 Valve 维护 install scripts，并且完整列表以 App Admin 的 Redistributables tab 为准。因此回答“某个组件能否用 Common Redistributables”时，先区分：

- 文档和后台明确列出：可以勾选。
- 后台没有列出：不能假设可用，走 InstallScript 或联系 Steamworks 支持/开发者组请求加入。

## GameInput 发布处理

Microsoft GameInput 的发布处理规则：

- 开发机可以用 `winget install Microsoft.GameInput` 快速安装。
- 正式 PC 游戏发布时，应包含 GameInput redistributable。
- NuGet 包会提供 `GameInputRedist.msi`，但不会自动给目标机器安装。
- 如果直接使用下载的 MSI，推荐固定版本并记录来源；例如 `GameInputRedist.msi`。
- Steam 上不要依赖玩家手动安装，也不要只写 README；首次启动前应由 Steam install script 或安装器处理。

建议 depot 布局示例：

```text
<DepotContentRoot>/
├── <GameExeAndContent>
├── redist/
│   └── GameInput/
│       └── GameInputRedist.msi
└── installscript.vdf
```

Steam InstallScript 示例片段：

```text
"InstallScript"
{
	"Run Process"
	{
		"GameInput"
		{
			"HasRunKey"		"HKEY_LOCAL_MACHINE\\Software\\Valve\\Steam\\Apps\\<SteamAppID>"
			"Process 1"		"%WinDir%{BS}System32{BS}msiexec.exe"
			"Command 1"		"/i \"%INSTALLDIR%{BS}redist{BS}GameInput{BS}GameInputRedist.msi\" /quiet /norestart"
			"NoCleanUp"		"1"
			"Requirement_OS"
			{
				"Is64BitWindows"	"1"
			}
		}
	}
}
```

注意：

- `{BS}` 是示例占位符；写入真实 Steam VDF 时替换为转义后的 Windows 反斜杠。
- `InstallScript` 文件必须属于随构建安装的 depot 内容。
- depot build script 必须用 `InstallScript` directive 标记它，上传后 Steam 会签名脚本。
- Steam 会在用户首次启动游戏时扫描已挂载 depot 中带 install script flag 的文件并执行。
- 静默参数必须使用 `/quiet /norestart`，避免首次启动弹窗或强制重启。
- 如果安装器返回非 0，Steam 可能下次启动继续执行；必须在干净机器上验证返回码和 HasRunKey 行为。

## UE Prerequisites 与 Steam 的分工

Unreal 的 packaging prereq/bootstrapper 和 Steam Common Redistributables 是两套机制：

- 独立分发安装包：可以考虑 UE prereq/bootstrapper 或自己的安装器链。
- Steam 分发：优先让 Steamworks Common Redistributables 安装 VC++、DirectX 等通用组件；GameInput 等未列入的依赖用 Steam InstallScript。
- 不要同时让 UE bootstrapper 和 Steam Common Redistributables 重复安装同一运行库，除非有明确测试理由。
- `[GameInput] IncludeRedistFiles=True` 或 UAT staging 只能说明 redist 文件可能被带进包里，不等于 Steam 会自动安装；Steam 安装动作仍要 Common Redistributables 或 InstallScript 承担。

## 发布前验证清单

发布或给玩家测试前至少验证：

1. Steamworks App Admin 已勾选 VC++ Common Redistributable，并发布配置。
2. 如果使用 GameInput，depot 中存在 `GameInputRedist.msi`。
3. depot build script 已标记 `installscript.vdf` 为 InstallScript。
4. Steam 上传后的 manifest 中 install script 文件带对应 flag。
5. 在干净 Windows VM 或新系统镜像中安装 Steam build，首次启动前依赖安装没有交互弹窗。
6. 游戏启动日志没有缺少 VC runtime、GameInput、DirectX 或其他运行库的错误。
7. 删除 Steam CommonRedist registry subkey 或使用新 VM 复测依赖重装路径。

## 官方参考

- Steamworks Common Redistributables: `https://partner.steamgames.com/doc/features/common_redist`
- Steamworks InstallScripts: `https://partner.steamgames.com/doc/sdk/installscripts`
- Microsoft GameInput for PC and console with NuGet: `https://learn.microsoft.com/en-us/gaming/gdk/docs/features/common/input/overviews/input-nuget`
- GameInput releases: `https://github.com/microsoftconnect/GameInput/releases`
