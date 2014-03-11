/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_rh_m4_sound
	{
		units[]= {};
		weapons[]= {};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"lkr_rh_m4_jsrs",
			"mas_weapons_m4"
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
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_m4: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_M16a1: RH_m4
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_M16A2: RH_m4
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_M4_ris;
	class RH_M16A4: RH_M4_ris
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_Mk12mod1: RH_M16A4
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
};
