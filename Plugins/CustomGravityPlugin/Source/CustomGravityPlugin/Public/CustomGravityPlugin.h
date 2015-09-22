// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#pragma once

#include "ModuleManager.h"



class FCustomGravityPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};