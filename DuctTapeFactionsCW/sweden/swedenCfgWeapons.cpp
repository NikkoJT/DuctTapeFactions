class gm_g3_base;
class gm_g3a4_base;
class gm_g3a4a1_ris_base;
class gm_g3a4a1_ris_blk;

class njt_gm_g3a4a1_ris_blk_holo : gm_g3a4a1_ris_blk
{
	scope = 2;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_holosight_blk_F";
			slot = "CowsSlot";
		};
	};
};

class njt_gm_g3a4a1_ris_blk_holo_laser : gm_g3a4a1_ris_blk
{
	scope = 2;
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

class njt_gm_g3a4a1_ris_blk_z24_laser_bipod : gm_g3a4a1_ris_blk
{
	scope = 2;
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

class njt_nlaw_disposable : launch_nlaw_f
{
	gm_spentLauncherType = "njt_nlaw_disposable_spent";
	displayName = "Rb 57";
	descriptionShort = "Single-use lock-on anti-tank weapon.";
	class EventHandlers
	{
		class njt_nlaw_eventhandlers
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

class njt_nlaw_disposable_spent : launch_nlaw_f
{
	displayName = "Rb 57 (Spent)";
	descriptionShort = "This weapon is expended and cannot be reused.";
	scope = 1;
	weaponInfoType = "RscWeaponEmpty";
	magazines[] = {"njt_nlaw_dummy"};
	delete magazineWell;
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