/*
FileName: fn_pMenu.sqf
Author: JJ Abrams.
Desctiption: 
Player Interaction Menu
*/



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

_Btn1 ctrlSetText "Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn2 ctrlSetText "Search Player";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn3 ctrlSetText "Ticket Player";
_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn4 ctrlSetText "Put In Vehicle";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn5 ctrlSetText "Escort";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn6 ctrlSetText "Check Licenses";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn7 ctrlSetText "Inventory";
_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn8 ctrlSetText "Close";
_Btn8 buttonSetAction "closeDialog 0;";

_Btn9 ctrlSetText "";
_Btn10 ctrlSetText "";
_Btn11 ctrlSetText "";

_Btn9 ctrlShow false;
_Btn10 ctrlShow false;
_Btn11 ctrlShow false;
_Btn12 ctrlShow false;

{
	_x ctrlShow true;
	sleep 0.05;
} foreach _buttons;