// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginWidget.h"
#include "Kismet/GameplayStatics.h"
#include <string>

void ULoginWidget::OnSignInButtonClicked()
{
<<<<<<< Updated upstream
	char* InputID = TCHAR_TO_UTF8(*ID->GetText().ToString());
    
	char* InputPW = TCHAR_TO_UTF8(*PW->GetText().ToString());
    
	// 로그인 실행
    UserDataPacket login_packet;

    
=======
    char* InputID = TCHAR_TO_UTF8(*ID->GetText().ToString());

    char* InputPW = TCHAR_TO_UTF8(*PW->GetText().ToString());

    // 로그인 실행
    UserDataPacket login_packet;


>>>>>>> Stashed changes
    if (strlen((InputID)) > 20) {
        UE_LOG(LogTemp, Warning, TEXT("ID LENGTH IS TOO LONG!"));
        return;
    }
    if (strlen(InputPW) > 20) {
        UE_LOG(LogTemp, Warning, TEXT("PW LENGTH IS TOO LONG!"));
        return;
    }

    login_packet.user_id = 0;

    strcpy(login_packet.data1, InputID);
    strcpy(login_packet.data2, InputPW);

    login_packet.packet_type = (int)EPacketType::C2S_LOGIN;
    UE_LOG(LogTemp, Warning, TEXT("%d"), login_packet.packet_type);
    if (send(Socket, (char*)&login_packet, sizeof(UserDataPacket), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket\n"));
        for (int i = 0; i < 3; i++) {
            if (send(Socket, (char*)&login_packet, sizeof(UserDataPacket), 0) != -1) {
                break;
            }
        }
    }

    UserDataPacket ud;
    if (recv(Socket, (char*)&ud, sizeof(UserDataPacket), 0) == -1) {
        for (int i = 0; i < 3; i++) {
            if (recv(Socket, (char*)&ud, sizeof(UserDataPacket), 0) != -1) {
                break;
            }

        }
    }
    if (ud.packet_type == (int)EPacketType::S2C_LOGIN_SUCCESS) {
        UGameplayStatics::OpenLevel(GetWorld(), FName("Default"), TRAVEL_Absolute);
<<<<<<< Updated upstream
    } 
=======
    }
>>>>>>> Stashed changes
    else if (ud.packet_type == (int)EPacketType::S2C_LOGIN_FAIL) {
        UE_LOG(LogTemp, Warning, TEXT("ID or PW error! However you can join the game in test mode."));
        UGameplayStatics::OpenLevel(GetWorld(), FName("Default"), TRAVEL_Absolute);
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("recevied packet type error"));
    }

    GameMode->SetUserData(ud.user_id);

    // 여기까지 했고 server 코드 수정해야함 task queue에서 task보고 처리해주는 작업해주어야 함
}

void ULoginWidget::NativeConstruct()
{
    Super::NativeConstruct();

<<<<<<< Updated upstream
    UWorld* World = GetWorld(); 

    if (World)
    {
        GameMode = Cast<ARossiNanteGameModeBase>(World->GetAuthGameMode());
=======
    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
>>>>>>> Stashed changes
        if (GameMode)
        {
            Socket = GameMode->Socket;
        }
    }

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_SignIn)
    {
        BT_SignIn->OnClicked.AddDynamic(this, &ULoginWidget::OnSignInButtonClicked);
    }
}