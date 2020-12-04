// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#include "CustomGravityPlugin.h"





#define LOCTEXT_NAMESPACE "FCustomGravityPluginModule"

void FCustomGravityPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCustomGravityPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCustomGravityPluginModule, CustomGravityPlugin)