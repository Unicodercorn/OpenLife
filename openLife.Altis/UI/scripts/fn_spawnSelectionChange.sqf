
_selected = _this select 0;

_ctrl = ((findDisplay 37400) displayCtrl 1500);

_spawnPoint = _ctrl lbData _selected;

_Mapctrl = ((findDisplay 37400) displayCtrl 1200);

_Mapctrl ctrlMapAnimAdd[1,0.05,getMarkerPos _spawnPoint];
ctrlMapAnimCommit _Mapctrl;