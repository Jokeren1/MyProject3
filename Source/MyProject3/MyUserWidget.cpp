#include "MessageBoxWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"

void UMessageBoxWidget::ShowMessage(const FString& Message)
{
    if (MessageText)
    {
        MessageText->SetText(FText::FromString(Message));
    }
}