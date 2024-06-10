// Copyright Thoughtloops Studio 2023. All Rights Reserved.
//
// Created: 26th July 2023
// Author: Richard Baxter, Recourse Design ltd. (richard@recourse.nz, www.recourse.nz)
//
// This is the base file for initialising the Plugin Module.
// Any Initializing needed for Snapser can be added to the Snapser Subsystem.
//
#include "SnapserPlugin.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FSnapserPluginModule"

//.................................................................................................
// StartupModule
//.................................................................................................
void FSnapserPluginModule::StartupModule() {

}

//.................................................................................................
// ShutdownModule
//.................................................................................................
void FSnapserPluginModule::ShutdownModule() {

}

//.................................................................................................
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSnapserPluginModule, SnapserPlugin)
