// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"

UMyAnimInstance::UMyAnimInstance()
{

}
void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn)) {

		auto Character = Cast<AMyCharacter>(Pawn);

		if (Character) {

			IsJumping = Character->GetMovementComponent()->IsFalling();

			//Rotation = Character->GetActorRotation();
			//Velocity = Character->GetVelocity();

			Speed = Character->GetVelocity().Size();
			//Direction = this->CalculateDirection(Velocity, Rotation);

			Vertical = Character->UpDownValue;
			Horizontal = Character->LeftRightValue;
		}
	}

}