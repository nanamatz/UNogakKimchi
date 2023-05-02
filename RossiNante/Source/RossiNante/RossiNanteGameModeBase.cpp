// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "RossiNanteGameModeBase.h"
#include "MyCharacter.h"

ARossiNanteGameModeBase::ARossiNanteGameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
}
