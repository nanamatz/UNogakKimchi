// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

UCLASS()
class ROSSINANTE_API APortal : public AActor
{
	GENERATED_BODY()
protected:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FName NextLevelName;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* RootScene;

	UPROPERTY(BlueprintReadOnly, EditAnywhere,meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* PortalBox;
public:	
	// Sets default values for this actor's properties
	APortal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
