#include "PromptActor.h"
#include "Blueprint/UserWidget.h"

APromptActor::APromptActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APromptActor::BeginPlay()
{
    Super::BeginPlay();

    if (PromptWidgetClass)
    {
        PromptWidget = CreateWidget<UUserWidget>(GetWorld(), PromptWidgetClass);
        if (PromptWidget)
        {
            PromptWidget->AddToViewport();
        }
    }
}

void APromptActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APromptActor::ShowPrompt()
{
    if (PromptWidget)
    {
        PromptWidget->SetVisibility(ESlateVisibility::Visible);
    }
}

