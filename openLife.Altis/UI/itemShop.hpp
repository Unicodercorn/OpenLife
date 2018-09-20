class open_itemStore {
    idd = 24601;
    name= "open_itemStore";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class background: open_RscText
		{
			idc = 1000;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class open_RscText_1001: open_RscText
		{
			idc = 1001;
			text = "Item Shop"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.407344 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.572 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscText_1003: open_RscText
		{
			idc = 1003;
			text = "Shop Items"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class open_RscText_1004: open_RscText
		{
			idc = 1004;
			text = "Your Items"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class shopLB: open_RscListbox
		{
			idc = 1500;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.374 * safezoneH;
		};
		class yourLB: open_RscListbox
		{
			idc = 1501;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.374 * safezoneH;
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			text = "Buy Items"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2404: open_RscButtonMenu
		{
			idc = 2404;
			text = "Sell Items"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class buySlide: open_RscSlider
		{
			idc = 1900;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class sellSlide: open_RscSlider
		{
			idc = 1901;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			text = "CLOSE"; //--- ToDo: Localize;
			onButtonClick = "closeDialog 2";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
	};
};