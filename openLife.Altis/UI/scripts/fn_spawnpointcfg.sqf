_side = "Civilian";

if ([player] call open_fnc_isPolice) then {
	_side = "Police";
};

if ([player] call open_fnc_isMedic) then {
	_side = "Medic";
};

private _return = [];

private _spawnCfg = missionConfigFile >> "CfgSpawnPoints" >> _side;

for "_i" from 0 to count(_spawnCfg)-1 do {

    private _tempConfig = [];
    private _curConfig = (_spawnCfg select _i);
    //private _conditions = getText(_curConfig >> "conditions");

    //private _flag = [_conditions] call life_fnc_levelCheck;

    //if (_flag) then {
        _tempConfig pushBack getText(_curConfig >> "spawnMarker");
        _tempConfig pushBack getText(_curConfig >> "displayName");
        _tempConfig pushBack getText(_curConfig >> "icon");
        _return pushBack _tempConfig;
    //};
};

_return;