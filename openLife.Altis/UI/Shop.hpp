class open_Store {
    idd = 24601;
    name= "open_Store";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class open_RscText_1003: open_RscText
		{
			idc = 1003;
			text = "Shop"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscText_1001: open_RscText
		{
			idc = 1001;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.528 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscCombo_2100: open_RscCombo
		{
			idc = 2100;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class open_RscListbox_1500: open_RscListbox
		{
			idc = 1500;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class open_RscStructuredText_1100: open_RscStructuredText
		{
			idc = 1100;
			text = "Total: Â£0"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "Close"; //--- ToDo: Localize;
			onButtonClick = "closeDialog 2";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			text = "BUY"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
	};
};