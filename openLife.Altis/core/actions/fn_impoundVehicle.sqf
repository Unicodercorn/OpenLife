

_target = _this select 0;

hint str _target;

open_progress_complete = false;

[60,"Impounding Vehicle"] spawn open_fnc_progressTimer;

waitUntil {open_progress_complete};

deletevehicle _target;