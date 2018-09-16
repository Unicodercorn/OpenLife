
params ["_target", "_caller", "_actionId", "_arguments"];

_shop = _arguments;

createDialog "open_vehicleStore";

_ctrlLB = ((findDisplay 24601) displayCtrl 1500);

//open_vehSpawnloc = _spawnLoc;

private _return = [];


private _vehCfg = missionConfigFile >> "CfgVehicleShops" >> _shop;

// Set Shop Name
((findDisplay 24601) displayCtrl 1001) ctrlSetText getText(_vehCfg >> "displayName");

// Get Array of vehicles in shop from Config File
_vehList = getArray(_vehCfg >> "vehicles");

// Clear Listbox (Just In Case)
lbClear _ctrlLB;

// Populate Listbox with Array
{
	_vehicletype = _x select 0;
	_vehName = getText(configfile >> "CfgVehicles" >> _vehicletype >> "displayName");
	_vehIcon = getText(configfile >> "CfgVehicles" >> _vehicletype >> "picture");
	
	_index = _ctrlLB lbadd _vehName;
	_ctrlLB lbSetPicture [_index,_vehIcon];
	_ctrlLB lbSetData [_index,_vehicletype];
	

} foreach _vehList;

// Select First Item in LB
_ctrlLB lbSetCurSel 0;