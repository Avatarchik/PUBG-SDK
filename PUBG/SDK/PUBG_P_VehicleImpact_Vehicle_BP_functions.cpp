// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AP_VehicleImpact_Vehicle_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.UserConstructionScript");

	AP_VehicleImpact_Vehicle_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.OnParameterUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AP_VehicleImpact_Vehicle_BP_C::OnParameterUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.OnParameterUpdated");

	AP_VehicleImpact_Vehicle_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.ExecuteUbergraph_P_VehicleImpact_Vehicle_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_VehicleImpact_Vehicle_BP_C::ExecuteUbergraph_P_VehicleImpact_Vehicle_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Vehicle_BP.P_VehicleImpact_Vehicle_BP_C.ExecuteUbergraph_P_VehicleImpact_Vehicle_BP");

	AP_VehicleImpact_Vehicle_BP_C_ExecuteUbergraph_P_VehicleImpact_Vehicle_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
