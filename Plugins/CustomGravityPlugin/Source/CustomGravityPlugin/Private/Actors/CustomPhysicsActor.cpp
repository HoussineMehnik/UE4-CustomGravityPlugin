// Copyright 2015 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


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
