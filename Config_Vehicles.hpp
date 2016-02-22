class CarShops {
	/*
	 *    ARRAY FORMAT:
	 *        0: STRING (Classname)
	 *        1: SCALAR (Rental Price)
	 *        2: ARRAY (license required)
	 *            Ex: { "driver", "trucking", "rebel" }
	 *        3: ARRAY (This is for limiting items to certain things)
	 *            0: Variable to read from
	 *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
	 *            2: What to compare to (-1 = Check Disabled)
	 *
	 *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
	 *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
	 *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
	 *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
	 */
	class civ_car {
		side = "civ";
		vehicles[] = {
				{ "B_Quadbike_01_F", 12500, { "" }, { "", "", -1 } },
				{ "C_Hatchback_01_F", 24500, { "driver" }, { "", "", -1 } },
				{ "C_Offroad_01_F", 32500, { "driver" }, { "", "", -1 } },
				{ "C_SUV_01_F", 45000, { "driver" }, { "", "", -1 } },
				{ "C_Hatchback_01_sport_F", 50000, { "driver" }, { "", "", -1 } },
				{ "C_Van_01_transport_F", 55000, { "driver" }, { "", "", -1 } }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
				{ "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
				{ "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
				{ "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
				{ "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
				{ "C_Offroad_01_F", 32500, { "" }, { "", "", -1 } },
				{ "C_SUV_01_F", 45000, { "" }, { "", "", -1 } },
				{ "C_Hatchback_01_F", 24500, { "" }, { "", "", -1 } },
				{ "I_Truck_02_medical_F", 50000, { "" }, { "", "", -1 } },
				{ "O_Truck_03_medical_F", 55000, { "" }, { "", "", -1 } },
				{ "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
				{ "B_Heli_Light_01_F", 255000, { "mAir" }, { "", "", -1 } },
				{ "O_Heli_Light_02_unarmed_F", 295000, { "mAir" }, { "", "", -1 } },
				{ "B_Heli_Transport_03_unarmed_F", 460000, { "pilot" }, { "", "", -1 } }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
				{ "C_Van_01_box_F", 60000, { "trucking" }, { "", "", -1 } },
				{ "I_Truck_02_transport_F", 75000, { "trucking" }, { "", "", -1 } },
				{ "I_Truck_02_covered_F", 150000, { "trucking" }, { "", "", -1 } },
				{ "B_Truck_01_transport_F", 235000, { "trucking" }, { "", "", -1 } },
				{ "B_Truck_01_box_F", 350000, { "trucking" }, { "", "", -1 } },
				{ "C_Van_01_fuel_F", 90000, { "trucking" }, { "", "", -1 } }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
				{ "B_Quadbike_01_F", 12500, { "" }, { "", "", -1 } },
				{ "B_G_Offroad_01_F", 12500, { "" }, { "", "", -1 } },
				{ "O_MRAP_02_F", 260000, { "" }, { "", "", -1 } },
				{ "B_G_Offroad_01_armed_F", 550000, { "rebel" }, { "", "", -1 } }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
				{ "C_Offroad_01_F", 32500, { "" }, { "", "", -1 } },
				{ "C_SUV_01_F", 45000, { "" }, { "", "", -1 } },
				{ "C_Hatchback_01_sport_F", 50000, { "" }, { "life_coplevel", "SCALAR", 1 } },
				{ "B_MRAP_01_F", 30000, { "" }, { "life_coplevel", "SCALAR", 1 } },
				{ "O_MRAP_02_F", 150000, { "" }, { "life_coplevel", "SCALAR", 1 } },
				{ "I_MRAP_03_hmg_F", 750000, { "" }, { "life_coplevel", "SCALAR", 1 } },
				{ "B_MRAP_01_hmg_F", 750000, { "" }, { "life_coplevel", "SCALAR", 2 } },
				{ "B_Truck_01_Repair_F", 750000, { "" }, { "life_coplevel", "SCALAR", 2 } },
				{ "O_MRAP_02_hmg_F", 750000, { "" }, { "life_coplevel", "SCALAR", 2 } },
				{ "O_Truck_02_medical_F", 750000, { "" }, { "life_coplevel", "SCALAR", 2 } },
				{ "O_MBT_02_cannon_F", 750000, { "" }, { "life_coplevel", "SCALAR", 3 } },
				{ "B_Truck_01_ammo_F", 750000, { "" }, { "life_coplevel", "SCALAR", 1 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
				{ "B_Heli_Light_01_F", 353000, { "pilot" }, { "", "", -1 } },
				{ "O_Heli_Light_02_unarmed_F", 450000, { "pilot" }, { "", "", -1 } },
				{ "I_Heli_Transport_02_F", 850000, { "pilot" }, { "", "", -1 } }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
				{ "B_Heli_Light_01_F", 253000, { "cAir" }, { "", "", -1 } },
				{ "B_Heli_Transport_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 1 } },
				{ "B_Heli_Attack_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 1 } },
				{ "B_Heli_Light_01_armed_F", 1000000, { "cAir" }, { "life_coplevel", "SCALAR", 2 } },
				{ "O_Heli_Attack_02_F", 2000000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
				{ "O_Heli_Attack_02_black_F", 2000000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
				{ "B_Heli_Transport_03_black_F", 850000, { "" }, { "life_coplevel", "SCALAR", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
				{ "B_Boat_Transport_01_F", 55000, { "cg" }, { "", "", -1 } },
				{ "C_Boat_Civil_01_police_F", 50000, { "cg" }, { "", "", -1 } },
				{ "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
				{ "B_SDV_01_F", 200000, { "cg" }, { "", "", -1 } }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
				{ "C_Rubberboat", 25000, { "boat" }, { "", "", -1 } },
				{ "C_Boat_Civil_01_F", 55000, { "boat" }, { "", "", -1 } },
				{ "B_Boat_Transport_01_F", 55000, { "boat" }, { "", "", -1 } },
				{ "B_SDV_01_F", 200000, { "boat" }, { "", "", -1 } }
		};
	};
};

class LifeCfgVehicles {
	/*
	 *    Vehicle Configs (Contains textures and other stuff)
	 *
	 *    storageFee (Getting vehicles out of garage) format:
	 *        INDEX 0: Civilian Price
	 *        INDEX 1: Cop Price
	 *        INDEX 2: EMS Price
	 *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
	 *
	 *    garageSell (Selling vehicles from garage) format:
	 *        INDEX 0: Civilian Price
	 *        INDEX 1: Cop Price
	 *        INDEX 2: EMS Price
	 *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
	 *
	 *    Textures config follows { Texture Name, side, {texture(s)path}}
	 *    Texture(s)path follows this format:
	 *    INDEX 0: Texture Layer 0
	 *    	INDEX 1: Texture Layer 1
	 *    INDEX 2: Texture Layer 2
	 *    etc etc etc
	 */

	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1000, 1000, 1000, 1000 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
		insurance = 2500;
		chopShop = 21500;
		textures[] = {};
	};

	class O_Truck_03_medical_F {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 37000, 0 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};

	class B_Truck_01_medical_F {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 45000, 0 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {};
	};

	class C_Rubberboat {
		vItemSpace = 145;
		storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 15000, 15000, 8000, 0 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = { };
	};

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_Heli_Attack_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_Heli_Light_01_armed_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};
	class O_Heli_Attack_02_F {
		vItemSpace = 200;
		storageFee[] = { 50000, 50000, 0, 0 };
		garageSell[] = { 2300000, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 1545000;
		textures[] = {};
	};
	class O_Heli_Attack_02_black_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 100000;
		textures[] = {
				{ "Black", "cop", {
						"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
						"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
						"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
				} }
		};
	};

	class I_MRAP_03_hmg_F {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 100000;
		textures[] = {};
	};

	class O_Boat_Armed_01_hmg_F {
		vItemSpace = 175;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class I_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};


	class B_Boat_Transport_01_F {
		vItemSpace = 195;
		storageFee[] = { 2000, 450, 0, 0 };
		garageSell[] = { 40000, 40000, 0, 0 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = { };
	};
	

	class O_Truck_03_transport_F {
		vItemSpace = 285;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 100000;
		textures[] = { };
	};

	class Land_CargoBox_V1_F {
		vItemSpace = 5000;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class Box_IND_Grenades_F {
		vItemSpace = 350;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class B_supplyCrate_F {
		vItemSpace = 700;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class B_G_Offroad_01_F {
		vItemSpace = 65;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 6250;
		textures[] = { };
	};

	class B_G_Offroad_01_armed_F {
		vItemSpace = 65;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 554000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 450000;
		textures[] = { };
	};

	class I_G_Van_01_transport_F {
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Boat_Civil_01_F {
		vItemSpace = 150;
		storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 26800, 13500, 0, 0 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = { };
	};

	class C_Boat_Civil_01_police_F {
		vItemSpace = 85;
		storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Boat_Civil_01_rescue_F {
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Truck_01_box_F {
		vItemSpace = 450;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 270000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 235000;
		textures[] = { };
	};

	class C_Van_01_fuel_F {
		vItemSpace = 70;
		storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 50000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 35000;
		textures[] = { };
	};

	class B_Truck_01_transport_F {
		vItemSpace = 325;
		storageFee[] = { 15650, 0, 0, 0 };
		garageSell[] = { 165000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 140500;
		textures[] = { };
	};

	class O_MRAP_02_F {
		vItemSpace = 60;
		storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 115000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 95000;
		textures[] = {
				{ "Blackmatte", "reb", {"textures\rebel\blackmatte.jpg", "textures\rebel\blackmatte.jpg"} },
				{ "Camo", "reb", {"textures\rebel\reblbirdcamo1.jpg", "textures\rebel\reblbirdcamo1.jpg"} }
		};
	};


	class B_Truck_01_Repair_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = { };
	};

	class O_MRAP_02_hmg_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = { };
	};

	class O_Truck_02_medical_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = { };
	};

	class O_MBT_02_cannon_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = { };
	};

	class B_Truck_01_ammo_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = { };
	};

	class I_MRAP_03_F {
		vItemSpace = 58;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 233500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 185000;
		textures[] = { };
	};

	class C_Offroad_01_F {
		vItemSpace = 65;
		storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 22500, 22500, 22500, 22500 };
		insurance = 2500;
		chopShop = 12250;
		textures[] = {
				{ "미국 Police", "cop", {"textures\cop\police_offroad.jpg"} },
				{ "영국 Police", "cop", {"textures\cop\police_uk_offroad.jpg"} },
				{ "SWAT", "cop", {"textures\cop\swat_offroad.jpg"} },

				{ "Red", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
				} },
				{ "Yellow", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
				} },
				{ "White", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
				} },
				{ "Blue", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
				} },
				{ "Dark Red", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
				} },
				{ "Blue / White", "civ", {
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
						"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
				} },
				{ "Taxi", "civ", {
						"#(argb,8,8,3)color(0.6,0.3,0.01,1)"
				} },
				{ "Black", "civ", {
						"#(ai,64,64,1)Fresnel(1.3,7)"
				} }
		};
	};

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 7500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 7500;
		textures[] = {};
	};

	class C_Kart_01_Red_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 7500;
		textures[] = {};
	};

	class C_Kart_01_Vrana_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 7500;
		textures[] = {};
	};

	class C_Hatchback_01_sport_F {
		vItemSpace = 45;
		storageFee[] = { 2500, 1000, 1000, 1000 }; //차고저장가격
		garageSell[] = { 37000, 37000, 37000, 37000 };//되팔때가격
		insurance = 5500;
		chopShop = 25000;
		textures[] = {

				{ "Police", "cop", {"textures\cop\cop_hatchback.jpg"} },
				{ "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.jpg"} },
				{ "Asilmov", "civ", {"textures\cars\asiimov_hatchback_textures.jpg"} },
				{ "Nature", "civ", {"textures\cars\nature_hatchback.jpg"} },
				{ "EMS Red", "med", {"textures\cars\EMS_hatchback.jpg"} },

				{ "Red", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
				} },
				{ "Dark Blue", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
				} },
				{ "Orange", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
				} },
				{ "Black / White", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
				} },
				{ "Beige", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
				} },
				{ "Green", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
				} },

		};
	};

	class B_Quadbike_01_F {
		vItemSpace = 25;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 7950, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1250;
		textures[] = {
				{ "Brown", "cop", {
						"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
				} },
				{ "Digi Desert", "reb", {
						"\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
				} },
				{ "Black", "civ", {
						"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
				} },
				{ "Blue", "civ", {
						"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
				} },
				{ "Red", "civ", {
						"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
				} },
				{ "White", "civ", {
						"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
				} },
				{ "Digi Green", "civ", {
						"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
				} },
				{ "Hunter Camo", "civ", {
						"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
				} },
				{ "Rebel Camo", "reb", {
						"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
				} }
		};
	};

	class I_Truck_02_covered_F {
		vItemSpace = 250;
		storageFee[] = { 12500, 0, 0, 0 };
		garageSell[] = { 72000, 0, 0, 0 };
		insurance = 6500;
		chopShop = 60000;
		textures[] = {
				{ "Orange", "civ", {
						"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
						"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
				} },
				{ "Black", "cop", {
						"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
				} }
		};
	};

	class I_Truck_02_transport_F {
		vItemSpace = 200;
		storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 59800, 3500, 0, 0 };
		insurance = 6500;
		chopShop = 47500;
		textures[] = {
				{ "Orange", "civ", {
						"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
						"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
				} },
				{ "Black", "cop", {
						"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
				} }
		};
	};

	class C_Hatchback_01_F {
		vItemSpace = 40;
		storageFee[] = { 1000, 500, 0, 0 };
		garageSell[] = { 17500, 17500, 12500, 0 };
		insurance = 2500;
		chopShop = 10750;
		textures[] = {

				{ "Asilmov", "civ", {"textures\cars\asiimov_hatchback_textures.jpg"} },
				{ "Nature", "civ", {"textures\cars\nature_hatchback.jpg"} },
				{ "Police", "cop", {"textures\cop\cop_hatchback.jpg"} },
				{ "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.jpg"} },
				{ "EMS Red", "med", {"textures\cars\EMS_hatchback.jpg"} },


				{ "Beige", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
				} },
				{ "Green", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
				} },
				{ "Blue", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
				} },
				{ "Dark Blue", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
				} },
				{ "Yellow", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
				} },
				{ "White", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
				} },
				{ "Grey", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
				} },
				{ "Black", "civ", {
						"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
				} }
		};
	};

	class C_SUV_01_F {
		vItemSpace = 50;
		storageFee[] = { 1400, 1400, 1400, 1400 };
		garageSell[] = { 32500, 32500, 32500, 32500 };
		insurance = 2500;
		chopShop = 25000;
		textures[] = {
				{ "Sticker", "civ", {"textures\cars\sticker.jpg"} },
				{ "Hello kitty", "civ", {"textures\cars\kitty.jpg"} },
				{ "Cube", "civ", {"textures\cars\cube_suv.jpg"} },
				{ "Poly", "civ", {"textures\cars\poly_suv.jpg"} },
				{ "Dark Red", "civ", {
						"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
				} },
				{ "Police", "cop", {"textures\cop\police_suv.jpg"} },
				{ "UK Police", "cop", {"textures\cop\police_uk_suv.jpg"} },

				{ "EMS red", "med", {"textures\cars\EMS_SUV.jpg"} },
				{ "EMS white", "med", {"textures\cars\EMS_SUV_1.jpg"} }

		};
	};

	class C_Van_01_transport_F {
		vItemSpace = 100;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 42000, 42000, 42000, 42000 };
		insurance = 2500;
		chopShop = 30500;
		textures[] = {
				{ "White", "civ", {
						"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
				} },
				{ "Red", "civ", {
						"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
				} }
		};
	};

	class C_Van_01_box_F {
		vItemSpace = 150;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 45000, 45000, 45000, 0 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {
				{ "White", "civ", {
						"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
				} },
				{ "Red", "civ", {
						"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
				} }
		};
	};

	class B_MRAP_01_F {
		vItemSpace = 65;
		storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {
				{ "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"} },
				{ "Police", "cop", {"textures\cop\cop_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
				{ "Swat", "cop", {"textures\cop\swat_hunter.jpg","textures\cop\swat_hunter_2.jpg"} },
				{ "Sniper", "cop", {"textures\cop\cop_hunterSniper.jpg","textures\cop\swat_hunter_2.jpg"} }
		};
	};

	class B_Heli_Light_01_F {
		vItemSpace = 190;
		storageFee[] = { 25000, 25000, 25000, 0 };
		garageSell[] = { 251000, 251000, 251000, 0 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {
				{ "Police Black/White", "cop", {"textures\cop\police_heli.jpg", "textures\cop\police_heli2.jpg"} },
				{ "Police Yellow/Blue", "cop", {"textures\cop\police_heli3.jpg", "textures\cop\police_heli3.jpg"} },
				{ "EMS Yellow/Blue", "med", {"textures\cars\humming_ems.jpg", "textures\cars\humming_ems.jpg"} },
				{ "EMS Red", "med", {"textures\cars\EMS_LTB.jpg", "textures\cars\EMS_LTB.jpg"} },
				{ "Sheriff", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
				} },
				{ "Civ Blue", "civ", {
						"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
				} },
				{ "Civ Red", "civ", {
						"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
				} },
				{ "Blueline", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
				} },
				{ "Elliptical", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
				} },
				{ "Furious", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
				} },
				{ "Jeans Blue", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
				} },
				{ "Speedy Redline", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
				} },
				{ "Sunset", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
				} },
				{ "Vrana", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
				} },
				{ "Waves Blue", "civ", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
				} },
				{ "Rebel Digital", "reb", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
				} },
				{ "Digi Green", "reb", {
						"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
				} },
				{ "EMS White", "med", {
						"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
				} }
		};
	};

	class O_Heli_Light_02_unarmed_F {
		vItemSpace = 250;
		storageFee[] = { 55000, 40000, 22000, 0 };
		garageSell[] = { 272500, 272500, 272500, 0 };
		insurance = 2500;
		chopShop = 205000;
		textures[] = {
				{ "Black", "cop", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
				} },
				{ "White / Blue", "civ", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
				} },
				{ "Digi Green", "civ", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
				} },
				{ "Desert Digi", "reb", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
				} },
				{ "EMS White", "med", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
				} }
		};
	};

	class B_Heli_Transport_03_unarmed_F {
		vItemSpace = 350;
		storageFee[] = { 45000, 40000, 22000, 0 };
		garageSell[] = { 672500, 455000, 335000, 0 };
		insurance = 2500;
		chopShop = 455000;
		textures[] = {
				{ "Black", "cop", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
				} },
				{ "White / Blue", "civ", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
				} },
				{ "Digi Green", "civ", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
				} },
				{ "Desert Digi", "reb", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
				} },
				{ "EMS White", "med", {
						"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
				} }
		};
	};

	class I_Heli_Transport_02_F {
		vItemSpace = 375;
		storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
				{ "Ion", "civ", {
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
				} },
				{ "Dahoman", "civ", {
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
						"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
				} }
		};
	};

	class B_SDV_01_F {
		vItemSpace = 50;
		storageFee[] = { 17500, 10000, 0, 0 };
		garageSell[] = { 75000, 50000, 0, 0 };
		insurance = 2500;
		chopShop = 75000;
		textures[] = {};
	};
};
