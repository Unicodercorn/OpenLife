disableSerialization;
cutText ["","BLACK OUT"];

if (!(createDialog "open_spawnSelect")) exitWith {[] call open_fnc_spawnSelect;};

_spawnPoints = [player] call open_fnc_spawnPointCfg;

_ctrl = ((findDisplay 37400) displayCtrl 1500);
{
	_index = _ctrl lbAdd ((_spawnPoints select _forEachIndex) select 1);
	_ctrl lbSetPicture [_index,(_spawnPoints select _forEachIndex) select 2];
	_ctrl lbSetData [_index, (_spawnPoints select _forEachIndex) select 0];
} forEach _spawnPoints;


_ctrl lbSetCurSel 0;
