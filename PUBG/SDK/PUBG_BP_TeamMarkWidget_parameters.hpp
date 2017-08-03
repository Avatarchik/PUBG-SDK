#pragma once

// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.DecideWidgetColors
struct UBP_TeamMarkWidget_C_DecideWidgetColors_Params
{
	bool                                               Condition;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.IsFreeCam
struct UBP_TeamMarkWidget_C_IsFreeCam_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetJustification
struct UBP_TeamMarkWidget_C_SetJustification_Params
{
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.GetPlayerNameTextAddLocation
struct UBP_TeamMarkWidget_C_GetPlayerNameTextAddLocation_Params
{
	class Vector2D                                     AddLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.OnPrepass_1
struct UBP_TeamMarkWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Get_PlayerName_Text_1
struct UBP_TeamMarkWidget_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.SetCharacterIconPosition_UC
struct UBP_TeamMarkWidget_C_SetCharacterIconPosition_UC_Params
{
	class Vector2D*                                    Pos_UC;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              OutRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              IsHidden;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Construct
struct UBP_TeamMarkWidget_C_Construct_Params
{
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.Tick
struct UBP_TeamMarkWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_TeamMarkWidget.BP_TeamMarkWidget_C.ExecuteUbergraph_BP_TeamMarkWidget
struct UBP_TeamMarkWidget_C_ExecuteUbergraph_BP_TeamMarkWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
