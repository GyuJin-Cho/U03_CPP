#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"

class EXAMPLE_API CEditorDetailPaneel : public IDetailCustomization
{
public:
	CEditorDetailPaneel();
	~CEditorDetailPaneel();
public:
	UFUNCTION()
		FReply OnClicked();
public:
	static TSharedRef<IDetailCustomization> MakeInstance();
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	TArray<TWeakObjectPtr<UObject>> Objects;
};
