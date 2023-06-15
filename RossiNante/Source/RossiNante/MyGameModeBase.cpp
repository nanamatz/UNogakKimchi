// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include <winsock2.h>
#include <ws2tcpip.h>


AMyGameModeBase::AMyGameModeBase() {
    static ConstructorHelpers::FClassFinder<AMyCharacter> PlayerCharacterBPClass(TEXT("/Game/Blueprints/BP_Character"));

    AMyGameModeBase::ConnectToServer();

}

SOCKET AMyGameModeBase::getSocket()
{
    if (Socket == NULL) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! Socket NULL in getSocket\n"));
        return NULL;
    }
    return Socket;
}

void AMyGameModeBase::ConnectToServer()
{
    // 소켓 초기화에 필요한 정보를 담고 있는 구조체
    WSADATA wsaData;

    // TCP 연결을 수행할 서버 IP와 포트 번호 설정
    char* ServerIP = "52.79.202.2";
    int32 Port = 8050;

    // wsaData 초기화
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        UE_LOG(LogTemp, Warning, TEXT("WSAStartup failed\n"));
    }

    // 서버 설정
    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(Port);
    inet_pton(AF_INET, ServerIP, &serverAddr.sin_addr);

    // 소켓 초기화
    Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (Socket == INVALID_SOCKET) {
        WSACleanup();
        UE_LOG(LogTemp, Warning, TEXT("SOCKET INIT FAILED\n"));
    }

    // 연결 시도
    if (connect(Socket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        closesocket(Socket);
        WSACleanup();
        UE_LOG(LogTemp, Warning, TEXT("CONNECT FAILED\n"));
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("CONNECT SUCCESS\n"));
    }
}

void AMyGameModeBase::SetUserData(int user_id)
{
    user_data.user_id = user_id;
}
