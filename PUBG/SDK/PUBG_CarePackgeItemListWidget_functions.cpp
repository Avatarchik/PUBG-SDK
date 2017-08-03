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

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::HideCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList");

	UCarePackgeItemListWidget_C_HideCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                ItemIcon                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ItemName                       (CPF_Parm)
// int                            ItemCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCarePackageItemSlotWidget_C* CarePackageItemSlotWidget      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCarePackgeItemListWidget_C::GetCarePackageItemWidget(class UTexture* ItemIcon, const struct FText& ItemName, int ItemCount, class UCarePackageItemSlotWidget_C** CarePackageItemSlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget");

	UCarePackgeItemListWidget_C_GetCarePackageItemWidget_Params params;
	params.ItemIcon = ItemIcon;
	params.ItemName = ItemName;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CarePackageItemSlotWidget != nullptr)
		*CarePackageItemSlotWidget = params.CarePackageItemSlotWidget;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::ShowCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList");

	UCarePackgeItemListWidget_C_ShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
