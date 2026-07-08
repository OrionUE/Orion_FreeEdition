param(
	[Parameter(Mandatory=$true)]
	[string]$Source,

	[string]$Version = "149.0.6+g0d0eeb6+chromium-149.0.7827.201",

	[switch]$ProprietaryCodecsApproved
)

$ErrorActionPreference = "Stop"

if (-not $ProprietaryCodecsApproved) {
	throw "This project requires H.264/AAC. Import only a project-approved proprietary-codec CEF build, then rerun with -ProprietaryCodecsApproved."
}

$ScriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
$PluginRoot = Resolve-Path (Join-Path $ScriptRoot "..")
$SourceRoot = Resolve-Path -LiteralPath $Source

$ExpectedName = "cef_binary_${Version}_windows64"
$DistributionRoot = $SourceRoot
if ((Split-Path -Leaf $DistributionRoot.Path) -ne $ExpectedName) {
	$Candidate = Join-Path $SourceRoot.Path $ExpectedName
	if (Test-Path -LiteralPath $Candidate) {
		$DistributionRoot = Resolve-Path -LiteralPath $Candidate
	}
}

if ((Split-Path -Leaf $DistributionRoot.Path) -ne $ExpectedName) {
	throw "Source must be '$ExpectedName' or contain that directory."
}

$RequiredFiles = @(
	"include\cef_app.h",
	"include\cef_version.h",
	"Release\libcef.lib",
	"Release\libcef.dll",
	"Release\chrome_elf.dll",
	"Resources\icudtl.dat",
	"Resources\chrome_100_percent.pak",
	"Resources\chrome_200_percent.pak",
	"Resources\resources.pak",
	"Release\vk_swiftshader_icd.json"
)

foreach ($RelativePath in $RequiredFiles) {
	$FullPath = Join-Path $DistributionRoot.Path $RelativePath
	if (-not (Test-Path -LiteralPath $FullPath)) {
		throw "Missing CEF artifact: $RelativePath"
	}
}

$SnapshotCandidates = @(
	"Release\v8_context_snapshot.bin",
	"Resources\v8_context_snapshot.bin"
)

$SnapshotSource = $null
foreach ($RelativePath in $SnapshotCandidates) {
	$FullPath = Join-Path $DistributionRoot.Path $RelativePath
	if (Test-Path -LiteralPath $FullPath) {
		$SnapshotSource = $FullPath
		break
	}
}

if (-not $SnapshotSource) {
	throw "Missing CEF artifact: v8_context_snapshot.bin under Release or Resources."
}

$WrapperLib = Get-ChildItem -LiteralPath $DistributionRoot.Path -Recurse -File -Filter "libcef_dll_wrapper.lib" |
	Where-Object { $_.FullName -match "\\VS[^\\]+\\libcef_dll_wrapper\\(Release|Debug)\\libcef_dll_wrapper\.lib$" } |
	Select-Object -First 1

if (-not $WrapperLib) {
	throw "Missing prebuilt libcef_dll_wrapper.lib under a VS*/libcef_dll_wrapper/Release or Debug folder. Build the wrapper before importing."
}

$PluginThirdPartyRoot = Join-Path $PluginRoot.Path "ThirdParty"
$ThirdPartyRoot = Join-Path $PluginThirdPartyRoot "OrionCEF3"
$ThirdPartyTarget = Join-Path $ThirdPartyRoot $ExpectedName
$RuntimeTarget = Join-Path $ThirdPartyRoot "Runtime\Win64\$Version"
New-Item -ItemType Directory -Force -Path $PluginThirdPartyRoot | Out-Null
$AllowedTargets = @(
	(Resolve-Path -LiteralPath $PluginThirdPartyRoot).Path
)

function Assert-UnderAllowedRoot([string]$Path) {
	$FullPath = [System.IO.Path]::GetFullPath($Path)
	foreach ($AllowedRoot in $AllowedTargets) {
		if ($FullPath.StartsWith($AllowedRoot, [System.StringComparison]::OrdinalIgnoreCase)) {
			return
		}
	}

	throw "Refusing to delete or write outside OrionBrowser plugin roots: $FullPath"
}

New-Item -ItemType Directory -Force -Path $ThirdPartyRoot | Out-Null
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $RuntimeTarget) | Out-Null

Assert-UnderAllowedRoot $ThirdPartyTarget
Assert-UnderAllowedRoot $RuntimeTarget

if (Test-Path -LiteralPath $ThirdPartyTarget) {
	Remove-Item -LiteralPath $ThirdPartyTarget -Recurse -Force
}

if (Test-Path -LiteralPath $RuntimeTarget) {
	Remove-Item -LiteralPath $RuntimeTarget -Recurse -Force
}

Copy-Item -LiteralPath $DistributionRoot.Path -Destination $ThirdPartyTarget -Recurse
New-Item -ItemType Directory -Force -Path $RuntimeTarget | Out-Null

$RuntimeFiles = @(
	"chrome_elf.dll",
	"d3dcompiler_47.dll",
	"dxcompiler.dll",
	"dxil.dll",
	"libcef.dll",
	"libEGL.dll",
	"libGLESv2.dll",
	"vk_swiftshader.dll",
	"vk_swiftshader_icd.json",
	"vulkan-1.dll"
)

foreach ($File in $RuntimeFiles) {
	Copy-Item -LiteralPath (Join-Path $DistributionRoot.Path "Release\$File") -Destination (Join-Path $RuntimeTarget $File)
}

Copy-Item -LiteralPath $SnapshotSource -Destination (Join-Path $RuntimeTarget "v8_context_snapshot.bin")
Copy-Item -Path (Join-Path $DistributionRoot.Path "Resources\*") -Destination $RuntimeTarget -Recurse

$ManifestRoot = Join-Path (Split-Path -Parent (Split-Path -Parent $PluginRoot.Path)) "Saved\OrionUE\OrionBrowser"
New-Item -ItemType Directory -Force -Path $ManifestRoot | Out-Null

$Manifest = [ordered]@{
	version = $Version
	source = $DistributionRoot.Path
	third_party_target = $ThirdPartyTarget
	runtime_target = $RuntimeTarget
	proprietary_codecs_approved = $true
	imported_at_utc = [DateTime]::UtcNow.ToString("o")
}

$Json = $Manifest | ConvertTo-Json -Depth 4
$Encoding = New-Object System.Text.UTF8Encoding($false)
[System.IO.File]::WriteAllText((Join-Path $ManifestRoot "cef-import-manifest.json"), $Json + [Environment]::NewLine, $Encoding)

$Json
