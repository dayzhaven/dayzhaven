class ItemWaterbottleUnfilled : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_13;
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_13;
	
	class ItemActions {
		class Fill {
			text = $STR_ACTIONS_FILL_W;
			script = "spawn player_fillWater;";
		};
	};
};
 class ItemWaterbottleDmg : ItemSodaEmpty {
	displayName = "Broken Water Bottle";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	descriptionShort = "Broken Water Bottle, Can no longer be used for fluids";
	class ItemActions {
		class Fill {
			text = "Fix Bottle";
			script = "spawn player_fixBottle;";
		};
	};
 };
class ItemSodaCokeEmpty : ItemSodaEmpty{
	model = "\dayz_equip\models\soda_coke_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};
};
class ItemSodaPepsiEmpty : ItemSodaEmpty{
	model = "\dayz_equip\models\soda_pepsi_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaMdewEmpty : ItemSodaEmpty{
	model = "\dayz_equip\models\soda_mdew_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaMtngreenEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaR4z0rEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaClaysEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_clays_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaSmashtEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_smasht_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};

class ItemSodaDrwasteEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
/*
class ItemSodaFrankaEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_franka_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
	//ammo = "SodaCanMtngreen";
};
*/
class ItemSodaLemonadeEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
/*
class ItemSodaLirikEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_lirik_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
};
*/
class ItemSodaLvgEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_lvg_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaMzlyEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_mzly_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
/*
class ItemSodaPeppsyEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
};
*/
class ItemSodaRabbitEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
/*
class ItemSodaSacriteEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
};
*/
class ItemSodaRocketFuelEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_rocket_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rocket_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};
class ItemSodaGrapeDrinkEmpty : ItemSodaEmpty{
	model = "z\addons\dayz_communityassets\models\soda_grape_clean_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_soda_grape_clean_empty_ca.paa";
	class ItemActions {
		class Drink {
			text = "Drink";
			script = "spawn player_drinkWater;";
		};
	};	
};