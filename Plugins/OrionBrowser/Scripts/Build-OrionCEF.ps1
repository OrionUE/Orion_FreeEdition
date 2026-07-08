param(
	[Parameter(Mandatory=$true)]
	[string]$DownloadDir,

	[string]$Branch = "7827",

	[string]$AutomateGit = "automate-git.py"
)

$ErrorActionPreference = "Stop"

New-Item -ItemType Directory -Force -Path $DownloadDir | Out-Null

$env:GN_DEFINES = "is_official_build=true proprietary_codecs=true ffmpeg_branding=Chrome symbol_level=1"

$PythonArgs = @(
	$AutomateGit,
	"--download-dir=$DownloadDir",
	"--branch=$Branch",
	"--x64-build",
	"--no-debug-build",
	"--force-build",
	"--minimal-distrib",
	"--client-distrib"
)

Write-Host "GN_DEFINES=$env:GN_DEFINES"
Write-Host "python $($PythonArgs -join ' ')"
python @PythonArgs

Write-Host "After the build finishes, run Import-OrionCEF.ps1 against the generated cef_binary_*_windows64 distribution with -ProprietaryCodecsApproved."
