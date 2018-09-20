class open_licenseStore {
    idd = 24601;
    name= "open_licenseStore";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class open_RscText_1000: open_RscText
		{
			idc = 1000;
			text = "License Shop"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscText_1001: open_RscText
		{
			idc = 1001;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.506 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscListbox_1500: open_RscListbox
		{
			idc = 1500;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "Buy"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			text = "CLOSE"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
	};
};