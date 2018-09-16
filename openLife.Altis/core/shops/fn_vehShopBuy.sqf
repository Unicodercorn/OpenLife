
_buyRent = _this select 0;
_Type = _this select 1;
_Text = _this select 2;

_ctrlLB = ((findDisplay 24601) displayCtrl 1500);
_ctrlPicture = ((findDisplay 24601) displayCtrl 1100);
_ctrlDesc = ((findDisplay 24601) displayCtrl 1101);
_ctrlCombo = ((findDisplay 24601) displayCtrl 2100);
_ctrlEdit = ((findDisplay 24601) displayCtrl 1400);

_vehicleType = _ctrlLB lbData _Type;
_vehicleText = _ctrlCombo lbData _Text;
_vehiclePlate = ctrlText _ctrlEdit;

_veh = _vehicleType createVehicle (getmarkerpos open_vehSpawnloc);

_veh setDir (markerDir open_vehSpawnloc);

open_vehicles pushback _veh;

//systemchat _vehicleText;

_veh setobjecttextureglobal [0,_vehicleText];

closedialog 2;

open_vehSpawnloc = ""; 

_veh setVehicleLock "LOCKED";

if (_vehiclePlate != "") then {
	_veh setPlateNumber _vehiclePlate;
};

