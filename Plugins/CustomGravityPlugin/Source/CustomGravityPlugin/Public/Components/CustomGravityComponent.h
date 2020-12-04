// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//




#pragma once

#include "Components/ActorComponent.h"
#include "Objects/CustomGravityManager.h"
#include "CustomGravityComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CUSTOMGRAVITYPLUGIN_API UCustomGravityComponent : public UActorComponent
{
	GENERATED_BODY()

public:


	/**
	* Default UObject constructor.
	*/
	UCustomGravityComponent();

	//Begin UActorComponent Interface
	virtual void InitializeComponent() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//End UActorComponent Interface

	/**Change Gravity Scale*/
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		void SetGravityScale(float NewGravityScale);

	/**Change GravityType*/
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		void SetGravityType(EGravityType::Type NewGravityType);	

	/**Update Current Planet Reference*/
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		void SetCurrentPlanet(class APlanetActor* NewPlanet);

	/**Set Current Planet Reference to null*/
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		void ClearCurrentPlanet();

	/**Update the Component updated by this component*/
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
	void SetUpdatedComponent(UPrimitiveComponent* NewUpdatedComponent);

	/** Return PrimitiveComponent we are Updating. */
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
	UPrimitiveComponent* GetUpdatedComponent() const;

	/** Return APlanetActor reference. */
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
	class APlanetActor* GetCurrentPlanet() const;

	/** Return current component gravity direction. */
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		FVector GetCurrentGravityDirection() const;

	/** Return current component gravity power. */
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		float GetCurrentGravityPower() const;

	/** Return current component gravity information. */
	UFUNCTION(BlueprintCallable, Category = "Physics|Components|CustomGravity")
		FGravityInfo GetCurrentGravityInfo() const;

protected:

	/** Custom gravity scale. Gravity is multiplied by this amount for the component owner. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Custom Gravity Component (General Settings)")
		float GravityScale;

	/** Custom gravity Information.
	* Gravity Power.
	* Gravity Direction.
	* Force Mode.
	* ForeSubstepping.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Custom Gravity Component (General Settings)")
		FGravityInfo CustomGravityInfo;

	/** Gravity Type.
	* Default Gravity.
	* Point Gravity.
	* Custom Gravity.
	* Global Custom Gravity.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Custom Gravity Component (General Settings)")
		TEnumAsByte<EGravityType::Type> GravityType;

	/**Planet Actor Reference .*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Custom Gravity Component (General Settings)")
	class APlanetActor* PlanetActor;

	
	/**The Updated Collision Component*/
	UPrimitiveComponent* UpdatedComponent;

	/**Current Gravity Information : Updated each frame.*/
	FGravityInfo CurrentGravityInfo;


};
