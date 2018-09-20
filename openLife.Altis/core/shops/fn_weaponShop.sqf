createDialog "open_Store";

_ctrlCombo = ((findDisplay 24601) displayCtrl 2100);

_ctrlCombo lbadd "Shop Inventory";
_ctrlCombo lbadd "Your Inventory";
_ctrlCombo lbSetCurSel 0;