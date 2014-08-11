#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.5;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootType[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {"SMAW","Javelin","G36C","Stinger"};
	};
	class Church: Default {
		zombieChance = 0.5;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		/*	{"ItemSodaClays","magazine",0.01},
			{"ItemSodaMzly","magazine",0.01},
			{"ItemMatchbox","weapon",0.02},
			{"ItemBookBible","magazine",0.03},
			{"WoodenArrow","magazine",0.02},
			{"FoodCanCurgon","magazine",0.01},
			{"FoodCanRusStew","magazine",0.02},
			{"FoodChipsSulahoops","magazine",0.01},
			{"equip_rag","magazine",0.02},
			{"Colt1911","weapon",0.05},
			{"MeleeBaseBallBat","weapon",0.02},
			{"ItemTrashPaperMusic","magazine",0.03},
		//multiple spawns	
			{"","Trash",0.01},
			{"","generic",0.02} */
		};
	};
	class Castle: Default {
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_Czech_Vest_Pouch","object",0.04}
		//one spawn
		/*	{"ItemMatchbox","weapon",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMap","generic",0.01},
			{"ItemCompass","weapon",0.01},
			{"ItemFlashlight","weapon",0.01},
			{"ItemSandbag","magazine",0.04},
			{"WeaponHolder_ItemHatchet","object",0.01},
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"equip_rope","magazine",0.03},
			{"PartWoodPile","magazine",0.04},
			{"DZ_Assault_Pack_EP1","object",0.04},
			{"DZ_Czech_Vest_Puch","object",0.04},
		//Multiple spawns	
			{"","Residential",0.04},
			{"","ammo",0.04},
			{"","Trash",0.01},
			{"","generic",0.04} */
		};
	};	
	class CarePackages: Default {
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		/*	{"ItemSandbag","magazine",0.04},
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"WeaponHolder_ItemDomeTent","object",0.02},
			{"equip_rope","magazine",0.03},
			{"PartWoodPile","magazine",0.04},
			{"FoodCanBakedBeans","magazine",0.05},
			{"FoodCanSardines","magazine",0.05},
			{"FoodCanFrankBeans","magazine",0.05},
			{"FoodCanPasta","magazine",0.05},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaCoke","magazine",0.05},
			{"ItemSodaPepsi","magazine",0.10},
			{"","ammo",0.10} */
		};
	};	
	class Residential: Default {
		zombieChance = 0.5;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_Assault_Pack_EP1","object",0.1},
			{"","food",1.0}
		//one spawn
		/*	{"FoodCakeCremeCakeClean","magazine",0.01},
			{"ItemSodaMtngreen","magazine",0.01},
			{"ItemMatchbox","weapon",0.01},
			{"ItemWatch","generic",0.03},
			{"ItemFlashlight","generic",0.05},
			{"Makarov","weapon",0.02},
			{"revolver_EP1","weapon",0.01},
			{"MR43","weapon",0.02},
			{"LeeEnfield","weapon",0.01},
			{"Winchester1866","weapon",0.03},
			{"Colt1911","weapon",0.05},
			{"MeleeBaseBallBat","weapon",0.02},
			{"WeaponHolder_ItemFuelcan","object",0.03},
			{"equip_herb_box","magazine",0.03},
			{"equip_pvc_box","magazine",0.03},
			{"ItemPainkiller","magazine",0.04},
			{"ItemBandage","magazine",0.06},
			{"DZ_Patrol_Pack_EP1","object",0.08},
			{"DZ_Assault_Pack_EP1","object",0.06},
			{"WeaponHolder_ItemTent","object",0.01},
			{"ItemTrashPaper","magazine",0.03},
			{"ItemTrashPaperMusic","magazine",0.03},
		//multiple spawns	
			{"","Residential",0.04},
			{"","Trash",0.01},
			{"","generic",0.02} */
		};
	};
	class Industrial: Default { //254
		zombieChance = 0.5;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","z_new_worker2","z_new_worker3","z_new_worker4"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_British_ACU","object",0.04}
		//one spawn
		/*	{"ItemKnife","weapon",0.03},
			{"ItemToolbox","weapon",0.06},
			{"ItemFlashlight","weapon",0.02},
			{"ItemSandbag","magazine",0.06},
			{"WeaponHolder_ItemCrowbar","object",0.08},
			{"WeaponHolder_ItemHatchet","object",0.05},
			{"WeaponHolder_PartGeneric","object",0.04},
			{"WeaponHolder_PartWheel","object",0.05},
			{"WeaponHolder_PartFueltank","object",0.02},
			{"WeaponHolder_PartEngine","object",0.02},
			{"WeaponHolder_PartGlass","object",0.04},
			{"WeaponHolder_ItemJerrycan","object",0.04},
			{"WeaponHolder_ItemFuelcan","object",0.03},
			{"equip_rope","magazine",0.03},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaSmasht","magazine",0.01},
			{"ItemSodaDrwaste","magazine",0.01},
			{"FoodCanPowell","magazine",0.01},
			{"FoodChipsSulahoops","magazine",0.01},
			{"equip_brick","magazine",0.01},
			{"equip_duct_tape","magazine",0.03},
			{"equip_hose","magazine",0.02},
			{"equip_nails","magazine",0.06},
			{"equip_rag","magazine",0.01},
			{"equip_scrapelectronics","magazine",0.01},
		//multiple spawns	
			{"","Trash",0.01},
			{"","ammo",0.08},
			{"","generic",0.02} */
		};
	};
	class Farm: Default {
		zombieChance = 0.5;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_CivilBackpack_EP1","object",0.04}
		//one spawn
		//tools
		/*	{"ItemMatchbox","weapon",0.05},
			{"ItemSandbag","magazine",0.04},
			{"WeaponHolder_ItemHatchet","object",0.05},
			{"huntingrifle","weapon",0.02},
			{"LeeEnfield","weapon",0.03},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.03},
			{"MR43","weapon",0.05},
			{"MeleeMachete","weapon",0.04},
			{"WeaponHolder_ItemJerrycan","object",0.03},
			{"equip_rope","magazine",0.03},
			{"equip_duct_tape","magazine",0.03},
			{"TrapBear","magazine",0.01},
			{"PartWoodPile","magazine",0.08},
			{"2Rnd_shotgun_74Pellets","magazine",0.08},
			{"5x_22_LR_17_HMR","magazine",0.01},
			{"10x_303","magazine",0.04},
			{"15Rnd_W1866_Slug","magazine",0.02},
			{"WoodenArrow","magazine",0.04},
			{"FoodCanBoneboy","magazine",0.01},
			{"equip_nails","magazine",0.06},
			{"equip_string","magazine",0.04},
		//bags
		//multiple spawns		
			{"","Trash",0.01},
			{"","generic",0.02} */
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootType[] = {
			{"DZ_Assault_Pack_EP1","object",0.1},
			{"","food",1.0}
		//one spawn
			// {"ItemWatch","generic",0.05},
			// {"ItemCompass","generic",0.01},
			// {"ItemMap","generic",0.06},
			// {"ItemFlashlight","generic",0.05},
			// {"ItemKnife","generic",0.02},
			// {"ItemMatchbox","weapon",0.05},
			// {"Binocular","weapon",0.03},
			// {"Makarov","weapon",0.02},
			// {"LeeEnfield","weapon",0.01},
			// {"revolver_EP1","weapon",0.01},
			// {"Winchester1866","weapon",0.03},
			// {"Crossbow_DZ","weapon",0.01},
			// {"MR43","weapon", 0.01},			
			// {"WeaponHolder_ItemTent","object",0.01},
			// {"WeaponHolder_ItemCamoNet","object",0.01},
			// {"equip_pvc_box","magazine",0.03},
			// {"equip_herb_box","magazine",0.03},
			// {"equip_duct_tape","magazine",0.03},
			// {"PartWoodPile","magazine",0.04},
			// {"DZ_Patrol_Pack_EP1","object",0.05}, //12
			// {"DZ_Czech_Vest_Puch","object",0.02}, // 16
			// {"DZ_TK_Assault_Pack_EP1","object",0.02}, // 16
			//med
			//{"ItemAntibiotic",0.01},
			// {"ItemPainkiller","magazine",0.03},
			// {"ItemAntibacterialWipe","magazine",0.04},
		//ammo
			// {"8Rnd_9x18_Makarov","magazine",0.05},
			//{"7Rnd_45ACP_1911",0.03}, //military/police
			// {"10x_303","magazine",0.04},
			// {"6Rnd_45ACP","magazine",0.05},
			// {"15Rnd_W1866_Slug","magazine",0.06},
			// {"WoodenArrow","magazine",0.04},
			// {"2Rnd_shotgun_74Pellets","magazine",0.08},
			// {"HandChemGreen","magazine",0.04},
			// {"HandChemBlue","magazine",0.04},
			// {"HandChemRed","magazine",0.04},
			// {"HandRoadFlare","magazine",0.05},

		//special
			// {"equip_nails","magazine",0.06},
		//multiple spawns	
			// {"","Trash",0.01}
		};
	};	
	class Office: Residential {
		maxRoaming = 3;
		lootChance = 0.6;
		zombieClass[] = {"z_suit1","z_suit2"};
		lootType[] = {
		//one spawn
			// {"ItemWatch","weapon",0.08},
			// {"ItemMap","weapon",0.06}, 
			// {"ItemAntibacterialWipe","magazine",0.04},
			// {"ItemPainkiller","magazine",0.04},
			// {"Colt1911","weapon",0.05},
			// {"MeleeBaseBallBat","weapon",0.02},
			// {"equip_duct_tape","magazine",0.03},
		//multiple spawns
			// {"","Trash",0.01},
			// {"","generic",0.08}
		};
	};
	class InfectedCamps: Default { //5
		lootPos[] = {};
		lootType[] = {
		//No Objects IMPORTANT
		//one spawn
		//drinks
		/*	{"ItemWaterbottleUnfilled","generic",0.01},
			{"ItemWaterbottle","generic",0.01},
			{"ItemWaterbottleDmg","magazine",0.03},
			{"ItemSodaCoke","generic",0.05},
			{"ItemSodaPepsi","generic",0.05},
			{"ItemSodaMtngreen","generic",0.01},
			{"ItemSodaR4z0r","generic",0.01},
			{"ItemSodaClays","generic",0.01},
			{"ItemSodaSmasht","generic",0.01},
			{"ItemSodaDrwaste","generic",0.01},
			{"ItemSodaLemonade","generic",0.01},
			{"ItemSodaLvg","generic",0.01},
			{"ItemSodaMzly","generic",0.01},
			{"ItemSodaRabbit","generic",0.01},
			//food
			{"FoodNutmix","generic",0.03},
			{"FoodCanBakedBeans","generic",0.05},
			{"FoodCanSardines","generic",0.05},
			{"FoodCanFrankBeans","generic",0.05},
			{"FoodCanPasta","generic",0.05},
			{"FoodCanBadguy","generic",0.01},
			{"FoodCanBoneboy","generic",0.01},
			{"FoodCanCorn","generic",0.01},
			{"FoodCanCurgon","generic",0.01},
			{"FoodCanDemon","generic",0.01},
			{"FoodCanFraggleos","generic",0.01},
			{"FoodCanHerpy","generic",0.01},
			{"FoodCanDerpy","generic",0.01},
			{"FoodCanOrlok","generic",0.01},
			{"FoodCanPowell","generic",0.01},
			{"FoodCanTylers","generic",0.01},
			{"FoodCanUnlabeled","generic",0.04},
			{"FoodPistachio","generic",0.03},
			{"FoodNutmix","generic",0.04},
			{"FoodChipsSulahoops","generic",0.01},
			{"FoodChipsMysticales","generic",0.01},
			{"FoodCandyAnders","generic",0.01},
			{"FoodCandyLegacys","generic",0.01},
			{"FoodCandyMintception","generic",0.01},
			{"FoodCanRusUnlabeled","generic",0.05},
			{"FoodCanRusStew","generic",0.05},
			{"FoodCanRusPork","generic",0.05},
			{"FoodCanRusPeas","generic",0.05},
			{"FoodCanRusMilk","generic",0.04},
			{"FoodCanRusCorn","generic",0.05},
			{"FoodCakeCremeCakeClean","generic",0.03},
		//tools
			{"ItemWatch","tool",0.05},
			{"ItemCompass","tool",0.05},
			{"ItemFlashlight","tool",0.06},
			{"ItemKnife","tool",0.07},
			{"ItemMatchbox","tool",0.06},
			{"Binocular","tool",0.06},
			{"ItemCrowbar","tool",0.08},
		//weapons
			{"Makarov","weapon",0.04},
			{"LeeEnfield","weapon",0.03},
			{"revolver_EP1","weapon",0.04},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.01},
			{"MR43","weapon",0.03},
			{"MeleeBaseBallBat","weapon",0.02},
		//special
			{"PartGeneric","generic",0.04},
			{"PartWheel","generic",0.02},
			{"PartFueltank","generic",0.02},
			{"PartEngine","generic",0.02},
			{"ItemFuelcan","generic",0.03},
			//{"ItemTent","generic",0.01},
			{"ItemFuelcan","generic",0.03},
		//Medical	
			{"ItemBandage","magazine",0.06},
			{"ItemPainkiller","magazine",0.04},
			{"ItemMorphine","magazine",0.04},
			{"ItemEpinephrine","magazine",0.03},
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemAntibiotic","magazine",0.01},
			{"emptyBloodBag","magazine",0.04},
			{"bloodBagOPOS","magazine",0.01},
			{"bloodBagONEG","magazine",0.01},
			{"bloodBagABPOS","magazine",0.01},
			{"bloodBagABNEG","magazine",0.01},
			{"bloodBagBPOS","magazine",0.01},
			{"bloodBagBNEG","magazine",0.01},
			{"bloodBagAPOS","magazine",0.01},
			{"bloodBagANEG","magazine",0.01},
			{"equip_gauzepackaged","magazine",0.02},
			{"equip_gauze","magazine",0.04},
			{"bloodTester","magazine",0.06},
			{"transfusionKit","magazine",0.04},
		//	{"MedBox2","generic",0.05},
		//	{"MedBox1","generic",0.05},
		//	{"FoodBox0","generic",0.05},
		//mags special
			{"equip_rope","magazine",0.03},
			{"equip_herb_box","magazine",0.03},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaMdew","magazine",0.01},
			{"PartWoodPile","magazine",0.06},
			{"Skin_Camo1_DZ","magazine",0.01},
			{"ItemBookBible","magazine",0.02},
		//bags
		//	{"DZ_ALICE_Pack_EP1","backpacks",0.01}, // 16
		//	{"DZ_TK_Assault_Pack_EP1","backpacks",0.02}, // 16
		//	{"DZ_CivilBackpack_EP1","backpacks",0.01}, // 24
		//	{"DZ_Backpack_EP1","backpacks",0.01}, // 24
		//multiple spawns
			//{"","Trash",0.10},
			//{"","generic",0.10},
			//{"","Supermarket",0.60},
		//Attachements
			{"Attachment_M9Silencer","magazine",0.05},
			{"Attachment_M4A1_Aim","magazine",0.03},
			{"Attachment_M4A1_Aim_camo","magazine",0.05},
			{"Attachment_M4A1_AIM_SD_camo","magazine",0.03},
			{"Attachment_Crossbow_CCO","magazine",0.02},
			{"Attachment_MakarovSilencer","magazine",0.05} */
		};
	};
	class HeliCrashWEST: Default {
		zombieChance = 0.5;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			// {"NVGoggles","weapon",0.01},
		//weapons
			// {"FN_FAL","weapon",0.04},
			// {"FN_FAL_ANPVS4","weapon",0.01},
			// {"Mk_48_DZ","weapon",0.03},
			// {"M249_DZ","weapon",0.04},
			// {"BAF_L85A2_RIS_Holo","weapon",0.03},
			// {"G36C","weapon",0.03},
			// {"G36C_camo","weapon",0.03},
			// {"G36_C_SD_camo","weapon",0.01},
			// {"G36A_camo","weapon",0.03},
			// {"G36K_camo","weapon",0.03},
			// {"M9SD","weapon",0.02},
			// {"M24","weapon",0.01},
		//special
			// {"MedBox2","object",0.05},
			// {"AmmoBoxSmall_556","object",0.05},
			// {"WeaponHolder_ItemCamoNet","object",0.01},
		//mags special
			// {"Skin_Camo1_DZ","magazine",0.02},
			// {"Skin_Sniper1_DZ","magazine",0.02},
		//bags
		//multiple spawns
			// {"","ammo",0.03},
			// {"","militaryWEST",0.01}
		};
	};
	class HeliCrashEAST: Default {
		zombieChance = 0.5;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			// {"Binocular","weapon",0.01},
			// {"ItemKnife","generic",0.03},
			// {"ItemCompass","generic",0.04},
		//weapons
			// {"AK_47_M","weapon",0.03}, 
			// {"AKS_74_U","weapon",0.03}, 
			// {"SVD_CAMO_DZ","weapon",0.01},
			// {"SVD_DZ","weapon",0.01},
			// {"M14_EP1","weapon",0.03},
			// {"bizon_silenced","weapon",0.04},
			// {"DMR_DZ","weapon",0.03},
			// {"RPK_74","weapon",0.02},
			// {"MakarovSD","weapon",0.02},
		//special
			// {"MedBox2","object",0.05},
			// {"AmmoBoxSmall_762","object",0.03},
			// {"WeaponHolder_PartVRotor","object",0.02},
			// {"WeaponHolder_ItemCamoNet","object",0.01},
		//mags special
			// {"100Rnd_762x54_PK","magazine",0.01},
			// {"Skin_Sniper1_DZ","magazine",0.03},
		//bags
		//multiple spawns
			// {"","ammo",0.03},
			// {"","militaryEAST",0.01}
		};
	};
	class Hospital: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_ALICE_Pack_EP1","object",0.05},
			{"MedBox2","object",0.03},
			{"MedBox1","object",0.02},
			{"ItemBandage","magazine",0.06},
			{"ItemPainkiller","magazine",0.04},
			{"ItemMorphine","magazine",0.04},
			{"ItemEpinephrine","magazine",0.03},
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemAntibiotic","magazine",0.01},
			{"emptyBloodBag","magazine",0.04},
			{"bloodBagOPOS","magazine",0.01},
			{"bloodBagONEG","magazine",0.01},
			{"bloodBagABPOS","magazine",0.01},
			{"bloodBagABNEG","magazine",0.01},
			{"bloodBagBPOS","magazine",0.01},
			{"bloodBagBNEG","magazine",0.01},
			{"bloodBagAPOS","magazine",0.01},
			{"bloodBagANEG","magazine",0.01},
			{"equip_gauzepackaged","magazine",0.02},
			{"equip_gauze","magazine",0.04},
			{"bloodTester","magazine",0.06},
			{"transfusionKit","magazine",0.04},
		//multiple spawns
			{"","Trash",0.01}
		};
	};
	class Military: Default {
		zombieChance = 0.5;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		// 1.0 rate (common) >>> 11 items
			{"AKS_74","weapon",1.0},
			{"Sa58V_EP1","weapon",1.0},
			{"M4A1","weapon",1.0},
			{"M16A2","weapon",1.0},
			{"FN_FAL","weapon",1.0},
			{"Bizon","weapon",1.0},
			{"MP5A5","weapon",1.0},
			{"M1014","weapon",1.0},
			{"Saiga12K","weapon",1.0},
			{"M9","weapon",1.0},
			{"","military",1.0},
		// 0.7 rate (uncommon) >>> 10 items
			{"SCAR_L_CQC","weapon",0.7},
			{"AKS_74_kobra","weapon",0.7},
			{"AKS_74_pso","weapon",0.7},
			{"AK_107_pso","weapon",0.7},
			{"Sa58V_RCO_EP1","weapon",0.7},
			{"M4A1_Aim_camo","weapon",0.7},
			{"M16A4","weapon",0.7},
			{"M4A3_CCO_EP1","weapon",0.7},
			{"G36a","weapon",0.7},
			{"glock17_EP1","weapon",0.7},
		// 0.4 rate (rare) >>> 9 items
			{"SCAR_H_CQC_CCO","weapon",0.4},
			{"AK_107_GL_pso","weapon",0.4},
			{"M4A1_HWS_GL_camo","weapon",0.4},
			{"M16A4_ACG_GL","weapon",0.4},
			{"M4A3_RCO_GL_EP1","weapon",0.4},
			{"M24","weapon",0.4},
			{"SVD","weapon",0.4},
			{"M4SPR","weapon",0.4},
			{"M9SD","weapon",0.4},
		// 0.1 rate (ultra rare) >>> 9 items
			{"SCAR_L_CQC_CCO_SD","weapon",0.1},
			{"AKS_74_GOSHAWK","weapon",0.1},
			{"M4A1_HWS_GL_SD_camo","weapon",0.1},
			{"M40A3","weapon",0.1},
			{"SVD_CAMO","weapon",0.1},
			{"VSS_Vintorez","weapon",0.1},
			{"UZI_EP1","weapon",0.1},
			{"M249_DZ","weapon",0.1},
			{"DZ_Backpack_EP1","object",0.1},
		// 0.08 rate (legendary) >>> 7 items
			{"SCAR_L_STD_EGLM_TWS","weapon",0.08},
			{"BAF_AS50_scoped","weapon",0.08},
			{"KSVK","weapon",0.08},
			{"UZI_SD_EP1","weapon",0.08},
			{"M240_DZ","weapon",0.08},
			{"Skin_Camo1_DZ","magazine",0.08},
			{"Skin_Sniper1_DZ","magazine",0.08},
		// 0.05 rate (holy shit) >>> 6 items
			{"SCAR_H_STD_TWS_SD","weapon",0.05},
			{"BAF_AS50_TWS","weapon",0.05},
			{"M32_EP1","weapon",0.05},
			{"M136","weapon",0.05},
			{"PipeBomb","weapon",0.05},
			{"M249_TWS_EP1_DZ","weapon",0.05}
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		// 1.0 rate (common) >>> 11 items
			{"AKS_74","weapon",1.0},
			{"Sa58V_EP1","weapon",1.0},
			{"M4A1","weapon",1.0},
			{"M16A2","weapon",1.0},
			{"FN_FAL","weapon",1.0},
			{"Bizon","weapon",1.0},
			{"MP5A5","weapon",1.0},
			{"M1014","weapon",1.0},
			{"Saiga12K","weapon",1.0},
			{"M9","weapon",1.0},
			{"","military",1.0},
		// 0.7 rate (uncommon) >>> 10 items
			{"SCAR_L_CQC","weapon",0.7},
			{"AKS_74_kobra","weapon",0.7},
			{"AKS_74_pso","weapon",0.7},
			{"AK_107_pso","weapon",0.7},
			{"Sa58V_RCO_EP1","weapon",0.7},
			{"M4A1_Aim_camo","weapon",0.7},
			{"M16A4","weapon",0.7},
			{"M4A3_CCO_EP1","weapon",0.7},
			{"G36a","weapon",0.7},
			{"glock17_EP1","weapon",0.7},
		// 0.4 rate (rare) >>> 9 items
			{"SCAR_H_CQC_CCO","weapon",0.4},
			{"AK_107_GL_pso","weapon",0.4},
			{"M4A1_HWS_GL_camo","weapon",0.4},
			{"M16A4_ACG_GL","weapon",0.4},
			{"M4A3_RCO_GL_EP1","weapon",0.4},
			{"M24","weapon",0.4},
			{"SVD","weapon",0.4},
			{"M4SPR","weapon",0.4},
			{"M9SD","weapon",0.4},
		// 0.1 rate (ultra rare) >>> 9 items
			{"SCAR_L_CQC_CCO_SD","weapon",0.1},
			{"AKS_74_GOSHAWK","weapon",0.1},
			{"M4A1_HWS_GL_SD_camo","weapon",0.1},
			{"M40A3","weapon",0.1},
			{"SVD_CAMO","weapon",0.1},
			{"VSS_Vintorez","weapon",0.1},
			{"UZI_EP1","weapon",0.1},
			{"M249_DZ","weapon",0.1},
			{"DZ_Backpack_EP1","object",0.1},
		// 0.08 rate (legendary) >>> 7 items
			{"SCAR_L_STD_EGLM_TWS","weapon",0.08},
			{"BAF_AS50_scoped","weapon",0.08},
			{"KSVK","weapon",0.08},
			{"UZI_SD_EP1","weapon",0.08},
			{"M240_DZ","weapon",0.08},
			{"Skin_Camo1_DZ","magazine",0.08},
			{"Skin_Sniper1_DZ","magazine",0.08},
		// 0.05 rate (holy shit) >>> 6 items
			{"SCAR_H_STD_TWS_SD","weapon",0.05},
			{"BAF_AS50_TWS","weapon",0.05},
			{"M32_EP1","weapon",0.05},
			{"M136","weapon",0.05},
			{"PipeBomb","weapon",0.05},
			{"M249_TWS_EP1_DZ","weapon",0.05}
		};
	};
	class Hunting: Default {
		zombieChance = 0.5;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_TK_Assault_Pack_EP1","object",0.1}
		//one spawn
		//tools
		/*	{"ItemMap","weapon",0.06},
			{"ItemFlashlight","generic",0.06},
			{"ItemKnife","generic",0.05},
			{"ItemMatchbox","generic",0.07},
			{"ItemCompass","weapon",0.02},
		//weapons
			{"Crossbow_DZ","weapon",0.02},
			{"Attachment_Crossbow_CCO","magazine",0.02},
			{"Crossbow_Stock","weapon",0.03},
			{"MeleeMachete","weapon",0.04},
			{"huntingrifle","weapon",0.05},
			{"MR43","weapon",0.08}, 			
			{"Winchester1866","weapon",0.06},		
		//special
			{"WeaponHolder_ItemDomeTent","object",0.02},
			{"ItemSandbag","magazine",0.04},
		//mags special
			{"equip_rope","magazine",0.03},
			{"TrapBear","magazine",0.01},
		//med
			{"ItemBandage","magazine",0.5},
			{"ItemHeatPack","magazine",0.02},
			{"5x_22_LR_17_HMR","magazine",0.03},
			{"15Rnd_W1866_Slug","magazine",0.06},
			{"10x_303","magazine",0.03},
			{"8Rnd_B_Beneli_74Slug","magazine",0.06},
			{"2Rnd_shotgun_74Pellets","magazine",0.08},
			{"WoodenArrow","magazine",0.10},
			{"ItemWaterbottleUnfilled","magazine",0.02},
			{"FoodCanRusUnlabeled","magazine",0.02},
			{"FoodCanRusStew","magazine",0.02},
			{"FoodCanRusPork","magazine",0.02},
			{"equip_duct_tape","magazine",0.03},
			{"FoodNutmix","magazine",0.03},
			{"DZ_British_ACU","object",0.02}, // 18
			{"equip_string","magazine",0.04},
		//multiple spawns
			{"","Trash",0.01},
			{"","ammo",0.06},
			{"","generic",0.03} */
		};
	};
#include "CfgBuildingPos.hpp"

};
