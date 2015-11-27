// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PickupActor.h"
#include "ConsumableActor.generated.h"

/**
*
*/
UCLASS()
class XTREMEJANITOR_API AConsumableActor : public APickupActor
{
	GENERATED_BODY()

public:
	AConsumableActor();

	// Nous consommons la nourriture, restaurant l'énergie du joueur
	void OnUsed(APawn* InstigatorPawn) override;

	// Nombre de points restaurés par la consommation de cet objet.

	UPROPERTY(EditDefaultsOnly, Category = "Consumable")
		float Nutrition;
};
