#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_Names.generated.h"

UCLASS()
class U03_GAME_API UCUserWidget_Names : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
		void SetNameText(const FString& InName);
};
