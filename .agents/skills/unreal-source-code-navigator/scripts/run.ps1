param(
	[Parameter(Mandatory = $true, Position = 0)]
	[string]$Command,
	[Parameter(ValueFromRemainingArguments = $true)]
	[string[]]$Remaining
)

$ErrorActionPreference = "Stop"
$ScriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
$Map = @{
	"context" = "find_unreal_context.py"
	"search" = "search_unreal_symbol.py"
	"class" = "inspect_unreal_class.py"
	"module" = "inspect_unreal_module.py"
	"delegate" = "inspect_unreal_delegate.py"
	"build" = "build_command_hint.py"
}

if (-not $Map.ContainsKey($Command)) {
	Write-Error "Unknown command '$Command'. Valid commands: $($Map.Keys -join ', ')"
}

$Python = Get-Command python -ErrorAction SilentlyContinue
if (-not $Python) {
	$Python = Get-Command python3 -ErrorAction SilentlyContinue
}
if (-not $Python) {
	Write-Error "Python 3.10+ was not found on PATH."
}

& $Python.Source (Join-Path $ScriptRoot $Map[$Command]) @Remaining
