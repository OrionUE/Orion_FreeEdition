/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ApplyFrontendPerfSettingsAction.h"

#include "Settings/User/OrionSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ApplyFrontendPerfSettingsAction)

/**
 * Game user settings (and engine performance/scalability settings they drive)
 * are global, so there's no point in tracking this per world for multi-player PIE:
 * we just apply it if any PIE world is in the menu.
 * 游戏设置及扩展设置是全局的，因此在多人PIE中追踪每个世界是没有意义的
 *
 * However, by default we won't apply front-end performance stuff in the editor
 * unless the developer setting ApplyFrontEndPerformanceOptionsInPIE is enabled
 * 在默认情况下，不会在编辑器中应用前端的游戏设置，除非启用 @link bApplyFrontEndPerformanceOptionsInPIE
 */
int32 UApplyFrontendPerfSettingsAction::ApplicationCounter = 0;

void UApplyFrontendPerfSettingsAction::OnGameFeatureActivating(FGameFeatureActivatingContext& Context)
{
	ApplicationCounter++;
	if (ApplicationCounter == 1)
	{
		UOrionSettingsLocal::Get()->SetShouldUseFrontendPerformanceSettings(true);
	}
}

void UApplyFrontendPerfSettingsAction::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	ApplicationCounter--;
	check(ApplicationCounter >= 0);

	if (ApplicationCounter == 0)
	{
		UOrionSettingsLocal::Get()->SetShouldUseFrontendPerformanceSettings(false);
	}
}
