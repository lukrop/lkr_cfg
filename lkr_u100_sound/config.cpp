class CfgPatches
{
	class lkr_u100_sound
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Ej_u100"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Ej_u100_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-1",
				1.4125376,
				1,
				130
			};
			begin2[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-2",
				1.4125376,
				1,
				130
			};
		};
		class AKMSingle: Mode_SemiAuto
		{
			begin1[]=
			{
				"U100\sound\ak_single1.wss",
				1.7782794,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\ak_single2.wss",
				1.7782794,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\ak_single3.wss",
				1.7782794,
				1,
				130
			};
		};
		class SCARHSingle: Mode_SemiAuto
		{
			begin1[]=
			{
				"U100\sound\Scarh.wav",
				1.7782794,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\Scarh.wav",
				1.7782794,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\Scarh.wav",
				1.7782794,
				1,
				130
			};
		};
		class SCAR65Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
		};
		class BarretSingle: Mode_SemiAuto
		{
			begin1[]=
			{
				"u100\sound\m107.wav",
				1.7782794,
				1,
				130
			};
			begin2[]=
			{
				"u100\sound\m107.wav",
				1.7782794,
				1,
				130
			};
			begin3[]=
			{
				"u100\sound\m107.wav",
				1.7782794,
				1,
				130
			};
		};
		class SCARLSingle: Mode_SemiAuto
		{
			begin1[]=
			{
				"U100\sound\ScarL.wav",
				1.5848932,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\ScarL.wav",
				1.5848932,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\ScarL.wav",
				1.5848932,
				1,
				130
			};
		};
		class SASSSingle: Mode_SemiAuto
		{
			begin1[]=
			{
				"U100\sound\m110.wav",
				1.4125376,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\m110.wav",
				1.4125376,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\m110.wav",
				1.4125376,
				1,
				130
			};
		};
		class M24Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"u100\sound\M24.wav",
				1.9952624,
				1,
				130
			};
			begin2[]=
			{
				"u100\sound\M24.wav",
				1.9952624,
				1,
				130
			};
			begin3[]=
			{
				"u100\sound\M24.wav",
				1.9952624,
				1,
				130
			};
		};
		class L115Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"u100\sound\as50.wss",
				1.7782794,
				1,
				130
			};
			begin2[]=
			{
				"u100\sound\as50.wss",
				1.7782794,
				1,
				130
			};
			begin3[]=
			{
				"u100\sound\as50.wss",
				1.7782794,
				1,
				130
			};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-1",
				1.4125376,
				1,
				130
			};
			begin2[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-2",
				1.4125376,
				1,
				130
			};
			begin3[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-1",
				1.4125376,
				1,
				130
			};
			begin4[]=
			{
				"A3\sounds_f\weapons\MX\mx-st-full-2",
				1.4125376,
				1,
				130
			};
		};
		class SCARHFullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"U100\sound\Scarh.wav",
				2.2387211,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\Scarh.wav",
				2.2387211,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\Scarh.wav",
				2.2387211,
				1,
				130
			};
			begin4[]=
			{
				"U100\sound\Scarh.wav",
				2.2387211,
				1,
				130
			};
		};
		class SCAR65FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
			begin4[]=
			{
				"U100\sound\Scarh.wav",
				1.4125376,
				1,
				130
			};
		};
		class SCARLFullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"U100\sound\ScarL.wav",
				1.9952624,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\ScarL.wav",
				1.9952624,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\ScarL.wav",
				1.9952624,
				1,
				130
			};
			begin4[]=
			{
				"U100\sound\ScarL.wav",
				1.9952624,
				1,
				130
			};
		};
		class AKMFullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"U100\sound\ak_single1.wss",
				1.7782794,
				1,
				130
			};
			begin2[]=
			{
				"U100\sound\ak_single2.wss",
				1.7782794,
				1,
				130
			};
			begin3[]=
			{
				"U100\sound\ak_single3.wss",
				1.7782794,
				1,
				130
			};
			begin4[]=
			{
				"U100\sound\ak_single3.wss",
				1.7782794,
				1,
				130
			};
		};
	};
	class ej_u100sb: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_zafir";
	};
	class ej_u100old: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_zafir";
	};
	class ej_u100old30: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_zafir";
	};
	class ej_scar: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarstandard: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarblack: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarstandardblack: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scar_h_short: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scar_h_shortafg: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scar_longbarrel: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scar_h_shortblack: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarstandardeglm: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarshorteglm: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_m110: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_DMR";
	};
	class ej_scar65: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarlsw: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_scarstandardafg: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_HK417: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class ej_scar65eglm: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class ej_HK41712: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class ej_m107: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
	};
	class ej_m24d: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
	};
	class ej_lrr_scoped: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
	};
	class ej_lrr_w: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
	};
	class ej_lrr_noscoped: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
	};
	class ej_lrr_noscopew: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
	};
	class ej_akm: Ej_u100_base
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
	};
};