/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_sud_russians_asdg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.04;
		requiredAddons[]=
		{
			"SUD_RUSSIANS",
			"asdg_jointrails"
		};
	};
};

class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
	class compatibleItems {
		optic_sud_pso1 = 1;
		optic_sud_PSO4 = 1;
		optic_sud_pso4_camo = 1;
		optic_sud_1p29 = 1;
		optic_sud_goshawk = 1;
		optic_sud_Cobra = 1;
		optic_sud_Krechet = 1;
		optic_sud_Krechet_M = 1;
	};
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F : Rifle {
		class WeaponSlotsInfo;
	};

	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	
	class arifle_SUD_AKMS: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_AK: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_AK: asdg_OpticSideMount {};
		};
	};
	class arifle_SUD_AK74M: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_AK: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_AK: asdg_OpticSideMount {};
		};
	};
	class arifle_SUD_AK105: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_AK105: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_AK105: asdg_OpticRail1913 {};
		};
	};
	class arifle_SUD_AK107: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_AK105: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_AK105: asdg_OpticRail1913 {};
		};
	};
	
	class LMG_SUD_RPK107: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_AK105: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_AK105: asdg_OpticRail1913 {};
		};
	};
	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_Pecheneg: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_Pecheneg: asdg_OpticRail1913_short {};
		};
	};
	
	class srifle_SUD_SVU107: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SUD_SVU107: asdg_FrontSideRail {};
			class asdg_OpticRail_SUD_SVU107: asdg_OpticRail1913 {};
		};
	};

	/*
	class srifle_SUD_SVD: Rifle_Long_Base_F
	{
	};
	class SUD_KSVK_Base: Rifle_Long_Base_F
	{
	};
	*/
	
};
