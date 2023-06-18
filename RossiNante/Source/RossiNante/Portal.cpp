// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Engine/Classes/Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	PortalBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBox"));
	PortalBox->SetupAttachment(RootComponent);
	PortalBox->SetCollisionProfileName(TEXT("Portal"));
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APortal::NotifyActorBeginOverlap(AActor* OtherActor) 
{
	APawn* Pawn = Cast<APawn>(OtherActor);
	if (Pawn != nullptr) 
	{
	
		UGameplayStatics::OpenLevel(this, NextLevelName);

	}
}