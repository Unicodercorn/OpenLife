/*


*/

[] call open_fnc_getPlayerData;

waitUntil {!(isNull (findDisplay 46))};
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call open_fnc_keyHandler"];

if ([] call open_fnc_isPolice) then {
	hint "Police";
	[] call open_fnc_initPolice;
};

if ([] call open_fnc_isMedic) then {
	hint "Medic";
	[] call open_fnc_initMedic;
};

if ([] call open_fnc_isCiv) then {
	hint "Civ";
	[] call open_fnc_initCiv;
};

