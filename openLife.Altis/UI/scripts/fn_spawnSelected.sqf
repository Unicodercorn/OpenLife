
_selected = _this select 0;

_ctrl = ((findDisplay 37400) displayCtrl 1500);

_spawnPoint = _ctrl lbData _selected;

player setpos (getmarkerpos _spawnPoint);

closeDialog 2;
cutText ["","BLACK IN",-1];