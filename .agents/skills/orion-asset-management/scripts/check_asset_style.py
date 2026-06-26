#!/usr/bin/env python3
import argparse
import re
import sys
from pathlib import PurePosixPath


VALID_NAME = re.compile(r"^[A-Za-z0-9_]+$")
PASCAL_PART = re.compile(r"^[A-Z][A-Za-z0-9]*$")

CONTENT_ROOTS = {
    "Acoustics",
    "Audio",
    "Cinematics",
    "GamePlay",
    "Movies",
    "Splash",
    "System",
    "UI",
}

BLUEPRINT_PREFIXES = (
    "BP_",
    "BPFL_",
    "BPI_",
    "BPML_",
    "WBP_",
    "ABP_",
    "TBP_",
)

COMMON_PREFIXES = BLUEPRINT_PREFIXES + (
    "A_",
    "AC_",
    "AM_",
    "AO_",
    "ATT_",
    "BB_",
    "BT_",
    "BTDecorator_",
    "BTService_",
    "BTTask_",
    "Brush_",
    "CR_",
    "Curve_",
    "DA_",
    "DT_",
    "DV_",
    "DW_",
    "EQS_",
    "FFE_",
    "FMS_",
    "Font_",
    "GA_",
    "GCN_",
    "GE_",
    "LS_",
    "M_",
    "MF_",
    "MI_",
    "Mix_",
    "MP_",
    "MPC_",
    "MSW_",
    "NE_",
    "NS_",
    "PM_",
    "PP_",
    "PS_",
    "Reverb_",
    "RT_",
    "S_",
    "SK_",
    "SKEL_",
    "Style_",
    "T_",
)

MOVIE_EXTENSIONS = {".mp4", ".bk2", ".mov"}
SPLASH_EXTENSIONS = {".png", ".bmp", ".uasset"}
SPLASH_NAMES = {"Splash", "EdSplash"}


def normalize_path(raw_path: str) -> PurePosixPath:
    path = raw_path.replace("\\", "/")
    if path.startswith("/Game/"):
        path = "Content/" + path[len("/Game/") :]
    return PurePosixPath(path)


def asset_name_from_path(path: PurePosixPath) -> str:
    name = path.name
    suffix = path.suffix
    if suffix:
        return name[: -len(suffix)]
    return name


def add_issue(issues, path, message):
    issues.append(f"{path}: {message}")


def check_path(raw_path: str):
    issues = []
    path = normalize_path(raw_path)
    parts = path.parts

    if not parts:
        add_issue(issues, raw_path, "empty path")
        return issues

    for part in parts:
        if part in {"", "."}:
            add_issue(issues, raw_path, "path contains empty or current-directory segment")
        if " " in part:
            add_issue(issues, raw_path, f"folder or asset segment contains spaces: {part}")
        if not VALID_NAME.match(part.replace(".", "_")):
            add_issue(issues, raw_path, f"segment should use ASCII letters, digits, underscore, and extension dot only: {part}")

    if len(parts) >= 2 and parts[0] == "Content":
        root = parts[1]
        if root not in CONTENT_ROOTS and root not in {"Developers", "Maps"}:
            add_issue(issues, raw_path, f"Content root should be one of {sorted(CONTENT_ROOTS)} unless this is a documented large feature set")

    if len(parts) >= 4 and parts[0] == "Plugins" and parts[1] == "GameFeatures":
        if "Content" in parts:
            content_index = parts.index("Content")
            if len(parts) > content_index + 1:
                feature_root = parts[content_index + 1]
                allowed = {"Experiences", "Game", "Player", "System", "UI"}
                if feature_root not in allowed:
                    add_issue(issues, raw_path, f"GameFeature Content child should be one of {sorted(allowed)}")

    for folder in parts[:-1]:
        if folder in {"Content", "Plugins", "GameFeatures"}:
            continue
        if not PASCAL_PART.match(folder):
            add_issue(issues, raw_path, f"folder should be PascalCase: {folder}")

    asset_name = asset_name_from_path(path)
    extension = path.suffix.lower()

    if extension in MOVIE_EXTENSIONS:
        if not (len(parts) >= 2 and parts[0] == "Content" and parts[1] == "Movies"):
            add_issue(issues, raw_path, "movie files should live under Content/Movies")
        return issues

    if len(parts) >= 2 and parts[0] == "Content" and parts[1] == "Splash":
        if extension not in SPLASH_EXTENSIONS or asset_name not in SPLASH_NAMES:
            add_issue(issues, raw_path, "Splash files should be Content/Splash/Splash.png, Splash.bmp, EdSplash.png, or EdSplash.bmp; convert other source formats before placing them here")
        return issues

    if asset_name and not VALID_NAME.match(asset_name):
        add_issue(issues, raw_path, f"asset name should use ASCII letters, digits, and underscores: {asset_name}")

    if asset_name.startswith("GA_") and str(path).startswith("Content/"):
        expected = "Content/GamePlay/AbilitySystem/Abilities"
        if not str(path).startswith(expected + "/") and str(path) != expected:
            add_issue(issues, raw_path, f"base Gameplay Ability assets should live under {expected}")

    if asset_name.startswith("WBP_") and str(path).startswith("Content/") and not str(path).startswith("Content/UI/"):
        add_issue(issues, raw_path, "Widget Blueprint assets should live under Content/UI unless they are inside a GameFeature plugin")

    if asset_name.startswith(BLUEPRINT_PREFIXES):
        return issues

    if asset_name and not asset_name.startswith(COMMON_PREFIXES):
        if not re.match(r"^[EFS][A-Z][A-Za-z0-9]*$", asset_name):
            add_issue(issues, raw_path, f"asset name should use a known prefix or documented class-specific prefix: {asset_name}")

    return issues


def main():
    parser = argparse.ArgumentParser(description="Check planned Unreal asset paths against this skill's naming and folder rules.")
    parser.add_argument("paths", nargs="+", help="Asset paths such as /Game/UI/WBP_Menu or Content/UI/WBP_Menu")
    args = parser.parse_args()

    all_issues = []
    for raw_path in args.paths:
        all_issues.extend(check_path(raw_path))

    if all_issues:
        for issue in all_issues:
            print(f"FAIL: {issue}")
        return 1

    print(f"OK: {len(args.paths)} path(s) checked.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
