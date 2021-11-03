#include "CStatusComponet.h"

UCStatusComponet::UCStatusComponet()
{
}

void UCStatusComponet::SetMove()
{
	bCanMove = true;
}

void UCStatusComponet::SetStop()
{
	bCanMove = false;
}

void UCStatusComponet::BeginPlay()
{
	Super::BeginPlay();

}
