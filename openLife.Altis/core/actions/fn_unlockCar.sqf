params ["_vehicle"];

if (vehicle player != player) then {
	_vehicle = vehicle player;
};

if (_vehicle in open_vehicles) then {
	switch (locked _vehicle) do {
		case 0: {_vehicle setVehicleLock "LOCKED";systemchat "Vehicle Unlocked: Locking";};
		case 2: {_vehicle setVehicleLock "UNLOCKED";systemchat "Vehicle Locked: Unlocking";};
	};
};