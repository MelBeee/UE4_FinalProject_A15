// Fill out your copyright notice in the Description page of Project Settings.

#include "XtremeJanitor.h"
#include "ObjectSpawnPoint.h"

void AObjectSpawnPoint::spawnCollectibleObject(AActor* Owner=NULL, APawn* Instigator = NULL, bool bNoCollisionFail = false)
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> ItemBlueprint(TEXT("/Game/StarterContent/Blueprints/ClefUSB.ClefUSB"));
	GetWorld()->SpawnActor((UClass*)ItemBlueprint.Object->GeneratedClass, &Instigator->GetActorLocation());
}





