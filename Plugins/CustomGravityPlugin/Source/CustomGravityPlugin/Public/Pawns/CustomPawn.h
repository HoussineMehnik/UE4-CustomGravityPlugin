// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#pragma once
#include "GameFramework/Pawn.h"
#include "CustomPawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
class UArrowComponent;
class USceneComponent;

UCLASS()
class  CUSTOMGRAVITYPLUGIN_API ACustomPawn : public APawn
{
	GENERATED_BODY()

public:




	/**
	* Default UObject constructor.
	*/
	ACustomPawn(const FObjectInitializer& ObjectInitializer);

	// APawn interface
	virtual void PostInitializeComponents() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End of AActor interface


	virtual void UpdateMeshRotation(float DeltaTime);


	/** Minimum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Camera Settings")
		float CameraPitchMin;

	/** Maximum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Camera Settings")
		float CameraPitchMax;

	/** Handle jump action. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void Jump();

	/** Handle sprint action. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void Sprint();

	/** Handle stopping sprint action. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void StopSprint();

	/** Called to move custom pawn Forward and Backward */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void AddForwardMovementInput(float ScaleValue = 1.0f, bool bForce = false);

	/** Called to move custom pawn Left and Right */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void AddRightMovementInput(float ScaleValue = 1.0f, bool bForce = false);

	/**
	* Add input (affecting Pitch) to the SpringArm relative rotation.
	* The added value is the product of UpdateRate & ScaleValue.
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void AddCameraPitchInput(float UpdateRate = 1.0f, float ScaleValue = 0.0f);

	/**
	* Add input (affecting Yaw) to the SpringArm relative rotation.
	* The added value is the product of UpdateRate & ScaleValue.
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Input", meta = (Keywords = "AddInput"))
		void AddCameraYawInput(float UpdateRate = 1.0f, float ScaleValue = 0.0f);

	/** Called to enable CustomPawn & MovementComponent debugging. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Debuging")
		void EnableDebugging();

	/** Called to disable CustomPawn & MovementComponent debugging. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn|Debuging")
		void DisableDebugging();

	/**Returns Current Forward Movement Direction. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn")
		FVector GetCurrentForwardDirection() const;

	/**Returns Current Right Movement Direction. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|CustomPawn")
		FVector GetCurrentRightDirection() const;


private:

	/** The CapsuleComponent being used for movement collision (by CharacterMovement).*/
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* CapsuleComponent;

	/** The camera boom. */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* SpringArm;

	/** the main camera associated with this Pawn . */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* Camera;

	/** Movement component used for movement. */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCustomMovementComponent* MovementComponent;

	/** Skeletal mesh associated with this Pawn. */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PawnMesh;

	/** Gizmo used as debug arrows root component. */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USceneComponent* GizmoRootComponent;

	/**Forward Arrow Component*/
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UArrowComponent* ForwardArrowComponent;

	/**Right Arrow Component*/
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UArrowComponent* RightArrowComponent;

	/**Up Arrow Component. */
	UPROPERTY(Category = "Custom Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UArrowComponent* UpArrowComponent;

public:

	/** Returns CapsuleComponent subobject **/
	FORCEINLINE class UCapsuleComponent* GetCapsuleComponent() const{ return CapsuleComponent; }

	/** Returns PawnMesh subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh() const { return PawnMesh; }

	/** Returns SpringArm subobject **/
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }

	/** Returns Camera subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }

	/** Returns CustomMovement Component subobject **/
	FORCEINLINE class UCustomMovementComponent* GetMovementComponent() const { return  MovementComponent; }

	/** Returns Gizmo SceneComponent subobject **/
	FORCEINLINE class USceneComponent* GetGizmoRootComponent() const{ return  GizmoRootComponent; }

	/** Returns Forward ArrowComponent subobject **/
	FORCEINLINE class UArrowComponent* GetForwardArrowComponent() const{ return ForwardArrowComponent; }

	/** Returns Right ArrowComponent subobject **/
	FORCEINLINE class UArrowComponent* GetRightArrowComponent() const{ return RightArrowComponent; }

	/** Returns Up ArrowComponent subobject **/
	FORCEINLINE class UArrowComponent* GetUpArrowComponent() const{ return  UpArrowComponent; }

protected:

/**Runtime updated values. */

	/** Current Forward Movement Direction*/
	FVector CurrentForwardDirection;

	/** Current Right Movement Direction*/
	FVector CurrentRightDirection;


};