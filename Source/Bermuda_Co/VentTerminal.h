#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VentTerminal.generated.h"

UCLASS()
class BERMUDA_CO_API AVentTerminal : public AActor
{
    GENERATED_BODY()

public:
    AVentTerminal();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* TerminalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vent")
    float FlushDuration;

    bool bIsFlushing;
    FTimerHandle FlushTimerHandle;

    UFUNCTION()
    void StartFlush();

    void FinishFlush();

    // UI and effects (optional at this stage)
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UUserWidget> FlushWidgetClass;

    UUserWidget* FlushWidget;
    class UProgressBar* ProgressBarRef;

    UPROPERTY(EditAnywhere, Category = "Effects")
    UParticleSystem* FlushEffect;

    UPROPERTY(EditAnywhere, Category = "Effects")
    USoundBase* FlushSound;


};
