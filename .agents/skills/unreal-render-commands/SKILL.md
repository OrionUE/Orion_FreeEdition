---
name: unreal-render-commands
description: "Lookup Unreal Engine rendering console variables and commands, currently backed by a UE 5.8 source-derived inventory. Use for renderer CVars, console commands, RendererSettings, DefaultScalability, platform rendering flags, runtime-editable flags, startup-only flags, and feature areas such as Lumen, Nanite, shadows, ray tracing, post processing, GI, materials, RHI, TSR, VR, water, and debug visualization."
---

# Unreal Render Commands

Use this Skill to answer questions about Unreal Engine rendering console commands and CVars from the bundled CSV inventory. The current inventory baseline is UE 5.8; do not encode the engine minor version in the Skill name.

## Workflow

1. Start with `references/render-command-tables/table_index.csv` to choose the smallest table that matches the request.
2. If the user names a command or prefix, search `references/render-command-tables/all_render_commands.csv` or the matching `by_prefix/*.csv`.
3. If the user names a rendering feature, read the matching `by_feature/*.csv`.
4. If the user asks where a command can be configured, read `config/renderer_settings.csv` and `config/scalability.csv`.
5. If the user asks whether a command works after startup, read `lifecycle/runtime_editable.csv` or `lifecycle/startup_only.csv`.
6. If the user asks about platform support, read `by_platform/*.csv`.
7. If the user asks to apply, benchmark, or choose project-suitable commands, read `references/render-command-experiments/README.md` and start from `experiment_plan_all.csv`.
8. When preserving ray tracing for a reset-to-baseline experiment, also preserve Skin Cache dependencies such as `r.SkinCache.CompileShaders`, `r.SkinCache.Allow`, and project SkinCache mode settings; otherwise UE can fatal before FPS capture.
9. For automated benchmark runs, start CSV profiler with `-csvCaptureFrames`; `-csvExecCmds` only dispatches commands while CSV capture is active.
10. Prefer same-process paired A/B runs for recommendations: capture baseline, apply one command, capture test, then compare those two FPSChart windows.
11. For repeated runtime A/B batches, use `scripts/run_render_ab_tests.ps1 -TestCsv <csv>` with a metadata CSV such as `references/render-command-experiments/runtime_ab_batch_next.csv`; the script appends each completed command immediately to `experiment_results.csv` and `current_project_candidates.csv` so a later timeout does not lose prior rows.
12. Timed-out commands should be recorded in `experiment_results.csv` with `comparison_method=paired_ab_timeout_no_fpschart` and retested in isolation before adoption; `r.SSS.HalfRes=1` timed out in the current <BenchmarkMap> baseline run.
13. Runtime A/B input CSVs must include explicit `command` and `value` columns. Do not pass experiment plan/result tables directly; missing or empty `value` means the script would issue `<command>=` and the result must be treated as invalid/retest-required.
14. After a timeout, rebuild `runtime_ab_batch_next.csv` from only the unexecuted rows before resuming. Remove the timed-out row and all completed rows; otherwise a previously completed command can be rerun and produce a misleading duplicate timeout.
15. Once two FPSChart windows are captured, stop waiting for full UE process exit. UE can remain alive during shutdown/DDC maintenance after `Quit`; treat the captured FPSChart pair as valid and force-close the process if needed.
16. If a launch crashes before the first FPSChart, record `comparison_method=launch_crash_no_fpschart`, reject adoption for that command/value, and keep the launch log path in notes.
17. If repeated launches fail before FPSChart with D3D12 adapter/device errors, check `nvidia-smi`. Near-full VRAM is an environment invalidation; record `comparison_method=launch_failed_before_fpschart_environment_invalid`, keep the row for later retest, and do not treat it as CVar evidence.
18. When editing Markdown skill docs from PowerShell, do not put Markdown code spans containing paths such as `references/...` inside double-quoted strings. Use single-quoted here-strings or patch tools; otherwise PowerShell can interpret sequences like `` `r`` as carriage returns and corrupt paths.
19. If `nvidia-smi` shows the RTX GPU is present but UE logs only Microsoft Basic Render Driver plus `D3D12CreateDevice 0x8007000E`, stop runtime sweeps and move affected rows to `environment_invalid_retest_queue.csv`; retest only after D3D12 adapter availability is restored, because the CVar has not been applied yet.
20. If a no-op control such as `r.ScreenPercentage=100` shows material second-window gain, mark adjacent same-process rows `paired_ab_same_process_warmup_biased`, move them to `warmup_biased_retest_queue.csv`, and exclude them from recommendations until retested with a stronger warmup/control protocol.
21. If true no-op controls such as `r.VSync=0` produce material drift (for example beyond +/-2%), stop adopting single-launch A/B results from that protocol and keep affected rows in retest queues until an A/A/B or repeated-runs protocol is implemented.
22. When generating PowerShell scripts, never globally replace the text sequence `\t` with a Tab after writing Windows paths; path segments such as `\ThirdParty` contain `\t` and will be corrupted. Use real Tab indentation only in code templates or replace a safer placeholder such as `__TAB__`.
23. On <BenchmarkMap>, same-process A/A/B controls with `r.VSync=0` still drifted about -4.5% between A1 and A2 even with late windows. Do not use same-process single-launch windows for new adoption decisions until a multi-process repeated-pair or randomized protocol is implemented and validated.
24. For the multi-process protocol, use scripts/run_render_repeated_pair_tests.ps1; validate it first with a true no-op control such as `runtime_ab_control_vsync_noop.csv`, then retest warmup_biased_retest_queue.csv only if the no-op median delta stays within the chosen threshold.
25. Repeated-pair results with pair-delta spread above `PairSpreadThresholdPercent` are high variance, not candidates. Mark them `invalid_retest_required_repeated_pair_high_variance` and place them in `repeated_pair_high_variance_retest_queue.csv` for more pairs or an alternate map.

## Table Guide

Read `references/render-command-tables.zh-CN.md` for the Chinese lookup guide and table naming rules.

Primary tables:

- `references/render-command-tables/all_render_commands.csv`: full inventory.
- `references/render-command-tables/by_feature/*.csv`: feature tables, such as `Lumen.csv`, `Nanite.csv`, `shadows.csv`, `post_processing.csv`, `ray_tracing.csv`, `GI.csv`, `materials.csv`.
- `references/render-command-tables/by_prefix/*.csv`: prefix tables, such as `r.csv`, `sg.csv`, `rhi.csv`, `d3d12.csv`, `vulkan.csv`, `slate.csv`.
- `references/render-command-tables/config/renderer_settings.csv`: commands found in `[/Script/Engine.RendererSettings]`.
- `references/render-command-tables/config/scalability.csv`: commands found in scalability config sections.
- `references/render-command-tables/lifecycle/startup_only.csv`: commands marked as startup-only/read-only.
- `references/render-command-tables/lifecycle/runtime_editable.csv`: commands marked as runtime-editable.
- `references/render-command-tables/by_platform/*.csv`: platform or backend slices.

Experiment tables:

- `references/render-command-experiments/experiment_plan_all.csv`: every command with test method, inferred values, project override state, and result columns.
- `references/render-command-experiments/runtime_test_queue.csv`: commands that can be tested in a running editor/game session.
- `references/render-command-experiments/startup_restart_queue.csv`: commands that require startup/restart passes.
- `references/render-command-experiments/manual_review_or_excluded.csv`: commands that are diagnostics, commands, unsupported on the current Windows/DirectX baseline, or need manual values.
- `references/render-command-experiments/project_render_overrides.csv`: current project render overrides and baseline action.
- `references/render-command-experiments/experiment_results.csv`: measured FPS and quality results should be appended here.
- `references/render-command-experiments/current_project_candidates.csv`: current project-suitable render setting candidates grouped by module, adoption status, quality risk, and measured paired A/B FPS delta.
- `references/render-command-experiments/current_project_recommendation_summary.csv`: filtered effective candidates, excluding reject/invalid/retest/neutral rows.
- `references/render-command-experiments/current_project_config_draft.csv`: measured candidates bucketed for final config application review.
- `references/render-command-experiments/current_project_config_draft.ini`: documentation-only INI draft; never treat as already applied project config.
- `references/render-command-experiments/current_project_applied_config.csv`: current project Default-applied render commands after manual review and explicit exclusions.
- `references/render-command-experiments/current_project_applied_low_risk_config.csv`: low-risk measured candidates already written to project `Config/*.ini`, with validation FPSChart metadata.
- `references/render-command-experiments/current_project_render_command_guide.zh-CN.md`: Chinese index explaining every experiment table, bucket counts, applied commands, and per-bucket command lists.
- `references/render-command-experiments/removed_default_render_commands.csv`: render command lines removed from Default config, including manual exclusions and clear typo/nonexistent command cleanup.
- `references/render-command-experiments/runtime_ab_batch_next.csv`: editable input CSV for the next runtime paired A/B batch.
- `references/render-command-experiments/environment_invalid_retest_queue.csv`: retest queue for rows invalidated by pre-FPSChart D3D12/GPU memory launch failures.
- `references/render-command-experiments/repeated_pair_high_variance_retest_queue.csv`: commands whose repeated-pair samples disagree too strongly; retest with more pairs or another scene.
- scripts/run_render_ab_tests.ps1: reusable paired A/B launcher and CSV result appender for this project baseline.
- `scripts/run_render_repeated_pair_tests.ps1`: multi-process repeated-pair launcher; use for adoption decisions after no-op control validation.

## CSV Fields

- `command`: console command or CVar name.
- `kind`: `CVar` or `Command`.
- `type`: inferred parameter type.
- `default`: inferred default value when available.
- `prefix`: command prefix.
- `module`: feature category.
- `platform_text`: platform/backend tag.
- `runtime_editable`: whether it can be changed after startup.
- `startup_only`: whether it should be treated as startup-only.
- `in_default_engine`: whether it appears under `[/Script/Engine.RendererSettings]`.
- `in_scalability`: whether it appears in scalability config.
- `scalability_group`: whether source flags include scalability markers.
- `usage`: generated usage template.
- `help`: help text from source registration.
- `flags`: ECVF flags from source registration.

## 路由

- For rendering source-code implementation details, use `../unreal-rendering-framework/SKILL.md` and `../unreal-source-code-navigator/SKILL.md`.
- For project config placement, use `../unreal-project-config/SKILL.md` after finding the command in this Skill.
- For game settings UI that exposes rendering options, use `../unreal-game-settings-framework/SKILL.md` after finding the command in this Skill.
- For loading screen shader compilation behavior, use `../unreal-loading-screen-framework/SKILL.md` together with this Skill.
### RendererSettings migration audit
- `references/render-command-experiments/renderer_settings_migration_audit.csv`: Full `DefaultEngine.ini` section-placement audit generated from UE 5.8 `URendererSettings` / `RendererSettings.h`. Use it to decide which commands belong in `[/Script/Engine.RendererSettings]` and which render CVars must live in `[ConsoleVariables]`.
- Current Orion result: 66 active keys kept in `[/Script/Engine.RendererSettings]`, 161 unsupported render/graphics CVars moved to `[ConsoleVariables]`, 4 non-CVar legacy project settings left in place.

