#include "VentTerminal.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"

AVentTerminal::AVentTerminal()
{
    PrimaryActorTick.bCanEverTick = true;

    TerminalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TerminalMesh"));
    RootComponent = TerminalMesh;

    FlushDuration = 3.0f; // 3 seconds default
    bIsFlushing = false;
}

void AVentTerminal::BeginPlay()
{
    Super::BeginPlay();

    if (FlushWidgetClass)
    {
        FlushWidget = CreateWidget<UUserWidget>(GetWorld(), FlushWidgetClass);
        if (FlushWidget)
        {
            FlushWidget->AddToViewport();

            UWidget* WidgetComponent = FlushWidget->GetWidgetFromName(TEXT("FlushProgressBar"));
            if (WidgetComponent)
            {
                ProgressBarRef = Cast<UProgressBar>(WidgetComponent);
                if (ProgressBarRef)
                {
                    ProgressBarRef->SetPercent(0.0f);
                }
            }
        }
    }
}

void AVentTerminal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsFlushing && ProgressBarRef)
    {
        float Elapsed = GetWorld()->GetTimerManager().GetTimerElapsed(FlushTimerHandle);
        float Percent = FMath::Clamp(Elapsed / FlushDuration, 0.0f, 1.0f);
        ProgressBarRef->SetPercent(Percent);
    }

}

void AVentTerminal::StartFlush()
{
    if (bIsFlushing) return;

    bIsFlushing = true;
    UE_LOG(LogTemp, Warning, TEXT("Flushing Started"));

    if (FlushSound)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), FlushSound, GetActorLocation());
    }


    // Start timer for flushing
    GetWorld()->GetTimerManager().SetTimer(FlushTimerHandle, this, &AVentTerminal::FinishFlush, FlushDuration, false);
}

void AVentTerminal::FinishFlush()
{
    UE_LOG(LogTemp, Warning, TEXT("Flushing Complete!"));

    if (FlushSound)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), FlushSound, GetActorLocation());
    }

    // TODO: Add particle/sound effect here
    bIsFlushing = false;
}
