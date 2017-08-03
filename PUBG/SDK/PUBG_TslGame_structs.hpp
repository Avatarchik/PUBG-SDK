#pragma once

// PLAYERUNKNOWN BattleGrounds () SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TslGame.EPopupButtonID
enum class EPopupButtonID
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum TslGame.EPowerUpType
enum class EPowerUpType
{
	PowerUp_None                   = 0,
	PowerUp_Bandage                = 1,
	PowerUp_FirstAid               = 2,
	PowerUp_MedKit                 = 3,
	PowerUp_EnergyDrink            = 4,
	PowerUp_Painkillers            = 5,
	PowerUp_Adrenaline             = 6,
	PowerUp_MAX                    = 7
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__ESystemMessageType_MAX = 5
};


// Enum TslGame.EDamageReason
enum class EDamageReason
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__StomachShot     = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__NonSpecific     = 6,
	EDamageReason__EDamageReason_MAX = 7
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory
{
	Damage_None                    = 0,
	Damage_Instant                 = 1,
	Damage_Gun                     = 2,
	Damage_Melee                   = 3,
	Damage_ZombieMelee             = 4,
	Damage_Groggy                  = 5,
	Damage_BlueZone                = 6,
	Damage_VehicleHit              = 7,
	Damage_Molotov                 = 8,
	Damage_Explosion               = 9,
	Damage_Explosion_Grenade       = 10,
	Damage_Explosion_RedZone       = 11,
	Damage_Explosion_Vehicle       = 12,
	Damage_Instant_Fall            = 13,
	Damage_Drown                   = 14,
	Damage_MAX                     = 15
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__EPopupStyle_MAX   = 3
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection
{
	F_Direction                    = 0,
	L_Direction                    = 1,
	R_Direction                    = 2,
	B_Direction                    = 3,
	FL_Direction                   = 4,
	FR_Direction                   = 5,
	BL_Direction                   = 6,
	BR_Direction                   = 7,
	EMovementDirection_MAX         = 8
};


// Enum TslGame.EAnimStanceType
enum class EAnimStanceType
{
	AnimType_Stand                 = 0,
	AnimType_Crouch                = 1,
	AnimType_Prone                 = 2,
	AnimType_MAX                   = 3
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	EBuffOverlapSolveMethod_MAX    = 3
};


// Enum TslGame.ECastAnim
enum class ECastAnim
{
	ECastAnim__None                = 0,
	ECastAnim__Bandage             = 1,
	ECastAnim__FirstAid            = 2,
	ECastAnim__Medkit              = 3,
	ECastAnim__EnergyDrink         = 4,
	ECastAnim__Painkiller          = 5,
	ECastAnim__Adrenaline          = 6,
	ECastAnim__Door                = 7,
	ECastAnim__ECastAnim_MAX       = 8
};


// Enum TslGame.ECastLevel
enum class ECastLevel
{
	ECastLevel__None               = 0,
	ECastLevel__NoRestriction      = 1,
	ECastLevel__Restriction        = 2,
	ECastLevel__ECastLevel_MAX     = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority
{
	ECastPriority__None            = 0,
	ECastPriority__Low             = 1,
	ECastPriority__Normal          = 2,
	ECastPriority__High            = 3,
	ECastPriority__Max             = 4,
	ECastPriority__ECastPriority_MAX = 5
};


// Enum TslGame.EUiShowType
enum class EUiShowType
{
	EUiShowType__AlwaysShow        = 0,
	EUiShowType__TpsOnlyShow       = 1,
	EUiShowType__FpsOnlyShow       = 2,
	EUiShowType__AlwaysHide        = 3,
	EUiShowType__EUiShowType_MAX   = 4
};


// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions
{
	EInputModeSettingActions__Crouch = 0,
	EInputModeSettingActions__Prone = 1,
	EInputModeSettingActions__Walk = 2,
	EInputModeSettingActions__Sprint = 3,
	EInputModeSettingActions__HoldRotation = 4,
	EInputModeSettingActions__HoldBreath = 5,
	EInputModeSettingActions__Peek = 6,
	EInputModeSettingActions__Map  = 7,
	EInputModeSettingActions__EInputModeSettingActions_MAX = 8
};


// Enum TslGame.EKeyBindingSlot
enum class EKeyBindingSlot
{
	EKeyBindingSlot__FirstKey      = 0,
	EKeyBindingSlot__SecondKey     = 1,
	EKeyBindingSlot__EKeyBindingSlot_MAX = 2
};


// Enum TslGame.EReportCause
enum class EReportCause
{
	EReportCause__Default          = 0,
	EReportCause__Cheat            = 1,
	EReportCause__TeamKill         = 2,
	EReportCause__Teaming          = 3,
	EReportCause__InappropriateID  = 4,
	EReportCause__EReportCause_MAX = 5
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport
{
	ESubjectToReport__Killer       = 0,
	ESubjectToReport__Spectating_Player = 1,
	ESubjectToReport__ESubjectToReport_MAX = 2
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType
{
	ECarePackageIconType__Normal   = 0,
	ECarePackageIconType__Flying   = 1,
	ECarePackageIconType__Opened   = 2,
	ECarePackageIconType__ECarePackageIconType_MAX = 3
};


// Enum TslGame.ECharacterIconType
enum class ECharacterIconType
{
	ECharacterIconType__Normal     = 0,
	ECharacterIconType__Vehicle    = 1,
	ECharacterIconType__Parachute  = 2,
	ECharacterIconType__Die        = 3,
	ECharacterIconType__Groggy     = 4,
	ECharacterIconType__Quitter    = 5,
	ECharacterIconType__Observer   = 6,
	ECharacterIconType__ECharacterIconType_MAX = 7
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 4
};


// Enum TslGame.EValueType
enum class EValueType
{
	EValueType__Float              = 0,
	EValueType__Int                = 1,
	EValueType__String             = 2,
	EValueType__Bool               = 3,
	EValueType__EValueType_MAX     = 4
};


// Enum TslGame.EQualityType
enum class EQualityType
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType
{
	EColorBlindType__Normal        = 0,
	EColorBlindType__Deuteranopia  = 1,
	EColorBlindType__Protanopia    = 2,
	EColorBlindType__Tritanopia    = 3,
	EColorBlindType__EColorBlindType_MAX = 4
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum TslGame.ETargetingType
enum class ETargetingType
{
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot
{
	Slot_Primary                   = 0,
	Slot_Secondary                 = 1,
	Slot_SideArm                   = 2,
	Slot_Melee                     = 3,
	Slot_Thrown                    = 4,
	Slot_MAX                       = 5
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType
{
	None                           = 0,
	Rifle                          = 1,
	Pistol                         = 2,
	Throwable                      = 3,
	Melee                          = 4,
	EAnimWeaponType_MAX            = 5
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum TslGame.EGender
enum class EGender
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum TslGame.EAttackType
enum class EAttackType
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__EAttackType_MAX   = 7
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnVehicle     = 1,
	EPlayerMoveType__EPlayerMoveType_MAX = 2
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType
{
	ELobbyItemPointSellingType__Normal = 0,
	ELobbyItemPointSellingType__WeeklyDouble = 1,
	ELobbyItemPointSellingType__ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier
{
	ELobbyItemTier__Basic          = 0,
	ELobbyItemTier__Common         = 1,
	ELobbyItemTier__Classic        = 2,
	ELobbyItemTier__Special        = 3,
	ELobbyItemTier__Rare           = 4,
	ELobbyItemTier__Elite          = 5,
	ELobbyItemTier__Epic           = 6,
	ELobbyItemTier__Legendary      = 7,
	ELobbyItemTier__Ultimate       = 8,
	ELobbyItemTier__Event          = 9,
	ELobbyItemTier__ELobbyItemTier_MAX = 10
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory
{
	ELobbyItemCategory__Belt       = 0,
	ELobbyItemCategory__Body       = 1,
	ELobbyItemCategory__Eyes       = 2,
	ELobbyItemCategory__Feet       = 3,
	ELobbyItemCategory__Head       = 4,
	ELobbyItemCategory__Jacket     = 5,
	ELobbyItemCategory__Legs       = 6,
	ELobbyItemCategory__Mask       = 7,
	ELobbyItemCategory__Hands      = 8,
	ELobbyItemCategory__Box        = 9,
	ELobbyItemCategory__Key        = 10,
	ELobbyItemCategory__ELobbyItemCategory_MAX = 11
};


// Enum TslGame.EItemCategory
enum class EItemCategory
{
	EItemCategory__None            = 0,
	EItemCategory__Equipment       = 1,
	EItemCategory__Weapon          = 2,
	EItemCategory__Attachment      = 3,
	EItemCategory__Ammunition      = 4,
	EItemCategory__Use             = 5,
	EItemCategory__EItemCategory_MAX = 6
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum TslGame.EHackDetectionType
enum class EHackDetectionType
{
	WEAPON_INVALID_IMPACT          = 0,
	WEAPON_INVALID_ORIGIN          = 1,
	WEAPON_INVALID_RANGE           = 2,
	WEAPON_INVALID_SEQUENCE        = 3,
	WEAPON_INVALID_HITLAG          = 4,
	WEAPON_INVALID_AMMO            = 5,
	WEAPON_WALL_CHECK              = 6,
	WEAPON_MAX                     = 7
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 6
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType
{
	EItemSpotGroupType__GroupA     = 0,
	EItemSpotGroupType__GroupB     = 1,
	EItemSpotGroupType__GroupC     = 2,
	EItemSpotGroupType__GroupD     = 3,
	EItemSpotGroupType__GroupE     = 4,
	EItemSpotGroupType__GroupF     = 5,
	EItemSpotGroupType__GroupG     = 6,
	EItemSpotGroupType__GroupH     = 7,
	EItemSpotGroupType__GroupI     = 8,
	EItemSpotGroupType__GroupJ     = 9,
	EItemSpotGroupType__EItemSpotGroupType_MAX = 10
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__EItemSpotType_MAX = 6
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Eyes             = 1,
	EEquipSlotID__Mask             = 2,
	EEquipSlotID__Torso            = 3,
	EEquipSlotID__TorsoArmor       = 4,
	EEquipSlotID__Outer            = 5,
	EEquipSlotID__Backpack         = 6,
	EEquipSlotID__Hands            = 7,
	EEquipSlotID__Legs             = 8,
	EEquipSlotID__Feet             = 9,
	EEquipSlotID__Belt             = 10,
	EEquipSlotID__WeaponPrimary    = 11,
	EEquipSlotID__WeaponSecondary  = 12,
	EEquipSlotID__WeaponMelee      = 13,
	EEquipSlotID__WeaponThrowable  = 14,
	EEquipSlotID__MaxOrNone        = 15,
	EEquipSlotID__EEquipSlotID_MAX = 16
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType
{
	EDurabilityConsumeType__TotalDamage = 0,
	EDurabilityConsumeType__AbsorbDamage = 1,
	EDurabilityConsumeType__EDurabilityConsumeType_MAX = 2
};


// Enum TslGame.EAnimStance
enum class EAnimStance
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Groggy                         = 3,
	EAnimStance_MAX                = 4
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass
{
	Class_Pistol                   = 0,
	Class_SMG                      = 1,
	Class_Rifle                    = 2,
	Class_Carbine                  = 3,
	Class_Shotgun                  = 4,
	Class_Sniper                   = 5,
	Class_DMR                      = 6,
	Class_LMG                      = 7,
	Class_Melee                    = 8,
	Class_Throwable                = 9,
	Class_MAX                      = 10
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType
{
	Thrown_Grenade                 = 0,
	Thrown_Molotov                 = 1,
	Thrown_Other                   = 2,
	Thrown_MAX                     = 3
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType
{
	Addition                       = 0,
	Multiply                       = 1,
	EAttachmentCalculateType_MAX   = 2
};


// Enum TslGame.EFiringMode
enum class EFiringMode
{
	Normal                         = 0,
	Burst                          = 1,
	FullAuto                       = 2,
	EFiringMode_MAX                = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand
{
	Left                           = 0,
	Right                          = 1,
	EWeaponHand_MAX                = 2
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType
{
	Bundle                         = 0,
	Generator                      = 1,
	ELobbyItemBundleType_MAX       = 2
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel
{
	EParameterLUTChannel__R        = 0,
	EParameterLUTChannel__G        = 1,
	EParameterLUTChannel__B        = 2,
	EParameterLUTChannel__A        = 3,
	EParameterLUTChannel__RGBA     = 4,
	EParameterLUTChannel__Undefined = 5,
	EParameterLUTChannel__EParameterLUTChannel_MAX = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType
{
	EMaterialParameterType__Bool   = 0,
	EMaterialParameterType__Scalar = 1,
	EMaterialParameterType__Vector = 2,
	EMaterialParameterType__Texture = 3,
	EMaterialParameterType__Undefined = 4,
	EMaterialParameterType__EMaterialParameterType_MAX = 5
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec
{
	Tactical                       = 0,
	Charge                         = 1,
	Single                         = 2,
	Loop                           = 3,
	EWeaponReloadAnimExec_MAX      = 4
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3
};


// Enum TslGame.EHornSoundType
enum class EHornSoundType
{
	HornOn                         = 0,
	HornOff                        = 1,
	InstantHorn                    = 2,
	EHornSoundType_MAX             = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType
{
	DefaultDriver                  = 0,
	DefaultPassenger               = 1,
	BuggyDriver                    = 2,
	BuggyPassenger                 = 3,
	DaciaDriver                    = 4,
	DaciaPassengerFR               = 5,
	DaciaPassengerBL               = 6,
	DaciaPassengerBC               = 7,
	DaciaPassengerBR               = 8,
	UazDriver                      = 9,
	UazPassengerFR                 = 10,
	UazPassengerBL                 = 11,
	UazPassengerBC                 = 12,
	UazPassengerBR                 = 13,
	BoatDriver                     = 14,
	BoatPassengerFR                = 15,
	BoatPassengerBL                = 16,
	BoatPassengerBC                = 17,
	BoatPassengerBR                = 18,
	MotoDriver                     = 19,
	MotoPassenger                  = 20,
	MotoSidecar                    = 21,
	MotoDriverSidecar              = 22,
	MotoPassengerSidecar           = 23,
	AircraftPassenger              = 24,
	EVehicleAnimType_MAX           = 25
};


// Enum TslGame.ERiderType
enum class ERiderType
{
	ERiderType__Driver             = 0,
	ERiderType__Passenger          = 1,
	ERiderType__ERiderType_MAX     = 2
};


// Enum TslGame.EPunchDamageType
enum class EPunchDamageType
{
	PunchDamage_Light              = 0,
	PunchDamage_Heavy              = 1,
	PunchDamage_MAX                = 2
};


// Enum TslGame.EMovementType
enum class EMovementType
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	M_MAX                          = 18
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType
{
	EThingGroupSpawnType__None     = 0,
	EThingGroupSpawnType__Probability = 1,
	EThingGroupSpawnType__TotalCount = 2,
	EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType
{
	ETeamVehicleType__Team_None    = 0,
	ETeamVehicleType__Team_Vehicle = 1,
	ETeamVehicleType__Team_Parachute = 2,
	ETeamVehicleType__Team_MAX     = 3
};


// Enum TslGame.EMarkPosition
enum class EMarkPosition
{
	EMarkPosition__Mid             = 0,
	EMarkPosition__Top             = 1,
	EMarkPosition__Right           = 2,
	EMarkPosition__Left            = 3,
	EMarkPosition__Bottom          = 4,
	EMarkPosition__TopRight        = 5,
	EMarkPosition__TopLeft         = 6,
	EMarkPosition__BottomLeft      = 7,
	EMarkPosition__BottomRight     = 8,
	EMarkPosition__EMarkPosition_MAX = 9
};


// Enum TslGame.EWheelContactType
enum class EWheelContactType
{
	WCT_Static                     = 0,
	WCT_Roll                       = 1,
	WCT_LatSlip                    = 2,
	WCT_LongSlip                   = 3,
	WCT_MAX                        = 4
};


// Enum TslGame.EAnimPawnState
enum class EAnimPawnState
{
	PS_OnFoot                      = 0,
	PS_VehicleDriver               = 1,
	PS_VehiclePassenger            = 2,
	PS_Freefall                    = 3,
	PS_Parachute                   = 4,
	PS_Swim                        = 5,
	PS_DBNO                        = 6,
	PS_Reviving                    = 7,
	PS_Flying                      = 8,
	PS_ActiveRagdoll               = 9,
	PS_MAX                         = 10
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType
{
	Character                      = 0,
	Vehicle                        = 1,
	Wheel                          = 2,
	DestructibleActor              = 3,
	EDamageVictimActorType_MAX     = 4
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector
{
	ETslFenceSelector__None        = 0,
	ETslFenceSelector__Use         = 1,
	ETslFenceSelector__Use01       = 2,
	ETslFenceSelector__Use02       = 3,
	ETslFenceSelector__Use03       = 4,
	ETslFenceSelector__ETslFenceSelector_MAX = 5
};


// Enum TslGame.EReactionType
enum class EReactionType
{
	Reaciton_None                  = 0,
	Reaction_Physics               = 1,
	Reaction_Destructible          = 2,
	EReactionType_MAX              = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum TslGame.EAttachParent
enum class EAttachParent
{
	EAttachParent__None            = 0,
	EAttachParent__Character       = 1,
	EAttachParent__WeaponGun       = 2,
	EAttachParent__EAttachParent_MAX = 3
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState
{
	NotExplode                     = 0,
	ImpactExplode                  = 1,
	TimerExplode                   = 2,
	EProjectileExplodeState_MAX    = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType
{
	ProjectileUpVector             = 0,
	WorldUpVector                  = 1,
	EProjectileExplosionRotationType_MAX = 2
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType
{
	Molotov_SimulationImpact       = 0,
	Molotov_SimulationProjectile   = 1,
	Molotov_SimulationFragment     = 2,
	Molotov_MAX                    = 3
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState
{
	EBluezoneState__None           = 0,
	EBluezoneState__Wait           = 1,
	EBluezoneState__Release        = 2,
	EBluezoneState__EBluezoneState_MAX = 3
};


// Enum TslGame.EEquipableItemIconVisibility
enum class EEquipableItemIconVisibility
{
	EEquipableItemIconVisibility__Always = 0,
	EEquipableItemIconVisibility__WhenEquipped = 1,
	EEquipableItemIconVisibility__EEquipableItemIconVisibility_MAX = 2
};


// Enum TslGame.ENoReloadGuideType
enum class ENoReloadGuideType
{
	ENoReloadGuideType__Alwyas     = 0,
	ENoReloadGuideType__WhenCurrentWeapon = 1,
	ENoReloadGuideType__ENoReloadGuideType_MAX = 2
};


// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect
{
	S_Concrete_Roll                = 0,
	S_Concrete_Skid                = 1,
	S_Concrete_Spin                = 2,
	S_Dirt_Roll                    = 3,
	S_Dirt_Skid                    = 4,
	S_Dirt_Spin                    = 5,
	S_Water_Roll                   = 6,
	S_Water_Skid                   = 7,
	S_Water_Spin                   = 8,
	S_Metal_Roll                   = 9,
	S_Metal_Skid                   = 10,
	S_Metal_Spin                   = 11,
	S_Wood_Roll                    = 12,
	S_Wood_Skid                    = 13,
	S_Wood_Spin                    = 14,
	S_Rock_Roll                    = 15,
	S_Rock_Skid                    = 16,
	S_Rock_Spin                    = 17,
	S_Grass_Roll                   = 18,
	S_Grass_Skid                   = 19,
	S_Grass_Spin                   = 20,
	S_Sand_Roll                    = 21,
	S_Sand_Skid                    = 22,
	S_Sand_Spin                    = 23,
	S_MAX                          = 24
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType
{
	HitCheck_Once                  = 0,
	HitCheck_Multi                 = 1,
	HitCheck_MAX                   = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState
{
	Idle                           = 0,
	Ready                          = 1,
	PinOff                         = 2,
	Throw                          = 3,
	Destroy                        = 4,
	EThrowableState_MAX            = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType
{
	NotStart                       = 0,
	Impact                         = 1,
	Delay                          = 2,
	ImpactOrDelay                  = 3,
	EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState
{
	EVivoxResponseState__NotRequested = 0,
	EVivoxResponseState__Requested = 1,
	EVivoxResponseState__Fail      = 2,
	EVivoxResponseState__Success   = 3,
	EVivoxResponseState__EVivoxResponseState_MAX = 4
};


// Enum TslGame.EVivoxChannelType
enum class EVivoxChannelType
{
	EVivoxChannelType__None        = 0,
	EVivoxChannelType__All         = 1,
	EVivoxChannelType__GlobalOnly  = 2,
	EVivoxChannelType__TeamOnly    = 3,
	EVivoxChannelType__EVivoxChannelType_MAX = 4
};


// Enum TslGame.EVivoxChannelJoinState
enum class EVivoxChannelJoinState
{
	EVivoxChannelJoinState__NotJoined = 0,
	EVivoxChannelJoinState__Joining = 1,
	EVivoxChannelJoinState__Joined = 2,
	EVivoxChannelJoinState__EVivoxChannelJoinState_MAX = 3
};


// Enum TslGame.EVivoxLoginState
enum class EVivoxLoginState
{
	EVivoxLoginState__NotLoggedin  = 0,
	EVivoxLoginState__Loggingin    = 1,
	EVivoxLoginState__Loggedin     = 2,
	EVivoxLoginState__EVivoxLoginState_MAX = 3
};


// Enum TslGame.EVivoxConnectionState
enum class EVivoxConnectionState
{
	EVivoxConnectionState__NotConnected = 0,
	EVivoxConnectionState__Connecting = 1,
	EVivoxConnectionState__Connected = 2,
	EVivoxConnectionState__EVivoxConnectionState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TslGame.TslWidgetConfig
// 0x0010
struct FTslWidgetConfig
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDefaultShow : 1;                                         // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMouse : 1;                                            // 0x0009(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCloseByEscape : 1;                                       // 0x000A(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslWidgetState
// 0x0020
struct FTslWidgetState
{
	struct FTslWidgetConfig                            Config;                                                   // 0x0000(0x0010)
	class UUserWidget*                                 Widget;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.AnimSpeedInfo
// 0x0020
struct FAnimSpeedInfo
{
	float                                              F;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              L;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              R;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FL;                                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FR;                                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BL;                                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BR;                                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimInfo
// 0x0058
struct FAnimInfo
{
	class UBlendSpace*                                 BlendSpaceRef;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceFPPRef;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Walk;                                           // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Run;                                            // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimSpeed_Sprint;                                         // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingLevelOverZ
// 0x0008
struct FNearClippingLevelOverZ
{
	float                                              Z;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENearClippingLevel>                    Level;                                                    // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PingPongSummary
// 0x000C
struct FPingPongSummary
{
	float                                              UnreliableAverageDelayMsec;                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReliableAverageDelayMsec;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableSentCount;                                      // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableMissCount;                                      // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             ReliableCount;                                            // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyItemDesc
// 0x0030
struct FLobbyItemDesc
{
	unsigned char                                      bCashSellable : 1;                                        // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointSellable : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bMarketable : 1;                                          // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointRefundable : 1;                                     // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<ELobbyItemTier>                        Tier;                                                     // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ELobbyItemCategory>                    Category;                                                 // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              CashSellingPrice;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ELobbyItemPointSellingType>            PointSellingType;                                         // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                PointSellingPrice;                                        // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PointRefundingPrice;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackagedItemInfo
// 0x0010
struct FPackagedItemInfo
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyFaceElementDetail
// 0x0048
struct FLobbyFaceElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               BodyAsset;                                                // 0x0008(0x0020) (CPF_Edit)
	TAssetPtr<class UCustomizableObject>               FaceAsset;                                                // 0x0028(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyFaceElement
// 0x0028
struct FLobbyFaceElement
{
	TEnumAsByte<EGender>                               Gender;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     FaceType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyFaceElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.LobbyHairElementDetail
// 0x0028
struct FLobbyHairElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               HairAsset;                                                // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyHairElement
// 0x0028
struct FLobbyHairElement
{
	TEnumAsByte<EGender>                               Gender;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     HairType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GeneralItemSpawnProb
// 0x0018
struct FGeneralItemSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HighlightRecordConfig
// 0x000C
struct FHighlightRecordConfig
{
	float                                              BeforeDurationSec;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AfterDurationSec;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinkWaitDurationSec;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CastConfig
// 0x0030
struct FCastConfig
{
	struct FText                                       CastName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CastTime;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECastPriority>                         CastPriority;                                             // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECastLevel>                            CastLevel;                                                // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              CastMaxDistance;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CasterAndCastObjectMaxDistance;                           // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CastMaxSpeed;                                             // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECastAnim>                             CastAnim;                                                 // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentData
// 0x0098
struct FWeaponAttachmentData
{
	TEnumAsByte<EWeaponAttachmentSlotID>               AttachmentSlotID;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Magnification;                                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecreaseRecoilPatternScale;                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadAnimationPlayRate;                                  // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringBulletsSpread;                              // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringSpreadBase;                                 // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleAmmoSpeed;                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierHorizontal;                               // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierVertical;                                 // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoveryMultiplier;                                 // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayMultiplier;                                           // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationKickMultiplier;                                  // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMultiplier;                                      // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                GripType_MN;                                              // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BarrelLengthAdditive;                                     // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     IKHandOffset;                                             // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      IKHandRotation;                                           // 0x007C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponGripLeftHand>                   WeaponGripLeft;                                           // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               MuzzleSound;                                              // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentWeaponTagData
// 0x00C0
struct FWeaponAttachmentWeaponTagData
{
	struct FName                                       WeaponTag;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x0028(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponData
// 0x0090
struct FWeaponData
{
	float                                              TargetingFOV;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HoldBreathFOV;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SocketOffset_Shoulder;                                    // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SocketOffset_Hand;                                        // 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyGripPoseLeft : 1;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponGripLeftHand>                   WeaponGripLeft;                                           // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClass;                                              // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDefaultScoreMultiplier : 1;                           // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScoreMultiplierByDamage;                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScoreMultiplierByKill;                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Pitch;                                       // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_YawOffset;                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Movement;                                    // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Stand;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Crouch;                                      // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Prone;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Range;                                          // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_NearRange;                                      // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Power;                                          // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicReverbAK : 1;                                  // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              CurrentWeaponZero;                                        // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinWeaponZero;                                            // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxWeaponZero;                                            // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationKick;                                            // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UAnimMontage*                                RecoilMontage;                                            // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestructibleDoor : 1;                                     // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EThrownWeaponType>                     ThrownType;                                               // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              WeaponEquipDuration;                                      // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponReadyDuration;                                      // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bForceFireAfterEquip : 1;                                 // 0x0084(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              PhysicalBodyHitImpactPower;                               // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentTagPositionData
// 0x0010
struct FWeaponAttachmentTagPositionData
{
	struct FName                                       AttachmentTag;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentPositionData
// 0x0020
struct FWeaponAttachmentPositionData
{
	TEnumAsByte<EWeaponAttachmentSlotID>               AttachmentSlotID;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagPositionData>    AttachmentPointByTag;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponAttachmentAssetData
// 0x0030
struct FWeaponAttachmentAssetData
{
	TEnumAsByte<EWeaponAttachmentSlotID>               AttachmentSlotID;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponBasicAnim
// 0x0018
struct FWeaponBasicAnim
{
	class UAnimMontage*                                PullOut;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                PutIn;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pickup;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponRollAnim
// 0x0010
struct FWeaponRollAnim
{
	class UAnimMontage*                                RollLeft;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRight;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentTagData
// 0x0018
struct FWeaponAttachmentTagData
{
	TEnumAsByte<EWeaponAttachmentSlotID>               AttachmentSlotID;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               AttachableTags;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.LobbyItemBundleElement
// 0x0028
struct FLobbyItemBundleElement
{
	TAssetPtr<class UClass>                            ItemAsset;                                                // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                BundleId;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyItemBundle
// 0x0030
struct FLobbyItemBundle
{
	int                                                BundleId;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     BundleName;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TEnumAsByte<ELobbyItemBundleType>                  Type;                                                     // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FLobbyItemBundleElement>             ItemList;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.NameWeight
// 0x0010
struct FNameWeight
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpotTypeProperty
// 0x0038
struct FItemSpotTypeProperty
{
	TEnumAsByte<EItemSpotType>                         SpotType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpotPercentMin;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpotPercentMax;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMin;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMax;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FNameWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ItemSpotGroupTypeProperty
// 0x0168
struct FItemSpotGroupTypeProperty
{
	TEnumAsByte<EItemSpotGroupType>                    SpotGroupType;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpotGroupPercent;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FItemSpotTypeProperty>               SpotTypeProperties;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x150];                                     // 0x0018(0x0150) MISSED OFFSET
};

// ScriptStruct TslGame.MaterialMergerParameters
// 0x0018
struct FMaterialMergerParameters
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<EMaterialParameterType>                Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bStoreToLUT : 1;                                          // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                LUTIndex;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<EParameterLUTChannel>                  LUTChannel;                                               // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BattleRoyalePoisionGasData
// 0x001C
struct FBattleRoyalePoisionGasData
{
	float                                              StartDelay;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomRadiusRate;                                         // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunData
// 0x0080
struct FWeaponGunData
{
	class UClass*                                      AmmoItemClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TracerClass;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EFiringMode>>                   FiringModes;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                BurstShots;                                               // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BurstDelay;                                               // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletPerFiring;                                          // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringBulletsSpread;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsArrowProjectile : 1;                                   // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRotationFromBarrelWhenScoped : 1;                        // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EWeaponReloadMethod>                   ReloadMethod;                                             // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	float                                              ReloadDurationByOneInitial;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationByOneLoop;                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierAim;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierScope;                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponLength;                                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShoulderLength;                                           // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponSuppressorLength;                                   // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceAdditiveZ;                                           // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugWeaponCollision : 1;                                 // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	class Vector3D                                     HandWeaponOffset;                                         // 0x006C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleAfterShot : 1;                                // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleInitialStateReady : 1;                        // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              LongTailDelay;                                            // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponDeviationData
// 0x0040
struct FWeaponDeviationData
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMax;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMinReferenceVelocity;                        // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMaxReferenceVelocity;                        // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunAnim
// 0x00F0
struct FWeaponGunAnim
{
	class UAnimMontage*                                Fire;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedFire : 1;                                          // 0x0008(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UAnimMontage*                                Reload;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace1D*                               CharacterGripBlendspace;                                  // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CharacterLHGripBlendspace;                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFire;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireCycle;                                       // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireSelector;                                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStart;                                // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStop;                                 // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneSingle;                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationTactical;                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationCharge;                                     // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationStart;                                      // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationLoop;                                       // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationMagOut;                                     // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseBoltAction : 1;                                       // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              FireCycleDelay;                                           // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireCycleDuration;                                        // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleAfterLastShot : 1;                                  // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleDuringReload : 1;                                   // 0x0099(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	class UClass*                                      ShotCameraShake;                                          // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeIronsight;                                 // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeADS;                                       // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraAnim*                                 CycleCameraAnim;                                          // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilKickADS;                                            // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     RecoilADSSocketOffsetScale;                               // 0x00C4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MagDropLinearVelocity;                                    // 0x00D0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MagDropAngularVelocity;                                   // 0x00DC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaInterpMultiplier;                                  // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaClampMultiplier;                                   // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TakeHitInfo
// 0x0040
struct FTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              PlayerInstigator;                                         // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DamageOrigin;                                             // 0x0018(0x000C)
	class Vector3D                                     RelHitLocation;                                           // 0x0024(0x000C)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMaxRadius;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirPitch;                                             // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirYaw;                                               // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPointDamage : 1;                                         // 0x003E(0x0001)
	unsigned char                                      bRadialDamage : 1;                                        // 0x003E(0x0001)
	unsigned char                                      bKilled : 1;                                              // 0x003E(0x0001)
	unsigned char                                      EnsureReplicationByte;                                    // 0x003F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CharacterAnim
// 0x0010
struct FCharacterAnim
{
	class UAnimMontage*                                PickUpAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                DeathAnim;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ZombieCustomizationData
// 0x0028
struct FZombieCustomizationData
{
	struct FString                                     StringOptionKey;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TEnumAsByte<EGender>                               Gender;                                                   // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             ZombieOptionValues;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.BuffWithBoostGauge
// 0x0018
struct FBuffWithBoostGauge
{
	float                                              BoostGauge;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      Buff;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       OverlapId;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransition
// 0x0010
struct FStanceTransition
{
	class UAnimMontage*                                TransitionAnim;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CanPlayInMoving : 1;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransitionData
// 0x0060
struct FStanceTransitionData
{
	struct FStanceTransition                           StandToCrouch;                                            // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToStand;                                            // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           StandToProne;                                             // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToStand;                                             // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToProne;                                            // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToCrouch;                                            // 0x0050(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.GeneralSpotGroupProperty
// 0x0020
struct FGeneralSpotGroupProperty
{
	TEnumAsByte<EThingSpotGroupType>                   GroupType;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bActiveByStartVolume : 1;                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EThingGroupSpawnType>                  SpawnType;                                                // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FFloatRange                                 TotalCountRange;                                          // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalCountMultiplierWithPlayerCount;                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercent;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercentMultiplierWithPlayerCount;              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpawnProb
// 0x0018
struct FPackageSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpotGroupProperty
// 0x0018 (0x0038 - 0x0020)
struct FPackageSpotGroupProperty : public FGeneralSpotGroupProperty
{
	class UClass*                                      ItemPackageClass;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpawnProb>                   PackageSpawnProbArray;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleSpotGroupProperty
// 0x0020 (0x0040 - 0x0020)
struct FVehicleSpotGroupProperty : public FGeneralSpotGroupProperty
{
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatRange                                 FuelPercentRange;                                         // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AircraftParticle
// 0x0010
struct FAircraftParticle
{
	class UClass*                                      ParticleClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DropCarePackageTableData
// 0x0008
struct FDropCarePackageTableData
{
	int                                                DropCount;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropPercent;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornPlayInfo
// 0x0008
struct FHornPlayInfo
{
	unsigned char                                      bMakeSureDirty : 1;                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EHornSoundType>                        HornSoundType;                                            // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              KeyPressedTime;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornSoundInfo
// 0x0010
struct FHornSoundInfo
{
	class UAkAudioEvent*                               HornOnSound;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HornOffSound;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslImpactSoundInfo
// 0x0060
struct FTslImpactSoundInfo
{
	class UAkAudioEvent*                               DefaultSoundAk;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ConcreteSoundAk;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DirtSoundAk;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WaterSoundAk;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MetalSoundAk;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WoodSoundAk;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GrassSoundAk;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GlassSoundAk;                                             // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FleshSoundAk;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RockSoundAk;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SandSoundAk;                                              // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MudSoundAk;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageRatioInfo
// 0x0008
struct FDamageRatioInfo
{
	float                                              DamageRatio;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EDamageVictimActorType>                DamageVictimActorType;                                    // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslChatStyle
// 0x0980 (0x0988 - 0x0008)
struct FTslChatStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextEntryStyle;                                           // 0x0008(0x0870) (CPF_Edit)
	struct FSlateBrush                                 BackingBrush;                                             // 0x0878(0x0090) (CPF_Edit)
	struct FSlateColor                                 BoxBorderColor;                                           // 0x0908(0x0028) (CPF_Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0930(0x0028) (CPF_Edit)
	struct FSlateSound                                 RxMessgeSound;                                            // 0x0958(0x0018) (CPF_Edit)
	struct FSlateSound                                 TxMessgeSound;                                            // 0x0970(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.DamageFieldLayout
// 0x0018
struct FDamageFieldLayout
{
	float                                              CreationDelay;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     LocationOffset;                                           // 0x0004(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.DoorBreakingStateLegacy
// 0x0001
struct FDoorBreakingStateLegacy
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsDM : 1;                                                // 0x0000(0x0001)
};

// ScriptStruct TslGame.DecalEffectData
// 0x0028
struct FDecalEffectData
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 Size;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeScreenSize;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeStartDelay;                                           // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomInput : 1;                                      // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomRoll : 1;                                       // 0x0025(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bReversal : 1;                                            // 0x0026(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DecalEffectDataSet
// 0x0168
struct FDecalEffectDataSet
{
	struct FDecalEffectData                            DefaultDecal;                                             // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            ConcreteDecal;                                            // 0x0028(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            DirtDecal;                                                // 0x0050(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WaterDecal;                                               // 0x0078(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            MetalDecal;                                               // 0x00A0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WoodDecal;                                                // 0x00C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GlassDecal;                                               // 0x00F0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GrassDecal;                                               // 0x0118(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            FleshDecal;                                               // 0x0140(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleReactionData
// 0x000C
struct FVehicleReactionData
{
	TEnumAsByte<EReactionType>                         ReactionType;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinSpeed;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RadialDamageReactionData
// 0x000C
struct FRadialDamageReactionData
{
	TEnumAsByte<EReactionType>                         ReactionType;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PointDamageReactionData
// 0x0010
struct FPointDamageReactionData
{
	TEnumAsByte<EReactionType>                         ReactionType;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BoneBinding
// 0x0010
struct FBoneBinding
{
	struct FName                                       ImpactBone;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReactionBone;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.InteractionCollisionData
// 0x0014
struct FInteractionCollisionData
{
	float                                              CapsuleHalfHeight;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CapsuleOffset;                                            // 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// 0x0010
struct FLevelLoadingBoostParameters
{
	float                                              AsyncLoadingTimeLimit;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PriorityAsyncLoadingExtraTime;                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LevelStreamingActorsUpdateTimeLimit;                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LevelStreamingComponentsRegistrationGranularity;          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingValue
// 0x0008
struct FNearClippingValue
{
	TEnumAsByte<ENearClippingLevel>                    Level;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableCategoryData
// 0x0030
struct FTslGame_FCustomizableCategoryData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       Category;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FName>                               NotDuplicateCategoryNames;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableActionName
// 0x0028
struct FCustomizableActionName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableAxisName
// 0x0030
struct FTslGame_FCustomizableAxisName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableMouseSensitiveName
// 0x0028
struct FCustomizableMouseSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SurportQualityLevel
// 0x0020
struct FSurportQualityLevel
{
	int                                                QualityLevel;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindType
// 0x0020
struct FColorBlindType
{
	TEnumAsByte<EColorBlindType>                       Key;                                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.KeyInputModeName
// 0x0020
struct FKeyInputModeName
{
	struct FName                                       ModeName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.UiType
// 0x0028
struct FUiType
{
	struct FText                                       DisplayUiName;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     UiKey;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ColorBlindColorData
// 0x0014
struct FColorBlindColorData
{
	TEnumAsByte<EColorBlindType>                       Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindColorSet
// 0x0010
struct FColorBlindColorSet
{
	TArray<struct FColorBlindColorData>                ColorSet;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.OverrideScalabilityValue
// 0x0028
struct FOverrideScalabilityValue
{
	struct FString                                     ConsoleName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TEnumAsByte<EValueType>                            ValueType;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             Values;                                                   // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.OverrideScalability
// 0x0018
struct FOverrideScalability
{
	TEnumAsByte<EQualityType>                          QualityType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FOverrideScalabilityValue>           OverrideScalabilityValues;                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReportCauseData
// 0x0020
struct FReportCauseData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<EReportCause>                          ReportCauseType;                                          // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SubjectToReport
// 0x0020
struct FSubjectToReport
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<ESubjectToReport>                      SubjectToReportType;                                      // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslStartParameter
// 0x0080
struct FTslStartParameter
{
	unsigned char                                      bIsCustomGame : 1;                                        // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                MinPlayerCount;                                           // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FString>               StringParameter;                                          // 0x0030(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayKillEventItem
// 0x0004
struct FReplayKillEventItem
{
	int                                                Time;                                                     // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayItem
// 0x0028
struct FReplayItem
{
	struct FString                                     FriendlyName;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bIsLive : 1;                                              // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MatchPreparerClass
// 0x0010
struct FMatchPreparerClass
{
	TEnumAsByte<EMatchStartType>                       Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      Class;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomGameUpdateCharacterInfo
// 0x0014
struct FCustomGameUpdateCharacterInfo
{
	unsigned char                                      bIsZombie : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsGroggyMode : 1;                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ReviveCastingTime;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierGroggyDamagePerSecond;                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierPunchDamage;                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierZombieToZombieDamage;                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LimitCustomStringParameter
// 0x0018
struct FLimitCustomStringParameter
{
	struct FString                                     CustomStringParameter;                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MinLimit;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLimit;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RedZoneCustomOption
// 0x001C
struct FRedZoneCustomOption
{
	unsigned char                                      bIsActive : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MultiplierRedZoneExplosionDensity;                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneStartTime;                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneEndTime;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneExplosionDelay;                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneDuration;                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneArea;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.Teams
// 0x0018
struct FTeams
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class ATeam*>                               Members;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslInputKey
// 0x0020
struct FTslInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.CustomActionKeyData
// 0x0018
struct FCustomActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomAxisKeyData
// 0x0020
struct FCustomAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// 0x0010
struct FCustomMouseSensitiveData
{
	struct FName                                       MouseSensitiveName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedMouseSensitivity;                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomInputSettings
// 0x0040
struct FCustomInputSettings
{
	TArray<struct FCustomActionKeyData>                ActionKeyList;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomAxisKeyData>                  AxisKeyList;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomMouseSensitiveData>           MouseSensitiveList;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bInvertMouse : 1;                                         // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct TslGame.HealthColorData
// 0x0018
struct FHealthColorData
{
	struct FFloatInterval                              HealthPercentRange;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeatherLevelInfo
// 0x0028
struct FWeatherLevelInfo
{
	struct FString                                     WeatherId;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       WeatherLevel;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WindowLightIntensity;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslMenuItemStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FTslMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftArrowImage;                                           // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightArrowImage;                                          // 0x0128(0x0090) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FTslMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                           // 0x0008(0x0018) (CPF_Edit)
	struct FSlateSound                                 ExitGameSound;                                            // 0x0020(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuStyle
// 0x0210 (0x0218 - 0x0008)
struct FTslMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                    // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftBackgroundBrush;                                      // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightBackgroundBrush;                                     // 0x0128(0x0090) (CPF_Edit)
	struct FSlateSound                                 MenuEnterSound;                                           // 0x01B8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuBackSound;                                            // 0x01D0(0x0018) (CPF_Edit)
	struct FSlateSound                                 OptionChangeSound;                                        // 0x01E8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuItemChangeSound;                                      // 0x0200(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.ParticleParameter
// 0x0018
struct FParticleParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableRTPC : 1;                                          // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerScores
// 0x000C
struct FTslPlayerScores
{
	float                                              ScoreByDamage;                                            // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreByKill;                                              // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreByRanking;                                           // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStatistics
// 0x0004
struct FTslPlayerStatistics
{
	int                                                NumKills;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedEquipableItem
// 0x0010
struct FReplicatedEquipableItem
{
	class UClass*                                      EquipableItemClass;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Durability;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessMaterial
// 0x0010
struct FPostProcessMaterial
{
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessEffectParameter
// 0x0018
struct FPostProcessEffectParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessEffectDynamicMaterialState
// 0x0010
struct FPostProcessEffectDynamicMaterialState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ProjectileWeaponData
// 0x0008
struct FProjectileWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ProjectileData
// 0x0028
struct FProjectileData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactVelocityForSound;                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenImpactSound;                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyAtExplosion : 1;                                   // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DoorBreakingState
// 0x0001
struct FDoorBreakingState
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
};

// ScriptStruct TslGame.SavedObPos
// 0x0018
struct FSavedObPos
{
	class Vector3D                                     Loc;                                                      // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      Rot;                                                      // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BlockAction
// 0x0010
struct FBlockAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder
// 0x0018
struct FUmgWidgetBinder
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Parent;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Image
// 0x0010 (0x0028 - 0x0018)
struct FUmgWidgetBinder_Image : public FUmgWidgetBinder
{
	class UImage*                                      CachedImage;                                              // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CachedMaterial;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_TextBlock
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_TextBlock : public FUmgWidgetBinder
{
	class UTextBlock*                                  CachedTextBlock;                                          // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Animation
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Animation : public FUmgWidgetBinder
{
	class UWidgetAnimation*                            CachedAnimation;                                          // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SequenceBase
// 0x0098
struct FSequenceBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0020(0x0078) MISSED OFFSET
};

// ScriptStruct TslGame.Sequence_Float
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Float : public FSequenceBase
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColor
// 0x0018
struct FDurabilityColor
{
	struct FFloatInterval                              DurabilityRatioRange;                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColorSet
// 0x0010
struct FDurabilityColorSet
{
	TArray<struct FDurabilityColor>                    Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.UmgWidgetBinder_Border
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Border : public FUmgWidgetBinder
{
	class UBorder*                                     CachedBorder;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_WidgetSwitcher
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_WidgetSwitcher : public FUmgWidgetBinder
{
	class UWidgetSwitcher*                             CachedWidgetSwitcher;                                     // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Overlay
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Overlay : public FUmgWidgetBinder
{
	class UOverlay*                                    CachedOverlay;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.GaugeAlphaCurveType
// 0x0010
struct FGaugeAlphaCurveType
{
	struct FFloatInterval                              DamageRange;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                ColorCurve;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_UserWidget
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_UserWidget : public FUmgWidgetBinder
{
	class UUserWidget*                                 CachedWidget;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_CanvasPanel
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_CanvasPanel : public FUmgWidgetBinder
{
	class UCanvasPanel*                                CachedCanvasPanel;                                        // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_SizeBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_SizeBox : public FUmgWidgetBinder
{
	class USizeBox*                                    CachedSizeBox;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Gerneral
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Gerneral : public FUmgWidgetBinder
{
	class UWidget*                                     CachedWidget;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_VerticalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_VerticalBox : public FUmgWidgetBinder
{
	class UVerticalBox*                                CachedVerticalBox;                                        // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleEffectInfo
// 0x00F0
struct FVehicleEffectInfo
{
	class UClass*                                      Explosion;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamagedPercentMax;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      Damaged;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Destroyed;                                                // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound_Remote;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler2;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost2;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontTrail;                                               // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RearTrail;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster2;                                                // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamLeft;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamRight;                                           // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 ImpactNormalForceRange;                                   // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactDefault;                                            // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactConcrete;                                           // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactDirt;                                               // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWater;                                              // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactMetal;                                              // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWood;                                               // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGlass;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGrass;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactRock;                                               // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactSand;                                               // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactFlesh;                                              // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxImpactCount;                                           // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleDebugHit
// 0x0028
struct FVehicleDebugHit
{
	class Vector3D                                     RelativeNormalImpulse;                                    // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     RelativeImpactPoint;                                      // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     AbsoluteImpactPoint;                                      // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleSeatInfo
// 0x0018
struct FVehicleSeatInfo
{
	class UClass*                                      SeatClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RideSocketName;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LeaveSocketName;                                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TempComponentInfo
// 0x0028
struct FTempComponentInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class USceneComponent*                             ParentComponent;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CurrentComponent;                                         // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RecoilPatternData
// 0x0008
struct FRecoilPatternData
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TrajectoryWeaponData
// 0x0060
struct FTrajectoryWeaponData
{
	float                                              WeaponSpread;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimingSpreadModifier;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopingSpreadModifier;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringSpreadBase;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StandRecoveryTime;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchRecoveryTime;                                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneRecoveryTime;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoveryInterval;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed;                                              // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoverySpeed;                                      // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilPatternScale;                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HitDamage;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsPenetrable : 1;                                         // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FRecoilPatternData>                  RecoilPatterns;                                           // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.RecoilInfo
// 0x0068
struct FRecoilInfo
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeftMax;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RightMax;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveVector*                                RecoilCurve;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletsPerSwitch;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSwitchOnTime : 1;                                        // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilSpeed_Vertical;                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed_Horizontal;                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoverySpeed_Vertical;                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Climb;                                        // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Fall;                                         // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x005C(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.MeleeWeaponAnim
// 0x0170
struct FMeleeWeaponAnim
{
	class UAnimMontage*                                AttackAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         AttackDecalEffectDataSet;                                 // 0x0008(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ThrowableAnim
// 0x0010
struct FThrowableAnim
{
	class UAnimMontage*                                PinOff;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Release;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableWeaponData
// 0x0068
struct FThrowableWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PinOffEffectClass;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EProjectileExplosionStartType>         ExplosionStartType;                                       // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ExplosionDelay;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireDelay;                                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ActivationTimeLimit;                                      // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              StandAnim;                                                // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              CrouchAnim;                                               // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              ProneAnim;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 PitchCurve;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowTime;                                                // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VivoxConnectionInfo
// 0x0020
struct FVivoxConnectionInfo
{
	struct FString                                     ServerURL;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Domain;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.DeathMessage
// 0x0080
struct FDeathMessage
{
	struct FString                                     KillerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	struct FString                                     VictimName;                                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      bKillerIsOwner : 1;                                       // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bVictimIsOwner : 1;                                       // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                KillerTeamNum;                                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                VictimTeamNum;                                            // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTslDamageType*                              DamageType;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FText                                       InsertMessage;                                            // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	TEnumAsByte<EDamageReason>                         DamageReason;                                             // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bGroggy : 1;                                              // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                AlivePlayerNum;                                           // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                AliveTeamNum;                                             // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       DamageCauserName;                                         // 0x0060(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bIsKillerExist : 1;                                       // 0x0078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsStealKilled : 1;                                       // 0x0079(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriendPresence
// 0x0005
struct FTslFriendPresence
{
	unsigned char                                      IsOnline : 1;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlaying : 1;                                            // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlayingThisGame : 1;                                    // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsJoinable : 1;                                           // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Status;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriend
// 0x0038
struct FTslFriend
{
	struct FString                                     UserSerial;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserRealName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FTslFriendPresence                          Presence;                                                 // 0x0030(0x0005)
};

// ScriptStruct TslGame.TslClientAuthData
// 0x0060
struct FTslClientAuthData
{
	struct FString                                     PlatformType;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AppID;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserSerial;                                               // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PlayerNetId;                                              // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslReportedInfo
// 0x0028
struct FTslReportedInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerMatchResultInfo
// 0x0020
struct FTslPlayerMatchResultInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumKills;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamId;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartTeamMember;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PlayerHitInfo
// 0x000C
struct FPlayerHitInfo
{
	int                                                Hits;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damages;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PlayerAttackInfo
// 0x0058
struct FPlayerAttackInfo
{
	int                                                Shots;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EDamageReason>, struct FPlayerHitInfo> HitInfoMap;                                               // 0x0008(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslPlayerStatisticsNotReplicated
// 0x00A8
struct FTslPlayerStatisticsNotReplicated
{
	float                                              MovedDistanceOnFeetMeter;                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnVehicleMeter;                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksGivenInfos;                                        // 0x0008(0x0050) (CPF_ZeroConstructor)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksTakenInfos;                                        // 0x0058(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.DroppedItemInfo
// 0x0018
struct FDroppedItemInfo
{
	class UItem*                                       Item;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemInitiator
// 0x0010
struct FItemInitiator
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnCountElement
// 0x0018
struct FItemSpawnCountElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnWeightElement
// 0x0010
struct FItemSpawnWeightElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnTogetherDataRow
// 0x0030 (0x0038 - 0x0008)
struct FItemSpawnTogetherDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SpawnedItem;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TogetherItem;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMin;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMax;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnDataRow
// 0x0020 (0x0028 - 0x0008)
struct FItemSpawnDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.EquipPosition
// 0x0008
struct FEquipPosition
{
	TEnumAsByte<EEquipSlotID>                          SlotID;                                                   // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PathPair
// 0x0010
struct FPathPair
{
	class Vector2D                                     StartPosition;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     EndPosition;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MaterialParametersData
// 0x0020
struct FMaterialParametersData
{
	TArray<struct FLinearColor>                        Vectors;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture*>                            Textures;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.InventoryItem
// 0x0010
struct FInventoryItem
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UItem*                                       Item;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleSpawnDataRow
// 0x0018 (0x0020 - 0x0008)
struct FVehicleSpawnDataRow : public FTableRowBase
{
	struct FName                                       CategoryFilter;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Vehicle;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapToFloor : 1;                                         // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslSplinePoint
// 0x001C
struct FTslSplinePoint
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct TslGame.WheelContactData
// 0x0003
struct FWheelContactData
{

};

// ScriptStruct TslGame.TslPointDamageEvent
// 0x0008 (0x00B8 - 0x00B0)
struct FTslPointDamageEvent : public FPointDamageEvent
{
	unsigned char                                      bDestructibleDoor : 1;                                    // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.QualityLevelInfo
// 0x0020
struct FQualityLevelInfo
{
	TEnumAsByte<EQualityType>                          QualityType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.SplashObject
// 0x000C
struct FSplashObject
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.WuLogCharacter
// 0x0038
struct FWuLogCharacter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // 0x0028(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Ammo
// 0x0070 (0x0098 - 0x0028)
struct FWuLogHackDetection_Ammo : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0091(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_AttackRange
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogHackDetection_AttackRange : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_TravelDistance;                                    // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x0098(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_FireLocation;                                      // 0x00A4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Attacker
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogHackDetection_Attacker : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_AttakerLocation;                                   // 0x0094(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_FireLocation;                                      // 0x00A0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_CarVelocity;                                       // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reason_IsInCar : 1;                                       // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00B2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Victim
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogHackDetection_Victim : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_VictimLocation;                                    // 0x0094(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x00A0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_CarVelocity;                                       // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reason_IsInCar : 1;                                       // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00B2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Wall
// 0x0078 (0x00A0 - 0x0028)
struct FWuLogHackDetection_Wall : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x0090(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x009D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Ping
// 0x0070 (0x0098 - 0x0028)
struct FWuLogHackDetection_Ping : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Ping;                                              // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0095(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Seq
// 0x0078 (0x00A0 - 0x0028)
struct FWuLogHackDetection_Seq : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	int                                                Reason_ServerHitSeq;                                      // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Reason_ClientHitSeq;                                      // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0099(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection
// 0x0070 (0x0098 - 0x0028)
struct FWuLogHackDetection : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     WeaponName;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Reason;                                                   // 0x0080(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicle
// 0x0028
struct FWuLogVehicle
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VehicleId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              HealthPercent;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeulPercent;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogVehicleDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0038)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0068(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x0090(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00A0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// 0x0060 (0x0088 - 0x0028)
struct FWuLogVehicleLeave : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0060(0x0028)
};

// ScriptStruct TslGame.WuLogVehicleRide
// 0x0060 (0x0088 - 0x0028)
struct FWuLogVehicleRide : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0060(0x0028)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// 0x0020 (0x0048 - 0x0028)
struct FWuLogVehicleSpawn : public FLogBase
{
	struct FString                                     VehicleId;                                                // 0x0028(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Location;                                                 // 0x0038(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItem
// 0x0048
struct FWuLogItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StackCount;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Category;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SubCategory;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             AttachedItems;                                            // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogItemPackage
// 0x0030
struct FWuLogItemPackage
{
	struct FString                                     ItemPackageId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Location;                                                 // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FWuLogItem>                          Items;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// 0x0030 (0x0058 - 0x0028)
struct FWuLogCarePackageLand : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0028(0x0030)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// 0x0030 (0x0058 - 0x0028)
struct FWuLogCarePackageSpawn : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0028(0x0030)
};

// ScriptStruct TslGame.WuLogItemUse
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogItemUse : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  Item;                                                     // 0x0060(0x0048)
};

// ScriptStruct TslGame.WuLogItemDetach
// 0x00C8 (0x00F0 - 0x0028)
struct FWuLogItemDetach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  ParentItem;                                               // 0x0060(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x00A8(0x0048)
};

// ScriptStruct TslGame.WuLogItemAttach
// 0x00C8 (0x00F0 - 0x0028)
struct FWuLogItemAttach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  ParentItem;                                               // 0x0060(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x00A8(0x0048)
};

// ScriptStruct TslGame.WuLogItemUnequip
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogItemUnequip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  Item;                                                     // 0x0060(0x0048)
};

// ScriptStruct TslGame.WuLogItemEquip
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogItemEquip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  Item;                                                     // 0x0060(0x0048)
};

// ScriptStruct TslGame.WuLogItemDrop
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogItemDrop : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  Item;                                                     // 0x0060(0x0048)
};

// ScriptStruct TslGame.WuLogItemPickup
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogItemPickup : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FWuLogItem                                  Item;                                                     // 0x0060(0x0048)
};

// ScriptStruct TslGame.WuLogItemSpawn
// 0x0018 (0x0040 - 0x0028)
struct FWuLogItemSpawn : public FLogBase
{
	struct FString                                     ItemId;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	int                                                SpawnCount;                                               // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogReportInfo
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogReportInfo : public FLogBase
{
	struct FWuLogCharacter                             Reporter;                                                 // 0x0028(0x0038)
	struct FWuLogCharacter                             ReportedPlayer;                                           // 0x0060(0x0038)
	struct FString                                     ReportCauseType;                                          // 0x0098(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerKill
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogPlayerKill : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Killer;                                                   // 0x0030(0x0038)
	struct FWuLogCharacter                             Victim;                                                   // 0x0068(0x0038)
	struct FString                                     DamageTypeCategory;                                       // 0x00A0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00B0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// 0x0070 (0x0098 - 0x0028)
struct FWuLogPlayerRevive : public FLogBase
{
	struct FWuLogCharacter                             Reviver;                                                  // 0x0028(0x0038)
	struct FWuLogCharacter                             Victim;                                                   // 0x0060(0x0038)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogPlayerMakeGroggy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0038)
	struct FWuLogCharacter                             Victim;                                                   // 0x0068(0x0038)
	struct FString                                     DamageTypeCategory;                                       // 0x00A0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00B0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// 0x00B0 (0x00D8 - 0x0028)
struct FWuLogPlayerTakeDamage : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0038)
	struct FWuLogCharacter                             Victim;                                                   // 0x0068(0x0038)
	struct FString                                     DamageTypeCategory;                                       // 0x00A0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x00B0(0x0010) (CPF_ZeroConstructor)
	float                                              Damage;                                                   // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FString                                     DamageCauserName;                                         // 0x00C8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// 0x00C0 (0x00E8 - 0x0028)
struct FWuLogPlayerAttack : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0038)
	struct FString                                     AttackType;                                               // 0x0068(0x0010) (CPF_ZeroConstructor)
	struct FWuLogItem                                  Weapon;                                                   // 0x0078(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00C0(0x0028)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// 0x0038 (0x0060 - 0x0028)
struct FWuLogPlayerPosition : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// 0x0048 (0x0070 - 0x0028)
struct FWuLogPlayerKicked : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
	struct FString                                     Reason;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// 0x0010 (0x0038 - 0x0028)
struct FWuLogPlayerLogout : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// 0x0028 (0x0050 - 0x0028)
struct FWuLogPlayerLogin : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Result : 1;                                               // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0040(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// 0x0038 (0x0060 - 0x0028)
struct FWuLogPlayerCreate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0038)
};

// ScriptStruct TslGame.WuLogServerStat
// 0x0030 (0x0058 - 0x0028)
struct FWuLogServerStat : public FLogBase
{
	int                                                ElapsedTime;                                              // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMin;                                                  // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMax;                                                  // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingAvg;                                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMin;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMax;                                             // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateAvg;                                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameState
// 0x0044
struct FWuLogGameState
{
	int                                                ElapsedTime;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZonePosition;                                       // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     PoisonGasWarningPosition;                                 // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     RedZonePosition;                                          // 0x0034(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// 0x0048 (0x0070 - 0x0028)
struct FWuLogGameStatePeriodic : public FLogBase
{
	struct FWuLogGameState                             GameState;                                                // 0x0028(0x0044)
};

// ScriptStruct TslGame.WuLogMatchEnd
// 0x0010 (0x0038 - 0x0028)
struct FWuLogMatchEnd : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogMatchStart
// 0x0010 (0x0038 - 0x0028)
struct FWuLogMatchStart : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCharacterRating
// 0x0030
struct FWuLogCharacterRating
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                WinPoints;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KillPoints;                                               // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MMR;                                                      // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// 0x0020 (0x0048 - 0x0028)
struct FWuLogMatchDefinition : public FLogBase
{
	struct FString                                     MatchId;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogCharacterRating>               Ratings;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// 0x0008
struct FWuGameResultStatsPerPlayer
{
	int                                                KillCount;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Score;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// 0x0038
struct FWuGameResultPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Rank;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     GameResult;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuGameResultStatsPerPlayer                 Stats;                                                    // 0x002C(0x0008)
};

// ScriptStruct TslGame.WuGameFinishedResult
// 0x0010
struct FWuGameFinishedResult
{
	TArray<struct FWuGameResultPerPlayer>              Results;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// 0x0010
struct FWuGameStartInfoPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfo
// 0x0010
struct FWuGameStartInfo
{
	TArray<struct FWuGameStartInfoPerPlayer>           Players;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializedResult
// 0x0008
struct FWuGameInitializedResult
{
	unsigned char                                      IsSuccess : 1;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Port;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringStringPair
// 0x0020
struct FWuStringStringPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Second;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartRequest
// 0x0010
struct FWuGameStartRequest
{
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// 0x0020
struct FWuGameOverrideParameterRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// 0x0030
struct FWuGameInitializeRequest
{
	unsigned char                                      IsCustomGame : 1;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                MinPlayerCount;                                           // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuMatchRating
// 0x0010
struct FWuMatchRating
{
	int                                                Rating;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WinPoints;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KillPoints;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MMR;                                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringBoolPair
// 0x0018
struct FWuStringBoolPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Second : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringFloatPair
// 0x0018
struct FWuStringFloatPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	float                                              Second;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// 0x0040
struct FWuCharacterCustomizationOptions
{
	TArray<struct FWuStringBoolPair>                   BoolOptions;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringFloatPair>                  FloatOptions;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringOptions;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             ItemIds;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuCharacterInfo
// 0x0058
struct FWuCharacterInfo
{
	struct FString                                     Nickname;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Gender : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FWuCharacterCustomizationOptions            CustomizationOptions;                                     // 0x0018(0x0040)
};

// ScriptStruct TslGame.WuUserAuthInfo
// 0x0088
struct FWuUserAuthInfo
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuMatchRating                              Rating;                                                   // 0x0014(0x0010)
	unsigned char                                      IsZombie : 1;                                             // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FWuCharacterInfo                            CharacterInfo;                                            // 0x0028(0x0058)
	int                                                ObserverAuthorityType;                                    // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BattlEyeDisabled : 1;                                     // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// 0x0020
struct FWuCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectKey;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomizableObjectValue;                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.Sequence_Vector
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Vector : public FSequenceBase
{
	class UCurveVector*                                VectorCurve;                                              // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_HorizontalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_HorizontalBox : public FUmgWidgetBinder
{
	class UHorizontalBox*                              CachedHorizontalBox;                                      // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WebPopupParam
// 0x0038
struct FWebPopupParam
{
	struct FString                                     PopupId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Uri;                                                      // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              X;                                                        // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseBackgroundColor : 1;                                   // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
