// Copyright Epic Games, Inc. All Rights Reserved.

#include "lecture230502GameMode.h"
#include "lecture230502Character.h"
#include "UObject/ConstructorHelpers.h"

Alecture230502GameMode::Alecture230502GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
