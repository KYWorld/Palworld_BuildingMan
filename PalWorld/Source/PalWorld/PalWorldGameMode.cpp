// Copyright Epic Games, Inc. All Rights Reserved.

#include "PalWorldGameMode.h"
#include "PalWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

APalWorldGameMode::APalWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
