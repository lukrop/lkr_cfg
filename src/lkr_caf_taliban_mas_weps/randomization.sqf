/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

sleep 0.3;

// retrieve paramters
_unit = _this select 0;
_type = _this select 1;

private ["_texArray"];

// choose textures for matching unit
switch (_type) do {
	case 0: {
		_texArray = ["\caf_taliban_t\tex\tak_civil01_1_co.paa",
			"\caf_taliban_t\tex\tak_civil01_2_co.paa",
			"\caf_taliban_t\tex\tak_civil01_3_co.paa",
			"\caf_taliban_t\tex\tak_civil01_4_co.paa",
			"\caf_taliban_t\tex\tak_civil01_5_co.paa"];
	};
	case 1: {
		_texArray = ["\caf_taliban_t\tex\tak_civil02_1_co.paa",
			"\caf_taliban_t\tex\tak_civil02_2_co.paa",
			"\caf_taliban_t\tex\tak_civil02_3_co.paa",
			"\caf_taliban_t\tex\tak_civil02_4_co.paa",
			"\caf_taliban_t\tex\tak_civil02_5_co.paa",
			"\caf_taliban_t\tex\tak_civil02cam_1_co.paa",
			"\caf_taliban_t\tex\tak_civil02cam_2_co.paa"];
	};
	case 2: {
		_texArray = ["\caf_taliban_t\tex\tak_civil03_1_co.paa",
			"\caf_taliban_t\tex\tak_civil03_2_co.paa",
			"\caf_taliban_t\tex\tak_civil03_3_co.paa",
			"\caf_taliban_t\tex\tak_civil03_4_co.paa",
			"\caf_taliban_t\tex\tak_civil03_5_co.paa"];
	};
	case 3: {
		_texArray = ["\caf_taliban_t\tex\tak_civil06_1_co.paa",
			"\caf_taliban_t\tex\tak_civil06_2_co.paa",
			"\caf_taliban_t\tex\tak_civil06_3_co.paa",
			"\caf_taliban_t\tex\tak_civil06_4_co.paa",
			"\caf_taliban_t\tex\tak_civil06_5_co.paa"];
	};
};
// choose random texture
_tex = _texArray call BIS_fnc_selectRandom;
// set texture
_unit setObjectTextureGlobal [0, _tex];

// remove the unit's vest
removeVest _unit;
// choose random vest
_vest = ["V_BandollierB_khk", "V_BandollierB_oli", 
	"V_BandollierB_cbr"] call BIS_fnc_selectRandom;
// add vest to unit
_unit addVest _vest;

// remove headgear of unit
removeHeadgear _unit;
// select random headgear
_hat = ["H_caf_ag_turban", "H_caf_ag_PAKTOL",
	"H_caf_ag_PAKTOL_02", "H_caf_ag_PAKTOL_03",
	"H_caf_ag_PAKTOL_04", "H_caf_ag_wrap",
	"H_shemagOpen_tan"] call BIS_fnc_selectRandom;
_unit addHeadgear _hat;

// remove unit's backpack
removeBackpack _unit;
// select random backpack
_backpack = [ "B_FieldPack_cbr", "B_FieldPack_oli",
	"B_TacticalPack_oli", "B_TacticalPack_rgr"] call BIS_fnc_selectRandom;
// add backpack to unit
_unit addBackpack _backpack;

_ak74_gear = {
	_unit removeWeapon "caf_ak74";
	_unit removeMagazines "CAF_30Rnd_762x39_AK";
	_unit removeWeapon "arifle_mas_aks74";
	_unit removeMagazines "30Rnd_mas_545x39_mag";

	_unit addMagazine "30Rnd_mas_545x39_mag";
	_unit addWeapon "arifle_mas_aks74";

	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
};

_ak47_gear = {
	_unit removeWeapon "caf_ak47";
	_unit removeMagazines "CAF_30Rnd_762x39_AK";
	_unit removeWeapon "arifle_mas_akm";
	_unit removeMagazines "30Rnd_mas_762x39_mag";

	_unit addMagazine "30Rnd_mas_762x39_mag";
	_unit addWeapon "arifle_mas_akm";

	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "30Rnd_mas_762x39_mag";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "30Rnd_mas_762x39_mag";
	_unit addItemToBackpack "30Rnd_mas_762x39_mag";
	_unit addItemToBackpack "30Rnd_mas_762x39_mag";
	_unit addItemToBackpack "30Rnd_mas_762x39_mag";

	_AA = floor(random 40);

	if (_AA == 1) then {
	removeBackpack _unit;
	_unit addBackpack "B_Carryall_oli";

	_unit addMagazine "caf_AA_rocket";
	_unit addWeapon "caf_strela";

	_unit addItemToBackpack "caf_AA_rocket";
	_unit addItemToBackpack "caf_AA_rocket";
	};
};

_rpk_gear = {
	_unit removeWeapon "caf_rpk74";
	_unit removeMagazines "CAF_75rnd_762x39_RPK";
	_unit removeWeapon "LMG_mas_rpk_F";
	_unit removeMagazines "100Rnd_mas_545x39_mag";

	_unit addMagazine "100Rnd_mas_545x39_mag";
	_unit addWeapon "LMG_mas_rpk_F";

	_unit addItemToVest "100Rnd_mas_545x39_mag";
	_unit addItemToVest "100Rnd_mas_545x39_mag";
	_unit addItemToVest "100Rnd_mas_545x39_mag";
	_unit addItemToVest "100Rnd_mas_545x39_mag";
	_unit addItemToVest "100Rnd_mas_545x39_mag";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "100Rnd_mas_545x39_mag";
	_unit addItemToBackpack "100Rnd_mas_545x39_mag";
};

