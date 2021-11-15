#include "CAnim.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"
#include "GameFramework/Character.h"

UCAnim::UCAnim()
{

}

void UCAnim::BeginPlay(ACharacter* InCharacter)
{
	OwnerCharacter = InCharacter;

	SpringArm = CHelpers::GetComponent <USpringArmComponent>(OwnerCharacter);
	Camera = CHelpers::GetComponent <UCameraComponent>(OwnerCharacter);
	State = CHelpers::GetComponent <UCStateComponent>(OwnerCharacter);
}

void UCAnim::Tick(float DeltaTime)
{
}

void UCAnim::On()
{
	bInZomm = true;
}
void UCAnim::Off()
{
	bInZomm = false;
}