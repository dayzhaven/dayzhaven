class Makarov: Pistol {
	displayname = $STR_EQUIP_NAME_Makarov_PM;
	descriptionshort = $STR_EQUIP_DESC_Makarov_PM;
	access = 3;
	afmax = 0;
	aidispersioncoefx = 1;
	aidispersioncoefy = 1;
	airateoffire = 0.5;
	airateoffiredistance = 50;
	ammo = "";
	artillerycharge = 1;
	artillerydispersion = 1;
	autoaimenabled = 1;
	autofire = 0;
	autoreload = 0;
	backgroundreload = 0;
	ballisticscomputer = 0;
	begin1[] = {"ca\sounds\weapons\pistols\makarov_single1", 0.794328, 1, 700};
	bullet1[] = {"ca\sounds\weapons\shells\pistols_shell_metal_04", 0.177828, 1, 30};
	bullet10[] = {"ca\sounds\weapons\shells\pistols_shell_soft_02", 0.177828, 1, 25};
	bullet11[] = {"ca\sounds\weapons\shells\pistols_shell_soft_03", 0.177828, 1, 25};
	bullet12[] = {"ca\sounds\weapons\shells\pistols_shell_soft_04", 0.177828, 1, 25};
	bullet2[] = {"ca\sounds\weapons\shells\pistols_shell_metal_03", 0.177828, 1, 30};
	bullet3[] = {"ca\sounds\weapons\shells\pistols_shell_metal_02", 0.177828, 1, 30};
	bullet4[] = {"ca\sounds\weapons\shells\pistols_shell_metal_01", 0.177828, 1, 30};
	bullet5[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_01", 0.316228, 1, 25};
	bullet6[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_02", 0.316228, 1, 25};
	bullet7[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_03", 0.316228, 1, 25};
	bullet8[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_04", 0.316228, 1, 25};
	bullet9[] = {"ca\sounds\weapons\shells\pistols_shell_soft_01", 0.177828, 1, 25};
	burst = 1;
	candrop = 1;
	canlock = 0;
	cartridgepos = "nabojnicestart";
	cartridgevel = "nabojniceend";
	cmimmunity = 1;
	count = 0;
	cursor = "PistolCursor";
	cursoraim = "foresight";
	cursoraimon = "";
	cursorsize = 1;
	dexterity = 2;
	dispersion = 0.02;
	distancezoommax = 50;
	distancezoommin = 50;
	drysound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.0001, 1, 20};
	emptysound[] = {"", 1, 1};
	enableattack = 1;
	ffcount = 1;
	fffrequency = 1;
	ffmagnitude = 0;
	firelightduration = 0.05;
	firelightintensity = 0.012;
	firespreadangle = "1.25f";
	forceoptics = 0;
	handanim[] = {};
	htmax = 300;
	htmin = 1;
	initspeed = 0;
	irdistance = 0;
	irlaserend = "laser dir";
	irlaserpos = "laser pos";
	laser = 0;
	lockedtargetsound[] = {"\ca\Tracked\Data\Sound\alarm_loop1", 0.000316228, 6};
	lockingtargetsound[] = {"\ca\Tracked\Data\Sound\alarm_loop1", 0.000316228, 2};
	magazinereloadtime = 2;
	magazines[] = {"8Rnd_9x18_Makarov"};
	maxrange = 50;
	maxrangeprobab = 0.04;
	memorypointcamera = "eye";
	mfact = 1;
	mfmax = 0;
	midrange = 30;
	midrangeprobab = 0.3;
	minrange = 0;
	minrangeprobab = 0.1;
	model = "ca\weapons_E\makarov\makarov";
	modelmagazine = "";
	modeloptics = "-";
	modelspecial = "";
	modes[] = {"this"};
	multiplier = 1;
	muzzleend = "konec hlavne";
	muzzlepos = "usti hlavne";
	muzzles[] = {"this"};
	namesound = "Pistol";
	optics = 1;
	opticsdisableperipherialvision = 0.67;
	opticsflare = 0;
	opticsid = 0;
	opticsppeffects[] = {};
	opticszoominit = 0.5;
	opticszoommax = 1.1;
	opticszoommin = 0.25;
	picture = "\CA\weapons\data\equip\w_makarov_ca.paa";
	primary = 10;
	recoil = "recoil_single_pistol_2outof3";
	recoilprone = "recoil_single_pistol_prone_2outof3";
	reloadaction = "";
	reloadmagazinesound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.0316228, 1, 20};
	reloadsound[] = {"", 1, 1};
	reloadtime = 0.1;
	scope = 2;
	selectionfireanim = "zasleh";
	showaimcursorinternal = 1;
	showempty = 1;
	showswitchaction = 0;
	showtoplayer = 1;
	simulation = "Weapon";
	sound[] = {"", 1, 1};
	soundbegin[] = {"begin1", 1};
	soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	soundburst = 1;
	soundcontinuous = 0;
	soundend[] = {"sound", 1};
	soundloop[] = {"sound", 1};
	tbody = 100;
	type = 2;
	uipicture = "";
	useaction = 0;
	useactiontitle = "";
	useasbinocular = 0;
	usemodeloptics = 1;
	value = 2;
	weaponlockdelay = 0;
	weaponlocksystem = 0;
	class Library {
		libtextdesc = "In use for nearly forty years the venerable PM Makarov served the Soviet Red Army and now serves the Russian Federation Armed Forces. Renowned for its simple and extremely reliable design, the Makarov can be found in abundance across the globe. Although the small, 8-round capacity is low by present-day standards, it gives the pistol a narrow profile.";
	};
};
