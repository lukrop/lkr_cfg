sleep 0.3;

/*
removeUniform _this;

_uniforms = [
"U_ag_afr_clothes_01",
"U_ag_afr_clothes_02",
"U_ag_afr_clothes_03",
"U_ag_afr_clothes_04",
"U_ag_afr_clothes_05",
"U_ag_afr_clothes_06",
"U_ag_afr_clothes_07",
"U_ag_afr_clothes_08",
"U_ag_afr_clothes_01",
"U_ag_afr_clothes_02",
"U_ag_afr_clothes_03",
"U_ag_afr_clothes_04"
];

_count = count _uniforms;
_this addUniform (_uniforms select floor random _count);
*/


_rnd1 = floor random 4;

	_this setObjectTextureGlobal [0, ["\caf_somali_t\tex\c_somshirt_1_co.paa",
	"\caf_somali_t\tex\c_somshirt_2_co.paa",
	"\caf_somali_t\tex\c_somshirt_3_co.paa",
	"\caf_somali_t\tex\c_somshirt_4_co.paa"] select _rnd1];




removeVest _this;

_vests = [
"V_HarnessO_brn",
"V_HarnessOGL_brn",
"V_HarnessOSpec_brn"
];

_count = count _vests;
_this addVest (_vests select floor random _count);


removeHeadgear _this;

_hat = [
"H_StrawHat",
"H_StrawHat_dark",
"",
"",
"H_Hat_brown",
"H_Hat_checker",
"",
"H_Hat_grey",
"H_Cap_red",
"",
"H_Cap_blue",
"H_Cap_grn",
"",
"",
"H_Cap_red",
"H_Cap_blk",
"",
"H_Booniehat_grn",
"H_Booniehat_mcamo",
"",
"H_Bandanna_surfer",
"",
""
];
_count = count _hat;
_this addHeadgear (_hat select floor random _count);

removeBackpack _this;

_bags = [
"B_FieldPack_cbr",
"B_FieldPack_oli",
"B_TacticalPack_oli",
"B_TacticalPack_rgr"
];

_count = count _bags;
_this addBackpack (_bags select floor random _count);


if ((primaryWeapon _this == "caf_ak74") or (primaryWeapon _this == "arifle_mas_aks74")) then {

_this removeWeapon "caf_ak74";
_this removeMagazines "CAF_30Rnd_762x39_AK";
_this removeWeapon "arifle_mas_aks74";
_this removeMagazines "30Rnd_mas_545x39_mag";

_this addMagazine "30Rnd_mas_545x39_mag";
_this addWeapon "arifle_mas_aks74";

_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";

_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";

//_AA = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20];

};

if ((primaryWeapon _this == "caf_ak47") or (primaryWeapon _this == "arifle_mas_akm")) then {
_this removeWeapon "caf_ak47";
_this removeMagazines "CAF_30Rnd_762x39_AK";
_this removeWeapon "arifle_mas_akm";
_this removeMagazines "30Rnd_mas_762x39_mag";

_this addMagazine "30Rnd_mas_762x39_mag";
_this addWeapon "arifle_mas_akm";

_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "30Rnd_mas_762x39_mag";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";

_this addItemToBackpack "30Rnd_mas_762x39_mag";
_this addItemToBackpack "30Rnd_mas_762x39_mag";
_this addItemToBackpack "30Rnd_mas_762x39_mag";
_this addItemToBackpack "30Rnd_mas_762x39_mag";

_AA = floor(random 40);

		if (_AA == 1) then {
		removeBackpack _this;
		_this addBackpack "B_Carryall_oli";

		_this addMagazine "caf_AA_rocket";
		_this addWeapon "caf_strela";

		_this addItemToBackpack "caf_AA_rocket";
		_this addItemToBackpack "caf_AA_rocket";
	};
};

