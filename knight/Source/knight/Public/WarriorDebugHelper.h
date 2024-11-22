#pragma once

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1,float Time =4.0f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, Time, Color, Msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}
}
