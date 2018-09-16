/*
FileName: fn_WindowsKeyHandler.sqf
Author: JJ Abrams.
Desctiption: 
Handles Windows Key Press events
*/

_curObject = cursorObject;
if (player distance _curObject > 5) exitwith {};

if (_curObject iskindof "man") exitwith {
	//hint format["Windows Key on %1",name _curObject];
	[_curObject] spawn open_fnc_policeIMenu;
};

if (_curObject iskindof "Car") exitwith {
	//hint format["Windows Key on %1",name _curObject];
	[_curObject] spawn open_fnc_vehicleIMenu;
};

hint format["Windows Key on %1",typeof _curObject];




