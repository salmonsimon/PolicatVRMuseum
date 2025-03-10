// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/MuseumRigComponent.h"

UMuseumRigComponent::UMuseumRigComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UMuseumRigComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UMuseumRigComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

