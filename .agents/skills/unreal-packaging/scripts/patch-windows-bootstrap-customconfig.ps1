<#
Copyright (c) 2026 Orion. All Rights Reserved.
https://orionue.com
#>

param(
	[Parameter(Mandatory = $true)]
	[string]$BootstrapExe,

	[Parameter(Mandatory = $true)]
	[string]$ProjectName,

	[string]$CustomConfig = "Steam",

	[string]$AdditionalArguments = ""
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

if (-not (Test-Path -LiteralPath $BootstrapExe -PathType Leaf))
{
	throw "Bootstrap executable does not exist: $BootstrapExe"
}

$ResolvedBootstrapExe = (Resolve-Path -LiteralPath $BootstrapExe).Path
$BootstrapArguments = "$ProjectName -CustomConfig=$CustomConfig"
if (-not [string]::IsNullOrWhiteSpace($AdditionalArguments))
{
	$BootstrapArguments = "$BootstrapArguments $AdditionalArguments"
}

if (-not ("WinResourceUpdate" -as [type]))
{
	Add-Type -TypeDefinition @"
using System;
using System.Runtime.InteropServices;

public static class WinResourceUpdate
{
	[DllImport("kernel32.dll", SetLastError = true, CharSet = CharSet.Unicode)]
	public static extern IntPtr BeginUpdateResource(string pFileName, bool bDeleteExistingResources);

	[DllImport("kernel32.dll", SetLastError = true)]
	public static extern bool UpdateResource(IntPtr hUpdate, IntPtr lpType, IntPtr lpName, ushort wLanguage, byte[] lpData, uint cbData);

	[DllImport("kernel32.dll", SetLastError = true)]
	public static extern bool EndUpdateResource(IntPtr hUpdate, bool fDiscard);
}
"@
}

$RT_RCDATA = [IntPtr]10
$ExecArgsResourceId = [IntPtr]202
$Data = [Text.Encoding]::Unicode.GetBytes($BootstrapArguments + [char]0)

$Handle = [WinResourceUpdate]::BeginUpdateResource($ResolvedBootstrapExe, $false)
if ($Handle -eq [IntPtr]::Zero)
{
	throw "BeginUpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
}

$ShouldDiscard = $true
try
{
	if (-not [WinResourceUpdate]::UpdateResource($Handle, $RT_RCDATA, $ExecArgsResourceId, 0, $Data, [uint32]$Data.Length))
	{
		throw "UpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
	}

	$ShouldDiscard = $false
}
finally
{
	if (-not [WinResourceUpdate]::EndUpdateResource($Handle, $ShouldDiscard))
	{
		throw "EndUpdateResource failed: $([Runtime.InteropServices.Marshal]::GetLastWin32Error())"
	}
}

Write-Host "Patched bootstrap arguments: $BootstrapArguments"
