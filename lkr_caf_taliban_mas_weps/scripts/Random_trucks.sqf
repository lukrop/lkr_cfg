

if (isServer) then {
	_this execVM "\A3\soft_f_gamma\Offroad_01\scripts\randomize_doors.sqf";

	_this animate [["HideBumper1","HideBumper2"] select floor random 2, 0];	
	_this animate ["HideBackpacks", 0];
	_this animate ["HideConstruction", 0];
	_this animate ["HidePolice", 1];
	_this animate ["HideServices", 1];
	
	
	_rnd1 = floor random 4;
	
	_this setObjectTextureGlobal [0, ["\caf_somali_t\tex\offroad_01_che_co.paa", 
	"\caf_somali_t\tex\offroad_02_che_co.paa",
	"\caf_somali_t\tex\offroad_03_che_co.paa",
	"\caf_somali_t\tex\offroad_04_che_co.paa"] select _rnd1];

	_this setObjectTextureGlobal [1, ["\caf_somali_t\tex\offroad_01_che_co.paa", 
	"\caf_somali_t\tex\offroad_02_che_co.paa",
	"\caf_somali_t\tex\offroad_03_che_co.paa",
	"\caf_somali_t\tex\offroad_04_che_co.paa"] select _rnd1];
	
};

