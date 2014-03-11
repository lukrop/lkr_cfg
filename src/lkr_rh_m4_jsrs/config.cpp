/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_rh_m4_jsrs
	{
		units[]= {};
		weapons[]= {};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"RH_m4_cfg"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class RH_ar10: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"RH_m4\sound\ar10.wss", 1.1220185, 1, 130};
			begin2[]={"RH_m4\sound\ar10.wss", 1.1220185, 0.85000002, 130};
			begin3[]={"RH_m4\sound\ar10.wss", 1.1220185, 1.2, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"RH_m4\sound\ar10.wss", 1.1220185, 1, 130};
			begin2[]={"RH_m4\sound\ar10.wss", 1.1220185, 0.85000002, 130};
			begin3[]={"RH_m4\sound\ar10.wss", 1.1220185, 1.2, 130};
		};
	};
	class RH_m4: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\RH_m4\sound\m4_fire1", 1.2589254, 1, 130};
			begin2[]={"\RH_m4\sound\m4_fire2", 1.2589254, 1, 130};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\RH_m4\sound\m4_fire1", 1.5848932, 1, 130};
			begin2[]={"\RH_m4\sound\m4_fire2", 1.5848932, 1, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\RH_m4\sound\m4_fire1", 1.5848932, 1, 130};
			begin2[]={"\RH_m4\sound\m4_fire2", 1.5848932, 1, 130};
		};
	};
	class RH_M16a1: RH_m4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\RH_m4\sound\m16a1_fire1", 1.4125376, 1, 130};
			begin2[]={"\RH_m4\sound\m16a1_fire2", 1.4125376, 1.2, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\RH_m4\sound\m16a1_fire1", 1.4125376, 1, 130};
			begin2[]={"\RH_m4\sound\m16a1_fire2", 1.4125376, 1.2, 130};
		};
	};
	class RH_M16A2: RH_m4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\RH_m4\sound\m16_fire1", 1.7782789, 1, 130};
			begin2[]={"\RH_m4\sound\m16_fire2", 1.7782789, 1, 130};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\RH_m4\sound\m16_fire1", 1.7782789, 1, 130};
			begin2[]={"\RH_m4\sound\m16_fire2", 1.7782789, 1, 130};
		};
	};
	class RH_M4_ris;
	class RH_M16A4: RH_M4_ris
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\RH_m4\sound\m16_fire1", 1.7782789, 1, 130};
			begin2[]={"\RH_m4\sound\m16_fire2", 1.7782789, 1, 130};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\RH_m4\sound\m16_fire1", 1.7782789, 1, 130};
			begin2[]={"\RH_m4\sound\m16_fire2", 1.7782789, 1, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\RH_m4\sound\m16a1_fire1", 1.4125376, 1, 130};
			begin2[]={"\RH_m4\sound\m16a1_fire2", 1.4125376, 1.2, 130};
		};
	};
	class RH_Mk12mod1: RH_M16A4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\RH_m4\sound\m16_fire1", 1.7782789, 1, 130};
			begin2[]={"\RH_m4\sound\m16_fire2", 1.7782789, 1, 130};
		};
	};
};