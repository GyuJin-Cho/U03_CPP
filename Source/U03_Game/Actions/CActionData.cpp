#include "CActionData.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "CEquipment.h"
#include "CAttachMent.h"

void UCActionData::BeginPlay(class ACharacter* InOwnerCharacter)
{
	FTransform transform;

	if (!!AttachmentClass)
	{
		Attachment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACAttachMent>(AttachmentClass, transform, InOwnerCharacter);
		Attachment->SetActorLabel(GetLableName(InOwnerCharacter,"Attachment"));
		UGameplayStatics::FinishSpawningActor(Attachment, transform);
	}

	if (!!EquipmentClass)
	{
		Equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		Equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		Equipment->SetData(EquipmentData);
		Equipment->SetColor(EquipmentColor);
		Equipment->SetActorLabel(GetLableName(InOwnerCharacter,"Equipment"));
		UGameplayStatics::FinishSpawningActor(Equipment, transform);
	}

	if (!!AttachmentClass)
	{
		Equipment->OnEquipmentDelegate.AddDynamic(Attachment, &ACAttachMent::OnEquip);
		Equipment->OnUnequipmentDelegate.AddDynamic(Attachment, &ACAttachMent::OnEquip);
	}


}

FString UCActionData::GetLableName(ACharacter* InOwnerCharacter, FString InName)
{
	FString name;
	name.Append(InOwnerCharacter->GetActorLabel());
	name.Append("_");
	name.Append(InName);
	name.Append("_");
	name.Append(GetName().Replace(L"DA_",L""));

	return name;
}
