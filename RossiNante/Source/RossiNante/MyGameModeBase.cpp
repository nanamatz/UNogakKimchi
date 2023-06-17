// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include "HUDWidget.h"
#include "MyGameInstance.h"


void AMyGameModeBase::BeginPlay()
{
    GameInstance = Cast<UMyGameInstance>(GetGameInstance());
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
    if (GetWorld()->GetMapName() == GetWorld()->StreamingLevelsPrefix + "Default") {
        HUDWidget->AddToViewport();
    }
}

void AMyGameModeBase::DisableHUDWidget()
{
    if (BP_HUDWidget != nullptr) {
        HUDWidget->RemoveFromViewport();
    }
}

void AMyGameModeBase::SetUserData(int user_id)
{
    user_data.user_id = user_id;
}

bool AMyGameModeBase::SendLoginData(UserDataPacket* login_data)
{
    if (send(GameInstance->Socket, (char*)login_data, sizeof(UserDataPacket), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket(Maybe connection has failed, but current version is a test version. So Go to Default Level)\n"));
        return false;
    }
    return true;
}

bool AMyGameModeBase::RecvLoginData(UserDataPacket* recv_data)
{
    if (recv(GameInstance->Socket, (char*)recv_data, sizeof(UserDataPacket), 0) == -1) {
        return false;
    }
    return true;
}
