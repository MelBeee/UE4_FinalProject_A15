// Fill out your copyright notice in the Description page of Project Settings.

#include "XtremeJanitor.h"
#include "ConsumableActor.h"
//#include "SurvivalCharacter.h"

AConsumableActor::AConsumableActor()
: Super()
{
	// Valeur de défaut, pourra être ajustée dans les blueprints
	Nutrition = 25;
}

void AConsumableActor::OnUsed(APawn* InstigatorPawn)
{
	// Le son est joué par la classe de base
	Super::OnUsed(InstigatorPawn);

	/*ASurvivalCharacter* Pawn = Cast<ASurvivalCharacter>(InstigatorPawn);
	if (Pawn)
	{
		Pawn->ConsumeFood(Nutrition);
	}*/

	// Retirer du niveau
	Destroy();
}

