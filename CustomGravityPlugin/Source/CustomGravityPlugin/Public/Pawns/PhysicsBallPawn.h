// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#pragma once
#include "PhysicsBallPawn.generated.h"

UCLASS()
class  CUSTOMGRAVITYPLUGIN_API APhysicsBallPawn : public APawn
{
	GENERATED_BODY()


public:


	/**
	* Default UObject constructor.
	*/
	APhysicsBallPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ball")
		/** Indicates whether we can currently jump, use to prevent double jumping */
		bool bCanJump;

	/** Vertical impulse to apply when pressing jump */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball")
		float JumpImpulse;

	/** Torque to apply when trying to roll ball */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ball")
		float RollTorque;

	/** Minimum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		float CameraPitchMin ;

	/** Maximum view Pitch, in degrees. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		float CameraPitchMax;

	/** Called to move ball Left and Right */
	UFUNCTION(BlueprintCallable, Category = "BasePawn|Input", meta = (Keywords = "AddInput"))
		void AddRightTorque(float ScaleValue);

	/** Called to move ball forwards and backwards */
	UFUNCTION(BlueprintCallable, Category = "BasePawn|Input", meta = (Keywords = "AddInput"))
		void AddForwardTorque(float ScaleValue);

	/**
	* Add input (affecting Pitch) to the SpringArm relative rotation.
	* The added value is the product of UpdateRate & ScaleValue.
	*/
	UFUNCTION(BlueprintCallable, Category = "BasePawn|Input", meta = (Keywords = "AddInput"))
		void AddCameraPitchInput(float UpdateRate = 1.0f, float ScaleValue = 0.0f);

	/**
	* Add input (affecting Yaw) to the SpringArm relative rotation.
	* The added value is the product of UpdateRate & ScaleValue.
	*/
	UFUNCTION(BlueprintCallable, Category = "BasePawn|Input", meta = (Keywords = "AddInput"))
		void AddCameraYawInput(float UpdateRate = 1.0f, float ScaleValue = 0.0f);

	/** Handle jump action. */
	UFUNCTION(BlueprintCallable, Category = "BasePawn|Input", meta = (Keywords = "AddInput"))
		void Jump();

private:

	/** StaticMesh used for the ball */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Ball;

	/** Spring root Component*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SpringRoot;

	/** Spring arm for positioning the camera above the ball */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	/** Camera to view the ball */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	/** Gravity Component */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UCustomGravityComponent* GravityComponent;

protected:

	// APawn interface
	virtual void Tick(float DeltaSeconds) override;
	// End of APawn interface

	// AActor interface
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End of AActor interface

public:

	/** Returns Ball subobject **/
	FORCEINLINE class UStaticMeshComponent* GetBall() const { return Ball; }
	/** Returns SpringArm subobject **/
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }
	/** Returns Gravity Component subobject **/
	FORCEINLINE class UCustomGravityComponent* GetGravityComponent() const { return  GravityComponent; }
	/** Returns Ball Mass */
	FORCEINLINE float GetBallMass() const { return Ball->BodyInstance.GetBodyMass(); }
};
