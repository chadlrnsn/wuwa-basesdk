#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_Attack09

#include "Basic.hpp"

#include "GA_ME1QunJingMd00001_Attack09_classes.hpp"
#include "GA_ME1QunJingMd00001_Attack09_parameters.hpp"


namespace SDK
{

// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.ExecuteUbergraph_GA_ME1QunJingMd00001_Attack09
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ME1QunJingMd00001_Attack09_C::ExecuteUbergraph_GA_ME1QunJingMd00001_Attack09(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "ExecuteUbergraph_GA_ME1QunJingMd00001_Attack09");

	Params::GA_ME1QunJingMd00001_Attack09_C_ExecuteUbergraph_GA_ME1QunJingMd00001_Attack09 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ME1QunJingMd00001_Attack09_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "K2_OnEndAbility");

	Params::GA_ME1QunJingMd00001_Attack09_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnFinish_6C528F94418B1B25846668B05E98B503
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnFinish_6C528F94418B1B25846668B05E98B503()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnFinish_6C528F94418B1B25846668B05E98B503");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.EventReceived_18B59F5945020DB23C42FD88865EBDDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ME1QunJingMd00001_Attack09_C::EventReceived_18B59F5945020DB23C42FD88865EBDDF(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "EventReceived_18B59F5945020DB23C42FD88865EBDDF");

	Params::GA_ME1QunJingMd00001_Attack09_C_EventReceived_18B59F5945020DB23C42FD88865EBDDF Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCompleted_5D118C384AE61F1C80292E81741E8114
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCompleted_5D118C384AE61F1C80292E81741E8114()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCompleted_5D118C384AE61F1C80292E81741E8114");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnBlendOut_5D118C384AE61F1C80292E81741E8114
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnBlendOut_5D118C384AE61F1C80292E81741E8114()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnBlendOut_5D118C384AE61F1C80292E81741E8114");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnInterrupted_5D118C384AE61F1C80292E81741E8114
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnInterrupted_5D118C384AE61F1C80292E81741E8114()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnInterrupted_5D118C384AE61F1C80292E81741E8114");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCancelled_5D118C384AE61F1C80292E81741E8114
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCancelled_5D118C384AE61F1C80292E81741E8114()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCancelled_5D118C384AE61F1C80292E81741E8114");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnTick_5D118C384AE61F1C80292E81741E8114
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnTick_5D118C384AE61F1C80292E81741E8114()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnTick_5D118C384AE61F1C80292E81741E8114");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCompleted_5D118C384AE61F1C80292E810CB6109E
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCompleted_5D118C384AE61F1C80292E810CB6109E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCompleted_5D118C384AE61F1C80292E810CB6109E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnBlendOut_5D118C384AE61F1C80292E810CB6109E
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnBlendOut_5D118C384AE61F1C80292E810CB6109E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnBlendOut_5D118C384AE61F1C80292E810CB6109E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnInterrupted_5D118C384AE61F1C80292E810CB6109E
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnInterrupted_5D118C384AE61F1C80292E810CB6109E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnInterrupted_5D118C384AE61F1C80292E810CB6109E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCancelled_5D118C384AE61F1C80292E810CB6109E
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCancelled_5D118C384AE61F1C80292E810CB6109E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCancelled_5D118C384AE61F1C80292E810CB6109E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnTick_5D118C384AE61F1C80292E810CB6109E
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnTick_5D118C384AE61F1C80292E810CB6109E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnTick_5D118C384AE61F1C80292E810CB6109E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCompleted_5D118C384AE61F1C80292E8107984E2D
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCompleted_5D118C384AE61F1C80292E8107984E2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCompleted_5D118C384AE61F1C80292E8107984E2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnBlendOut_5D118C384AE61F1C80292E8107984E2D
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnBlendOut_5D118C384AE61F1C80292E8107984E2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnBlendOut_5D118C384AE61F1C80292E8107984E2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnInterrupted_5D118C384AE61F1C80292E8107984E2D
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnInterrupted_5D118C384AE61F1C80292E8107984E2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnInterrupted_5D118C384AE61F1C80292E8107984E2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnCancelled_5D118C384AE61F1C80292E8107984E2D
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnCancelled_5D118C384AE61F1C80292E8107984E2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnCancelled_5D118C384AE61F1C80292E8107984E2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ME1QunJingMd00001_Attack09.GA_ME1QunJingMd00001_Attack09_C.OnTick_5D118C384AE61F1C80292E8107984E2D
// (BlueprintCallable, BlueprintEvent)

void UGA_ME1QunJingMd00001_Attack09_C::OnTick_5D118C384AE61F1C80292E8107984E2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ME1QunJingMd00001_Attack09_C", "OnTick_5D118C384AE61F1C80292E8107984E2D");

	UObject::ProcessEvent(Func, nullptr);
}

}
