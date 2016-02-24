/*
 *    Format:
 *        level: ARRAY (This is for limiting items to certain things)
 *            0: Variable to read from
 *            1: Variable Value Type (SCALAR / BOOL / EQUAL)
 *            2: What to compare to (-1 = Check Disabled)
 *            3: Custom exit message (Optional)
 *
 *    items: { Classname, Itemname, BuyPrice, SellPrice }
 *
 *    Itemname only needs to be filled if you want to rename the original object name.
 *
 *    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
 *    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
 *
 */
class WeaponShops {
	//Armory Shops
	class gun {
		name = "빌리조의 총가게";
		side = "civ";
		license = "gun";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "hgun_Rook40_F", "", 36500, 5500 },
				{ "hgun_Pistol_heavy_02_F", "", 49850, 6000 },
				{ "hgun_ACPC2_F", "", 65500, 10000 },
				{ "hgun_PDW2000_F", "", 75000, 20000 },
				{ "optic_ACO_grn_smg", "", 2500, 250 }
		};
		mags[] = {
				{ "16Rnd_9x21_Mag", "", 250 },
				{ "6Rnd_45ACP_Cylinder", "", 500 },
				{ "9Rnd_45ACP_Mag", "", 450 },
				{ "30Rnd_9x21_Mag", "", 750 }
		};
	};

	class rebel {
		name = "모함마드지하디의 가게";
		side = "civ";
		license = "rebel";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "arifle_TRG20_F", "", 95000, 35000 },
				{ "arifle_Katiba_F", "", 115000, 45000 },
				{ "srifle_DMR_01_F", "", 120000, 47000},
				{ "arifle_SDAR_F", "", 130000, 64500 },
				{ "arifle_MXC_SOS_point_snds_F", "", 170000, 107500 },
				{ "launch_RPG32_F", "", 280000, 140500 },
				{ "optic_ACO_grn", "", 3500, 1350 },
				{ "optic_Holosight", "", 3600, 1275 },
				{ "optic_Hamr", "", 7500, 2500 },
				{ "acc_flashlight", "", 1000, 100 }
		};
		mags[] = {
				{ "30Rnd_556x45_Stanag", "", 3000 },
				{ "30Rnd_65x39_caseless_green", "", 2750 },
				{ "10Rnd_762x54_Mag", "", 5000 },
				{ "20Rnd_556x45_UW_mag", "", 1250 },
				{ "30Rnd_65x39_caseless_mag", "", 2000 },

				{ "RPG32_F", "", 4500 },
				{ "RPG32_HE_F", "", 4500 }

		};
	};

	class gang {
		name = "Hideout Armament";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "hgun_Rook40_F", "", 11500, 5000 },
				{ "hgun_Pistol_heavy_02_F", "", 22500, 10000 },
				{ "hgun_ACPC2_F", "", 34500, 15000 },
				{ "hgun_PDW2000_F", "", 59500, 30000 },
				{ "optic_ACO_grn_smg", "", 950, 250 }
		};
		mags[] = {
				{ "16Rnd_9x21_Mag", "", 250 },
				{ "6Rnd_45ACP_Cylinder", "", 500 },
				{ "9Rnd_45ACP_Mag", "", 450 },
				{ "30Rnd_9x21_Mag", "", 750 }
		};
	};

	//Basic Shops
	class genstore {
		name = "알티스 기본 상점";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "Binocular", "", 150, -1 },
				{ "ItemGPS", "", 100, 45 },
				{ "ItemMap", "", 50, 35 },
				{ "ItemCompass", "", 50, 25 },
				{ "ItemWatch", "", 50, -1 },
				{ "ItemRadio", "", 2500, 25 },
				{ "Binocular", "", 50, -1 },
				{ "ToolKit", "", 250, 75 },
				{ "FirstAidKit", "", 150, 65 },
				{ "NVGoggles", "", 2000, 980 },
				{ "Chemlight_red", "", 300, -1 },
				{ "Chemlight_yellow", "", 300, 50 },
				{ "Chemlight_green", "", 300, 50 },
				{ "Chemlight_blue", "", 300, 50 }
		};
		mags[] = {};
	};

	class f_station_store {
		name = "알티스주유소 편의점";
		side = "";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "Binocular", "", 750, -1 },
				{ "ItemGPS", "", 500, 45 },
				{ "ItemMap", "", 250, 35 },
				{ "ItemRadio", "", 2500, 25 },
				{ "Binocular", "", 50, -1 },
				{ "ItemCompass", "", 250, 25 },
				{ "ItemWatch", "", 250, -1 },
				{ "ToolKit", "", 1250, 75 },
				{ "FirstAidKit", "", 750, 65 },
				{ "NVGoggles", "", 10000, 980 },
				{ "Chemlight_red", "", 1500, -1 },
				{ "Chemlight_yellow", "", 1500, 50 },
				{ "Chemlight_green", "", 1500, 50 },
				{ "Chemlight_blue", "", 1500, 50 }
		};
		mags[] = {};
	};

	//Cop Shops
	class cop_basic {
		name = "경찰1렙무기";
		side = "cop";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "arifle_sdar_F", "Sdar Taser Rifle", 40000, 30000 },
				{ "hgun_P07_F", "Pistol", 20000, 10000 },
				{ "hgun_Pistol_heavy_01_MRD_F", "Heavy Pistol", 20000, 10000 },
				{ "arifle_Katiba_F", "", 120000, 110000 },

				{ "ItemRadio", "", 3000, 980 },
				{ "HandGrenade_Stone", "Flashbang", 1700, 1000 },
				{ "Binocular", "", 150, -1 },
				{ "MineDetector", "", 1000, 500 },
				{ "ItemGPS", "", 100, 45 },
				{ "muzzle_snds_L", "", 650, 50 },
				{ "ToolKit", "", 250, 75 },
				{ "FirstAidKit", "", 150, 65 },
				{ "Medikit", "", 1000, 450 },
				{ "NVGoggles", "", 2000, 980 },
				{ "Laserdesignator", "", 3000, 980 },

				{ "optic_MRD", "", 1000, 45 },
				{ "optic_Yorris", "", 2000, 980 },
				{ "optic_NVS", "", 3000, 980 }

		};
		mags[] = {
				{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
				{ "30Rnd_556x45_Stanag", "WATER Rifle Magazine", 45 },
				{ "30Rnd_556x45_Stanag_Tracer_Red", "RED Rifle Magazine", 45 },
				{ "30Rnd_65x39_caseless_green", "", 45 },

				{ "16Rnd_9x21_Mag", "", 25 },
				{ "30Rnd_9x21_Mag", "", 25 },
				{ "11Rnd_45ACP_Mag", "", 25 },
				{ "Laserbatteries", "", 45 }
		};
	};

	class cop_patrol {
		name = "경찰무기(살상)";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 1, "1렙이상되셔야합니다" };
		items[] = {
				{ "hgun_Pistol_heavy_02_Yorris_F", "Yorris간지권총", 30000, 15000 },
				{ "arifle_MX_F", "", 135000, 7500 },
				{ "SMG_02_ACO_F", "", 130000, 7500 },
				{ "arifle_Mk20C_F", "", 230000, 7500 },
				{ "SMG_01_F", "", 60000, 5000 },
				{ "arifle_MX_SW_Hamr_pointer_F", "", 130000, 5000 },
				{ "LMG_Mk200_F", "", 130000, 5000 },

				{ "acc_flashlight", "", 750, 100 },
				{ "optic_ACO_grn_smg", "", 2500, 1000 },
				{ "optic_Holosight", "", 1200, 275 },
				{ "optic_Nightstalker", "", 2500, 1000 },
				{ "optic_Arco", "", 2500, 1000 },
				{ "optic_MRCO", "", 2500, 1000 },
				{ "muzzle_snds_H", "", 2750, 1000 },
				{ "muzzle_snds_L", "", 2750, 1000 },
				{ "muzzle_snds_M", "", 2750, 1000 },
				{ "muzzle_snds_B", "", 2750, 1000 },
				{ "Rangefinder", "", 2750, 1000 }
		};
		mags[] = {
				{ "6Rnd_45ACP_Cylinder", "", 45 },
				{ "30Rnd_65x39_caseless_mag", "", 130 },
				{ "30Rnd_9x21_Mag", "", 250 },
				{ "30Rnd_556x45_Stanag", "", 60 },
				{ "30Rnd_45ACP_Mag_SMG_01", "", 100, -1 },
				{ "100Rnd_65x39_caseless_mag", "", 450 },
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100, -1 },
				{ "200Rnd_65x39_cased_Box", "", 100, -1 }
		};
	};

	class cop_sergeant {
		name = "살상용 경찰무기(3렙이상)";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 3, "딱지많이끊어서 3렙되셔야만살수있음!!" };
		items[] = {
				{ "srifle_EBR_DMS_pointer_snds_F", "", 300000, 225000 },
				{ "srifle_LRR_LRPS_F", "", 300000, 215000 },
				{ "srifle_DMR_01_SOS_F", "", 300000, 215000 },
				{ "srifle_GM6_F", "", 300000, 215000 },
				{ "launch_Titan_F", "", 300000, 250000 },
				{ "launch_B_Titan_short_F", "", 400000, 350000 },

				{ "optic_SOS", "", 2500, 1000 },
				{ "optic_DMS", "", 30000, 5000 },
				{ "optic_LRPS", "", 2500, 1000 },
				{ "optic_Hamr", "", 2500, 1000 },
				{ "acc_pointer_IR", "", 30000, 5000 }

		};
		mags[] = {
				{ "20Rnd_762x51_Mag", "", 60 },
				{ "7Rnd_408_Mag", "", 450 },
				{ "10Rnd_762x51_Mag", "", 450 },
				{ "5Rnd_127x108_Mag", "", 450 },
				{ "Titan_AA", "", 12450 },
				{ "Titan_AT", "", 12450 },
				{ "Titan_AP", "", 13450 }

		};
	};

	//Medic Shops
	class med_basic {
		name = "메딕상점";
		side = "med";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
				{ "ItemGPS", "", 100, 45 },
				{ "Binocular", "", 150, -1 },
				{ "ToolKit", "", 250, 75 },
				{ "FirstAidKit", "", 150, 65 },
				{ "Medikit", "", 500, 450 },
				{ "NVGoggles", "", 1200, 980 },
				{ "hgun_P07_F", "Pistol", 57500, 21500 },
				{ "ItemMap", "", 250, 35 },
				{ "ItemRadio", "", 2500, 25 },
				{ "ItemCompass", "", 250, 25 },
				{ "ItemWatch", "", 250, -1 },
				{ "NVGoggles", "", 10000, 980 },
				{ "Chemlight_red", "", 1500, -1 },
				{ "Chemlight_yellow", "", 1500, 50 },
				{ "Chemlight_green", "", 1500, 50 },
				{ "Chemlight_blue", "", 1500, 50 }
		};
		mags[] = {
				{ "16Rnd_9x21_Mag", "", 55 }
		};
	};
};
