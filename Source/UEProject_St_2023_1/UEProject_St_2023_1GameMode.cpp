// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEProject_St_2023_1GameMode.h"
#include "UEProject_St_2023_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUEProject_St_2023_1GameMode::AUEProject_St_2023_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
