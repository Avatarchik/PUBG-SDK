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

// AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C
// 0x1A50 (0x1EE8 - 0x0498)
class UCharProxy_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88CAAB864B27793D6A4FEA9278275EBA;// 0x04A0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1F2A2F94C6F6B4125EA27959FC98302;// 0x0510(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CF4C69E94D4584561F0E05BD3E8362E5;// 0x0560(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBC1D0164B60BC6744CC67A7498B6C73;// 0x0608(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DEE412844DF63DD57177199BCCB4D6C7;// 0x0658(0x00A8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0;// 0x0700(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D65CA8E4C2DF91736AC45B7731017E9;      // 0x07E0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88EF657744D7CD0A7FDC0899BF7388B1;// 0x0828(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_64036C624695CCAE871C91A12B7E4BD6;  // 0x08D0(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9A2FC77A4F553199FE35D8B9FB312960;  // 0x0968(0x0098)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_217FCB10470A39214309EBB1129EC727;    // 0x0A00(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_825C3AE34510DAC702F38299520320E5;  // 0x0AF0(0x0098)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B88(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662;    // 0x0B90(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172;  // 0x0C80(0x0098)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F1853924178BAEA6BEACCB192D84949;// 0x0D18(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E5C510214B9D93BD292810BFE2F603D1;// 0x0D60(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_32E0DB5347DAE97549175FB760C11F92;// 0x0DA8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77;// 0x0E48(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8FC1604343ED2A23C11EAEB5261125E0;// 0x0EE8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5432A2504DCB7C5C33D17E850B0953B1;// 0x0F30(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D;// 0x0F78(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_406BD3B743A02018F5ECE0B6152CF4CC;// 0x1098(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ED69F8954F390E791E58B499D563BDC7;// 0x1140(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21B205254447B5FE68F94B84047A1376;// 0x1190(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_203D8C8B449C7B836D3E24B6FE69D850;// 0x11E0(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF;// 0x1230(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D52F2FC34283A3A47745B6B886AFFBB0;// 0x1310(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E97E81B42424702F70AC7A0BE1DAC7B;// 0x13B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A7BFE2C46B8961489CB07A5A54B844B;// 0x1408(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13BC291546E37382B9421CB005024781;// 0x1458(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FEB3CBB4993C735E5697B9ABA86D593;// 0x14A8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7EF5FE2D4969E9806EE6038352FFCA29;// 0x14F8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4DAEEB1A49A12A56C2AA19A7FEF06CFF;// 0x1548(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBF244CB4F14D146A8676AA205C80BB8;// 0x15B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A06990484B3FC26028D44FA5ACB4179D;// 0x1628(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8FF85A748D62EC445CF759565663F02;// 0x1698(0x0070)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_24E7A2C345D59A37751D55ACF23B7355;  // 0x1708(0x0098)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D;// 0x17A0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FFC361E947B0482F78E47096C02B32C4;// 0x1850(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_074320674063AC07AB26F283D6D78E58;// 0x1898(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680;// 0x18E0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9;// 0x1990(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B34669F4F5EDD3A8031F89E93EFC2DD;// 0x1A70(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50A47D654670991CC1C4E49030E96D06;// 0x1AE0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAD85A3E4F657B41D4F7B1878B58F08A;// 0x1B50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70C784D9439F629945E27C92470B86AA;// 0x1BC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6F3136F4BC7AD927602F6A6F2110126;// 0x1C30(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E481FAF8441BC5F4CF0E21AB02D536F8;// 0x1CA0(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3;// 0x1D10(0x0120)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E;// 0x1E30(0x0070)
	TEnumAsByte<EAnimWeaponType>                       AnimWeaponType;                                           // 0x1EA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1EA1(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             GripBlendSpace;                                           // 0x1EA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x1EB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // 0x1EB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Aimstate;                                                 // 0x1EB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x1EBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     PistolOffset;                                             // 0x1EC0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GripType;                                                 // 0x1ECC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlinkAlpha;                                               // 0x1ED0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClassEnum;                                          // 0x1ED4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1ED5(0x0003) MISSED OFFSET
	float                                              LH_GripIndex;                                             // 0x1ED8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1EDC(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             LH_GripBS;                                                // 0x1EE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C");
		return ptr;
	}


	void UpdateBlink();
	void GetAnimWeaponIKLeft(struct FTransform* IKLeft);
	void GetAnimWeaponType(TEnumAsByte<EAnimWeaponType>* AnimWeaponType);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_CharProxy_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
