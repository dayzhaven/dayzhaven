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
			{"","generic",0.7},
			{"ItemBookBible","magazine",0.1}
		};
	};
	class Castle: Default {
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_Czech_Vest_Pouch","object",0.05},
			{"","generic",1.0},
			{"ItemMap","weapon",0.4},
			{"ItemCompass","weapon",0.4},
			{"","food",0.7},
			{"WeaponHolder_ItemDomeTent","object",0.08}
		};
	};	
	class CarePackages: Default {
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {

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
			{"","food",0.7},
			{"","generic",0.7},
			{"ItemFlashlight","generic",0.1},
			{"ItemWatch","generic",0.1},
			{"equip_herb_box","magazine",0.1},
			{"equip_pvc_box","magazine",0.1},
			{"Makarov","weapon",0.1},
			{"MeleeBaseBallBat","weapon",0.1},
			{"MR43","weapon",0.1}
		};
	};
	class Industrial: Default { //254
		zombieChance = 0.8;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","z_new_worker2","z_new_worker3","z_new_worker4"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_British_ACU","object",0.1},
			{"Colt1911","weapon",0.1},
			{"LeeEnfield","weapon",0.1},
			{"","generic",0.7},
			{"ItemToolbox","weapon",0.1},
			{"WeaponHolder_ItemCrowbar","object",0.08},
			{"WeaponHolder_PartGeneric","object",0.05},
			{"WeaponHolder_PartWheel","object",0.05},
			{"WeaponHolder_PartFueltank","object",0.05},
			{"WeaponHolder_PartEngine","object",0.05},
			{"WeaponHolder_PartGlass","object",0.05},
			{"WeaponHolder_ItemJerrycan","object",0.05},
			{"WeaponHolder_ItemFuelcan","object",0.01},
			{"ItemWire","magazine",0.05},
			{"ItemTankTrap","magazine",0.05},
			{"","ammo",1.0},
			{"equip_brick","magazine",0.01},
			{"equip_duct_tape","magazine",0.05},
			{"equip_hose","magazine",0.05},
			{"equip_nails","magazine",0.05},
			{"equip_rag","magazine",0.05},
			{"equip_scrapelectronics","magazine",0.05}
		};
	};
	class Farm: Default {
		zombieChance = 0.6;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"DZ_CivilBackpack_EP1","object",0.1},
			{"revolver_EP1","weapon",0.1},
			{"Winchester1866","weapon",0.1},
			{"WeaponHolder_ItemHatchet","object",0.1},
			{"","generic",1.0},
			{"PartWoodPile","magazine",0.1},
			{"ItemKnife","generic",0.1},
			{"ItemMatchbox","weapon",0.1},
			{"equip_nails","magazine",0.08},
			{"equip_string","magazine",0.08},
			{"equip_rope","magazine",0.08}
		};
	};
	class Supermarket: Default {
		lootChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootType[] = {
			{"DZ_Assault_Pack_EP1","object",0.08},
			{"WeaponHolder_ItemTent","object",0.08},
			{"","food",1.0},
			{"","generic",0.05},
			{"equip_pvc_box","magazine",0.05},
			{"equip_herb_box","magazine",0.05},
			{"equip_duct_tape","magazine",0.05},
			{"PartWoodPile","magazine",0.05},
			{"ItemWatch","generic",0.05},
			{"ItemCompass","generic",0.05},
			{"ItemMap","generic",0.05},
			{"ItemFlashlight","generic",0.05},
			{"ItemKnife","generic",0.05},
			{"ItemMatchbox","weapon",0.05},
			{"Binocular","weapon",0.05}
		};
	};	
	class Office: Residential {
		maxRoaming = 3;
		lootChance = 0.6;
		zombieClass[] = {"z_suit1","z_suit2"};
		lootType[] = {
			{"DZ_Assault_Pack_EP1","object",0.1},
			{"","food",0.7},
			{"","generic",0.7},
			{"ItemFlashlight","generic",0.1},
			{"ItemWatch","generic",0.1},
			{"equip_herb_box","magazine",0.1},
			{"equip_pvc_box","magazine",0.1},
			{"Makarov","weapon",0.1},
			{"MeleeBaseBallBat","weapon",0.1},
			{"MR43","weapon",0.1}
		};
	};
	class InfectedCamps: Default { //5
		lootPos[] = {};
		lootType[] = {
		/*
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

		};
	};
	class HeliCrashEAST: Default {
		zombieChance = 0.5;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		
		};
	};
	class Hospital: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 0.8;
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
			{"transfusionKit","magazine",0.04}
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
		// 0.08 rate (legendary) >>> 8 items
			{"SCAR_L_STD_EGLM_TWS","weapon",0.08},
			{"BAF_AS50_scoped","weapon",0.08},
			{"KSVK","weapon",0.08},
			{"UZI_SD_EP1","weapon",0.08},
			{"M240_DZ","weapon",0.08},
			{"Skin_Camo1_DZ","magazine",0.08},
			{"Skin_Sniper1_DZ","magazine",0.08},
			{"ItemSandbag","magazine",0.08},
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
			{"ItemSandbag","magazine",0.08},
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
			{"DZ_TK_Assault_Pack_EP1","object",0.1},
			{"huntingrifle","weapon",1.0},
			{"Crossbow_DZ","weapon",0.4},
			{"Attachment_Crossbow_CCO","magazine",0.4},
			{"Crossbow_Stock","weapon",0.4},
			{"MeleeMachete","weapon",1.0},
			{"TrapBear","magazine",0.1},
			{"","generic",0.7},
			{"WeaponHolder_ItemCamoNet","object",0.1}
		};
	};
#include "CfgBuildingPos.hpp"

};
