
params ["_time","_title"];

"progressBar" cutRsc ["open_progress", "PLAIN"];
_ui = uiNameSpace getVariable "open_progress";
_progress = _ui displayCtrl 1000;
_progressTXT = _ui displayCtrl 1001;

_delay = _time / 100;

for "_x" from 0 to 1 step 0.01 do {
	_percent = _x * 100;
	_progress progressSetPosition _x;
	_progressTXT ctrlSetText format [" %1 (%2%3)",_title,round _percent,"%"];
	uisleep _delay;
}; 

"progressBar" cutFadeout 0;

open_progress_complete = true;