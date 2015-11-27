// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UsableActor.h"
#include "PickupActor.generated.h"

/**
 * 
 */
UCLASS()
class XTREMEJANITOR_API APickupActor : public AUsableActor
{
	GENERATED_BODY()
	
public:
	APickupActor();

	void Destroy();

	void BeginPlay() override;

	void OnUsed(APawn* InstigatorPawn) override;
	
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* PickupSound;
};
