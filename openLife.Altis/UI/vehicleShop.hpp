class open_vehicleStore {
    idd = 24601;
    name= "open_vehicleStore";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "";
	class controls {

		class open_Background: open_RscText
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

			text = "Vehicle Shop"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscListbox_1500: open_RscListBox
		{
			idc = 1500;

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.418 * safezoneH;
			onLBSelChanged = "[lbCurSel 1500] call open_fnc_vehShopChange";
		};
		class open_RscButtonMenu_2400: open_RscButtonMenu
		{
			idc = 2400;
			onButtonClick = "[0,lbCurSel 1500,lbCurSel 2100] call open_fnc_vehShopBuy";
			text = "BUY"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2401: open_RscButtonMenu
		{
			idc = 2401;
			onButtonClick = "[1,lbCurSel 1500,lbCurSel 2100] call open_fnc_vehShopBuy";
			text = "RENT"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscButtonMenu_2402: open_RscButtonMenu
		{
			idc = 2402;
			onButtonClick = "closeDialog 2";

			text = "CLOSE"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		class open_RscStructuredText_1100: open_RscPicture
		{
			idc = 1100;

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.198 * safezoneH;
			text = "";
		};
		class open_RscStructuredText_1101: open_RscStructuredText
		{
			idc = 1101;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.242344 * safezoneW;
			h = 0.253 * safezoneH;
			
		};
		class open_RscCombo_2100: open_RscCombo
		{
			idc = 2100;

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class open_RscText_1002: open_RscText
		{
			idc = 1002;

			x = 0.292719 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.00515625 * safezoneW;
			h = 0.572 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","1"};
		};
		
		class RscEdit_1400: open_RscEdit
		{
			idc = 1400;
			text = ""; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};
};
