﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "RigVM_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RigVM.RigVM
// 0x02D8 (0x0308 - 0x0030)
class URigVM final : public UObject
{
public:
	struct FRigVMMemoryContainer                  WorkMemoryStorage;                                 // 0x0030(0x00A0)(NativeAccessSpecifierPublic)
	uint8                                         Pad_D0[0x8];                                       // 0x00D0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMMemoryContainer                  LiteralMemoryStorage;                              // 0x00D8(0x00A0)(NativeAccessSpecifierPublic)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMByteCode                         ByteCodeStorage;                                   // 0x0180(0x0030)(NativeAccessSpecifierPublic)
	uint8                                         Pad_1B0[0x8];                                      // 0x01B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMInstructionArray                 Instructions;                                      // 0x01B8(0x0010)(Transient, NativeAccessSpecifierPrivate)
	struct FRigVMExecuteContext                   Context;                                           // 0x01C8(0x0060)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FName>                           FunctionNamesStorage;                              // 0x0228(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_238[0x20];                                     // 0x0238(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMParameter>                Parameters;                                        // 0x0258(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      ParametersNameMap;                                 // 0x0268(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_2B8[0x48];                                     // 0x02B8(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class URigVM*                                 DeferredVMToCopy;                                  // 0x0300(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
	bool Execute(const class FName& InEntryName);
	bool GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);

	int32 GetParameterArraySize(const class FName& InParameterName) const;
	class FString GetRigVMFunctionName(int32 InFunctionIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};
static_assert(alignof(URigVM) == 0x000008, "Wrong alignment on URigVM");
static_assert(sizeof(URigVM) == 0x000308, "Wrong size on URigVM");
static_assert(offsetof(URigVM, WorkMemoryStorage) == 0x000030, "Member 'URigVM::WorkMemoryStorage' has a wrong offset!");
static_assert(offsetof(URigVM, LiteralMemoryStorage) == 0x0000D8, "Member 'URigVM::LiteralMemoryStorage' has a wrong offset!");
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x000180, "Member 'URigVM::ByteCodeStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Instructions) == 0x0001B8, "Member 'URigVM::Instructions' has a wrong offset!");
static_assert(offsetof(URigVM, Context) == 0x0001C8, "Member 'URigVM::Context' has a wrong offset!");
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x000228, "Member 'URigVM::FunctionNamesStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Parameters) == 0x000258, "Member 'URigVM::Parameters' has a wrong offset!");
static_assert(offsetof(URigVM, ParametersNameMap) == 0x000268, "Member 'URigVM::ParametersNameMap' has a wrong offset!");
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x000300, "Member 'URigVM::DeferredVMToCopy' has a wrong offset!");

}

