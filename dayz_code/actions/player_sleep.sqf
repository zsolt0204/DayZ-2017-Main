[] spawn {
disableserialization;
call gear_ui_init;
dayz_sleep = 0;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_layDown";
sleep 3;
cutText ["Sleeping...","BLACK OUT",2];
sleep 10;
cutText ["","BLACK IN",2];
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_standUp";
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = _display displayCtrl 1209;
_control ctrlShow true;
};