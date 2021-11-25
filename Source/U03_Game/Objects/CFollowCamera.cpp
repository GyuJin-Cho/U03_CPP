#include "CFollowCamera.h"
#include "Global.h"
#include "COmponents/SplineComponent.h"
#include "Camera/CameraComponent.h"
#include "CCameraSpline.h"
#include "Characters/CPlayer.h"

ACFollowCamera::ACFollowCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent(this, &Camera, "Camera");
}

void ACFollowCamera::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACCameraSpline::StaticClass(), actors);

	for (AActor* actor : actors)
	{
		if (actor->IsA<ACCameraSpline>() && actor->GetName().Contains("BP_CCameraSpline"))
		{
			Spline = Cast<ACCameraSpline>(actor);
		}
		
	}
}

void ACFollowCamera::SetTimeline()
{
	FOnTimelineFloat progress;
	progress.BindUFunction(this, "OnProgress");

	FOnTimelineEvent finish;
	finish.BindUFunction(this, "OnFinishProgress");

	Timeline = FTimeline();
	Timeline.AddInterpFloat(Spline->GetCurve(), progress);
	Timeline.SetTimelineFinishedFunc(finish);
	Timeline.SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
	Timeline.SetPlayRate(0.25f);
	Timeline.PlayFromStart();

	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	CheckNull(controller);
	controller->SetViewTarget(this);
}

void ACFollowCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (Timeline.IsPlaying())
	{
		Timeline.TickTimeline(DeltaTime);
	}
}

void ACFollowCamera::OnProgress(float Output)
{
	USplineComponent* spline = Spline->GetSpline();
	float length = spline->GetSplineLength();

	FVector location = spline->GetLocationAtDistanceAlongSpline(length * Output, ESplineCoordinateSpace::World);
	FRotator rotator = spline->GetRotationAtDistanceAlongSpline(length * Output, ESplineCoordinateSpace::World);

	SetActorLocation(location);
	SetActorRotation(rotator);
}

void ACFollowCamera::OnFinishProgress()
{
	Timeline.Stop();

	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(),0);
	CheckNull(controller);

	ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	controller->SetViewTarget(Cast<ACPlayer>(character));
}

