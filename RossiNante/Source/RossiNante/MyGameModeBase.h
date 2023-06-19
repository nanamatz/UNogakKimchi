// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <winsock2.h>
#include "MyGameModeBase.generated.h"

/**
 *
 */
enum class EPacketType : int8
{
	X, C2S_LOGIN, C2S_MOVE, C2S_LOGOUT, C2S_LATENCY, S2C_LOGIN_SUCCESS, S2C_LOGIN_FAIL, S2C_LATENCY, S2C_LOGOUT_OK, S2C_NEAR_PLAYER, S2C_UPGRADE_SUCCESS, S2C_UPGRADE_FAIL, C2S_UPGRADE1
};

struct UserDataPacket
{
	int packet_type = 0;
	int user_id = 0;
	char data1[20];
	char data2[20];
	int level = 1;
	int exp = 0;
	int statpoint = 0;
	int attack_upgrade = 0;
};

UCLASS()
class ROSSINANTE_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	void SetUserData(int user_id);
	void ChangeLevel(UObject* world, FName LevelName);

	void EnableHUDWidget();		// HUDWidget 难扁
	void DisableHUDWidget();	// HUDWidget 掺扁
	class UHUDWidget* CreateHUDWidget();		// HUDWidget 积己

	void CreateAllMenuWidget();	// Menu Widget 葛滴 积己	
	void EnableMenuWidget();
	void DisableMenuWidget();

	void EnablePlayMenuWidget();
	void DisablePlayMenuWidget();

	void EnableStatMenuWidget();
	void DisableStatMenuWidget();

	bool C2S_SendData(UserDataPacket* send_data);
	bool C2S_SendData(UserDataPacket* send_data, EPacketType packet_type);
	bool S2C_RecvData(UserDataPacket* recv_data);

	void UpdatePlayerInfo(UserDataPacket* ud);
	void SetIsLogin();

	bool GetIsLogin();
	int GetPlayerExp();
	int GetPlayerLevel();
	int GetPlayerStatpoint();
	int GetPlayerAttackUpgrade();
	UserDataPacket* GetPlayerInfo();

	SOCKET Socket;
	UserDataPacket user_data;

	UPROPERTY()
		class UHUDWidget* HUDWidget;
	UPROPERTY()
		class ULoginWidget* LoginWidget;
	UPROPERTY()
		class UMenuWidget* MenuWidget;
	UPROPERTY()
		class UPlayMenuWidget* PlayMenuWidget;
	UPROPERTY()
		class UStatMenuWidget* StatMenuWidget;

private:
	class UMyGameInstance* GameInstance;

	APlayerController* PlayerController;

	void CreateLoginWidget();	// Login Widget Create and Add To Viewport

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UHUDWidget> BP_HUDWidget;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class ULoginWidget> BP_LoginWidget;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UMenuWidget> BP_MenuWidget;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UPlayMenuWidget> BP_PlayMenuWidget;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UStatMenuWidget> BP_StatMenuWidget;

protected:
	virtual void BeginPlay() override;

};
