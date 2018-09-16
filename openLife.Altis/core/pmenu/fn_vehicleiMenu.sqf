/*
FileName: fn_pMenu.sqf
Author: JJ Abrams.
Desctiption: 
Player Interaction Menu
*/

open_target = _this select 0;

#define Btn1 2400
#define Btn2 2401
#define Btn3 2402
#define Btn4 2403
#define Btn5 2404
#define Btn6 2405
#define Btn7 2406
#define Btn8 2407
#define Btn9 2408
#define Btn10 2409
#define Btn11 2410
#define Btn12 2411


disableSerialization;

if (!dialog) then {
    createdialog "open_interactMenu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
_Btn11 = _display displayCtrl Btn11;
_Btn12 = _display displayCtrl Btn12;

_buttons = [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];

{
	_x ctrlShow false;
} foreach _buttons;

_Btn1 ctrlSetText "Repair";
_Btn1 buttonSetAction "[open_target] call life_fnc_unrestrain; closeDialog 0;";

_Btn2 ctrlSetText "Unflip";
_Btn2 buttonSetAction "[open_target] call life_fnc_unrestrain; closeDialog 0;";

if ([] call open_fnc_isCiv) then {
	_Btn3 ctrlSetText "Close";
	_Btn3 buttonSetAction "closeDialog 0;";
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
	_Btn11 ctrlShow false;
	_Btn12 ctrlShow false;
	
	_buttons = [_Btn1,_Btn2,_Btn3];
};

if ([] call open_fnc_isPolice) then {
	
	_Btn3 ctrlSetText "Pick Lock";
	_Btn3 buttonSetAction "[open_target] spawn open_fnc_picklock; closeDialog 0;";
	
	
	_Btn4 ctrlSetText "Pull Out";
	_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";
	
	_Btn5 ctrlSetText "Search";
	_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

	_Btn6 ctrlSetText "Impound";
	_Btn6 buttonSetAction "[open_target] spawn open_fnc_impoundVehicle; closeDialog 0;";
	
	_Btn7 ctrlSetText "Crush";
	_Btn7 buttonSetAction "[open_target] spawn open_fnc_crushVehicle; closeDialog 0;";

	_Btn8 ctrlSetText "Close";
	_Btn9 buttonSetAction "closeDialog 0;";
	
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
	_Btn11 ctrlShow false;
	_Btn12 ctrlShow false;
	_buttons = [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];

};

if ([] call open_fnc_isMedic) then {
	_Btn3 ctrlSetText "Close";
	_Btn3 buttonSetAction "closeDialog 0;";
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
	_Btn11 ctrlShow false;
	_Btn12 ctrlShow false;
	_buttons = [_Btn1,_Btn2,_Btn3];
};

{
	_x ctrlShow true;
	sleep 0.05;
} foreach _buttons;