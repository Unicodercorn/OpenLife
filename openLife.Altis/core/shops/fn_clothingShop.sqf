createDialog "open_clothingStore";

_ctrlCombo = ((findDisplay 24601) displayCtrl 2100);

_ctrlCombo lbadd "Clothing";
_ctrlCombo lbadd "Hats";
_ctrlCombo lbadd "Glasses";
_ctrlCombo lbadd "Vests";
_ctrlCombo lbadd "Backpack";
_ctrlCombo lbSetCurSel 0;
