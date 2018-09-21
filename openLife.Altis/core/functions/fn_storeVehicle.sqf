params ["_vehicle"];

_vehicles = nearestObjects [position player, ["Car","Truck","Air"], 25];

{
	if (_x in OPEN_VEHICLES) exitwith {
		deletevehicle _x;
		hint "Vehicle Stored";
	};
} foreach _vehicles;