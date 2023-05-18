class gm_g3_base;
class gm_g3a4_base;
class gm_g3a4a1_ris_base;
class gm_g3a4a1_ris_blk;
class gm_g3ka4_base;
class gm_g3ka4a1_base;
class gm_g3ka4a1_ris_base;
class gm_g3ka4a1_ris_blk;
class hgun_P07_blk_F;
class arifle_SPAR_03_blk_F;
class LMG_03_F;

class njt_dtfcw_lmg_03_f : LMG_03_F
{
	scope = 2;
	displayName = "Ksp 90B 5.56 mm";
	modes[] = {"FullAutoFast","FullAutoSlow","close","short","medium","far_optic1","far_optic2"};
	class FullAutoSlow{};
};
class njt_dtfcw_lmg_03_f_arco_laser_supp : njt_dtfcw_lmg_03_f
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_Arco_blk_F";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_M";
			slot = "MuzzleSlot";
		};
	};
};

class njt_dtfcw_arifle_spar_03_blk_f_ams_laser_supp : arifle_spar_03_blk_f
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_AMS";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_B";
			slot = "MuzzleSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class njt_dtfcw_hgun_p07_blk_f_kacn : hgun_p07_blk_f
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item = "gm_suppressor_kacnavy_9mm_blk";
			slot = "MuzzleSlot";
		};
	};
};

class njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150 : gm_g3ka4a1_ris_blk
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_Arco_blk_F";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "gm_suppressor_atec150_762mm_blk";
			slot = "MuzzleSlot";
		};
	};
};

class njt_dtfcw_gm_g3a4a1_ris_blk_holo : gm_g3a4a1_ris_blk
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_holosight_blk_F";
			slot = "CowsSlot";
		};
	};
};

class njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser : gm_g3a4a1_ris_blk
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_holosight_blk_F";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class njt_dtfcw_gm_g3a4a1_ris_blk_z24_laser_bipod : gm_g3a4a1_ris_blk
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "gm_feroz24_ris_blk";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class launch_nlaw_f;

class njt_dtfcw_nlaw_disposable : launch_nlaw_f
{
	baseWeapon = "njt_dtfcw_nlaw_disposable";
	gm_spentLauncherType = "njt_dtfcw_nlaw_disposable_spent";
	displayName = "Rb 57";
	descriptionShort = "Single-use lock-on anti-tank weapon.";
	class EventHandlers
	{
		class njt_dtfcw_nlaw_eventhandlers
		{
			fired = "_this call gm_core_weapons_fnc_replaceWeapon";
		};
	};
	class VirtualArsenal
	{
		class EventHandlers
		{
			itemSelected = "{(_this select 0) removeMagazines _x} forEach getArray (configFile >> 'cfgWeapons' >> (_this select 1) >> 'magazines');";
		};
	};
	class Library
	{
		libTextDesc = "The Rb 57 is a Swedish-made disposable light anti-tank weapon. It is equipped with a visible-light sensor capable of locking on to targets within up to 800 metres, and can be fired in either direct-attack or top-attack mode. Once fired, it cannot be reused.";
	};
};

class njt_dtfcw_nlaw_disposable_spent : launch_nlaw_f
{
	displayName = "Rb 57 (Spent)";
	descriptionShort = "This weapon is expended and cannot be reused.";
	scope = 1;
	weaponInfoType = "RscWeaponEmpty";
	magazines[] = {"njt_dtfcw_nlaw_dummy"};
	magazineWell[] = {};
	class VirtualArsenal
	{
		class EventHandlers
		{
			itemSelected = "{(_this select 0) removeMagazines _x} forEach getArray (configFile >> 'cfgWeapons' >> (_this select 1) >> 'magazines');";
		};
	};
	
	class Library
	{
		libTextDesc = "The Rb 57 is a Swedish-made disposable light anti-tank weapon. It is equipped with a visible-light sensor capable of locking on to targets within up to 800 metres, and can be fired in either direct-attack or top-attack mode. Once fired, it cannot be reused.";
	};
};

class MMG_02_camo_F;
class MMG_02_black_F;

class njt_dtfcw_mmg_02_black_f_c79_bipod : MMG_02_black_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "gm_c79a1_oli";
			slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};