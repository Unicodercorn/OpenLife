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
		
};

class CfgVehicles {
	
	class C_Offroad_01_F {
		price = 10000;
		trunk = 25;
		textures[] = {
			//Name, Texture, Conditions
			{"Red","Red","true"},
			{"Blue","Blue","true"}
		};
	};
	
};