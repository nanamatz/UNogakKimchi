// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "MyAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "MyStatComponent.h"
#include "HUDWidget.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	PrimaryActorTick.bCanEverTick = true;
	Stat = CreateDefaultSubobject<UMyStatComponent>(TEXT("STAT"));

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());

	HUDWidget = GameMode->CreateHUDWidget();
	HUDWidget->InitHealthPercent(Stat);
	GameMode->EnableHUDWidget();

	q_waitingTime = 0;

	
	Stat->SetCurExp(GameMode->GetPlayerExp());
	Stat->SetAttackUpgrade(GameMode->GetPlayerAttackUpgrade());
	Stat->SetLevel(GameMode->GetPlayerLevel());
}

void AMyCharacter::PostInitializeComponents()
{	
	Super::PostInitializeComponents();

	AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInstance) {
		AnimInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
		AnimInstance->OnHitEnd.AddUObject(this, &AMyCharacter::OnHitEnded);
		AnimInstance->OnSkillEnd.AddUObject(this, &AMyCharacter::OnSkillCastEnded);
		AnimInstance->OnTumbleEnd.AddUObject(this, &AMyCharacter::OnTumbleEnded);
		AnimInstance->OnAttackHit.AddUObject(this, &AMyCharacter::IsAttackHit);
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	IsJumping = AnimInstance->IsJumping;

	if (q_waitingTime > 0) {
		q_waitingTime -= DeltaTime;
		HUDWidget->UpdateQSkillCoolTime(q_waitingTime, q_coolTime);
	}

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AMyCharacter::Attack);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Skill_Q"), EInputEvent::IE_Pressed, this, &AMyCharacter::Skill_Q);
	PlayerInputComponent->BindAction(TEXT("Skill_E"), EInputEvent::IE_Pressed, this, &AMyCharacter::Skill_E);
	PlayerInputComponent->BindAction(TEXT("Tumble"), EInputEvent::IE_Pressed, this, &AMyCharacter::Tumble);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMyCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &AMyCharacter::Yaw);
}

void AMyCharacter::Attack()
{
	if (IsAttacking || IsSkillCasting || IsTumbling) return;
	UE_LOG(LogTemp, Warning, TEXT("Attack Damage: %d"), Stat->GetAttackUpgrade());

	IsAttacking = true;
	AnimInstance->PlayAttackMontage();
	
	AnimInstance->JumpToSection(AttackIndex);

	AttackIndex = (AttackIndex + 1)%2;

}

void AMyCharacter::Tumble()
{
	if (IsAttacking || IsSkillCasting || IsJumping || IsTumbling) return;
	IsTumbling = true;
	AnimInstance->IsTumbling = IsTumbling;
	//AnimInstance->PlayTumbleMontage();
}

void AMyCharacter::Skill_Q()
{
	if (q_waitingTime > 0 || IsAttacking || IsSkillCasting || IsJumping || IsTumbling) return;
	IsSkillCasting = true;
	q_waitingTime = q_coolTime;
	HUDWidget->UpdateQSkillCoolTime(q_waitingTime, q_coolTime);
	AnimInstance->PlaySkill_QMontage();
}
void AMyCharacter::Skill_E()
{
	if (IsAttacking || IsSkillCasting || IsJumping ||IsTumbling)return;
	IsSkillCasting = true;
	AnimInstance->PlaySkill_EMontage();
}

void AMyCharacter::IsAttackHit()
{
	FHitResult HitResult;

	FCollisionQueryParams Params(NAME_None, false, this);

	float AttackRange = 1000.f;
	float AttackRadius = 20.f;

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

		FDamageEvent DamageEvent;
		HitResult.Actor->TakeDamage(Stat->GetAttack(), DamageEvent, GetController(), this);
	}
}

void AMyCharacter::UpDown(float Value)
{
	if (IsSkillCasting) return;
	UpDownValue = Value;
	AddMovementInput(GetActorForwardVector(), Value);
}

void AMyCharacter::LeftRight(float Value)
{
	if (IsSkillCasting) return;
	LeftRightValue = Value;
	AddMovementInput(GetActorRightVector(), Value);
}

void AMyCharacter::Yaw(float Value)
{
	AddControllerYawInput(Value);
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)//공격 델리게이트
{
	IsAttacking = false;
}

void AMyCharacter::OnTumbleEnded()//구르기 델리게이트
{
	IsTumbling = false;
	AnimInstance->IsTumbling = IsTumbling;
	UE_LOG(LogTemp, Warning, TEXT("Tumble End: %d"), IsTumbling);
}

void AMyCharacter::OnSkillCastEnded()//스킬 델리게이트
{
	IsSkillCasting = false;
}

void AMyCharacter::OnHitEnded() //피격 델리게이트
{
	AnimInstance->IsAttacked = false;
}

float AMyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Log, TEXT("%d"), AnimInstance->IsAttacked);
	AnimInstance->IsAttacked = true;
	Stat->OnAttacked(DamageAmount);

	/* 공격받을 시 HP를 업데이트 해준다. */
	HUDWidget->UpdateHealthPercent();

	if (Stat->GetHp() <= 0) {
		UE_LOG(LogTemp, Log, TEXT("Die"));
		IsDie = true;
		
		DisableInput(Cast<APlayerController>(GetController()));
		//AnimInstance->PlayDeathMontage();
	}
	else {
		if (IsAttacking || IsSkillCasting || IsJumping || IsTumbling) {
			AnimInstance->IsAttacked = false;
			IsTumbling = false;
		}

		else {

			AnimInstance->PlayHitReactMontage();
		}

	}
	UE_LOG(LogTemp, Log, TEXT("%d"),AnimInstance->IsAttacked);

	return DamageAmount;
}

void AMyCharacter::UpdateHealthPercent()
{
	if (GameMode->HUDWidget != nullptr) {
		GameMode->HUDWidget->UpdateHealthPercent();
	}
	
}
