class All;
class AllVehicles;
class Land;
class Man;
class CAManBase;
class SoldierWB;
class SoldierEB;
class SoldierGB;
class LandVehicle;
class Car;
class Car_F;
class Wheeled_APC_F;
class Static;
class Building;
class Strategic;
class ReammoBox;
class Bag_Base;
class Helicopter_Base_H;
class Weapon_Bag_Base;
class gm_staticWeapon_base;
class gm_staticATGM_base;
class gm_milan_launcher_tripod_base;
class gm_staticMG_base;
class gm_dshkm_aatripod_base;
class gm_wheeled_base;
class gm_wheeled_car_base;
class gm_wheeled_truck_base;
class gm_kat1_base;
class gm_kat1_451_base;
class gm_kat1_451_cargo_base;
class gm_kat1_451_refuel_base;
class gm_kat1_451_container_base;
class gm_kat1_451_reammo_base;

class njt_dtfcw_gm_kat1_451_reammo_republic : gm_kat1_451_reammo_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "5-tonne Truck Ammo";
	displayNameShort = "5t Ammo";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 1;
	gm_licenseplate = "gm_nl_civ_yel";
	gm_LicensePlateDefaultDigits = "RA $# #$$";
	hiddenSelectionsTextures[] = { "\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_rim_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_02_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_03_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_04_ols_co.paa" };
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			count = 2;
			name = "FirstAidKit";
		};
	};
};

class njt_dtfcw_gm_kat1_451_container_republic : gm_kat1_451_container_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "5-tonne Truck Flatbed";
	displayNameShort = "5t Flatbed";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 1;
	gm_licenseplate = "gm_nl_civ_yel";
	gm_LicensePlateDefaultDigits = "RA $# #$$";
	hiddenSelectionsTextures[] = { "\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_rim_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_02_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_03_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_04_ols_co.paa" };
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			count = 2;
			name = "FirstAidKit";
		};
	};
};

class njt_dtfcw_gm_kat1_451_cargo_republic : gm_kat1_451_cargo_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "5-tonne Truck Tanker";
	displayNameShort = "5t Tanker";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 1;
	gm_licenseplate = "gm_nl_civ_yel";
	gm_LicensePlateDefaultDigits = "RA $# #$$";
	hiddenSelectionsTextures[] = { "\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_rim_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_02_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_03_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_04_ols_co.paa" };
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			count = 2;
			name = "FirstAidKit";
		};
	};
	class TransportWeapons
	{
		class _xx_gm_m72a3_oli
		{
			count = 2;
			weapon = "gm_m72a3_oli";
		};
	};
	class TransportMagazines
	{
		class _xx_US85_20Rnd_762x51
		{
			count = 30;
			magazine = "US85_20Rnd_762x51";
		};
	
		class _xx_CSLA_F1
		{
			count = 10;
			magazine = "CSLA_F1";
		};
		class _xx_gm_1Rnd_66mm_heat_m72a3
		{
			count = 2;
			magazine = "gm_1Rnd_66mm_heat_m72a3";
		};

		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_gm_100Rnd_762x51mm_B_T_DM21_mg8_oli
		{
			count = 12;
			magazine = "gm_100Rnd_762x51mm_B_T_DM21_mg8_oli";
		};
	};
};


class njt_dtfcw_gm_kat1_451_cargo_republic : gm_kat1_451_cargo_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "5-tonne Truck Transport";
	displayNameShort = "5t Truck";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 1;
	gm_licenseplate = "gm_nl_civ_yel";
	gm_LicensePlateDefaultDigits = "RA $# #$$";
	hiddenSelectionsTextures[] = { "\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_rim_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_01_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_02_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_03_ols_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\ols\gm_ge_army_kat1_451_ext_04_ols_co.paa" };
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	class TransportWeapons
	{
		class _xx_gm_m72a3_oli
		{
			count = 1;
			weapon = "gm_m72a3_oli";
		};
		class _xx_US85_FALf
		{
			count = 1;
			weapon = "US85_FALf";
		};
	};
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			count = 10;
			name = "FirstAidKit";
		};
	};
	class TransportMagazines
	{
		class _xx_US85_20Rnd_762x51
		{
			count = 20;
			magazine = "US85_20Rnd_762x51";
		};
	
		class _xx_CSLA_F1
		{
			count = 6;
			magazine = "CSLA_F1";
		};
		class _xx_gm_1Rnd_66mm_heat_m72a3
		{
			count = 1;
			magazine = "gm_1Rnd_66mm_heat_m72a3";
		};

		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_gm_100Rnd_762x51mm_B_T_DM21_mg8_oli
		{
			count = 10;
			magazine = "gm_100Rnd_762x51mm_B_T_DM21_mg8_oli";
		};
	};
};


