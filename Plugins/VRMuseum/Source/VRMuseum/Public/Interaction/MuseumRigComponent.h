// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "Rig/IsdkRayInteractionRigComponent.h"
#include "Interaction/IsdkRayInteractor.h"

#include "MuseumRigComponent.generated.h"


//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMuseumRigComponentLifecycleEvent);

UCLASS(Abstract, Blueprintable, ClassGroup = ("MuseumInteraction|Rig"), meta = (BlueprintSpawnableComponent, DisplayName = "Museum Rig Component"))
class VRMUSEUM_API UMuseumRigComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UMuseumRigComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintGetter = GetRayInteraction, EditAnywhere, Category = InteractionSDK)
	UIsdkRayInteractionRigComponent* RayInteraction{};

public:	
		
	UFUNCTION(BlueprintGetter, Category = InteractionSDK)
	UIsdkRayInteractor* GetRayInteractor() const
	{
		return RayInteraction->RayInteractor;
	}

	UFUNCTION(BlueprintGetter, Category = InteractionSDK)
	UIsdkRayInteractionRigComponent* GetRayInteraction() const
	{
		return RayInteraction;
	}
	
};
