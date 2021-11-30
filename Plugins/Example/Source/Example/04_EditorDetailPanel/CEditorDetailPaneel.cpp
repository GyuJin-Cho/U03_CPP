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
		.ValueContent() // ������ �г� R-V �ڸ���
		.VAlign(VAlign_Center) // ��� ����
		.MaxDesiredWidth(250) // �������� �г�
		[
			SNew(SButton).VAlign(VAlign_Center) // ���ο� ��ư ����
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