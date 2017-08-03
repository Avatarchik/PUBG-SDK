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

// BlueprintGeneratedClass Uaz.Uaz_C
// 0x0054 (0x08D0 - 0x087C)
class AUaz_C : public AVehicleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class USphereComponent*                            Sphere4;                                                  // 0x0880(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerBCSeat;                                          // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere3;                                                  // 0x0890(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerBRSeat;                                          // 0x0898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere2;                                                  // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerBLSeat;                                          // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x08B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerFRSeat;                                          // 0x08B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x08C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            DriverSeat;                                               // 0x08C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Uaz.Uaz_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
