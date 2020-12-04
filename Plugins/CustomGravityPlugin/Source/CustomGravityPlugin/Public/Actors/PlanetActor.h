// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#pragma once
#include "GameFramework/Actor.h"
#include "Objects/CustomGravityManager.h"
#include "PlanetActor.generated.h"


class USphereComponent;

UENUM(BlueprintType)
enum class ECollisionType : uint8
{
	ECol_Mesh 	UMETA(DisplayName = "Mesh Collision"),
	ECol_Sphere 	UMETA(DisplayName = "Sphere Collision")
};


UCLASS()
class  CUSTOMGRAVITYPLUGIN_API APlanetActor : public AActor
{
	GENERATED_BODY()

public:


	/**
	* Default UObject constructor.
	*/
	APlanetActor(const FObjectInitializer& Objectinititializer = FObjectInitializer::Get());

	
// AActor interface
	virtual void PostInitializeComponents() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
#endif // WITH_EDITOR
// End of AActor interface


	/** Planet collision type : 
	* - Mesh Collision.
	* - Sphere Collision.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Planet Actor : General Settings")
		ECollisionType CollisionType;

	/**
	* Cannot be edited.
	* True , if CollisonType is set to "Sphere Collision".
	* False , if CollisonType is set to "Sphere Collision".
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Planet Actor : General Settings")
		bool bSphereCollisionIsSelected;

	/** Collision Sphere Radius.
	* Editable when CollisonType is set to "Sphere Collision"
	*/
	UPROPERTY(EditAnywhere, Category = "Planet Actor : General Settings", meta = (editcondition = "bSphereCollisionIsSelected"))
		float SphereCollisionRaduis;

	/**Planet Static Mesh*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Planet Actor : General Settings")
		UStaticMesh* PlanetMesh;

	/**Planet Mesh scale*/
	UPROPERTY(EditAnywhere, Category = "Planet Actor : General Settings")
		FVector PlanetMeshScale;

	/** Planet force mode : Acceleration or Force. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planet Actor : General Settings")
		 TEnumAsByte<EForceMode::Type> ForceMode;

	/** Planet gravity power. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planet Actor : General Settings")
		float GravityPower = 980.0f;

	/**If true, forces sub-stepping. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planet Actor : General Settings")
		bool bShouldUseStepping = true;

	/**Change planet gravity power. */
	UFUNCTION(BlueprintCallable, Category = "PlanetActor")
		void SetGravityPower(float NewGravity);

	/** Update planet force mode*/
	UFUNCTION(BlueprintCallable, Category = "PlanetActor")
		void SetForceMode(EForceMode::Type newForceMode);

	/**Returns a specific gravity direction based on the target location*/
	UFUNCTION(BlueprintCallable, Category = "PlanetActor")
		FVector GetGravityDirection(const FVector& TargetLocation) const;

	/** Get the current planet gravity information.
	* NB : Needs a target location. 
	*/
	UFUNCTION(BlueprintCallable, Category = "PlanetActor")
		FGravityInfo GetGravityinfo(const FVector& TargetLocation) const;



private:

	/** The root component of the planet*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	USceneComponent* PlanetRootComponent;

	/**Planet MeshComponet*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshComponent;

	/** Planet Sphere Collision. 
	* Created only when CollisonType is set to "Sphere Collision". 
	* Otherwise the component is unregistered.
	*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	USphereComponent* SphereCollision;

protected:

	virtual void Initialization();

public:
	/** Returns Ball subobject **/
	FORCEINLINE class UStaticMeshComponent* GetPlanetMesh() const { return MeshComponent; }
	/** Returns PlanetRootComponent subobject **/
	FORCEINLINE class USceneComponent* GetPlanetRootComponent() const { return PlanetRootComponent; }
	/** Returns SphereCollision subobject **/
	FORCEINLINE class USphereComponent* GetSphereCollision() const { return SphereCollision; }
};
