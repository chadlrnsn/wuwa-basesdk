﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "ApexDestruction_classes.hpp"
#include "ApexDestruction_parameters.hpp"


namespace SDK
{

// Function ApexDestruction.DestructibleComponent.AddForceToChunk
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   Force                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAccelChange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::AddForceToChunk(const struct FVector& Force, bool bAccelChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "AddForceToChunk");

	Params::DestructibleComponent_AddForceToChunk Parms{};

	Parms.Force = std::move(Force);
	Parms.bAccelChange = bAccelChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   DamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   HitLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   ImpulseDir                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "ApplyDamage");

	Params::DestructibleComponent_ApplyDamage Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = std::move(HitLocation);
	Parms.ImpulseDir = std::move(ImpulseDir);
	Parms.ImpulseStrength = ImpulseStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   BaseDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   HurtOrigin                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DamageRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFullDamage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "ApplyRadiusDamage");

	Params::DestructibleComponent_ApplyRadiusDamage Parms{};

	Parms.BaseDamage = BaseDamage;
	Parms.HurtOrigin = std::move(HurtOrigin);
	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;
	Parms.bFullDamage = bFullDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.D_ApplyDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   DamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVectorDouble&             HitLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVectorDouble&             ImpulseDir                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::D_ApplyDamage(float DamageAmount, const struct FVectorDouble& HitLocation, const struct FVectorDouble& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "D_ApplyDamage");

	Params::DestructibleComponent_D_ApplyDamage Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = std::move(HitLocation);
	Parms.ImpulseDir = std::move(ImpulseDir);
	Parms.ImpulseStrength = ImpulseStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.D_ApplyRadiusDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   BaseDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVectorDouble&             HurtOrigin                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DamageRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFullDamage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::D_ApplyRadiusDamage(float BaseDamage, const struct FVectorDouble& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "D_ApplyRadiusDamage");

	Params::DestructibleComponent_D_ApplyRadiusDamage Parms{};

	Parms.BaseDamage = BaseDamage;
	Parms.HurtOrigin = std::move(HurtOrigin);
	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;
	Parms.bFullDamage = bFullDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "GetDestructibleMesh");

	Params::DestructibleComponent_GetDestructibleMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*                NewMesh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "SetDestructibleMesh");

	Params::DestructibleComponent_SetDestructibleMesh Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

