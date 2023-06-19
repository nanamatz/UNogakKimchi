// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include "HUDWidget.h"
#include "MenuWidget.h"
#include "StatMenuWidget.h"
#include "PlayMenuWidget.h"
#include "LoginWidget.h"
#include "MyGameInstance.h"

void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    PlayerController = GetWorld()->GetFirstPlayerController();
    GameInstance = Cast<UMyGameInstance>(GetGameInstance());

    if (GetWorld()->GetMapName() == GetWorld()->StreamingLevelsPrefix + "Login") {
        CreateLoginWidget();
        PlayerController->bShowMouseCursor = true;
    }

    CreateAllMenuWidget();
}

void AMyGameModeBase::ChangeLevel(UObject* world, FName LevelName)
{
    UGameplayStatics::OpenLevel(world, LevelName, TRAVEL_Absolute);
}

UHUDWidget* AMyGameModeBase::CreateHUDWidget() {
    if (BP_HUDWidget != nullptr) {
        HUDWidget = CreateWidget<UHUDWidget>(GetWorld(), BP_HUDWidget);
        return HUDWidget;
    }

    return nullptr;
}

void AMyGameModeBase::EnableHUDWidget()
{
    if (GetWorld()->GetMapName() == GetWorld()->StreamingLevelsPrefix + "1F_Hall" || GetWorld()->GetMapName() == GetWorld()->StreamingLevelsPrefix + "1F_Boss") {
        HUDWidget->AddToViewport();
        PlayerController->bShowMouseCursor = false;
    }
}

void AMyGameModeBase::DisableHUDWidget()
{
    if (BP_HUDWidget != nullptr) {
        HUDWidget->RemoveFromViewport();
    }
}

void AMyGameModeBase::CreateAllMenuWidget()
{
    MenuWidget = CreateWidget<UMenuWidget>(GetWorld(), BP_MenuWidget);
    PlayMenuWidget = CreateWidget<UPlayMenuWidget>(GetWorld(), BP_PlayMenuWidget);
    StatMenuWidget = CreateWidget<UStatMenuWidget>(GetWorld(), BP_StatMenuWidget);
}

void AMyGameModeBase::EnableMenuWidget()
{
    MenuWidget->AddToViewport();
    PlayMenuWidget->AddToViewport();
}

void AMyGameModeBase::DisableMenuWidget()
{
    MenuWidget->RemoveFromViewport();
    PlayMenuWidget->RemoveFromViewport();
}

void AMyGameModeBase::EnablePlayMenuWidget()
{
    PlayMenuWidget->AddToViewport();
}

void AMyGameModeBase::DisablePlayMenuWidget()
{
    PlayMenuWidget->RemoveFromViewport();
}

void AMyGameModeBase::EnableStatMenuWidget()
{
    StatMenuWidget->AddToViewport();
}

void AMyGameModeBase::DisableStatMenuWidget()
{
    StatMenuWidget->RemoveFromViewport();
}

void AMyGameModeBase::CreateLoginWidget()
{
    LoginWidget = CreateWidget<ULoginWidget>(GetWorld(), BP_LoginWidget);
    LoginWidget->AddToViewport();
}


void AMyGameModeBase::SetUserData(int user_id)
{
    user_data.user_id = user_id;
}

bool AMyGameModeBase::C2S_SendData(UserDataPacket* send_data)
{
    if (send(GameInstance->Socket, (char*)send_data, sizeof(UserDataPacket), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket(Maybe connection has failed)\n"));
        return false;
    }
    return true;
}

bool AMyGameModeBase::C2S_SendData(UserDataPacket* send_data, EPacketType packet_type)
{
    send_data->packet_type = (int)packet_type;

    if (send(GameInstance->Socket, (char*)send_data, sizeof(UserDataPacket), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket(Maybe connection has failed)\n"));
        return false;
    }
    return true;
}

bool AMyGameModeBase::S2C_RecvData(UserDataPacket* recv_data)
{
    if (recv(GameInstance->Socket, (char*)recv_data, sizeof(UserDataPacket), 0) == -1) {
        return false;
    }
    return true;
}

void AMyGameModeBase::UpdatePlayerInfo(UserDataPacket* ud)
{
    GameInstance->PlayerInfo.user_id = ud->user_id;

    strcpy(GameInstance->PlayerInfo.data1, ud->data1);
    GameInstance->PlayerInfo.level = ud->level;
    GameInstance->PlayerInfo.exp = ud->exp;
    GameInstance->PlayerInfo.statpoint = ud->statpoint;

}

int AMyGameModeBase::GetPlayerExp()
{
    return GameInstance->PlayerInfo.exp;
}

int AMyGameModeBase::GetPlayerLevel()
{
    return GameInstance->PlayerInfo.level;
}

int AMyGameModeBase::GetPlayerStatpoint()
{
    return GameInstance->PlayerInfo.statpoint;
}

UserDataPacket* AMyGameModeBase::GetPlayerInfo()
{
    return &GameInstance->PlayerInfo;
}
