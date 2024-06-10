// Copyright Thoughtloops Studio 2023. All Rights Reserved.
#pragma once

#include "Modules/ModuleManager.h"
#include "HttpModule.h"

class FSnapserPluginModule : public IModuleInterface {
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
