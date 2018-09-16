class open_progress {
    name = "open_progress";
    idd = 38200;
    fadein=0;
    duration = 99999999999;
    fadeout=0;
    movingEnable = 0;
    onLoad="uiNamespace setVariable ['open_progress',_this select 0]";
    objects[]={};
	class controls {
		class RscText_1000: open_RscProgress
		{
			idc = 1000;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class RscText_1001: open_RscText
		{
			idc = 1001;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.044 * safezoneH;
			style = ST_CENTER;
		};
	};
};
