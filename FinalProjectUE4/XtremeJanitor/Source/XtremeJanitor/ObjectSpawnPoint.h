// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/TargetPoint.h"
#include "ObjectSpawnPoint.generated.h"

/**
 * 
 */
UCLASS()
class XTREMEJANITOR_API AObjectSpawnPoint : public ATargetPoint
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable, Category = "SpawnUtilities");
	void spawnCollectibleObject(AActor* Owner = NULL, APawn* Instigator = NULL, bool bNoCollisionFail = false);
	
};
