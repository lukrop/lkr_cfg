/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_sud_russians_mag_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"SUD_RUSSIANS",
			"mas_weapons_ak"
		};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_AKMS: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_762x39_AKM",
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag",
			"100Rnd_mas_762x39_mag",
			"100Rnd_mas_762x39_T_mag"
		};
	};
	class arifle_SUD_AK74M: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag"
		};
	};
	class arifle_SUD_AK105: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag"
		};
	};
	class arifle_SUD_AK107: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag"
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag"
		};
	};
	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"100Rnd_762x54_PK",
			"100Rnd_mas_762x54_mag",
			"100Rnd_mas_762x54_T_mag"
		};
	};
	class srifle_SUD_SVD: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"10rnd_762x54_SVU107",
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag"
		};
	};
	class srifle_SUD_SVU107: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"10rnd_762x54_SVU107",
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag"
		};
	};
	class SUD_KSVK_Base: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"5Rnd_127x108_Mag",
			"5Rnd_mas_127x108_mag",
			"5Rnd_mas_127x108_T_mag",
			"5Rnd_mas_127x108_dem_mag"
		};
	};
};