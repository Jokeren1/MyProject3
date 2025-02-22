#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MessageBoxWidget.generated.h"

UCLASS()
class MyProject3 UMessageBoxWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "UI")
    void ShowMessage(const FString& Message);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void OnYesButtonClicked();

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void OnNoButtonClicked();

private:
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* MessageText;

    UPROPERTY(meta = (BindWidget))
    class UButton* YesButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* NoButton;
};
