class open_life_core {
	tag = "open";
	
	class master {
		file = "core";
		class initCiv {};
		class isCiv {};
		class initPolice {};
		class isPolice {};
		class initMedic {};
		class isMedic {};
	};
	class actions {
		file = "core\actions";
		class pickLock {};
		class unlockCar {};
		class impoundVehicle {};
		class crushVehicle {};
	};
	class config {
		file = "config";
		class playerSkins {};		
	};
	
	class shops {
		file = "core\shops";
		class clothingShop {};
		class itemShop {};
		class licenseShop {};
		class vehShopOpen {};
		class vehShopChange {};
		class vehShopBuy {};
		class weaponShop {};
	};
	
	class functions {
		file = "core\functions";
		class keyhandler {};
		class WindowsKeyhandler {};
		class progressTimer {};
		class onPause {};
	};
	
	class pmenu {
		file = "core\pmenu"
		class policeIMenu {};
		class VehicleIMenu {};
	};
	
	class menuScripts {
		file= "UI\scripts";
		class spawnSelect {};
		class spawnPointcfg {};
		class spawnSelected {};
		class spawnSelectionChange {};
	}
	
	class database {
		file = "core\database"
		class getPlayerData {};
	};
};