// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Miaunglishv1GameMode.h"
#include "Miaunglishv1Character.h"
#include "UObject/ConstructorHelpers.h"

AMiaunglishv1GameMode::AMiaunglishv1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
