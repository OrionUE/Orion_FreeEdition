---
name: unreal-camera-fov-diagnostics
description: "Use when diagnosing Unreal Engine player camera, CameraComponent, PlayerCameraManager, view target, first-person viewmodel, field of view, FirstPersonFieldOfView, CalcCamera, BlueprintUpdateCamera, camera modifier, or UE upgrade regressions where the viewport framing, weapon/viewmodel FOV, aspect behavior, or runtime camera output changed."
---

# Unreal Camera FOV Diagnostics

本 Skill 用于排查 UE 角色视角、玩家相机、第一人称 viewmodel 和 FOV 在迁移或升级后发生变化的问题。

## 工作流

1. 先读取 `../unreal-source-code-navigator/SKILL.md`，定位 Pawn、Character、PlayerController、PlayerCameraManager、CameraComponent 和相关 Blueprint 资产。
2. 明确问题发生位置：编辑器预览、PIE、Standalone、打包版本、第一帧、切换视角后，还是特定设备/宽高比下。
3. 沿相机链排查：view target、`CalcCamera`、`BlueprintUpdateCamera`、CameraComponent 属性、PlayerCameraManager modifier、后处理和视口宽高比约束。
4. 对第一人称项目，单独检查 viewmodel mesh、FirstPerson FOV、weapon FOV、near clip、socket offset、动画相机和控制器旋转来源。
5. 对 UE 升级问题，不凭记忆判断；对照当前 `<EngineRoot>` 中 CameraComponent、PlayerCameraManager 和 Character/Pawn 相关源码。
6. 修复优先放在项目 Pawn/CameraComponent/PlayerCameraManager/配置层；安装版引擎只读。
7. 修改后用同一视角路径截图或运行日志验证 FOV、位置、旋转和宽高比确实恢复。

## 路由

- 角色、Pawn、CharacterMovement、viewmodel mesh 或角色组件问题，配合 `../orion-character-pawn-framework/SKILL.md`。
- PlayerController、LocalPlayer、view target、PlayerCameraManager 问题，配合 `../orion-player-framework/SKILL.md`。
- 查引擎源码、模块依赖或版本差异时，配合 `../unreal-source-code-navigator/SKILL.md`。
- 如果需要通过 MCP 读取 Blueprint CameraComponent 属性或截图验证，配合 `../orion-mcp-workflow/SKILL.md`。

## 验证

- 记录修复前后的 FOV、location、rotation、aspect ratio 和 camera owner。
- 在触发问题的同一模式下验证：PIE、Standalone 或打包版本不能互相替代。
- 对第一人称视角，同时检查世界相机和 viewmodel/武器渲染是否都符合预期。
