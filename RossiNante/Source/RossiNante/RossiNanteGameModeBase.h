// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <winsock2.h>
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
	SOCKET getSocket();
	SOCKET Socket;
private:
	void ConnectToServer();
	
};

enum class EPacketType : uint8
{
	X, C2S_LOGIN, C2S_MOVE, C2S_LOGOUT, C2S_LATENCY, S2C_LOGIN_OK
};

struct LoginDataPacket
{
	int packet_type;
	int user_id;
	char* buffer;
};

struct UserDataPacket
{
	int packet_type;
	int user_id;
	char* buffer;
};