_ak74gl_gear = {
	_unit removeWeapon "caf_ak74gl";
	_unit removeMagazines "1Rnd_HE_Grenade_shell";
	_unit removeMagazines "CAF_30Rnd_762x39_AK";
	_unit removeWeapon "arifle_mas_aks74_gl";
	_unit removeMagazines "1Rnd_HE_Grenade_shell";
	_unit removeMagazines "30Rnd_mas_545x39_mag";

	_unit addMagazine "1Rnd_HE_Grenade_shell";
	_unit addMagazine "30Rnd_mas_545x39_mag";
	_unit addWeapon "arifle_mas_aks74_gl";

	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "30Rnd_mas_545x39_mag";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "1Rnd_HE_Grenade_shell";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "30Rnd_mas_545x39_mag";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
	_unit addItemToBackpack "1Rnd_HE_Grenade_shell";
};

_pkm_gear = {
	_unit removeWeapon "caf_pkm";
	_unit removeMagazines "CAF_100Rnd_762x54_PKM";
	_unit removeWeapon "LMG_mas_pkm_F";
	_unit removeMagazines "100Rnd_mas_762x54_mag";

	_unit addMagazine "100Rnd_mas_762x54_mag";
	_unit addWeapon "LMG_mas_pkm_F";

	_unit addItemToVest "100Rnd_mas_762x54_mag";
	_unit addItemToVest "100Rnd_mas_762x54_mag";
	_unit addItemToVest "100Rnd_mas_762x54_mag";
	_unit addItemToVest "100Rnd_mas_762x54_mag";
	_unit addItemToVest "100Rnd_mas_762x54_mag";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "100Rnd_mas_762x54_mag";
	_unit addItemToBackpack "100Rnd_mas_762x54_mag";
};

_svd_gear = {
	_unit removeWeapon "caf_svd";
	_unit removeMagazines "caf_10Rnd_762x54_SVD";
	_unit removeWeapon "srifle_mas_svd_l";
	_unit removeMagazines "10Rnd_mas_762x54_mag";

	_unit addMagazine "10Rnd_mas_762x54_mag";
	_unit addWeapon "srifle_mas_svd_l";

	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "10Rnd_mas_762x54_mag";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "HandGrenade";
	_unit addItemToVest "SmokeShell";
	_unit addItemToVest "SmokeShell";
	_unit addItem "HandGrenade";
	_unit addItem "HandGrenade";
	_unit addItem "SmokeShell";
	_unit addItem "SmokeShell";

	_unit addItemToBackpack "10Rnd_mas_762x54_mag";
	_unit addItemToBackpack "10Rnd_mas_762x54_mag";
	_unit addItemToBackpack "10Rnd_mas_762x54_mag";
	_unit addItemToBackpack "10Rnd_mas_762x54_mag";
};
// check wich weapon the unit has and setup a corresponding loadout
switch (primaryWeapon _unit) do {
	case "caf_ak74": {
		call _ak74_gear;
	};
	case "arifle_mas_aks74": {
		call _ak74_gear;
	};
	case "caf_ak47": {
		call _ak47_gear;
	};
	case "arifle_mas_akm": {
		call _ak47_gear;
	};
	case "caf_rpk74": {
		call _rpk_gear;
	};
	case "LMG_mas_rpk_F": {
		call _rpk_gear;
	};
	case "caf_ak74gl": {
		call _ak74gl_gear;
	};
	case "arifle_mas_aks74_gl": {
		call _ak74gl_gear;
	};
	case "caf_pkm": {
		call _pkm_gear;
	};
	case "LMG_mas_pkm_F": {
		call _pkm_gear;
	};
	case "caf_svd": {
		call _svd_gear;
	};
	case "srifle_mas_svd_l": {
		call _svd_gear;
	};
	default {
		call _ak47_gear;
	};
};

// does the unit have a rpg?
if ("caf_rpg7" in (weapons _unit)) then {
	// remove the backpack and replace it with
	// a backpack with RPG ammo
	removeBackpack _unit ;
	_unit addBackpack "B_TacticalPack_oli";

	_unit removeWeapon "caf_rpg7";
	_unit addMagazine "caf_pg7v";
	_unit addWeapon "caf_rpg7";

	_unit addItemToBackpack "CAF_pg7v";
	_unit addItemToBackpack "CAF_pg7v";
	_unit addItemToBackpack "caf_og7";
	_unit addItemToBackpack "caf_og7";
};
// does the unit have a AA launcher?
if ("caf_Strela" in (weapons _unit)) then {
	// remove the backpack and replace it with
	// a backpack with AA ammo
	removeBackpack _unit ;
	_unit addBackpack "B_TacticalPack_oli";

	_unit removeWeapon "caf_Strela";
	_unit addMagazine "caf_AA_rocket";
	_unit addWeapon "caf_Strela";

	_unit addItemToBackpack "CAF_AA_rocket";
	_unit addItemToBackpack "CAF_AA_rocket";
};