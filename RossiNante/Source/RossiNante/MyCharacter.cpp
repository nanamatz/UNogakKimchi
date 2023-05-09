// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "MyAnimInstance.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyCharacter::PostInitializeComponents()
{	
	Super::PostInitializeComponents();

	AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInstance) {
		AnimInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
		AnimInstance->OnAttackHit.AddUObject(this, &AMyCharacter::IsAttackHit);
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AMyCharacter::Attack);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMyCharacter::Jump);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMyCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &AMyCharacter::Yaw);
}

void AMyCharacter::Attack()
{
	if (IsAttacking) return;
	
	AnimInstance->PlayAttackMontage();
	
	AnimInstance->JumpToSection(AttackIndex);

	AttackIndex = (AttackIndex + 1)%2;

	IsAttacking = true;
}

void AMyCharacter::IsAttackHit()
{
	FHitResult HitResult;

	FCollisionQueryParams Params(NAME_None, false, this);

	float AttackRange = 1000.f;
	float AttackRadius = 10.f;

	bool bResult = GetWorld()->SweepSingleByChannel(OUT HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_EngineTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius),
		Params);

	FVector Vec = GetActorForwardVector() * AttackRange;
	FVector Center = GetActorLocation() + Vec * 0.5f;
	float HalfHeight = AttackRange * 0.5f;
	FQuat Rotation = FRotationMatrix::MakeFromZ(Vec).ToQuat();
	FColor DrawColor;


	if (bResult)
		DrawColor = FColor::Green;
	else
		DrawColor = FColor::Red;

	DrawDebugCapsule(GetWorld(), Center, HalfHeight, AttackRadius, Rotation, DrawColor, false, 3.f);

	if (bResult && HitResult.Actor.IsValid()) {
		UE_LOG(LogTemp, Log, TEXT("Hit Actor : %s"), *HitResult.Actor->GetName());
	}
}

void AMyCharacter::UpDown(float Value)
{

	UpDownValue = Value;
	AddMovementInput(GetActorForwardVector(), Value);
}

void AMyCharacter::LeftRight(float Value)
{

	LeftRightValue = Value;
	AddMovementInput(GetActorRightVector(), Value);
}

void AMyCharacter::Yaw(float Value)
{
	AddControllerYawInput(Value);
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	IsAttacking = false;
}

void AMyCharacter::ShowMouseCursor()
{
	AMyCharacter::bShowMouseCursor = true;
}

void AMyCharacter::HideMouseCursor()
{
	AMyCharacter::bShowMouseCursor = false;
}