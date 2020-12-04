// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#include "Pawns/FirstPersonCharacter.h"
#include <Components/SkeletalMeshComponent.h>
#include <Components/SceneComponent.h>
#include <Camera/CameraComponent.h>


AFirstPersonCharacter::AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	GetSpringArm()->SetRelativeLocation(FVector(0.0f, 0.0f, 64.0f));
	GetSpringArm()->TargetArmLength = 0.0f;
	GetSpringArm()->bDoCollisionTest = false;

	GetCamera()->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	GetMesh()->SetupAttachment(GetCamera());
	GetMesh()->SetRelativeLocation(FVector(-0.5f, -2.5f, -155.0f));

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh0"));
	GunSocketName = TEXT("GripPoint");
	GunMesh->SetupAttachment(GetMesh(), GunSocketName );

	Shooter = CreateDefaultSubobject<USceneComponent>(TEXT("Shooter0"));
	Shooter->SetupAttachment(GetCamera());
	Shooter->SetRelativeLocation(FVector(100.0f, 25.0f, 0.0f));

}


#if WITH_EDITOR
void AFirstPersonCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (GunMesh == NULL){ return; }

	GunMesh->SetupAttachment(GetMesh(),GunSocketName);
}
#endif // WITH_EDITOR



void AFirstPersonCharacter::UpdateMeshRotation(float DeltaTime)
{
	// No need to update fps mesh 
	// the mesh is attached to the camera
}

