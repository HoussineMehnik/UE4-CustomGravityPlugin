// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .


#include "CustomGravityPluginPrivatePCH.h"

ACustomPhysicsActor::ACustomPhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh0"));
	if (MeshComponent)
	{
		RootComponent = MeshComponent;
		MeshComponent->SetCollisionProfileName("PhysicsActor");
		MeshComponent->SetSimulatePhysics(true);
		MeshComponent->SetEnableGravity(true);
		MeshComponent->SetNotifyRigidBodyCollision(true);
	}

	GravityComponent = CreateDefaultSubobject<UCustomGravityComponent>(TEXT("GravityComponent0"));
	if (GravityComponent)
	{
		GravityComponent->SetUpdatedComponent(MeshComponent);
	}

}
