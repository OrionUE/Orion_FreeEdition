// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#if UE_SANDBOX_WITH_DIRECTORY_WATCHER

class IDirectoryWatcher;
class FDirectoryWatcherModule;

namespace UE::FileSandboxCore
{
FDirectoryWatcherModule& GetDirectoryWatcherModule();
FDirectoryWatcherModule* GetDirectoryWatcherModuleIfLoaded();
IDirectoryWatcher* GetDirectoryWatcher();
IDirectoryWatcher* GetDirectoryWatcherIfLoaded();
}

#endif