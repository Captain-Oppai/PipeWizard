﻿/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask.ReadyForActivation
	 * 		Flags  -> ()
	 */
	void UGameplayTask::ReadyForActivation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask.EndTask
	 * 		Flags  -> ()
	 */
	void UGameplayTask::EndTask()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              ResourceClasses                                            (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(TArray<class UClass*> ResourceClasses, unsigned char Priority, const class FName& TaskInstanceName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");
		
		struct
		{
			TArray<class UClass*>                              ResourceClasses;
			unsigned char                                      Priority;
			class FName                                        TaskInstanceName;
		} params;
		params.ResourceClasses = ResourceClasses;
		params.Priority = Priority;
		params.TaskInstanceName = TaskInstanceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ResourceClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(class UClass* ResourceClass, unsigned char Priority, const class FName& TaskInstanceName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");
		
		struct
		{
			class UClass*                                      ResourceClass;
			unsigned char                                      Priority;
			class FName                                        TaskInstanceName;
		} params;
		params.ResourceClass = ResourceClass;
		params.Priority = Priority;
		params.TaskInstanceName = TaskInstanceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTask_ClaimResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ClaimResource::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    SpawnRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSpawnOnlyOnAuthority                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");
		
		struct
		{
			struct FVector                                     SpawnLocation;
			struct FRotator                                    SpawnRotation;
			class UClass*                                      Class;
			bool                                               bSpawnOnlyOnAuthority;
		} params;
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		params.Class = Class;
		params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      SpawnedActor;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      SpawnedActor;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTask_SpawnActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_SpawnActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTask_TimeLimitedExecution.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_TimeLimitedExecution::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(float Time, unsigned char Priority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");
		
		struct
		{
			float                                              Time;
			unsigned char                                      Priority;
		} params;
		params.Time = Time;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTask_WaitDelay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_WaitDelay::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTaskOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTaskOwnerInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTaskResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTaskResource::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	 * 		Flags  -> ()
	 */
	void UGameplayTasksComponent::OnRep_SimulatedTasks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              AdditionalRequiredResources                                (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              AdditionalClaimedResources                                 (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");
		
		struct
		{
			class UGameplayTask*                               Task;
			unsigned char                                      Priority;
			TArray<class UClass*>                              AdditionalRequiredResources;
			TArray<class UClass*>                              AdditionalClaimedResources;
		} params;
		params.Task = Task;
		params.Priority = Priority;
		params.AdditionalRequiredResources = AdditionalRequiredResources;
		params.AdditionalClaimedResources = AdditionalClaimedResources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTasksComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTasksComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}

}


