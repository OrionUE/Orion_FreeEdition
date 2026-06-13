param(
	[Parameter(Mandatory=$true)]
	[string]$SourceLogo,

	[string]$ProjectRoot = "",

	[switch]$DryRun
)

$ErrorActionPreference = "Stop"

if ([string]::IsNullOrWhiteSpace($ProjectRoot))
{
	$ProjectRoot = (Resolve-Path (Join-Path $PSScriptRoot "..\..\..\..")).Path
}

$PythonCode = @'
from __future__ import annotations

import argparse
from pathlib import Path
from PIL import Image, ImageOps

if hasattr(Image, "Resampling"):
	RESAMPLE = Image.Resampling.LANCZOS
else:
	RESAMPLE = Image.LANCZOS

WINDOWS_ICO_SIZES = (
	(16, 16),
	(32, 32),
	(48, 48),
	(64, 64),
	(128, 128),
	(256, 256),
)

MAC_ICNS_SAVE_SIZES = (
	(16, 16),
	(32, 32),
	(64, 64),
	(128, 128),
	(256, 256),
	(512, 512),
	(1024, 1024),
)

MAC_ICNS_INFO_SIZES = {
	(16, 16, 2),
	(32, 32, 2),
	(128, 128, 1),
	(128, 128, 2),
	(256, 256, 1),
	(256, 256, 2),
	(512, 512, 1),
	(512, 512, 2),
}

PNG_TARGETS = (
	("Build/Linux/Application.png", 1024),
	("Build/Android/res/drawable/icon.png", 192),
	("Build/Android/res/drawable/icon_bg.png", 108),
	("Build/Android/res/drawable-hdpi/icon.png", 72),
	("Build/Android/res/drawable-ldpi/icon.png", 36),
	("Build/Android/res/drawable-mdpi/icon.png", 48),
	("Build/Android/res/drawable-xhdpi/icon.png", 96),
	("Build/Android/res/drawable-xxhdpi/logo8_small.png", 144),
	("Build/Android/res/drawable-xxxhdpi/icon.png", 192),
)

def parse_args():
	parser = argparse.ArgumentParser(description="Generate Unreal Build platform icons from one source logo.")
	parser.add_argument("--source", required=True, help="Source logo image path.")
	parser.add_argument("--project-root", required=True, help="Unreal project root.")
	parser.add_argument("--dry-run", action="store_true", help="Print target outputs without writing files.")
	return parser.parse_args()

def load_source(source_path: Path):
	with Image.open(source_path) as image:
		return ImageOps.exif_transpose(image).convert("RGBA")

def make_square(source_image, size: int):
	canvas = Image.new("RGBA", (size, size), (0, 0, 0, 0))
	contained = ImageOps.contain(source_image, (size, size), RESAMPLE)
	offset = ((size - contained.width) // 2, (size - contained.height) // 2)
	canvas.alpha_composite(contained, offset)
	return canvas

def save_png(source_image, target_path: Path, size: int, dry_run: bool):
	if dry_run:
		print(f"Would write PNG {target_path} {size}x{size}")
		return

	target_path.parent.mkdir(parents=True, exist_ok=True)
	output = make_square(source_image, size)
	try:
		output.save(target_path, format="PNG")
	finally:
		output.close()
	print(f"Wrote PNG {target_path} {size}x{size}")

def save_ico(source_image, target_path: Path, dry_run: bool):
	if dry_run:
		print(f"Would write ICO {target_path} sizes={WINDOWS_ICO_SIZES}")
		return

	target_path.parent.mkdir(parents=True, exist_ok=True)
	output = make_square(source_image, 256)
	try:
		output.save(target_path, format="ICO", sizes=WINDOWS_ICO_SIZES)
	finally:
		output.close()
	print(f"Wrote ICO {target_path}")

def save_icns(source_image, target_path: Path, dry_run: bool):
	if dry_run:
		print(f"Would write ICNS {target_path} sizes={MAC_ICNS_SAVE_SIZES}")
		return

	target_path.parent.mkdir(parents=True, exist_ok=True)
	output = make_square(source_image, 1024)
	try:
		output.save(target_path, format="ICNS", sizes=MAC_ICNS_SAVE_SIZES)
	finally:
		output.close()
	print(f"Wrote ICNS {target_path}")

def verify_png(target_path: Path, size: int):
	with Image.open(target_path) as image:
		if image.format != "PNG" or image.size != (size, size):
			raise RuntimeError(f"{target_path} expected PNG {size}x{size}, got {image.format} {image.size}")

def verify_ico(target_path: Path):
	with Image.open(target_path) as image:
		actual_sizes = sorted(image.ico.sizes())
		expected_sizes = sorted(WINDOWS_ICO_SIZES)
		if actual_sizes != expected_sizes:
			raise RuntimeError(f"{target_path} expected ICO sizes {expected_sizes}, got {actual_sizes}")

def verify_icns(target_path: Path):
	with Image.open(target_path) as image:
		actual_sizes = set(image.info.get("sizes", []))
		if image.size != (1024, 1024):
			raise RuntimeError(f"{target_path} expected max size 1024x1024, got {image.size}")
		if actual_sizes != MAC_ICNS_INFO_SIZES:
			raise RuntimeError(f"{target_path} expected ICNS sizes {sorted(MAC_ICNS_INFO_SIZES)}, got {sorted(actual_sizes)}")

def verify_outputs(project_root: Path):
	verify_ico(project_root / "Build/Windows/Application.ico")
	verify_icns(project_root / "Build/Mac/Application.icns")
	for relative_path, size in PNG_TARGETS:
		verify_png(project_root / relative_path, size)
	print("Verified all generated Build platform icons.")

def main():
	args = parse_args()
	source_path = Path(args.source)
	project_root = Path(args.project_root)

	source_image = load_source(source_path)
	try:
		if source_image.width != source_image.height:
			print(f"Source is {source_image.width}x{source_image.height}; outputs will be center-fitted into square canvases.")

		save_ico(source_image, project_root / "Build/Windows/Application.ico", args.dry_run)
		save_icns(source_image, project_root / "Build/Mac/Application.icns", args.dry_run)
		for relative_path, size in PNG_TARGETS:
			save_png(source_image, project_root / relative_path, size, args.dry_run)

		if not args.dry_run:
			verify_outputs(project_root)
	finally:
		source_image.close()

if __name__ == "__main__":
	main()
'@

$ResolvedSourceLogo = (Resolve-Path -LiteralPath $SourceLogo).Path
$ResolvedProjectRoot = (Resolve-Path -LiteralPath $ProjectRoot).Path
$PythonExecutable = if ([string]::IsNullOrWhiteSpace($env:PYTHON)) { "python" } else { $env:PYTHON }
$Arguments = @(
	"--source",
	$ResolvedSourceLogo,
	"--project-root",
	$ResolvedProjectRoot
)

if ($DryRun)
{
	$Arguments += "--dry-run"
}

$PythonCode | & $PythonExecutable "-" @Arguments
if ($LASTEXITCODE -ne 0)
{
	exit $LASTEXITCODE
}
