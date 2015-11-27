// Fill out your copyright notice in the Description page of Project Settings.

#include "XtremeJanitor.h"
#include "PickupActor.h"

APickupActor::APickupActor()
: Super()
{
	// Tous les objets qui peuvent �tre ramass�s son simul�s 
	// et peuvent �tre diss�min�s sur tout le niveau
	MeshComp->SetSimulatePhysics(true);

	bReplicates = true;
	bReplicateMovement = true;
}

void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	// Pourra �tre utilis� pour initialiser des valeurs
}

void APickupActor::Destroy()
{
	AActor::Destroy();
	GEngine->AddOnScreenDebugMessage(-2, 5.f, FColor::Yellow, TEXT("MEMORY DESTROYED MUAHAHA!"));
}

void APickupActor::OnUsed(APawn* InstigatorPawn)
{
	Super::OnUsed(InstigatorPawn);

	UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
}


