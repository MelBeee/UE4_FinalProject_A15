// Fill out your copyright notice in the Description page of Project Settings.

#include "XtremeJanitor.h"
#include "ObjectSpawnPoint.h"

void AObjectSpawnPoint::spawnCollectibleObject(AActor* Owner, APawn* Instigator, bool bNoCollisionFail)
{
	// Essayer de tirer un projectile
	if (ObjectClass != NULL)
	{
		// MuzzleOffset est dans l'espace caméra, il faut le transformer dans l'espace monde
		FVector const SpawnPointLocation = this->GetActorLocation();
		FRotator const SpawnPointRotation;

		UWorld* const World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParams;

			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			// Faire apparaître le projectile à la distance

			AConsumableActor* const ObjectToSpawn = World->SpawnActor<AConsumableActor>(ObjectClass,
																						SpawnPointLocation, SpawnPointRotation, SpawnParams);
		}
	}
}





