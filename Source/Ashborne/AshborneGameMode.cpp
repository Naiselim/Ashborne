// Copyright Epic Games, Inc. All Rights Reserved.

#include "AshborneGameMode.h"
#include "AshborneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAshborneGameMode::AAshborneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
