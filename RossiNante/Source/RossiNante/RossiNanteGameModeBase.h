// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RossiNanteGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API ARossiNanteGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public :
	ARossiNanteGameModeBase();

private:
	void ConnectToServer();
};
