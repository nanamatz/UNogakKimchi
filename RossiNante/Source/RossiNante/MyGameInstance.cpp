// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "UObject/ConstructorHelpers.h"
UMyGameInstance::UMyGameInstance() 
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DATA(TEXT("DataTable'/Game/Data/StatTable.StatTable'"));
	MyStats = DATA.Object;

}
void UMyGameInstance::Init()
{
	Super::Init();

}

FMyCharacterData* UMyGameInstance::GetStatData(int32 Level)
{
	return 	MyStats->FindRow<FMyCharacterData>(*FString::FromInt(Level), TEXT(""));

}
