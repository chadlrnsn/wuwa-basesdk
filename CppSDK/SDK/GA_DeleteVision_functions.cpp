#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeleteVision

#include "Basic.hpp"

#include "GA_DeleteVision_classes.hpp"
#include "GA_DeleteVision_parameters.hpp"


namespace SDK
{

// Function GA_DeleteVision.GA_DeleteVision_C.ExecuteUbergraph_GA_DeleteVision
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeleteVision_C::ExecuteUbergraph_GA_DeleteVision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeleteVision_C", "ExecuteUbergraph_GA_DeleteVision");

	Params::GA_DeleteVision_C_ExecuteUbergraph_GA_DeleteVision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeleteVision.GA_DeleteVision_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DeleteVision_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeleteVision_C", "K2_OnEndAbility");

	Params::GA_DeleteVision_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeleteVision.GA_DeleteVision_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DeleteVision_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeleteVision_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_DeleteVision.GA_DeleteVision_C.�H d;�
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_DeleteVision_C::_H_d__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeleteVision_C", "�H d;�");

	UObject::ProcessEvent(Func, nullptr);
}

}
