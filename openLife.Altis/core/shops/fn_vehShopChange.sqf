
_selected = _this select 0;


_ctrlLB = ((findDisplay 24601) displayCtrl 1500);
_ctrlPicture = ((findDisplay 24601) displayCtrl 1100);
_ctrlDesc = ((findDisplay 24601) displayCtrl 1101);
_ctrlCombo = ((findDisplay 24601) displayCtrl 2100);

// Get data from Curerntly Selected Vehicle
_data = _ctrlLB lbData _selected;

private _vehCfg = missionConfigFile >> "CfgVehicles" >> _data;

_vehName = getText(configfile >> "CfgVehicles" >> _data >> "displayName");
_vehPrice = getNumber(_vehCfg >> "price");

_ctrlDesc ctrlSetStructuredText parseText format["
	Vehicle Name: %1<br />
	Price: $%2
	",
	_vehName,
	_vehPrice
];



// Add Textures to CombiBox
_textList = getarray(_vehCfg >> "textures");

// Clear CombiBox
lbClear _ctrlCombo;

{
	_textName = _x select 0;
	_textData = _x select 1;
	_textCond = _x select 2;

	// Check if Texture Conditions are met
	if (call compile _textCond) then {
		_index = _ctrlCombo lbadd _textName;
		_ctrlCombo lbsetData [_index,_textData];
	};
	
} foreach _textList;

_ctrlCombo lbSetCurSel 0;