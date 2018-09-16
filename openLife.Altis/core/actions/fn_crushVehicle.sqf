

params["_target"];

_result = ["Are you sure?", "Confirm Vehicle Crush", true, true] call BIS_fnc_guiMessage;

if !(_result) exitwith {};

open_progress_complete = false;

[60,"Crushing Vehicle"] spawn open_fnc_progressTimer;

waitUntil {open_progress_complete};

deletevehicle _target;