if ((primaryWeapon _this == "caf_rpk74") or (primaryWeapon _this == "LMG_mas_rpk_F")) then {

_this removeWeapon "caf_rpk74";
_this removeMagazines "CAF_75rnd_762x39_RPK";
_this removeWeapon "LMG_mas_rpk_F";
_this removeMagazines "100Rnd_mas_545x39_mag";

_this addMagazine "100Rnd_mas_545x39_mag";
_this addWeapon "LMG_mas_rpk_F";


_this addItemToVest "100Rnd_mas_545x39_mag";
_this addItemToVest "100Rnd_mas_545x39_mag";
_this addItemToVest "100Rnd_mas_545x39_mag";
_this addItemToVest "100Rnd_mas_545x39_mag";
_this addItemToVest "100Rnd_mas_545x39_mag";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";

_this addItemToBackpack "100Rnd_mas_545x39_mag";
_this addItemToBackpack "100Rnd_mas_545x39_mag";

};

if ((primaryWeapon _this == "caf_ak74gl") or (primaryWeapon _this == "arifle_mas_aks74_gl")) then {
_this removeWeapon "caf_ak74gl";
_this removeMagazines "1Rnd_HE_Grenade_shell";
_this removeMagazines "CAF_30Rnd_762x39_AK";
_this removeWeapon "arifle_mas_aks74_gl";
_this removeMagazines "1Rnd_HE_Grenade_shell";
_this removeMagazines "30Rnd_mas_545x39_mag";


_this addMagazine "1Rnd_HE_Grenade_shell";
_this addMagazine "30Rnd_mas_545x39_mag";
_this addWeapon "arifle_mas_aks74_gl";

_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "30Rnd_mas_545x39_mag";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "1Rnd_HE_Grenade_shell";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";


_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "30Rnd_mas_545x39_mag";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";
_this addItemToBackpack "1Rnd_HE_Grenade_shell";


};

if ((primaryWeapon _this == "caf_pkm") or (primaryWeapon _this == "LMG_mas_pkm_F")) then {

_this removeWeapon "caf_pkm";
_this removeMagazines "CAF_100Rnd_762x54_PKM";
_this removeWeapon "LMG_mas_pkm_F";
_this removeMagazines "100Rnd_mas_762x54_mag";

_this addMagazine "100Rnd_mas_762x54_mag";
_this addWeapon "LMG_mas_pkm_F";

_this addItemToVest "100Rnd_mas_762x54_mag";
_this addItemToVest "100Rnd_mas_762x54_mag";
_this addItemToVest "100Rnd_mas_762x54_mag";
_this addItemToVest "100Rnd_mas_762x54_mag";
_this addItemToVest "100Rnd_mas_762x54_mag";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";

_this addItemToBackpack "100Rnd_mas_762x54_mag";
_this addItemToBackpack "100Rnd_mas_762x54_mag";

};

if (primaryWeapon _this == "caf_Enfield") then {

};


if ((primaryWeapon _this == "caf_svd") or (primaryWeapon _this == "srifle_mas_svd_l")) then {

_this removeWeapon "caf_svd";
_this removeMagazines "caf_10Rnd_762x54_SVD";
_this removeWeapon "srifle_mas_svd_l";
_this removeMagazines "10Rnd_mas_762x54_mag";

_this addMagazine "10Rnd_mas_762x54_mag";
_this addWeapon "srifle_mas_svd_l";

_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "10Rnd_mas_762x54_mag";
_this addItemToVest "HandGrenade";
_this addItemToVest "HandGrenade";
_this addItemToVest "SmokeShell";
_this addItemToVest "SmokeShell";
_this addItem "HandGrenade";
_this addItem "HandGrenade";
_this addItem "SmokeShell";
_this addItem "SmokeShell";

_this addItemToBackpack "10Rnd_mas_762x54_mag";
_this addItemToBackpack "10Rnd_mas_762x54_mag";
_this addItemToBackpack "10Rnd_mas_762x54_mag";
_this addItemToBackpack "10Rnd_mas_762x54_mag";


};

_weapons = weapons _this;

if ("caf_rpg7" in _weapons) then {

removeBackpack _this ;
_this addBackpack "B_TacticalPack_oli";

_this removeWeapon "caf_rpg7";
_this addMagazine "caf_pg7v";
_this addWeapon "caf_rpg7";

_this addItemToBackpack "CAF_pg7v";
_this addItemToBackpack "CAF_pg7v";
_this addItemToBackpack "caf_og7";
_this addItemToBackpack "caf_og7";


};