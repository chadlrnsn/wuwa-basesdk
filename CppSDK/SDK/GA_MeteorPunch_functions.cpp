﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MeteorPunch

#include "Basic.hpp"

#include "GA_MeteorPunch_classes.hpp"
#include "GA_MeteorPunch_parameters.hpp"


namespace SDK
{

// Function GA_MeteorPunch.GA_MeteorPunch_C.ExecuteUbergraph_GA_MeteorPunch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MeteorPunch_C::ExecuteUbergraph_GA_MeteorPunch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "ExecuteUbergraph_GA_MeteorPunch");

	Params::GA_MeteorPunch_C_ExecuteUbergraph_GA_MeteorPunch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_MeteorPunch_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "K2_OnEndAbility");

	Params::GA_MeteorPunch_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_MeteorPunch_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.EventReceived_18B59F5945020DB23C42FD88356415B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MeteorPunch_C::EventReceived_18B59F5945020DB23C42FD88356415B5(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "EventReceived_18B59F5945020DB23C42FD88356415B5");

	Params::GA_MeteorPunch_C_EventReceived_18B59F5945020DB23C42FD88356415B5 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCompleted_5D118C384AE61F1C80292E81D6313B7F
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCompleted_5D118C384AE61F1C80292E81D6313B7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCompleted_5D118C384AE61F1C80292E81D6313B7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnBlendOut_5D118C384AE61F1C80292E81D6313B7F
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnBlendOut_5D118C384AE61F1C80292E81D6313B7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnBlendOut_5D118C384AE61F1C80292E81D6313B7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnInterrupted_5D118C384AE61F1C80292E81D6313B7F
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnInterrupted_5D118C384AE61F1C80292E81D6313B7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnInterrupted_5D118C384AE61F1C80292E81D6313B7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCancelled_5D118C384AE61F1C80292E81D6313B7F
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCancelled_5D118C384AE61F1C80292E81D6313B7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCancelled_5D118C384AE61F1C80292E81D6313B7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnTick_5D118C384AE61F1C80292E81D6313B7F
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnTick_5D118C384AE61F1C80292E81D6313B7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnTick_5D118C384AE61F1C80292E81D6313B7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCompleted_5D118C384AE61F1C80292E81C78D388C
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCompleted_5D118C384AE61F1C80292E81C78D388C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCompleted_5D118C384AE61F1C80292E81C78D388C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnBlendOut_5D118C384AE61F1C80292E81C78D388C
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnBlendOut_5D118C384AE61F1C80292E81C78D388C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnBlendOut_5D118C384AE61F1C80292E81C78D388C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnInterrupted_5D118C384AE61F1C80292E81C78D388C
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnInterrupted_5D118C384AE61F1C80292E81C78D388C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnInterrupted_5D118C384AE61F1C80292E81C78D388C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCancelled_5D118C384AE61F1C80292E81C78D388C
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCancelled_5D118C384AE61F1C80292E81C78D388C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCancelled_5D118C384AE61F1C80292E81C78D388C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnTick_5D118C384AE61F1C80292E81C78D388C
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnTick_5D118C384AE61F1C80292E81C78D388C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnTick_5D118C384AE61F1C80292E81C78D388C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCompleted_5D118C384AE61F1C80292E81D41D7B6B
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCompleted_5D118C384AE61F1C80292E81D41D7B6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCompleted_5D118C384AE61F1C80292E81D41D7B6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnBlendOut_5D118C384AE61F1C80292E81D41D7B6B
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnBlendOut_5D118C384AE61F1C80292E81D41D7B6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnBlendOut_5D118C384AE61F1C80292E81D41D7B6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnInterrupted_5D118C384AE61F1C80292E81D41D7B6B
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnInterrupted_5D118C384AE61F1C80292E81D41D7B6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnInterrupted_5D118C384AE61F1C80292E81D41D7B6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnCancelled_5D118C384AE61F1C80292E81D41D7B6B
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnCancelled_5D118C384AE61F1C80292E81D41D7B6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnCancelled_5D118C384AE61F1C80292E81D41D7B6B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MeteorPunch.GA_MeteorPunch_C.OnTick_5D118C384AE61F1C80292E81D41D7B6B
// (BlueprintCallable, BlueprintEvent)

void UGA_MeteorPunch_C::OnTick_5D118C384AE61F1C80292E81D41D7B6B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MeteorPunch_C", "OnTick_5D118C384AE61F1C80292E81D41D7B6B");

	UObject::ProcessEvent(Func, nullptr);
}

}

