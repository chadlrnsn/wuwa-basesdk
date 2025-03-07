﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsEntityBase

#include "Basic.hpp"

#include "TsEntityBase_classes.hpp"
#include "TsEntityBase_parameters.hpp"


namespace SDK
{

// Function TsEntityBase.TsEntityBase_C.EditorInit
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ATsEntityBase_C::EditorInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityBase_C", "EditorInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TsEntityBase.TsEntityBase_C.ReceiveBeginPlay
// (Native, Event, Public, Protected, BlueprintCallable, BlueprintEvent)

void ATsEntityBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityBase_C", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TsEntityBase.TsEntityBase_C.ExecuteUbergraph_TsEntityBase
// (Final, Native, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsEntityBase_C::ExecuteUbergraph_TsEntityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityBase_C", "ExecuteUbergraph_TsEntityBase");

	Params::TsEntityBase_C_ExecuteUbergraph_TsEntityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

