class CfgLoot {
	#include "BuildingLoot\Residential.hpp"
	#include "BuildingLoot\militaryEAST.hpp"
	#include "BuildingLoot\militaryWEST.hpp"
	#include "BuildingLoot\Supermarket.hpp"
	#include "CfgBuildingTrashLoot.hpp"
	ammo[] = {
		// 1.0 rate (common) >>> 11 items
		{"30Rnd_545x39_AK",1.0},
		{"30Rnd_762x39_SA58",1.0},
		{"30Rnd_556x45_Stanag",1.0},
		{"20Rnd_762x51_FNFAL",1.0},
		{"64Rnd_9x19_SD_Bizon",1.0},
		{"30Rnd_9x19_MP5",1.0},
		{"8Rnd_B_Beneli_74Slug",1.0},
		{"8Rnd_B_Saiga12_74Slug",1.0},
		{"15Rnd_9x19_M9",1.0},
		// 0.4 rate (common) >>> 11 items
		{"17Rnd_9x19_glock17",0.4},
		{"30Rnd_556x45_StanagSD",0.4},
		{"5Rnd_762x51_M24",0.4},
		{"10Rnd_762x54_SVD",0.4},
		{"15Rnd_9x19_M9SD",0.4},
		{"1Rnd_HE_M203",0.4},
		{"FlareWhite_M203",0.4},
		{"1Rnd_Smoke_M203",0.4},
		{"SmokeShell",0.4},
		// 0.1 rate (common) >>> 11 items
		{"10Rnd_9x39_SP5_VSS",0.1},
		{"30Rnd_9x19_UZI",0.1},
		{"200Rnd_556x45_M249",0.1},
		{"5Rnd_127x99_AS50",0.1},
		{"5Rnd_127x108_KSVK",0.1},
		{"30Rnd_9x19_UZI_SD",0.1},
		{"100Rnd_762x51_M240",0.1},
		// 0.05 rate (common) >>> 11 items
		{"20rnd_762x51_SB_SCAR",0.05},
		{"6Rnd_HE_M203",0.05},
		{"HandGrenade_west",0.05},
		{"M136",0.05}
	};
	//Zed Loot
	policeman[] = {
		{"ItemBandage",0.10},
		{"7Rnd_45ACP_1911",0.03},
		{"6Rnd_45ACP",0.03},
		{"15Rnd_W1866_Slug",0.03},
		{"8Rnd_B_Beneli_74Slug",0.03},
		{"HandRoadFlare",0.05},
		{"ItemWaterbottleUnfilled",0.01}
	};
	civilian[] = {
		{"ItemBandage",0.06},
		{"ItemPainkiller",0.03},
		{"8Rnd_9x18_Makarov",0.04},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"ItemSodaCoke",0.02},
		{"ItemSodaPepsi",0.02},
		{"FoodCanBakedBeans",0.03},
		{"FoodCanPasta",0.03}
	};
	viralloot[] = {
		{"ItemBandage",0.02},
		{"8Rnd_9x18_Makarov",0.04},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"ItemSodaPepsi",0.04},
		{"FoodCanFrankBeans",0.05},
		{"FoodCanPasta",0.05},
		{"FoodCanSardines",0.05}
	};
	food[] = {
		// drinks >>> 13 items
		{"ItemWaterbottleUnfilled",0.2},
		{"ItemWaterbottle",0.2},
		{"ItemSodaCoke",1.0},
		{"ItemSodaPepsi",1.0},
		{"ItemSodaMtngreen",1.0},
		{"ItemSodaR4z0r",1.0},
		{"ItemSodaClays",1.0},
		{"ItemSodaSmasht",1.0},
		{"ItemSodaDrwaste",1.0},
		{"ItemSodaLemonade",1.0},
		{"ItemSodaLvg",1.0},
		{"ItemSodaMzly",1.0},
		{"ItemSodaRabbit",1.0},
		// food >>> 31 items
		{"FoodNutmix",0.2},
		{"FoodCanBakedBeans",0.2},
		{"FoodCanSardines",0.2},
		{"FoodCanFrankBeans",0.2},
		{"FoodCanPasta",0.2},
		{"FoodCanBadguy",0.2},
		{"FoodCanBoneboy",0.2},
		{"FoodCanCorn",0.2},
		{"FoodCanCurgon",0.2},
		{"FoodCanDemon",0.2},
		{"FoodCanFraggleos",0.2},
		{"FoodCanHerpy",0.2},
		{"FoodCanDerpy",0.2},
		{"FoodCanOrlok",0.2},
		{"FoodCanPowell",0.2},
		{"FoodCanTylers",0.2},
		{"FoodCanUnlabeled",0.2},
		{"FoodPistachio",0.2},
		{"FoodNutmix",0.2},
		{"FoodChipsSulahoops",0.2},
		{"FoodChipsMysticales",0.2},
		{"FoodCandyAnders",0.2},
		{"FoodCandyLegacys",0.2},
		{"FoodCandyMintception",0.2},
		{"FoodCanRusUnlabeled",0.2},
		{"FoodCanRusStew",0.2},
		{"FoodCanRusPork",0.2},
		{"FoodCanRusPeas",0.2},
		{"FoodCanRusMilk",0.2},
		{"FoodCanRusCorn",0.2},
		{"FoodCakeCremeCakeClean",0.2}
	};
	generic[] = {
		{"ItemBandage",0.03},
		{"ItemTrashPaper",0.03},
		{"ItemTrashPaperMusic",0.03},
		{"ItemAntibacterialWipe",0.03},
		{"ItemHeatPack",0.04},
		{"8Rnd_9x18_Makarov",0.09},
		{"6Rnd_45ACP",0.04},
		{"2Rnd_shotgun_74Pellets",0.08},
		{"5x_22_LR_17_HMR",0.01},
		{"10x_303",0.04},
		{"15Rnd_W1866_Slug",0.06},
		{"WoodenArrow",0.04},
		{"HandRoadFlare",0.10},
		{"ItemPainkiller",0.02},
		{"HandChemGreen",0.01},
		{"HandChemBlue",0.07},
		{"HandChemRed",0.05},
		{"ItemWaterbottleUnfilled",0.01},
		{"ItemWaterbottle",0.01},
		{"ItemSodaCoke",0.05},
		{"ItemSodaPepsi",0.05},	
		{"ItemSodaLemonade",0.05},
		{"FoodCanBakedBeans",0.05},
		{"FoodCanSardines",0.05},
		{"FoodCanFrankBeans",0.05},
		{"FoodCanPasta",0.05},
		{"FoodCanUnlabeled",0.04},
		{"FoodCanRusUnlabeled",0.05},
		{"FoodCanRusStew",0.05},
		{"FoodCanRusPork",0.05},
		{"FoodCanRusPeas",0.05},
		{"FoodCanRusMilk",0.04},
		{"FoodCanRusCorn",0.05},
		{"FoodPistachio",0.03},
		{"FoodNutmix",0.04},
		{"ItemCards",0.02}
	};
	medical[] = {
		{"ItemBandage",0.08},
		{"ItemPainkiller",0.05},
		{"ItemMorphine",0.05},
		{"ItemEpinephrine",0.03},
		{"ItemAntibiotic",0.01},
		{"bloodTester",0.05},
		{"transfusionKit",0.03},
		{"ItemAntibacterialWipe",0.04},
		{"ItemHeatPack",0.03}
	};
	military[] = {
		// 1.0 rate (common) >>> 11 items
		{"30Rnd_545x39_AK",1.0},
		{"30Rnd_762x39_SA58",1.0},
		{"30Rnd_556x45_Stanag",1.0},
		{"20Rnd_762x51_FNFAL",1.0},
		{"64Rnd_9x19_SD_Bizon",1.0},
		{"30Rnd_9x19_MP5",1.0},
		{"8Rnd_B_Beneli_74Slug",1.0},
		{"8Rnd_B_Saiga12_74Slug",1.0},
		{"15Rnd_9x19_M9",1.0},
		// 0.4 rate (common) >>> 11 items
		{"17Rnd_9x19_glock17",0.4},
		{"30Rnd_556x45_StanagSD",0.4},
		{"5Rnd_762x51_M24",0.4},
		{"10Rnd_762x54_SVD",0.4},
		{"15Rnd_9x19_M9SD",0.4},
		{"1Rnd_HE_M203",0.4},
		{"FlareWhite_M203",0.4},
		{"1Rnd_Smoke_M203",0.4},
		{"SmokeShell",0.4},
		// 0.1 rate (common) >>> 11 items
		{"10Rnd_9x39_SP5_VSS",0.1},
		{"30Rnd_9x19_UZI",0.1},
		{"200Rnd_556x45_M249",0.1},
		{"5Rnd_127x99_AS50",0.1},
		{"5Rnd_127x108_KSVK",0.1},
		{"30Rnd_9x19_UZI_SD",0.1},
		{"100Rnd_762x51_M240",0.1},
		// 0.05 rate (common) >>> 11 items
		{"20rnd_762x51_SB_SCAR",0.05},
		{"6Rnd_HE_M203",0.05},
		{"HandGrenade_west",0.05},
		{"M136",0.05}
		
		// {"ItemBandage",0.04},
		// {"ItemPainkiller",0.02},
		// {"ItemMorphine",0.01},
		// {"ItemHeatPack",0.04},
		// {"7Rnd_45ACP_1911",0.04},
		// {"30Rnd_556x45_Stanag",0.02},
		// {"75Rnd_545x39_RPK",0.02},
		// {"20Rnd_762x51_DMR",0.02},
		// {"20Rnd_762x51_FNFAL",0.04},
		// {"17Rnd_9x19_glock17",0.05},
		// {"15Rnd_9x19_M9SD",0.01},
		// {"8Rnd_9x18_MakarovSD",0.01},
		// {"15Rnd_9x19_M9",0.03},
		// {"30Rnd_762x39_AK47",0.02},
		// {"30Rnd_545x39_AK",0.02},
		// {"5Rnd_762x51_M24",0.01},
		// {"8Rnd_B_Beneli_74Slug",0.04},
		// {"1Rnd_HE_M203",0.01},
		// {"FlareWhite_M203",0.02},
		// {"FlareGreen_M203",0.02},
		// {"1Rnd_Smoke_M203",0.01},		
		// {"200Rnd_556x45_M249",0.01},
		// {"HandGrenade_west",0.01},
		// {"HandGrenade_east",0.01},
		// {"SmokeShell",0.04},
		// {"SmokeShellRed",0.04},
		// {"SmokeShellGreen",0.04},
		// {"8Rnd_B_Beneli_Pellets",0.04},
		// {"30Rnd_556x45_StanagSD",0.01},
		// {"30Rnd_9x19_MP5",0.02},
		// {"30Rnd_9x19_MP5SD",0.01},
		// {"100Rnd_762x51_M240",0.01},
		// {"HandChemGreen",0.04},
		// {"HandChemBlue",0.04},
		// {"HandChemRed",0.04},
		// {"ItemSodaEmpty",0.06},
		// {"ItemSodaCoke",0.04},
		// {"ItemSodaPepsi",0.04},
		// {"FoodCanBakedBeans",0.05},
		// {"FoodCanSardines",0.05},
		// {"FoodCanFrankBeans",0.05},
		// {"FoodCanPasta",0.05},
		// {"FoodCanUnlabeled",0.04},
		// {"FoodPistachio",0.03},
		// {"FoodNutmix",0.04},
		// {"FoodCanRusUnlabeled",0.05},
		// {"FoodCanRusStew",0.05},
		// {"FoodCanRusPork",0.05},
		// {"FoodCanRusPeas",0.05},
		// {"FoodCanRusMilk",0.04},
		// {"FoodCanRusCorn",0.05},
		// {"FoodMRE",0.03},
		// {"ItemTrashToiletpaper",0.01},
		// {"ItemTrashRazor",0.01},
		// {"ItemCards",0.02}
	};
};

  //{"ItemSodaSmasht",0.01}, //4 this supermarket, residential, industrail
  //{"FoodCanPowell",0.01}, //4 this, indy, res, super
  //{"FoodChipsSulahoops",0.01}, //4 this, indy, super, church
  
  //{"ItemSodaClays",0.01}, //3 this, supermarket, chruch
  //{"ItemSodaDrwaste",0.01}, //3 supermarket, industrail
  //{"ItemSodaLemonade",0.01},  //3 supermarket, farm, this
  //{"ItemSodaMzly",0.01},  //3 res ,super, church
  //{"FoodCanCurgon",0.01}, //3 this, super, church
  //{"FoodCanDemon",0.01}, //3 this, res,super
  //{"FoodCanFraggleos",0.01}, //3 this, res, super.
  //{"FoodCanDerpy",0.01}, //3 this, res, super
  //{"FoodCanOrlok",0.01}, //3 this, res, super
  //{"FoodCanTylers",0.01}, //3 this, res, super
  //{"FoodCanHerpy",0.001}, //3 this, res, super.
  
  //{"ItemSodaR4z0r",0.01}, //2 this, supermarket
  //{"ItemSodaLvg",0.01}, //2 this, supermarket
  //{"ItemSodaRabbit",0.01}, //2 super, this
  //{"FoodCanBadguy",0.01}, //2 this, super
  //{"FoodCanBoneboy",0.01}, //2 this supper
  //{"FoodCanCorn",0.01}, //2 this super
  //{"FoodChipsMysticales",0.01}, //2 this, super
  //{"FoodCandyAnders",0.01}, //2 this, super
  //{"FoodCandyLegacys",0.01}, //2 this, super
  //{"FoodCandyMintception",0.01}, //2 this, super