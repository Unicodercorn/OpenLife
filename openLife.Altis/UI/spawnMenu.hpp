class open_spawnSelect {
    idd = 37400;
    name= "open_spawnSelect";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {
		class IGUIBack_2200: open_RscText
		{
			idc = 2200;
			x = 0.0204687 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.94875 * safezoneW;
			h = 0.924 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscListbox_1500: open_RscListbox
		{
			idc = 1500;
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.038 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.836 * safezoneH;
			sizeEx = 0.041;
			onLBSelChanged = "[lbCurSel 1500] call open_fnc_spawnSelectionChange";
		};
		class RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "Select Spawn"; //--- ToDo: Localize;
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.885 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.055 * safezoneH;
			onButtonCLick = "[lbCurSel 1500] call open_fnc_spawnSelected;"
		};
		class RscPicture_1200: open_RscMapControl
		{
			idc = 1200;
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.038 * safezoneH + safezoneY;
			w = 0.732187 * safezoneW;
			h = 0.902 * safezoneH;
		};
	};
};
