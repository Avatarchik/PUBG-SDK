#pragma once

// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Moto_Muffler_BP.P_Moto_Muffler_BP_C
// 0x0008 (0x0400 - 0x03F8)
class AP_Moto_Muffler_BP_C : public ATslParticle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Moto_Muffler_BP.P_Moto_Muffler_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnParameterUpdated();
	void ExecuteUbergraph_P_Moto_Muffler_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
