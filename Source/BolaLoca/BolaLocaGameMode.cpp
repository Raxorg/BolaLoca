// Copyright Epic Games, Inc. All Rights Reserved.

#include "BolaLocaGameMode.h"
#include "BolaLocaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABolaLocaGameMode::ABolaLocaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
