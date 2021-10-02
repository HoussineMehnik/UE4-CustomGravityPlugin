//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "GameFramework/Actor.h"
#include "CustomPhysicsActor.generated.h"

class UStaticMeshComponent;
class UCustomGravityComponent;

UCLASS()
class  CUSTOMGRAVITYPLUGIN_API ACustomPhysicsActor : public AActor
{
	GENERATED_BODY()

public:
		/**
		* Default UObject constructor.
		*/
		ACustomPhysicsActor(const FObjectInitializer& ObjectInitializer);


private:


	/** StaticMesh Component*/
	UPROPERTY(Category = "CustomPhysicsActor", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* MeshComponent;

	/** Gravity Component */
	UPROPERTY(Category = "CustomPhysicsActor", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCustomGravityComponent* GravityComponent;


public:

	/** Returns StaticMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return MeshComponent; }

	/** Returns GravityComponent subobject **/
	FORCEINLINE class UCustomGravityComponent* GetGravityComponent() const { return GravityComponent; }

};