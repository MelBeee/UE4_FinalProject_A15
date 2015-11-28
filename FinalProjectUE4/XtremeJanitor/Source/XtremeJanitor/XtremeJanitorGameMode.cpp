// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "XtremeJanitor.h"
#include "XtremeJanitorGameMode.h"
#include "XtremeJanitorCharacter.h"
#include "EngineUtils.h"
#include "ObjectSpawnPoint.h"
#include <cstdlib>

namespace
{
	const int NUMBER_OF_OBJECTS_TO_SPAWN = 10;
}

AXtremeJanitorGameMode::AXtremeJanitorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AXtremeJanitorGameMode::BeginPlay()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Code Begin Play"));

		int spawnPointCount = 0;
		int numberOfObjectsLeftToSpawn = NUMBER_OF_OBJECTS_TO_SPAWN;

		for (TActorIterator<AObjectSpawnPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
			spawnPointCount++;

		for (TActorIterator<AObjectSpawnPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			if (rand() % spawnPointCount < numberOfObjectsLeftToSpawn)
			{
				ActorItr->spawnCollectibleObject();
				numberOfObjectsLeftToSpawn--;
			}
			spawnPointCount--;
		}
	}
}


