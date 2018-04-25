// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Udemy_TutorialGameMode.h"
#include "Udemy_TutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemy_TutorialGameMode::AUdemy_TutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
