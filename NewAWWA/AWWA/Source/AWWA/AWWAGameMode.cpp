// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AWWAGameMode.h"
#include "AWWACharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "AWWAHUD.h"

AAWWAGameMode::AAWWAGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/AWWA_MainCharacter")); //TestCharacter is On

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	HUDClass = AAWWAHUD::StaticClass();
}
