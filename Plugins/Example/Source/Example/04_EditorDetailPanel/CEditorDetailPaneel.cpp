#include "CEditorDetailPaneel.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "Widgets/Input/SButton.h"
#include "Objects/CbuttonActor.h"

CEditorDetailPaneel::CEditorDetailPaneel()
{
}

CEditorDetailPaneel::~CEditorDetailPaneel()
{
}



TSharedRef<IDetailCustomization> CEditorDetailPaneel::MakeInstance()
{
	return MakeShareable(new CEditorDetailPaneel());
}

void CEditorDetailPaneel::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& category = DetailBuilder.EditCategory("Change Color");

	category.AddCustomRow(FText::FromString("Color"))
		.ValueContent() // 디테일 패널 R-V 자리로
		.VAlign(VAlign_Center) // 가운데 정렬
		.MaxDesiredWidth(250) // 오버레이 패널
		[
			SNew(SButton).VAlign(VAlign_Center) // 내부에 버튼 만듬
			.OnClicked(this, &CEditorDetailPaneel::OnClicked)
			.Content()
			[
				SNew(STextBlock).Text(FText::FromString("RandomColor"))
			]
		];
	DetailBuilder.GetObjectsBeingCustomized(Objects);
}

FReply CEditorDetailPaneel::OnClicked()
{
	for (TWeakObjectPtr<UObject>& object : Objects)
	{
		//GLog->Log(object->GetName());

		ACButtonActor* actor = Cast<ACButtonActor>(object);

		if (!!actor)
			actor->ApplyColor(FLinearColor::MakeRandomColor());
	}

	return FReply::Handled();
}