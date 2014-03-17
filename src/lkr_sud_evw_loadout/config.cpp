/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_sud_evw_sound {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"SUD_GW_U",
			"RH_m4_cfg"
		};
	};
};

class CfgVehicles {
	class SoldierWB;
	class SoldierEB;
	class SUD_NATO_Soldier_Base: SoldierWB {
		weapons[] = {
			"RH_M16A2",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"RH_M16A2",
			"Throw",
			"Put"
		};

		Items[] = {
			"FirstAidKit"
		};

		RespawnItems[] = {
			"FirstAidKit"
		};

		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};

		respawnMagazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};

		linkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_NATO_Soldier_GL: SUD_NATO_Soldier_Base {
		weapons[] = {
			"RH_M16A2gl",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"RH_M16A2gl",
			"Throw",
			"Put"
		};

		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};

		respawnMagazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};

	};

	class SUD_NATO_Soldier;
	class SUD_NATO_Soldier_Medic: SUD_NATO_Soldier {
		Items[] = {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};

		RespawnItems[] = {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};

		linkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest05",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest05",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_NATO_Soldier_AR: SUD_NATO_Soldier_Base {
		weapons[] = {
			"LMG_SUD_M60",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"LMG_SUD_M60",
			"Throw",
			"Put"
		};

		magazines[] = {
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60"
		};

		respawnMagazines[] = {
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60",
			"sud_100rnd_762x51_M60"
		};

		linkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_NATO_Soldier_AT: SUD_NATO_Soldier_Base {
		weapons[] = {
			"RH_M16A2",
			"launch_SUD_CarlGustaf",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"RH_M16A2",
			"launch_SUD_CarlGustaf",
			"Throw",
			"Put"
		};

		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SUD_HEAT751"
		};

		respawnMagazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SUD_HEAT751"
		};

		linkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_NATO_Soldier_TL: SUD_NATO_Soldier_Base {
		weapons[] = {
			"RH_M16A2",
			"Throw",
			"Put",
			"Binocular"
		};

		respawnWeapons[] = {
			"RH_M16A2",
			"Throw",
			"Put",
			"Binocular"
		};

		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed"
		};

		respawnMagazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed"
		};

		linkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest04",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

		respawnLinkedItems[] = {
			"h_sud_nato_helmet01",
			"v_sud_nato_vest04",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	
	class SUD_USSR_Soldier_Base: SoldierEB {
		weapons[] = {
			"arifle_SUD_AK74",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"arifle_SUD_AK74",
			"Throw",
			"Put"
		};

		Items[]= {
			"FirstAidKit"
		};

		RespawnItems[] = {
			"FirstAidKit"
		};

		magazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};

		respawnMagazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};

		linkedItems[] = {
			"V_sud_ussr_vest01",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"V_sud_ussr_vest01",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_USSR_Soldier;
	class SUD_USSR_Soldier_Medic: SUD_USSR_Soldier {
		Items[]= {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};

		RespawnItems[] = {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};

		linkedItems[] = {
			"V_sud_ussr_vest05",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"V_sud_ussr_vest05",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_USSR_Soldier_GL: SUD_USSR_Soldier_Base {
		weapons[] = {
			"arifle_SUD_AK74_GL",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"arifle_SUD_AK74_GL",
			"Throw",
			"Put"
		};

		magazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SmokeShell",
			"HandGrenade",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25"
		};

		respawnMagazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SmokeShell",
			"HandGrenade",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25",
			"SUD_1rnd_HE_GP25"
		};
	};

	class SUD_USSR_Soldier_AR: SUD_USSR_Soldier_Base {
		weapons[] = {
			"LMG_SUD_PK",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"LMG_SUD_PK",
			"Throw",
			"Put"
		};

		magazines[] = {
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK"
		};

		respawnMagazines[] = {
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK",
			"SUD_100rnd_762x54_PK"
		};

		linkedItems[] = {
			"V_sud_ussr_vest02",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"V_sud_ussr_vest02",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_USSR_Soldier_AT: SUD_USSR_Soldier_Base {
		weapons[] = {
			"arifle_SUD_AK74",
			"launch_sud_rpg7v",
			"Throw",
			"Put"
		};

		respawnWeapons[] = {
			"arifle_SUD_AK74",
			"launch_sud_rpg7v",
			"Throw",
			"Put"
		};

		magazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"HandGrenade",
			"HandGrenade",
			"SUD_PG7VL"
		};
		respawnMagazines[]=
		{
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"HandGrenade",
			"HandGrenade",
			"SUD_PG7VL"
		};

		linkedItems[] = {
			"V_sud_ussr_vest03",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"V_sud_ussr_vest03",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class SUD_USSR_Soldier_TL: SUD_USSR_Soldier_Base {
		weapons[] = {
			"arifle_SUD_AK74",
			"Throw",
			"Put",
			"Binocular"
		};

		respawnWeapons[] = {
			"arifle_SUD_AK74",
			"Throw",
			"Put",
			"Binocular"
		};

		magazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};

		respawnMagazines[] = {
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SUD_30Rnd_545x39_AK",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};

		linkedItems[] = {
			"V_sud_ussr_vest04",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

		respawnLinkedItems[] = {
			"V_sud_ussr_vest04",
			"H_sud_ussr_helmet01",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

	};
};
