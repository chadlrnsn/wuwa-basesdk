﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Zhezhi_Skill03

#include "Basic.hpp"

#include "GA_Zhezhi_Skill03_classes.hpp"
#include "GA_Zhezhi_Skill03_parameters.hpp"


namespace SDK
{

// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.ExecuteUbergraph_GA_Zhezhi_Skill03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Zhezhi_Skill03_C::ExecuteUbergraph_GA_Zhezhi_Skill03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "ExecuteUbergraph_GA_Zhezhi_Skill03");

	Params::GA_Zhezhi_Skill03_C_ExecuteUbergraph_GA_Zhezhi_Skill03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.OnCompleted_5D118C384AE61F1C80292E81F1E6F55F
// (BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::OnCompleted_5D118C384AE61F1C80292E81F1E6F55F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "OnCompleted_5D118C384AE61F1C80292E81F1E6F55F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.OnBlendOut_5D118C384AE61F1C80292E81F1E6F55F
// (BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::OnBlendOut_5D118C384AE61F1C80292E81F1E6F55F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "OnBlendOut_5D118C384AE61F1C80292E81F1E6F55F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.OnInterrupted_5D118C384AE61F1C80292E81F1E6F55F
// (BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::OnInterrupted_5D118C384AE61F1C80292E81F1E6F55F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "OnInterrupted_5D118C384AE61F1C80292E81F1E6F55F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.OnCancelled_5D118C384AE61F1C80292E81F1E6F55F
// (BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::OnCancelled_5D118C384AE61F1C80292E81F1E6F55F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "OnCancelled_5D118C384AE61F1C80292E81F1E6F55F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.OnTick_5D118C384AE61F1C80292E81F1E6F55F
// (BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::OnTick_5D118C384AE61F1C80292E81F1E6F55F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "OnTick_5D118C384AE61F1C80292E81F1E6F55F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.EventReceived_18B59F5945020DB23C42FD88711A9140
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Zhezhi_Skill03_C::EventReceived_18B59F5945020DB23C42FD88711A9140(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "EventReceived_18B59F5945020DB23C42FD88711A9140");

	Params::GA_Zhezhi_Skill03_C_EventReceived_18B59F5945020DB23C42FD88711A9140 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.筛选飞鹤实体
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               对象                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    是否找到对象                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   伴生物序列号                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Zhezhi_Skill03_C::筛选飞鹤实体(class ATsBaseCharacter_C** 对象, bool* 是否找到对象, int32* 伴生物序列号)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "筛选飞鹤实体");

	Params::GA_Zhezhi_Skill03_C_筛选飞鹤实体 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (对象 != nullptr)
		*对象 = Parms.对象;

	if (是否找到对象 != nullptr)
		*是否找到对象 = Parms.是否找到对象;

	if (伴生物序列号 != nullptr)
		*伴生物序列号 = Parms.伴生物序列号;
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.设置子弹对象
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::设置子弹对象()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "设置子弹对象");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.镜头处理
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::镜头处理()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "镜头处理");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.飞行特效处理
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Zhezhi_Skill03_C::飞行特效处理()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "飞行特效处理");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Zhezhi_Skill03.GA_Zhezhi_Skill03_C.飞鹤触发次数处理
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Zhezhi_Skill03_C::飞鹤触发次数处理(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Zhezhi_Skill03_C", "飞鹤触发次数处理");

	Params::GA_Zhezhi_Skill03_C_飞鹤触发次数处理 Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

}

