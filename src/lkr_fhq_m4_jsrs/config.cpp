/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_fhq_m4_jsrs
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"FHQ_M4_M4A1"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class FHQ_M4A1_BASE: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\FHQ_M4_A3\M4A1\sfx\M4_single", 1.5220186, 1, 130};
			begin2[]={"\FHQ_M4_A3\M4A1\sfx\M4_single", 1.5220186, 1, 130};
			begin3[]={"\FHQ_M4_A3\M4A1\sfx\M4_single", 1.5220186, 1, 130};
			soundBegin[]={"begin1", 0.33000001, "begin2", 0.33000001, "begin3", 0.34};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\FHQ_M4_A3\M4A1\sfx\M4_auto", 1.5, 1, 130};
			begin2[]={"\FHQ_M4_A3\M4A1\sfx\M4_auto", 1.5, 1, 130};
			begin3[]={"\FHQ_M4_A3\M4A1\sfx\M4_auto", 1.5, 1, 130};
			soundBegin[]={"begin1", 0.33000001, "begin2", 0.33000001, "begin3", 0.34};
		};
	};
};