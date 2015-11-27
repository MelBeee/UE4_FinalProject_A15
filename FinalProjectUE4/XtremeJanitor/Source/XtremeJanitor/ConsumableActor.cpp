// Fill out your copyright notice in the Description page of Project Settings.

#include "XtremeJanitor.h"
#include "ConsumableActor.h"
//#include "SurvivalCharacter.h"

AConsumableActor::AConsumableActor()
: Super()
{
	// Valeur de d�faut, pourra �tre ajust�e dans les blueprints
	Nutrition = 25;
}

void AConsumableActor::OnUsed(APawn* InstigatorPawn)
{
	// Le son est jou� par la classe de base
	Super::OnUsed(InstigatorPawn);

	/*ASurvivalCharacter* Pawn = Cast<ASurvivalCharacter>(InstigatorPawn);
	if (Pawn)
	{
		Pawn->ConsumeFood(Nutrition);
	}*/

	// Retirer du niveau
	Destroy();
}

