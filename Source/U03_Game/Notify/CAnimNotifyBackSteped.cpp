#include "CAnimNotifyBackSteped.h"
#include "Global.h"
#include "Characters/CPlayer.h"

FString UCAnimNotifyBackSteped::GetNotifyName_Implementation() const
{
	return "BackStepped";
}
void UCAnimNotifyBackSteped::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACPlayer* player=Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->End_BackStep();
}