class njt_dtfcw_gm_dshkm_aatripod_republic : gm_dshkm_aatripod_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "DshKM - Tripod";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 1;
};

class njt_dtfcw_gm_milan_launcher_tripod_spetsnaz : gm_milan_launcher_tripod_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "MILAN - Tripod";
	faction = "njt_fc_republic";
	crew = "njt_dtfcw_republic_rifleman";
	side = 0;
};


// All this stuff works fine
class B_FieldPack_green_F;

class njt_dtfcw_b_fieldpack_green_f_engineer : b_fieldpack_green_f
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_SatchelCharge_Remote_Mag
		{
			count = 2;
			magazine = "SatchelCharge_Remote_Mag";
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			count = 2;
			magazine = "ClaymoreDirectionalMine_Remote_Mag";
		};
	};
};

class njt_dtfcw_b_fieldpack_green_f_demo : b_fieldpack_green_f
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_toolkit
		{
			count = 1;
			magazine = "Toolkit";
		};
		class _xx_gm_boltcutter
		{
			count = 1;
			magazine = "gm_boltcutter";
		};
	};
};

class njt_dtfcw_b_fieldpack_green_f_pkm : B_FieldPack_green_F
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_gm_100Rnd_762x54mmR_B_T_7t2_pk_grn
		{
			count = 3;
			magazine = "gm_100Rnd_762x54mmR_B_T_7t2_pk_grn";
		};
	};
};

class njt_dtfcw_b_fieldpack_green_f_rpg7 : B_FieldPack_green_F
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_gm_1Rnd_40mm_heat_pg7vl_rpg7
		{
			count = 3;
			magazine = "gm_1Rnd_40mm_heat_pg7vl_rpg7";
		};
	};
};

class njt_dtfcw_b_fieldpack_green_f_mg8 : B_FieldPack_green_F
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_gm_100Rnd_762x51mm_B_T_DM21_mg8_oli
		{
			count = 2;
			magazine = "gm_100Rnd_762x51mm_B_T_DM21_mg8_oli";
		};
	};
};

class njt_dtfcw_republic_soldier_base : SoldierGB
{
	displayName = "Bloke";
	faction = "njt_fc_republic";
	genericNames = "TanoanMen";
	uniformClass = "U_I_C_Soldier_Camo_F";
	editorSubcategory = "EdSubCat_Personnel";
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F";
	faceType = "Man_A3";
	icon = "iconMan";
	picture = "";
	portrait = "";
	scope = 0;
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Camo_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Camo_F_2_co.paa"};
	identityTypes[] = {
		"LanguageFRE_F","Head_Tanoan"
	};
	items[] = {
		ITEM_2(FirstAidKit)
	};
	respawnItems[] = {
		ITEM_2(FirstAidKit)
	};
	weapons[] = {
		Throw,
		Put
	};
	respawnWeapons[] = {
		Throw,
		Put
	};
	linkedItems[] = {
		ItemMap,
		ItemCompass,
		ItemWatch,
		ItemRadio
	};
	respawnLinkedItems[] = {
		ItemMap,
		ItemCompass,
		ItemWatch,
		ItemRadio
	};
};

