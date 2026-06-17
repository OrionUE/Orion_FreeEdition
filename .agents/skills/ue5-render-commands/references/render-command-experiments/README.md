# Render Command Experiment Tables



This folder stores the project-side experiment plan for UE 5.8 rendering commands. CSV filenames are English-only.



## Tables



- `experiment_plan_all.csv`: every render command with test method, inferred safe values, config target, current project values, and result fields.

- `runtime_test_queue.csv`: commands that can be tested in a running editor/game session.

- `startup_restart_queue.csv`: startup-only or read-only commands that require a restart/config pass.

- `manual_review_or_excluded.csv`: commands that are diagnostics, console commands, unsupported on the current Windows/DirectX baseline, or need manual values.

- `project_render_overrides.csv`: current project render CVar overrides found in `Config/*.ini`; ray tracing-related overrides are marked to preserve for baseline.

- `experiment_results.csv`: append measured FPS/quality results here as tests run.

- `experiment_summary.csv`: counts by method and priority.

- `current_project_candidates.csv`: current candidate settings for this project, grouped by module, adoption status, quality risk, and measured paired A/B FPS delta.

- current_project_recommendation_summary.csv: filtered effective candidates, excluding reject/invalid/retest/neutral rows.

- current_project_config_draft.csv: measured candidates bucketed for final config application review.

- current_project_config_draft.ini: documentation-only INI draft; not loaded by the project and not a substitute for final visual review.

- current_project_applied_config.csv: current project Default-applied render commands after manual review and explicit exclusions.

- current_project_applied_low_risk_config.csv: low-risk measured candidates already written to project `Config/*.ini`, with validation FPSChart metadata.

- current_project_render_command_guide.zh-CN.md: Chinese index for all experiment tables, bucket meanings, applied commands, and per-bucket command lists.

- removed_default_render_commands.csv: render command lines removed from Default config, including manual exclusions and clear typo/nonexistent command cleanup.

- `runtime_ab_batch_next.csv`: editable input CSV for the next runtime paired A/B batch.

- nvironment_invalid_retest_queue.csv: commands whose prior attempts failed before FPSChart because D3D12/GPU memory environment was invalid; retest these after freeing VRAM before making adoption decisions.



## Baseline Rule



For the first baseline pass, preserve ray tracing-related overrides and temporarily ignore other project render overrides. Do not permanently modify project ini until a command has measured FPS and visual impact.

When ray tracing is preserved, also preserve Skin Cache dependencies (`r.SkinCache.CompileShaders`, `r.SkinCache.Allow`, and project SkinCache mode settings). Resetting `r.SkinCache.CompileShaders` to `0` can crash before FPS capture.

## Automated Benchmark Protocol

Use `-csvCaptureFrames=<frames>` together with `-csvExecCmds=<frame>:<command>`. `-csvExecCmds` does not run by itself; UE only dispatches those commands while the CSV profiler is actively capturing.

Current working baseline launch requirements:

- Preserve ray tracing and SkinCache dependencies through `RenderBaseline` config.
- Add `Plugins/OrionSteam/Source/ThirdParty/SteamLibrary/redistributable_bin/win64` to `PATH` before launching so `steam_api64.dll` delay-load succeeds.
- Pass `-slno -ngxdisable -slnoswapchainprovider` during automated render sweeps to avoid Streamline/NGX startup stalls that are unrelated to render command quality.
- Use `-csvCaptureFrames=390` and `-csvExecCmds=80:StartFPSChart,360:StopFPSChart,390:Quit` for the current <BenchmarkMap> baseline.
- Do not rely on `-csvExecCmds` without CSV capture, and do not use `-BENCHMARK` for the current comparison baseline because it changed frame flow before the FPSChart window completed.

### Preferred A/B Protocol

Single-process paired A/B is preferred for decisions because cross-process FPS drift was observed on <BenchmarkMap>. Use one launch with two FPSChart windows: baseline first, then apply one command, then test. Example:

`-csvCaptureFrames=780 -csvExecCmds=80:StartFPSChart,360:StopFPSChart,420:r.MotionBlurQuality=0,440:StartFPSChart,720:StopFPSChart,750:Quit`

Use the second FPSChart window as the command result and the first FPSChart window as that command's paired baseline. Do not recommend a command from a single-run comparison if nearby control baselines are drifting.

If a no-op control such as `r.ScreenPercentage=100` shows material second-window FPS gain, mark the neighboring same-process batch as warmup-biased, move it to warmup_biased_retest_queue.csv, and do not recommend those rows until retested with a stronger warmup/control protocol.

