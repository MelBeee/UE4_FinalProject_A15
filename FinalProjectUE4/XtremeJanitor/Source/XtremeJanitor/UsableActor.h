// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "UsableActor.generated.h"

UCLASS()
class XTREMEJANITOR_API AUsableActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUsableActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	/* Le joueur regarde l'objet*/
	virtual void OnBeginFocus();

	/* Le joueur arrête de regarder l'objet*/
	virtual void OnEndFocus();

	/* Appelé quand le joueur interagit avec l'objet */
	virtual void OnUsed(APawn* InstigatorPawn);

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		UStaticMeshComponent* MeshComp;

};
