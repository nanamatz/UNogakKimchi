// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <winsock2.h>
#include "RossiNanteGameModeBase.generated.h"

/**
 * 
 */

enum class EPacketType : int8
{
	X, C2S_LOGIN, C2S_MOVE, C2S_LOGOUT, C2S_LATENCY, S2C_LOGIN_SUCCESS, S2C_LOGIN_FAIL
};

struct UserDataPacket
{
	int packet_type = 0;
	int user_id = 0;
	char data1[20];
	char data2[20];
};

UCLASS()
class ROSSINANTE_API ARossiNanteGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public :
	ARossiNanteGameModeBase();
	void SetUserData(int user_id);
	SOCKET getSocket();
	SOCKET Socket;
	UserDataPacket user_data;

private:
	void ConnectToServer();
	
};

