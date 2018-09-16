/*


*/

[] call open_fnc_spawnSelect;

_loadout = [[],[],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","acc_flashlight_pistol","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_CombatUniform_mcam",[["FirstAidKit",1],["Chemlight_green",1,1]]],["V_TacVest_blk_POLICE",[["SmokeShell",1,1]]],["B_Carryall_cbr",[["FirstAidKit",4]]],"H_Cap_police","G_Aviator",[],["ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];

player setunitloadout _loadout;

[] call open_fnc_playerSkins;

