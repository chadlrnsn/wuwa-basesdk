#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Baer

#include "Basic.hpp"

#include "BP_Baer_classes.hpp"
#include "BP_Baer_parameters.hpp"


namespace SDK
{

// Function BP_Baer.BP_Baer_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Baer_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Baer_C", "FightCommand");

	Params::BP_Baer_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}
