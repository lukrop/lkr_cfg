/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_hlcmods_ak_jsrs {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"hlcweapons_aks"
		};
		author[] = {
			"lukrop"
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
	class Rifle_Base_F;
	class hlc_ak_base: Rifle_Base_F {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1,	1, 130};
		};

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1,	1, 130};
		};
	};

	class hlc_rifle_ak74: hlc_ak_base {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1,	1, 130};
		};

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1,	1, 130};
		};
	};

	class hlc_rifle_aks74;
	class hlc_rifle_ak12: hlc_rifle_aks74 {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",	1, 1, 130};
		};

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",	1, 1, 130};
		};
	};

	class hlc_rifle_aks74u: hlc_rifle_ak74 {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire", 1, 1, 130};
		};

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire", 1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire", 1, 1, 130};
		};
	};

	class hlc_rifle_ak47: hlc_rifle_aks74 {
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak47_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak47_fire",	1, 1, 130};
		};

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\ak47_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\ak47_fire",	1, 1, 130};
		};
	};

	class hlc_rifle_rpk: hlc_rifle_ak47 {
		jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";

		class FullAuto: Mode_FullAuto {
			begin1[] = {"\hlc_wp_ak\snd\rpk_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\rpk_fire",	1, 1, 130};
		};

		class Single: Mode_SemiAuto {
			begin1[] = {"\hlc_wp_ak\snd\rpk_fire",	1, 1, 130};
			begin2[] = {"\hlc_wp_ak\snd\rpk_fire",	1, 1, 130};
		};
	};
};
