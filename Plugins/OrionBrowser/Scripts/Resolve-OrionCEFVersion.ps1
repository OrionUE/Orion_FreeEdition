param(
	[string]$Version = "149.0.6+g0d0eeb6+chromium-149.0.7827.201",
	[string]$Platform = "windows64",
	[string]$OutputPath = ""
)

$ErrorActionPreference = "Stop"

$IndexUrl = "https://cef-builds.spotifycdn.com/index.json"
$Index = Invoke-RestMethod -Uri $IndexUrl -UseBasicParsing

$PlatformEntry = $Index.$Platform
if (-not $PlatformEntry) {
	throw "CEF platform '$Platform' was not found in $IndexUrl."
}

$Match = $PlatformEntry.versions | Where-Object { $_.cef_version -eq $Version } | Select-Object -First 1
if (-not $Match) {
	throw "CEF version '$Version' for '$Platform' was not found in $IndexUrl."
}

$StandardFile = $Match.files | Where-Object { $_.type -eq "standard" } | Select-Object -First 1
if (-not $StandardFile) {
	throw "CEF version '$Version' for '$Platform' does not expose a standard distribution."
}

$Result = [ordered]@{
	version = $Version
	platform = $Platform
	channel = $Match.channel
	cef_version = $Match.cef_version
	chromium_version = $Match.chromium_version
	file = $StandardFile.name
	sha1 = $StandardFile.sha1
	size = $StandardFile.size
	last_modified = $StandardFile.last_modified
	url = "https://cef-builds.spotifycdn.com/$($StandardFile.name)"
	note = "Official standard CEF builds are for version/layout verification. Use Import-OrionCEF.ps1 with a project-approved proprietary-codec build for H.264/AAC."
}

$Json = $Result | ConvertTo-Json -Depth 4

if ($OutputPath) {
	$Parent = Split-Path -Parent $OutputPath
	if ($Parent) {
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}

	$Encoding = New-Object System.Text.UTF8Encoding($false)
	[System.IO.File]::WriteAllText((Resolve-Path -LiteralPath $Parent).Path + "\" + (Split-Path -Leaf $OutputPath), $Json + [Environment]::NewLine, $Encoding)
}

$Json
