#define _ARMA_

class CfgPatches
{
	class T1_Hook
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
	};
};
class CfgMovesBasic; //badBenson @em'cfg.
class CfgMovesMaleSdr: CfgMovesBasic
{
 skeletonName = "OFP2_ManSkeleton";
 gestures = "CfgGesturesMale";
 class States
 {
  class anim_rope
  {
   access = 3;
   actions = "RifleStandActions";
   adjstance = "m";
   aiming = "aimingDefault";
   aimingBody = "aimingUpDefault";
   aimPrecision = 1;
   boundingSphere = 1;
   camShakeFire = 1;
   canBlendStep = 0;
   canPullTrigger = 0;
   canReload = 0;
   collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
   collisionShapeSafe = "";
   connectAs = "";
   connectFrom[] = {};
   ConnectTo[] = {};
   disableWeapons = 1;
   disableWeaponsLong = 0;
   duty = 1;
   enableAutoActions = 0;
   enableBinocular = 1;
   enableDirectControl = 1;
   enableMissile = 0;
   enableOptics = 0;
   equivalentTo = "";
   file = "\Hook\data\Animation1.rtm";
   forceAim = 0;
   GetOutPara = "";
   hasCollShapeSafe = 0;
   head = "headDefault";
   headBobMode = 2;
   headBobStrength = 0.23;
   idle = "idleDefault";
   ignoreMinPlayTime[] = {"Unconscious"};
   interpolateFrom[] = {};
   InterpolateTo[] = {};
   interpolateWith[] = {};
   interpolationRestart = 0;
   interpolationSpeed = 4;
   leaning = "leaningDefault";
   leaningFactorBeg = 1;
   leaningFactorEnd = 1;
   leaningFactorZeroPoint = -1;
   leftHandIKBeg = 1;
   leftHandIKCurve[] = {1};
   leftHandIKEnd = 1;
   legs = "legsDefault";
   limitGunMovement = 1;
   looped = 0;
   minPlayTime = 0;
   onLadder = 0;
   onLandBeg = 0;
   onLandEnd = 0;
   preload = 0;
   ragdoll = 0;
   relSpeedMax = 1;
   relSpeedMin = 0.5;
   rightHandIKBeg = 1;
   rightHandIKCurve[] = {1};
   rightHandIKEnd = 1;
   showHandGun = 1;
   showItemInHand = 0;
   showItemInRightHand = 0;
   showWeaponAim = 1;
   soundEdge[] = {0.5,1};
   soundEnabled = 0;
   soundOverride = "";
   speed = 0.347368;
   static = 1;
   terminal = 0;
   useIdles = 1;
   variantAfter[] = {15,15,15};
   variantsAI[] = {""};
   variantsPlayer[] = {};
   visibleSize = 0.75012;
   Walkcycles = 1;
   weaponIK = 2;
   weaponLowered = 0;
  };
  class Anim_rope_climb
  {
   access = 3;
   actions = "RifleStandActions";
   adjstance = "m";
   aiming = "aimingDefault";
   aimingBody = "aimingUpDefault";
   aimPrecision = 1;
   boundingSphere = 1;
   camShakeFire = 1;
   canBlendStep = 0;
   canPullTrigger = 0;
   canReload = 0;
   collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
   collisionShapeSafe = "";
   connectAs = "";
   connectFrom[] = {};
   ConnectTo[] = {};
   disableWeapons = 0;
   disableWeaponsLong = 0;
   duty = 1;
   enableAutoActions = 0;
   enableBinocular = 1;
   enableDirectControl = 1;
   enableMissile = 0;
   enableOptics = 0;
   equivalentTo = "";
   file = "\Hook\data\Animation3.rtm";
   forceAim = 0;
   GetOutPara = "";
   hasCollShapeSafe = 0;
   head = "headDefault";
   headBobMode = 2;
   headBobStrength = 0.23;
   idle = "idleDefault";
   ignoreMinPlayTime[] = {"Unconscious"};
   interpolateFrom[] = {};
   InterpolateTo[] = {};
   interpolateWith[] = {};
   interpolationRestart = 0;
   interpolationSpeed = 4;
   leaning = "leaningDefault";
   leaningFactorBeg = 1;
   leaningFactorEnd = 1;
   leaningFactorZeroPoint = -1;
   leftHandIKBeg = 1;
   leftHandIKCurve[] = {1};
   leftHandIKEnd = 1;
   legs = "legsDefault";
   limitGunMovement = 0;
   looped = 0;
   minPlayTime = 0;
   onLadder = 0;
   onLandBeg = 0;
   onLandEnd = 0;
   preload = 0;
   ragdoll = 0;
   relSpeedMax = 1;
   relSpeedMin = 0.5;
   rightHandIKBeg = 1;
   rightHandIKCurve[] = {1};
   rightHandIKEnd = 1;
   showHandGun = 0;
   showItemInHand = 0;
   showItemInRightHand = 0;
   showWeaponAim = 0;
   soundEdge[] = {0.5,1};
   soundEnabled = 0;
   soundOverride = "";
   speed = 0.347368;
   static = 1;
   terminal = 0;
   useIdles = 1;
   variantAfter[] = {15,15,15};
   variantsAI[] = {""};
   variantsPlayer[] = {};
   visibleSize = 0.75012;
   Walkcycles = 1;
   weaponIK = 2;
   weaponLowered = 0;
	};
	  class Anim_rope_NoMove
  {
   access = 3;
   actions = "RifleStandActions";
   adjstance = "m";
   aiming = "aimingDefault";
   aimingBody = "aimingUpDefault";
   aimPrecision = 1;
   boundingSphere = 1;
   camShakeFire = 1;
   canBlendStep = 0;
   canPullTrigger = 0;
   canReload = 0;
   collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
   collisionShapeSafe = "";
   connectAs = "";
   connectFrom[] = {};
   ConnectTo[] = {};
   disableWeapons = 0;
   disableWeaponsLong = 0;
   duty = 1;
   enableAutoActions = 0;
   enableBinocular = 1;
   enableDirectControl = 1;
   enableMissile = 0;
   enableOptics = 0;
   equivalentTo = "";
   file = "\Hook\data\AnimationNoMove.rtm";
   forceAim = 0;
   GetOutPara = "";
   hasCollShapeSafe = 0;
   head = "headDefault";
   headBobMode = 2;
   headBobStrength = 0.23;
   idle = "idleDefault";
   ignoreMinPlayTime[] = {"Unconscious"};
   interpolateFrom[] = {};
   InterpolateTo[] = {};
   interpolateWith[] = {};
   interpolationRestart = 0;
   interpolationSpeed = 4;
   leaning = "leaningDefault";
   leaningFactorBeg = 1;
   leaningFactorEnd = 1;
   leaningFactorZeroPoint = -1;
   leftHandIKBeg = 1;
   leftHandIKCurve[] = {1};
   leftHandIKEnd = 1;
   legs = "legsDefault";
   limitGunMovement = 0;
   looped = 0;
   minPlayTime = 0;
   onLadder = 0;
   onLandBeg = 0;
   onLandEnd = 0;
   preload = 0;
   ragdoll = 0;
   relSpeedMax = 1;
   relSpeedMin = 0.5;
   rightHandIKBeg = 1;
   rightHandIKCurve[] = {1};
   rightHandIKEnd = 1;
   showHandGun = 0;
   showItemInHand = 0;
   showItemInRightHand = 0;
   showWeaponAim = 0;
   soundEdge[] = {0.5,1};
   soundEnabled = 0;
   soundOverride = "";
   speed = 0.347368;
   static = 1;
   terminal = 0;
   useIdles = 1;
   variantAfter[] = {15,15,15};
   variantsAI[] = {""};
   variantsPlayer[] = {};
   visibleSize = 0.75012;
   Walkcycles = 1;
   weaponIK = 2;
   weaponLowered = 0;
	};
	class Anim_rope_NoMoveLoop
  {
   access = 3;
   actions = "RifleStandActions";
   adjstance = "m";
   aiming = "aimingDefault";
   aimingBody = "aimingUpDefault";
   aimPrecision = 1;
   boundingSphere = 1;
   camShakeFire = 1;
   canBlendStep = 0;
   canPullTrigger = 0;
   canReload = 0;
   collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
   collisionShapeSafe = "";
   connectAs = "";
   connectFrom[] = {};
   ConnectTo[] = {};
   disableWeapons = 0;
   disableWeaponsLong = 0;
   duty = 1;
   enableAutoActions = 0;
   enableBinocular = 1;
   enableDirectControl = 1;
   enableMissile = 0;
   enableOptics = 0;
   equivalentTo = "";
   file = "\Hook\data\AnimationNoMove.rtm";
   forceAim = 0;
   GetOutPara = "";
   hasCollShapeSafe = 0;
   head = "headDefault";
   headBobMode = 2;
   headBobStrength = 0.23;
   idle = "idleDefault";
   ignoreMinPlayTime[] = {"Unconscious"};
   interpolateFrom[] = {};
   InterpolateTo[] = {};
   interpolateWith[] = {};
   interpolationRestart = 0;
   interpolationSpeed = 4;
   leaning = "leaningDefault";
   leaningFactorBeg = 1;
   leaningFactorEnd = 1;
   leaningFactorZeroPoint = -1;
   leftHandIKBeg = 1;
   leftHandIKCurve[] = {1};
   leftHandIKEnd = 1;
   legs = "legsDefault";
   limitGunMovement = 0;
   looped = 0;
   minPlayTime = 0;
   onLadder = 0;
   onLandBeg = 0;
   onLandEnd = 0;
   preload = 0;
   ragdoll = 0;
   relSpeedMax = 1;
   relSpeedMin = 0.5;
   rightHandIKBeg = 1;
   rightHandIKCurve[] = {1};
   rightHandIKEnd = 1;
   showHandGun = 0;
   showItemInHand = 0;
   showItemInRightHand = 0;
   showWeaponAim = 0;
   soundEdge[] = {0.5,1};
   soundEnabled = 0;
   soundOverride = "";
   speed = 0.347368;
   static = 1;
   terminal = 0;
   useIdles = 1;
   variantAfter[] = {15,15,15};
   variantsAI[] = {""};
   variantsPlayer[] = {};
   visibleSize = 0.75012;
   Walkcycles = 1;
   weaponIK = 2;
   weaponLowered = 0;
	};
  };
};
class Extended_Fired_EventHandlers
{
    class CAManBase
    {
        class Hook_Fired
        {
			//Fired = "diag_log _this;";
            Fired = "if (local (_this select 0)) then {if ((_this select 1) in ['Throw']) then {_this execVM ""\hook\fnc\grapple.sqf""}}";
        };
    };
};
/*
class Extended_Init_EventHandlers
{
    class CAManBase
    {
        class T1_Hook_Init
        {
            clientInit = "_this execVM ""\hook\init.sqf""";
        };
    };
};*/
class CfgAmmo
{
	class Chemlight_green;
	class Hook_grapling_t1: Chemlight_green
	{
		scope = 2;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		//fuseDistance = 5;
		model = "\hook\HookTest.p3d";
		//explosionTime = ;
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class HandGrenade: CA_Magazine{};
	class Actual_hook: HandGrenade
	{
			
		inertia = 0.4;
		initSpeed = 14;
		magazineReloadTime = 5;
		maxRange = 32;
		midRange = 11;
		minRange = 5;
		model = "\hook\HookTest.p3d";
		displayName = "GraplingHook";
		picture = "\hook\Data\Hooksor.paa";
		displayNameShort = "GraplingHook";
		ammo = "Hook_grapling_t1";
		mass = 8;
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"ThrowHook"};
	  class ThrowMuzzle;
	  class ThrowHook: ThrowMuzzle
		{
		magazines[] = {"Actual_hook"};
		};
	};
};
class cfgVehicles
{
	class NATO_Box_Base;
	class Box_Hook: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1000;
		vehicleClass = "Ammo";
		displayName = "Ammo_Throw";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		maximumLoad = 99999;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportMaxBackpacks = 50;
		class TransportMagazines
		{
			class _xx_Actual_Hook_box
			{
				magazine = "Actual_hook";
				count = 1000;
			};
		};
		class TransportItems{};
	};
};