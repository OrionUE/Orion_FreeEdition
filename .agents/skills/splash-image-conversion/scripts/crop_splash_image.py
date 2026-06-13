#!/usr/bin/env python3
# Copyright (c) 2026 Orion. All Rights Reserved.
# https://orionue.com

from __future__ import annotations

import argparse
from pathlib import Path

from PIL import Image, ImageOps


UNREAL_SPLASH_BASE_NAMES = ("Splash", "EdSplash")


def parse_args() -> argparse.Namespace:
	parser = argparse.ArgumentParser(description="Crop an image to a target size and export PNG/BMP files.")
	parser.add_argument("source", type=Path, help="Source image path.")
	parser.add_argument("--width", type=int, default=720, help="Output width in pixels.")
	parser.add_argument("--height", type=int, default=370, help="Output height in pixels.")
	parser.add_argument("--output-dir", type=Path, default=None, help="Output directory. Defaults to the source directory.")
	parser.add_argument("--base-name", default=None, help="Output base name without extension. Defaults to the source stem.")
	parser.add_argument("--force", action="store_true", help="Overwrite existing PNG/BMP outputs.")
	parser.add_argument("--replace-unreal-splash", action="store_true", help="Replace Splash/EdSplash PNG/BMP outputs and delete matching uassets.")
	return parser.parse_args()


def get_resample_filter() -> int:
	try:
		return Image.Resampling.LANCZOS
	except AttributeError:
		return Image.LANCZOS


def get_output_base_names(args: argparse.Namespace, source: Path) -> tuple[str, ...]:
	if args.replace_unreal_splash:
		return UNREAL_SPLASH_BASE_NAMES

	base_name = args.base_name if args.base_name else source.stem
	return (base_name,)


def delete_unreal_splash_uassets(output_dir: Path) -> None:
	for base_name in UNREAL_SPLASH_BASE_NAMES:
		uasset_path = output_dir / f"{base_name}.uasset"
		if uasset_path.exists():
			uasset_path.unlink()
			print(f"Deleted stale uasset: {uasset_path}")


def main() -> int:
	args = parse_args()
	source = args.source
	if not source.is_file():
		raise SystemExit(f"Source image does not exist: {source}")

	if args.width <= 0 or args.height <= 0:
		raise SystemExit("Width and height must be positive integers.")

	output_dir = args.output_dir if args.output_dir else source.parent
	output_dir.mkdir(parents=True, exist_ok=True)

	if args.replace_unreal_splash and args.base_name:
		raise SystemExit("--base-name cannot be used with --replace-unreal-splash.")

	if args.replace_unreal_splash:
		delete_unreal_splash_uassets(output_dir)

	outputs = []
	for base_name in get_output_base_names(args, source):
		outputs.append(output_dir / f"{base_name}.png")
		outputs.append(output_dir / f"{base_name}.bmp")

	if not args.force:
		existing_outputs = [str(output) for output in outputs if output.exists()]
		if existing_outputs:
			raise SystemExit("Output already exists. Pass --force to overwrite: " + ", ".join(existing_outputs))

	with Image.open(source) as image:
		image = image.convert("RGB")
		cropped = ImageOps.fit(
			image,
			(args.width, args.height),
			method=get_resample_filter(),
			centering=(0.5, 0.5))
		for output in outputs:
			if output.suffix.lower() == ".png":
				cropped.save(output, format="PNG")
			elif output.suffix.lower() == ".bmp":
				cropped.save(output, format="BMP")

	for output in outputs:
		with Image.open(output) as verify_image:
			print(f"{output} | format={verify_image.format} | size={verify_image.size} | mode={verify_image.mode}")

	if args.replace_unreal_splash:
		print("Open Unreal Editor and import/save Splash and EdSplash again so the .uasset files are regenerated.")

	return 0


if __name__ == "__main__":
	raise SystemExit(main())
