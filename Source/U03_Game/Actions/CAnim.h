#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAnim.generated.h"

UCLASS()
class U03_GAME_API UCAnim : public UObject
{
	GENERATED_BODY()

public:
	FORCEINLINE bool IsAvaliable() { return SpringArm != nullptr && Camera != nullptr; }
	
public:
	UCAnim();

	void BeginPlay(class ACharacter* InCharacter);
	void Tick(float DeltaTime);

	void On();
	void Off();

private:
	class ACharacter* OwnerCharacter;
	class UCStateComponent* State;
	class USpringArmComponent* SpringArm;
	class UCameraComponent* Camera;

	bool bInZomm;
};
