﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Base

#include "Basic.hpp"

#include "KuroGAS_classes.hpp"
#include "Engine_structs.hpp"
#include "SSkillInfo_structs.hpp"
#include "EPawnChannel_structs.hpp"
#include "EAimViewState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Base.GA_Base_C
// 0x01A0 (0x0568 - 0x03C8)
class UGA_Base_C : public UBaseGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSSkillInfo                            当前技能数据;                                      // 0x03D0(0x0180)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 当前技能数据名;                                    // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Base(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void 获取施法者(class ATsBaseCharacter_C** 施法者);
	void 获取当前技能配置Id(class FString* 当前技能数据名_0);
	void 获取当前技能配置(struct FSSkillInfo* 当前技能数据_0);
	void 获取技能动画(int32 编号, class UAnimMontage** 动画);
	void 获取技能所有动画(TArray<class UAnimMontage*>* 技能动画数组);
	void 获取技能标签(TArray<struct FGameplayTag>* 技能标签);
	void 获取AbilitySystemComponent(class UBaseAbilitySystemComponent** AbilitySystemComponent);
	void 获取技能目标(class ATsBaseCharacter_C* 目标, class AActor** 技能目标);
	void 获取技能目标距离(bool 平面2D, float* 距离);
	void 是否拥有任意标签(class ATsBaseCharacter_C* 目标, const struct FGameplayTagContainer& 标签, bool* 是否存在);
	void 设置强制速度(const struct FVectorDouble& 速度);
	void 设置通道的碰撞响应(class UPrimitiveComponent* 目标, ECollisionChannel Channel, ECollisionResponse NewResponse);
	void 通过Tag移除自身Buff(const struct FGameplayTag& tag);
	void 通过_ID给对象添加Buff(class ATsBaseCharacter_C* Buff对象, int64 BuffId, int32 Buff层数);
	void 获取Base属性值(class ATsBaseCharacter_C* 目标, int32 属性id, float* 属性值);
	void 获取Current属性值(class ATsBaseCharacter_C* 目标, int32 属性id, float* 属性值);
	void 通过_ID移除目标Buff(int64 BuffId, int32 移除层数, class ATsBaseCharacter_C* 目标);
	void 设置材质效果(class ATsBaseCharacter_C* 设置对象, class UPD_CharacterControllerData_C* 材质配置, int32* Handle);
	void 创建子弹(class ATsBaseCharacter_C* 施法者, const class FString& 子弹ID, const struct FTransformDouble& 初始变换, const struct FVectorDouble& 目标点, int32* 子弹);
	void 使用技能(class ATsBaseCharacter_C* 释放者, class FName 技能ID, class AActor* 技能目标, class FName Socket, bool* 是否成功释放);
	void 召唤(int32 配置表ID, const struct FTransformDouble& 出生位置, bool* 是否成功, class ATsBaseCharacter_C** 召唤物, int32* 实体ID);
	void 是否联网(bool* 联网);
	void 获取黑板_Int(class ATsBaseCharacter_C* 角色, const class FString& key, int32* 值);
	void 设置黑板Int(class ATsBaseCharacter_C* 角色, const class FString& key, int32 值);
	void 获取黑板Long(class ATsBaseCharacter_C* 角色, const class FString& key, int64* 值);
	void 设置黑板Long(class ATsBaseCharacter_C* 角色, const class FString& key, int64 值);
	void 获取实体ID(class ATsBaseCharacter_C* 对象, int32* 实体ID);
	void 根据实体ID获取对象(int32 实体ID, class ATsBaseCharacter_C** 对象, bool* 是否找到对象);
	void 获取黑板指定Key值关联对象(class ATsBaseCharacter_C* 角色, const class FString& key, class ATsBaseCharacter_C** 对象, bool* 是否找到对象);
	void 设置技能目标(class AActor* SkillTarget);
	void 面向目标(class ATsBaseCharacter_C* 目标, class AActor* 面向目标_0);
	void 销毁特定子弹(class FName 子弹名字, bool 是否召唤子子弹);
	void 获取目标Tag层数(class ATsBaseCharacter_C* 目标, const struct FGameplayTag& Tag, int32* 层数);
	void 获取地面坐标点(const struct FVectorDouble& 指定点, float 深度, struct FVectorDouble* 地面坐标, bool* 是否存在);
	void 设置当前技能打断等级(int32 打断等级);
	void 结束异步任务(class UGameplayTask* 任务, bool* 有效);
	void 发送事件(class AActor* 发送目标, const struct FGameplayTag& 事件Tag);
	float 获取两者距离(class AActor* 目标A, class AActor* 目标B);
	int32 创建并播放特效(const class UObject* DA文件名, const struct FTransformDouble& transform, bool AttachToCharacter);
	void 施法者添加标签(const struct FGameplayTag& Tag);
	void 施法者移除标签(const struct FGameplayTag& tag);
	void 通过ID获取对象Buff层数(int64 buffId, bool enforceOnGoingCheck, int32* 层数);
	void 获取当前技能攻速(float* SpeedRatio);
	void 查询特定子弹数量(class FName 子弹名字, int32* 子弹数量);
	void 获取黑板EntityId(class ATsBaseCharacter_C* 角色, const class FString& key, int32* 值);
	void 设置黑板EntityId(class ATsBaseCharacter_C* 角色, const class FString& key, int32 值);
	void 获取黑板Vector(class ATsBaseCharacter_C* 角色, const class FString& key, struct FVectorDouble* 值);
	void 设置黑板Vector(class ATsBaseCharacter_C* 角色, const class FString& key, const struct FVectorDouble& 值);
	void 获取当前操作角色Actor(class ATsBaseCharacter_C** 当前角色);
	void 获取当前GA的技能数据名(class FString* 当前技能数据名_0);
	void 子弹冻结(const class FString& 子弹Id, float 冻结时间);
	void 设置黑板String(class ATsBaseCharacter_C* 角色, const class FString& Key, const class FString& 值);
	void 获取黑板String(class ATsBaseCharacter_C* 角色, const class FString& Key, class FString* String);
	void 获取游戏事件管理器(class UBP_EventManager_C** 事件管理器);
	void 获取角色ID(class ATsBaseCharacter_C* 目标, float* RoleID);
	void 根据子弹实体ID销毁子弹(int32 子弹ID, bool isSummonChildBullet);
	void 移除召唤物(int32 召唤者ID, int32 移除召唤物ID);
	void 修改当前技能打断等级(float priority);
	void 设置接收同打断等级打断(bool skillAcceptInput);
	void 通过角度获取目标附近的合法点(class AActor* 目标Actor, float 旋转, float 仰角, float 长度, struct FVectorDouble* 合法点, bool* 碰撞挤压);
	void 获取目标到终点的合法点(class ATsBaseCharacter_C* 目标Actor, const struct FVectorDouble& 终点, struct FVectorDouble* 合法点, bool* 碰撞挤压);
	void 获取目标正后方的合法点(class AActor* 目标Actor, float 向后距离, struct FVectorDouble* 合法点, bool* 碰撞挤压);
	void 对圆柱体类型的合法点检测(float 施法者半高, float 施法者半径, float 目标半高, float 目标半径, const struct FVectorDouble& 起点, const struct FVectorDouble& 终点, struct FVectorDouble* 合法点);
	void 进入瞄准模式(bool 瞄准键进入, EAimViewState 瞄准镜头类型, bool isWalk);
	void 退出瞄准模式();
	void 设置黑板Rotator(class ATsBaseCharacter_C* 角色, const class FString& key, const struct FRotator& 值);
	void 修改材质效果(TScriptInterface<class IBPI_CreatureInterface_C> Entity, bool IsGroup, class UObject* 材质效果);
	void 生成特效();
	void 设置子弹目标(class ATsBaseCharacter_C* Attacker, const class FString& Key, int32 TargetId);
	void 给对象添加标签(class ATsBaseCharacter_C* Target, const struct FGameplayTag& tag);
	void 给对象移除标签(class ATsBaseCharacter_C* Target, const struct FGameplayTag& tag);
	void 设置角色Pawn通道碰撞响应(class ATsBaseCharacter_C* 角色, EPawnChannel pawnChannel, ECollisionResponse newResponse);
	bool 设置角色位置(class ATsBaseCharacter_C* 角色, const struct FVectorDouble& location, bool sweep, bool teleport, const class FString& context);
	bool 设置角色旋转(class ATsBaseCharacter_C* 角色, const struct FRotator& rotation, bool sweep, const class FString& context);
	void 设置角色变换(class ATsBaseCharacter_C* 角色, const struct FTransformDouble& Transform, bool sweep, const class FString& context);
	void 设置角色位置和旋转(class ATsBaseCharacter_C* 角色, const struct FVectorDouble& location, const struct FRotator& rotation, bool sweep, const class FString& context);
	void 叠加角色世界旋转(class ATsBaseCharacter_C* 角色, const struct FRotator& rotation, bool sweep, bool teleport, const class FString& context);
	void 叠加角色世界位置(class ATsBaseCharacter_C* 角色, const struct FVectorDouble& location, bool sweep, bool teleport, const class FString& context);
	void 设置角色传送(class ATsBaseCharacter_C* 角色, const struct FVectorDouble& location, const struct FRotator& Rotator, const class FString& context);
	void 设置角色地面移动(class ATsBaseCharacter_C* 角色, const struct FVector& Velocity, float DeltaSeconds, const class FString& context);
	void 伴生物获取召唤者对象(class ATsBaseCharacter_C** 对象, bool* 是否找到对象);
	void RemoveBuff(int64 buffId);
	void RemoveTag(const struct FGameplayTag& tag);
	void AddTag(const struct FGameplayTag& tag);
	void Apply_Buff_with_Level(int64 buffId);
	void 随机召唤(int32 召唤者Id, int32 Index_0, const struct FTransformDouble& Transform, int32 SkillId_0, bool IsVisivle);
	void 获取随机召唤物(int32 召唤者, int32 Index_0, int32* 实体Id);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Base_C">();
	}
	static class UGA_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Base_C>();
	}
};
static_assert(alignof(UGA_Base_C) == 0x000008, "Wrong alignment on UGA_Base_C");
static_assert(sizeof(UGA_Base_C) == 0x000568, "Wrong size on UGA_Base_C");
static_assert(offsetof(UGA_Base_C, UberGraphFrame) == 0x0003C8, "Member 'UGA_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, 当前技能数据) == 0x0003D0, "Member 'UGA_Base_C::当前技能数据' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, 当前技能数据名) == 0x000550, "Member 'UGA_Base_C::当前技能数据名' has a wrong offset!");
static_assert(offsetof(UGA_Base_C, SkillId) == 0x000560, "Member 'UGA_Base_C::SkillId' has a wrong offset!");

}

