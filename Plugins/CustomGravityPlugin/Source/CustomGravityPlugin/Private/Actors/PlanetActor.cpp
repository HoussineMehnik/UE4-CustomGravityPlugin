// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#include "CustomGravityPluginPrivatePCH.h"

// Sets default values



APlanetActor::APlanetActor(const FObjectInitializer& Objectinititializer) :Super(Objectinititializer)
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
	RootComponent = PlanetRootComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent0"));
	MeshComponent->AttachParent = PlanetRootComponent;
	MeshComponent->SetCollisionProfileName("BlockAll");
	MeshComponent->SetStaticMesh(PlanetMesh);
	

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision0"));
	SphereCollision->AttachParent = PlanetRootComponent;
	SphereCollision->SetVisibility(true);
	SphereCollision->SetHiddenInGame(true);
	SphereCollision->SetCollisionProfileName("BlockAll");
	SphereCollision->UnregisterComponent();


	// Initialization

	CollisionType = ECollisionType::ECol_Mesh;
	SphereCollisionRaduis = 0.0f;
	PlanetMesh = nullptr;
	PlanetMeshScale = FVector(1.0f, 1.0f, 1.0f);
	ForceMode = EForceMode::EFM_Acceleration;
	GravityPower = 980.0f;
	bShouldUseStepping = true;

	bSphereCollisionIsSelected = (CollisionType == ECollisionType::ECol_Sphere);
}

void APlanetActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Initialization();
}

#if WITH_EDITOR

void APlanetActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	Initialization();
}

#endif //WITH_EDITOR


void APlanetActor::Initialization()
{
	bSphereCollisionIsSelected = (CollisionType == ECollisionType::ECol_Sphere);

	if (CollisionType == ECollisionType::ECol_Mesh)
	{
		if (SphereCollision->IsRegistered())
		{
			SphereCollision->UnregisterComponent();
		}

		MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		if (!SphereCollision->IsRegistered())
		{
			SphereCollision->RegisterComponent();
		}

		SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		SphereCollision->SetSphereRadius(SphereCollisionRaduis);
	}

	if (PlanetMesh != NULL)
	{
		MeshComponent->SetStaticMesh(PlanetMesh);
	}

	MeshComponent->SetRelativeScale3D(PlanetMeshScale);
}


FVector APlanetActor::GetGravityDirection(const FVector& TargetLocation) const
{
	return (GetActorLocation() - TargetLocation).GetSafeNormal();
}


void  APlanetActor::SetGravityPower(float NewGravity)
{
	GravityPower = NewGravity;
}



void APlanetActor::SetForceMode(EForceMode::Type newForceMode)
{
	ForceMode = newForceMode;
}

FGravityInfo APlanetActor::GetGravityinfo(const FVector& TargetLocation) const
{
	FGravityInfo GravInfo;
	GravInfo.bForceSubStepping = bShouldUseStepping;
	GravInfo.ForceMode = ForceMode;
	GravInfo.GravityPower = GravityPower;
	GravInfo.GravityDirection = GetGravityDirection(TargetLocation);

	return GravInfo;
}

