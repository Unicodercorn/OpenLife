class open_clothingStore {
    idd = 24601;
    name= "open_clothingStore";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class open_RscText_1000: open_RscText
		{
			idc = 1000;
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class open_RscText_1001: open_RscText
		{
			idc = 1001;
			text = "Clothing Store"; //--- ToDo: Localize;
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,0,0,0.9};
		};
		class open_RscListbox_1500: open_RscListbox
		{
			idc = 1500;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.385 * safezoneH;
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "Buy"; //--- ToDo: Localize;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			text = "CLOSE"; //--- ToDo: Localize;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class open_RscCombo_2100: open_RscCombo
		{
			idc = 2100;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class open_RscText_1003: open_RscText
		{
			idc = 1003;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};


	};
};