#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectViewComponent

#include "Basic.hpp"

#include "EffectViewComponent_classes.hpp"
#include "EffectViewComponent_parameters.hpp"


namespace SDK
{

// Function EffectViewComponent.EffectViewComponent_C.EditorTick
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffectViewComponent_C::EditorTick(float DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "EditorTick");

	Params::EffectViewComponent_C_EditorTick Parms{};

	Parms.DeltaSecond = DeltaSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EffectViewComponent.EffectViewComponent_C.SetAutoPlay
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AutoPlay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffectViewComponent_C::SetAutoPlay(bool AutoPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "SetAutoPlay");

	Params::EffectViewComponent_C_SetAutoPlay Parms{};

	Parms.AutoPlay = AutoPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EffectViewComponent.EffectViewComponent_C.Play
// (Native, Public, BlueprintCallable, BlueprintEvent)

void UEffectViewComponent_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EffectViewComponent.EffectViewComponent_C.Stop
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffectViewComponent_C::Stop(bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectViewComponent_C", "Stop");

	Params::EffectViewComponent_C_Stop Parms{};

	Parms.Immediately = Immediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