If true no-op controls such as `r.VSync=0` still drift materially, stop runtime sweeps for adoption decisions and implement a stronger protocol such as A/A/B or repeated randomized runs before recommending more rows.

Current protocol status: same-process A/A/B controls on <BenchmarkMap> are still unstable. `r.VSync=0` showed about -4.5% A1/A2 drift with both default and late windows. Keep `warmup_biased_retest_queue.csv` pending and use a future multi-process repeated-pair/randomized protocol before adding more settings to recommendation tables.




## Batch Script

Use `scripts/run_render_ab_tests.ps1 -TestCsv references/render-command-experiments/runtime_ab_batch_next.csv` for repeated runtime paired A/B batches.

The input CSV must include command metadata columns such as `command`, `value`, `module`, `type`, `prefix`, `in_default_engine`, `in_scalability`, `scalability_sections`, `test_method`, `safe_test_values`, `config_target`, `test_priority`, `project_setting_value`, `flags`, `quality_impact`, `help`, `candidate_module`, `candidate_priority`, and `adoption_status_hint`.

The script appends each completed command immediately to `experiment_results.csv` and `current_project_candidates.csv`; this prevents a later timeout from losing earlier completed rows. Keep PowerShell script comments in PowerShell syntax (`#` or `<# #>`), not C-style `/* */`; C-style headers fail before execution.

Once two FPSChart windows are captured, stop waiting for the full UE process exit. UE may stay alive during shutdown or DerivedDataCache maintenance after `Quit`; force-close after capture and keep the paired FPSChart result. If a launch crashes before FPSChart, record `comparison_method=launch_crash_no_fpschart` and reject that command/value until isolated repro proves it safe. If the log shows a launch/environment failure before first FPSChart and before the test CVar is applied, such as `D3D12CreateDevice 0x8007000E`, `Failed to choose a D3D12 Adapter`, or D3D12RHI `CreateCommandQueue` failure before frame 0, record it as an invalid environment launch (`launch_failed_before_fpschart_environment_invalid`) and retest later rather than treating it as command evidence. Current crash/no-FPSChart case: `r.Nanite.StaticGeometryInstanceCull=1` on <BenchmarkMap> D3D12/RHI startup.

If a command times out before FPSChart logs are generated, record it in `experiment_results.csv` with `comparison_method=paired_ab_timeout_no_fpschart` and retest it in isolation.

If repeated launches fail before FPSChart with D3D12 adapter/device errors, check `nvidia-smi` before continuing. When VRAM is near full, stop the sweep, record affected rows with `comparison_method=launch_failed_before_fpschart_environment_invalid`, and retest after freeing GPU memory; do not attribute those failures to the tested CVar. After a timeout, rebuild `runtime_ab_batch_next.csv` from only unexecuted rows before resuming; remove both completed rows and timeout rows to avoid duplicate runs. Current known timeouts include `r.SSS.HalfRes=1`, `r.Shadow.Virtual.Cache.MaxLightAgeSinceLastRequest=5`, `r.Shadow.Virtual.Clipmap.UseConservativeCulling=0`, `r.Shadow.Preshadows=0`, `r.SSR.Compute=1`, and `r.SSR.Stencil=1` on <BenchmarkMap> under the RenderBaseline launch.
## Test Method Meanings



- `runtime_scalability_candidate`: runtime-editable and appears in scalability config; highest priority.

- `runtime_renderer_setting_candidate`: runtime-editable and appears in renderer settings; high priority.

- `runtime_quality_candidate`: likely quality/performance CVar inferred from command/help text.

- `runtime_low_priority`: runtime-editable but lower expected value.

- `startup_restart_required`: startup-only/read-only command; test with restart/config pass.

- `manual_value_review`: no safe automatic value inferred.

- `manual_command_review`: console command, not a settable CVar.

- `manual_or_excluded_diagnostic`: debug/profile/dump/visualization style command.

- `platform_not_current_windows`: platform/backend not applicable to the current Windows/DirectX run.
## RendererSettings migration audit

- `renderer_settings_migration_audit.csv`: English-named CSV generated by exact matching against UE 5.8 `URendererSettings` / `RendererSettings.h`.
- Current Orion result: 66 active keys remain in `[/Script/Engine.RendererSettings]`; 161 ordinary render/graphics CVars were moved to `[ConsoleVariables]`; 4 non-CVar legacy project settings were left in `RendererSettings` to avoid changing unrelated project behavior.
- Boolean values moved into `[ConsoleVariables]` are normalized from `True` / `False` to `1` / `0`, because ConsoleVariables are parsed as CVar strings rather than UPROPERTY booleans.

