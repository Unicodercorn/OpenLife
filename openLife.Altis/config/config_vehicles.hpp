class CfgVehicleShops {
	
	class police_car {
		displayName = "Police Car Shop";
		side = "Police";
		conditions = "true";
		vehicles[] = {
			// Vehicle Name, Conditions
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "B_MRAP_01_F", "" },
            { "B_MRAP_01_hmg_F", "" }
        };
	};
	
	class police_air {
		displayName = "Police Air Shop";
		side = "Police";
		conditions = "true";
		vehicles[] = {
			// Vehicle Name, Conditions
            { "B_Heli_Light_01_F", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" }
        };
	};
	
	class medic_car {
		displayName = "Medic Car Shop";
		side = "Medic";
		conditions = "true";
		vehicles[] = {
			// Vehicle Name, Conditions
            { "C_Van_01_box_F", "" },
            { "C_Van_02_medevac_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
        };
	};
	
	class medic_air {
		displayName = "Medic Air Shop";
		side = "Medic";
		conditions = "true";
		vehicles[] = {
			// Vehicle Name, Conditions
            { "C_Heli_Light_01_civil_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "O_Heli_Transport_04_medevac_black_F", "" }
        };
	};
		
};

class CfgVehicles {
	
	class C_Offroad_01_F {
		price = 10000;
		trunk = 25;
		textures[] = {
			//Name, Texture, Conditions
			{"Red","#(rgb,8,8,3)color(1,0,0,1)","true"},
			{"Blue","#(rgb,8,8,3)color(0,0,1,1)","true"}
		};
	};
	
};