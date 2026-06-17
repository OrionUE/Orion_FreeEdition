# CRLF 机械格式化参考

## 适用范围

本参考用于批量机械改写项目文本文件时保持 Windows CRLF、Tab 缩进和版权头格式。典型场景：

- 把行首空格缩进改为 Tab。
- 把 Tab 后的对齐空格归一为 Tab。
- 重写 `.uplugin`、`.uproject`、APL XML、PowerShell 脚本等项目文本。
- 修复批量脚本意外写出的 LF-only 文件。

第三方 SDK、引擎源码副本、二进制资源、生成目录和用户未要求的历史文件默认排除。

## 安全写回模式

PowerShell 里不要依赖 `Set-Content`、`Out-File`、默认编码或隐式换行。批量重写时使用固定模式：

```powershell
$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
$CrLf = [string]::Concat([char]13, [char]10)
$Lf = [string][char]10

$Original = [System.IO.File]::ReadAllText($Path)
$Normalized = [regex]::Replace($Original, '\r\n|\n|\r', $Lf)
$Lines = $Normalized.Split([string[]]@($Lf), [System.StringSplitOptions]::None)

# 修改 $Lines 后显式用 CRLF 拼接并写 bytes
$NewText = [string]::Join($CrLf, $Lines)
[System.IO.File]::WriteAllBytes($Path, $Utf8NoBom.GetBytes($NewText))
```

要点：

- 用 `[char]13` 和 `[char]10` 构造 CRLF，避免字符串转义或宿主差异。
- 用 `WriteAllBytes` 写入 UTF-8 bytes，避免 PowerShell 版本或默认编码改变换行。
- 写回后扫描字节：任何 `0A` 前一字节不是 `0D`，都说明存在 LF-only。

## 缩进归一规则

默认把行首缩进区里的空格按这些规则转为 Tab：

- C++、C#、PowerShell、JSON-like 描述文件：4 个空格折算 1 个 Tab，不足 4 个也折算 1 个 Tab。
- XML/APL：2 个空格折算 1 个 Tab，不足 2 个也折算 1 个 Tab。
- 保留 block comment 星号行的单空格写法，例如 ` * Copyright...` 或 `\t * @param...`。
- 文件顶部版权块必须匹配 `orion-code-style` 的 header 配置，不要把 ` *` 改成 `\t*`。
- 不要把构造函数初始化列表的续行空格机械替换成 Tab 对齐。多项初始化列表应改成 `: First()` 和 `, Next()` 的逗号起行风格。

## 可复用脚本

脚本路径：

```powershell
.agents\skills\crlf-mechanical-formatting\scripts\normalize-windows-text-format.ps1
```

脚本默认排除 `Intermediate`、`Binaries`、`Saved`、`DerivedDataCache` 这类生成目录；如需额外排除第三方 SDK，再传入 `-ExcludeRegex`。

常用调用：

```powershell
$Paths = @(
	"Plugins\SomePlugin\Source",
	"Plugins\SomePlugin\SomePlugin.uplugin"
)

& .agents\skills\crlf-mechanical-formatting\scripts\normalize-windows-text-format.ps1 `
	-Path $Paths `
	-ExcludeRegex '^Plugins/SomePlugin/Source/ThirdParty/'
```

预检不写文件：

```powershell
& .agents\skills\crlf-mechanical-formatting\scripts\normalize-windows-text-format.ps1 `
	-Path "Plugins\SomePlugin" `
	-CheckOnly
```

## 验证命令

代码文件必须跑项目代码规范脚本：

```powershell
$CodeFiles = git ls-files "Plugins/SomePlugin/Source" |
	Where-Object { $_ -match '\.(h|cpp|cs|ps1)$' -and $_ -notmatch '^Plugins/SomePlugin/Source/ThirdParty/' }

& .agents\skills\orion-code-style\scripts\check-code-style.ps1 -Path $CodeFiles
```

描述文件和 XML 额外扫 CRLF 与行首缩进：

```powershell
$Files = git ls-files "Plugins/SomePlugin" |
	Where-Object { $_ -match '\.(h|cpp|cs|uplugin|uproject|xml|ps1)$' }

foreach ($File in $Files)
{
	$Bytes = [System.IO.File]::ReadAllBytes((Resolve-Path -LiteralPath $File))
	for ($Index = 0; $Index -lt $Bytes.Length; ++$Index)
	{
		if ($Bytes[$Index] -eq 10 -and ($Index -eq 0 -or $Bytes[$Index - 1] -ne 13))
		{
			throw "$File contains LF-only line endings"
		}
	}
}
```

最后运行：

```powershell
git diff --check -- <touched-paths>
```

## 常见问题

### 写回和校验并行导致 LF-only 误判

现象：`normalize-windows-text-format.ps1` 报告已写回文件，但同时启动的字节扫描或代码规范校验仍报告 `contains LF-only line endings`。

原因：写文件和读文件校验被并行执行，校验可能读到写回前或写回中的文件状态。

修复：先等待 normalize 脚本结束，再串行运行 CRLF 字节扫描、`check-code-style.ps1` 和 `git diff --check`。不要把写回命令和验证命令放进同一次并行工具调用。

验证：串行复查时字节扫描无 LF-only，代码规范脚本通过，`git diff --check` 无输出。

### 批量格式化后校验报 LF-only

现象：`check-code-style.ps1` 报 `contains LF-only line endings`，或 `git diff --stat` 打印大量 `LF will be replaced by CRLF`。

原因：脚本写回时使用了隐式换行、默认编码，或只在字符串中看到了 CRLF 但最终写入过程丢掉了 `0D`。

修复：使用本参考的 `WriteAllBytes` 模式重写文件，并重新扫描原始字节。

验证：`check-code-style.ps1` 通过，额外 CRLF 扫描无输出。

### 顶部版权头被改成 Tab 星号

现象：`check-code-style.ps1` 报 `header does not include expected copyright header from config/default`。

原因：机械缩进把配置要求的顶部版权块：

```text
/*
 * Copyright...
 */
```

改成了：

```text
/*
	* Copyright...
	*/
```

修复：只对文件顶部第一个 `/* ... */` 块恢复 ` *` 和 ` */` 写法；不要全局替换所有注释。

验证：重新运行 `check-code-style.ps1`。

### 构造函数初始化列表被改成双 Tab 缩进

现象：原本为对齐而保留空格的初始化列表被机械改成：

```cpp
FExample::FExample()
	: FirstValue(nullptr),
		SecondValue(0),
		bIsReady(false)
{
}
```

原因：通用缩进归一脚本把 initializer list 的续行当成普通行首缩进处理，破坏了项目要求的初始化列表风格。

修复：改成逗号起行风格，不做视觉对齐：

```cpp
FExample::FExample()
	: FirstValue(nullptr)
	, SecondValue(0)
	, bIsReady(false)
{
}
```

验证：搜索初始化列表块中是否还存在 `\t\tMemberName(...)` 续行；再运行代码规范脚本。
