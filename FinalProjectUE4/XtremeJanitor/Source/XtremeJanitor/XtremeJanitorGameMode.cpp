// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "XtremeJanitor.h"
#include "XtremeJanitorGameMode.h"
#include "XtremeJanitorCharacter.h"

AXtremeJanitorGameMode::AXtremeJanitorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
