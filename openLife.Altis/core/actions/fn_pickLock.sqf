

params["_target"];

open_progress_complete = false;

[35,"Picking Lock"] spawn open_fnc_progressTimer;

waitUntil {open_progress_complete};

hint "You now have Keys to the vehicle";

open_vehicles pushback _target;