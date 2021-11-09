#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAttachMent.generated.h"

UCLASS()
class U03_GAME_API ACAttachMent : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;

protected:
	UFUNCTION(BlueprintCallable)
		void AttachTo(FName InSocketName);

public:
	UFUNCTION(BlueprintImplementableEvent)
		void OnEquip();

	UFUNCTION(BlueprintImplementableEvent)
		void OnUnEquip();
public:	
	ACAttachMent();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(BlueprintReadOnly)
		class ACharacter* OwnerCharacter;

	UPROPERTY(BlueprintReadOnly)
		class UCStateComponent* State;

	UPROPERTY(BlueprintReadOnly)
		class UCStatusComponent* Status;
};