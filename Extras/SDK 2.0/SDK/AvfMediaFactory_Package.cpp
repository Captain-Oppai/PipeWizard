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
	 * 		Name   -> PredefindFunction UAvfMediaSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAvfMediaSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AvfMediaFactory.AvfMediaSettings");
		return ptr;
	}

}


