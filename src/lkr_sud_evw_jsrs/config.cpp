/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_sud_evw_jsrs {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"SUD_GW_WPN"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_M16: Rifle_Base_F {
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";

		class Burst: Mode_Burst {
			begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1", 1.412540, 1, 130};	
			begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2", 1.412540, 1, 130};
			soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
		};

		class Single: Mode_SemiAuto
		{
			begin1[] = {"A3\sounds_f\weapons\khaybar\khaybar_1", 1.258930, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\khaybar\khaybar_2", 1.258930, 1, 130};
			soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
		};
	};

	class arifle_SUD_AK74: Rifle_Base_F {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";

		class FullAuto: Mode_FullAuto {
			begin1[] = {"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};

		class Single: Mode_SemiAuto {
			begin1[] = {"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
	};

	class LMG_SUD_PK: Rifle_Long_Base_F {
		jsrs_soundeffect = "JSRS2_Distance_Effects_PK";

		class Single: Mode_SemiAuto
		{
			begin1[] = {"A3\sounds_f\weapons\zafir\zafir_1a7", 1.25893, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\zafir\zafir_2a7", 1.25893, 1, 130};
		};

		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"A3\sounds_f\weapons\zafir\zafir_1a7", 1.25893, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\zafir\zafir_2a7", 1.25893, 1, 130};
		};
	};


	class LMG_SUD_M60: Rifle_Long_Base_F {
		jsrs_soundeffect = "JSRS2_Distance_Effects_M240";

		class manual: Mode_FullAuto
		{
			begin1[] = {"A3\sounds_f\weapons\M200\Mk200_st_4a", 1.258930, 1, 130};
			begin2[] = {"A3\sounds_f\weapons\M200\Mk200_st_5a", 1.258930, 1, 130};
			begin3[] = {"A3\sounds_f\weapons\M200\Mk200_st_6a", 1.258930, 1, 130};
			soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
		};
	};
};