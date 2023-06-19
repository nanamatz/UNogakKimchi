// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/DataTable.h"
#include "MyGameModeBase.h"
#include "MyGameInstance.generated.h"

USTRUCT()
struct FMyCharacterData : public FTableRowBase 
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 Level;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 Attack;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 MaxHp;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 RequireExp;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 AttackUpgrade;
};
/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
		UMyGameInstance();
		virtual void Init() override;
		
		UserDataPacket PlayerInfo;
	
		SOCKET Socket;
		SOCKET GetSocket();

		FMyCharacterData* GetStatData(int32 Level);
		void SetIsLogin();
		bool GetIsLogin();

private:
	UPROPERTY()
		class UDataTable* MyStats;

	AMyGameModeBase* GameMode;
	
	bool isLogin;

	void Init_PlayerInfo();
	void ConnectToServer();
};
