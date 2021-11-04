#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStatusComponet.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U03_GAME_API UCStatusComponet : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Speed")
		float WalkSpeed = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Speed")
		float RunSpeed = 400.0f;

	UPROPERTY(EditAnywhere, Category = "Speed")
		float SprintSpeed = 600.0f;

public:
	FORCEINLINE float GetWalkSpeed() { return WalkSpeed; }
	FORCEINLINE float GetRunSpeed() { return RunSpeed; }
	FORCEINLINE float GetSprintSpeed() { return SprintSpeed; }
	FORCEINLINE float CanMove() { return bCanMove; }
public:	
	UCStatusComponet();

	void SetMove();
	void SetStop();

protected:
	virtual void BeginPlay() override;

private:
	bool bCanMove = true;

};