class njt_dtfcw_republic_rifleman : njt_dtfcw_republic_soldier_base
{
	displayName = "Rifleman";
	scope = 2;
	weapons[] += {
		US85_FAL
	};
	respawnWeapons[] += {
		US85_FAL
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
	
};

class njt_dtfcw_republic_antitank_law : njt_dtfcw_republic_soldier_base
{
	displayName = "Rifleman (Light AT)";
	scope = 2;
	backpack = "B_FieldPack_green_F";
	weapons[] += {
		US85_FAL,
		gm_m72a3_oli
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_m72a3_oli
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_66mm_heat_m72a3
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_66mm_heat_m72a3
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_republic_antitank_rpg7 : njt_dtfcw_republic_soldier_base
{
	displayName = "Rifleman (AT)";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_rpg7";
	weapons[] += {
		US85_FAL,
		gm_rpg7_wud_pgo7v
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_rpg7_wud_pgo7v
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
	
};

class njt_dtfcw_republic_medic : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Medic";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_medic";
	attendant = 1;
	weapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry,
		G_Spectacles
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry,
		G_Spectacles
	};
	
};

class njt_dtfcw_republic_teamleader : njt_dtfcw_republic_soldier_base
{
	displayName = "Squad Leader";
	scope = 2;
	weapons[] += {
		US85_FAL,
		gm_m49_blk,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_m49_blk,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gmx_chdkz_army_headgear_cap_blk,
		gm_pl_army_vest_80_leader_gry,
		G_Aviator
	};
	respawnLinkedItems[] += {
		gmx_chdkz_army_headgear_cap_blk,
		gm_pl_army_vest_80_leader_gry,
		G_Aviator
	};
	
};

class njt_dtfcw_republic_rifleman_rto : njt_dtfcw_republic_soldier_base
{
	displayName = "RTO";
	scope = 2;
	backpack = "CSLA_bpWpR129";
	weapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_ge_headgear_headset_crew_oli,
		gm_pl_army_vest_80_rifleman_gry,
		gm_xx_facewear_scarf_01_red
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_headset_crew_oli,
		gm_pl_army_vest_80_rifleman_gry,
		gm_xx_facewear_scarf_01_red
	};
};

class njt_dtfcw_republic_marksman : njt_dtfcw_republic_soldier_base
{
	displayName = "Marksman";
	scope = 2;
	weapons[] += {
		njt_dtfcw_us85_fal_scope_bipod
	};
	respawnWeapons[] += {
		njt_dtfcw_us85_fal_scope_bipod
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_marksman_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_marksman_gry
	};
};

class njt_dtfcw_republic_machinegunner : njt_dtfcw_republic_soldier_base
{
	displayName = "Machinegunner";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_mg8";
	uniformClass = "U_I_C_Soldier_Para_1_F";
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F";
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
	weapons[] += {
		gm_mg8a1_blk,
		gm_m49_blk
	};
	respawnWeapons[] += {
		gm_mg8a1_blk,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_2(gm_100Rnd_762x51mm_B_T_DM21_mg8_oli),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_2(gm_100Rnd_762x51mm_B_T_DM21_mg8_oli),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_mg_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_mg_gry
	};
};

class njt_dtfcw_republic_rifleman_aar : njt_dtfcw_republic_soldier_base
{
	displayName = "Assistant Machinegunner";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_mg8";
	weapons[] += {
		US85_FAL
	};
	respawnWeapons[] += {
		US85_FAL
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
};

class njt_dtfcw_republic_antitank_milan : njt_dtfcw_republic_soldier_base
{
	displayName = "ATGM Gunner";
	scope = 2;
	backpack = "gm_milan_launcher_weaponBag";
	weapons[] += {
		US85_FALf
	};
	respawnWeapons[] += {
		US85_FALf
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
};

class njt_dtfcw_republic_helicrew : njt_dtfcw_republic_soldier_base
{
	displayName = "Helicrew";
	uniformClass = "gm_ge_uniform_pilot_commando_rolled_gry"
	hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_pilot_commando_gry_co"};
	model = "\gm\gm_characters\gm_ge_characters\gm_ge_uniform_pilot_commando_rolled";
	scope = 2;
	weapons[] += {
		gm_m49_blk
	};
	respawnWeapons[] += {
		gm_m49_blk
	};
	magazines[] += {
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_ge_headgear_sph4_oli,
		G_Aviator
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_sph4_oli,
		G_Aviator
	};
};

class njt_dtfcw_republic_crew : njt_dtfcw_republic_soldier_base
{
	displayName = "Crew";
	uniformClass = "gm_ge_uniform_pilot_commando_blk"
	hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_pilot_commando_blk_co"};
	model = "\gm\gm_characters\gm_ge_characters\gm_ge_uniform_pilot_commando";
	scope = 2;
	weapons[] += {
		gm_mp2a1_blk
	};
	respawnWeapons[] += {
		gm_mp2a1_blk
	};
	magazines[] += {
		ITEM_4(gm_32Rnd_9x19mm_B_DM51_mp2_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_32Rnd_9x19mm_B_DM51_mp2_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		gm_pl_army_vest_80_crew_gry
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		gm_pl_army_vest_80_crew_gry
	};
};


class njt_dtfcw_republic_gunner_mmg : njt_dtfcw_republic_soldier_base
{
	displayName = "MMG Gunner";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_pkm";
	weapons[] += {
		gm_hmgpkm_prp,
		gm_m49_blk
	};
	respawnWeapons[] += {
		gm_hmgpkm_prp,
		gm_m49_blk
	};
	magazines[] += {
		gm_100Rnd_762x54mmR_B_T_7t2_pk_grn,
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		gm_100Rnd_762x54mmR_B_T_7t2_pk_grn,
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_mg_gry,
		G_Spectacles
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_mg_gry,
		G_Spectacles
	};
};

class njt_dtfcw_republic_assistant_mmg : njt_dtfcw_republic_soldier_base
{
	displayName = "MMG Assistant";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_pkm";
	uniformClass = "U_I_C_Soldier_Para_1_F";
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F";
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
	weapons[] += {
		US85_FAL,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		US85_FAL,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_mg_gry
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_pl_army_vest_80_rifleman_gry
	};
};

class njt_dtfcw_republic_engineer : njt_dtfcw_republic_soldier_base
{
	displayName = "Engineer";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_engineer";
	canDeactivateMines = 1;
	engineer = 1;
	respawnWeapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_republic_demo : njt_dtfcw_republic_soldier_base
{
	displayName = "Sapper";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_demo";
	canDeactivateMines = 1;
	respawnWeapons[] += {
		US85_FAL,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(US85_20Rnd_762x51),
		ITEM_2(US85_20Rnd_762x51),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		FIA_hat85bGn,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_republic_sfsoldier_base : njt_dtfcw_republic_soldier_base
{
	displayName = "Special Bloke";
	scope = 2;
	editorSubcategory = "njt_dtfcw_EdSubCat_Personnel_SpecialForces";
	uniformClass = "gm_ge_uniform_soldier_tshirt_90_oli";
	model = "\gm\gm_characters\gm_ge_characters\gm_ge_uniform_soldier_tshirt_90";
	hiddenSelections[] = {"tex_01","tex_02","cord_01","rank_01","armband_l","armband_r","clan","insignia","letter_01","letter_02","letter_03","letter_04","letter_05","letter_06","letter_07","letter_08","letter_09","letter_10"};
	hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_army_uniform_soldier_tshirt_90_oli_co"};
	linkedItems[] = {
		gmx_chdkz_army_headgear_cap_blk,
		gm_ge_army_vest_type18_dpm,
		ItemCompass,
		ItemWatch,
		ItemMap,
		ItemRadio,
		US85_ANPVS5_Goggles
	};
	respawnLinkedItems[] = {
		gmx_chdkz_army_headgear_cap_blk,
		gm_ge_army_vest_type18_dpm,
		ItemCompass,
		ItemWatch,
		ItemMap,
		ItemRadio,
		US85_ANPVS5_Goggles
	};
};

class njt_dtfcw_republic_sfrifleman : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Trooper";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		G_Bandanna_khk
	};
	respawnLinkedItems[] += {
		G_Bandanna_khk
	};
};

class njt_dtfcw_republic_sfantitank_law : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Trooper (Light AT)";
	scope = 2;
	backpack = "b_fieldpack_green_f";
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_m72a3_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_m72a3_oli
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		gm_1Rnd_66mm_heat_m72a3
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		gm_1Rnd_66mm_heat_m72a3
	};
	linkedItems[] += {
		G_Bandanna_oli
	};
	respawnLinkedItems[] += {
		G_Bandanna_oli
	};
};

class njt_dtfcw_republic_sfantiair : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Anti-air";
	scope = 2;
	backpack = "b_fieldpack_green_f";
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_fim43_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_fim43_oli
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		gm_1Rnd_70mm_he_m585_fim43
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		gm_1Rnd_70mm_he_m585_fim43
	};
	linkedItems[] += {
		G_Bandanna_aviator
	};
	respawnLinkedItems[] += {
		G_Bandanna_aviator
	};
};

class njt_dtfcw_republic_sfbreacher : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Breacher";
	scope = 2;
	weapons[] += {
		gm_mp5a3_blk,
		gm_m49_blk
	};
	respawnWeapons[] += {
		gm_mp5a3_blk,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		ITEM_2(gm_60Rnd_9x19mm_AP_DM91_mp5a3_blk),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_4(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		ITEM_2(gm_60Rnd_9x19mm_AP_DM91_mp5a3_blk),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_4(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		G_Balaclava_blk
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk
	};
};

class njt_dtfcw_republic_sfsquadleader : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Patrol Commander";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		G_Sport_blackred
	};
	respawnLinkedItems[] += {
		G_Sport_blackred
	};
	
};

class njt_dtfcw_republic_sfmedic : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS Combat Medic";
	scope = 2;
	backpack = "njt_dtfcw_b_fieldpack_green_f_medic";
	attendant = 1;
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell)
	};
};

class njt_dtfcw_republic_sfrto : njt_dtfcw_republic_sfsoldier_base
{
	displayName = "SAS RTO";
	scope = 2;
	backpack = "CSLA_bpWpR129";
	weapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_m16a2_blk_4x20,
		gm_m49_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_556x45mm_B_M855_stanag_gry),
		ITEM_2(gm_30Rnd_556x45mm_B_T_M856_stanag_gry),
		ITEM_2(gm_8Rnd_9x19mm_B_DM11_p210_blk),
		ITEM_2(gm_handgrenade_frag_m26a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		G_Bandanna_khk
	};
	respawnLinkedItems[] += {
		G_Bandanna_khk
	};
};