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
class Weapon_Bag_Base;
class gm_staticWeapon_base;
class gm_staticATGM_base;
class gm_spg9_tripod_base;
class gm_fagot_launcher_tripod_base;
class gm_staticMG_base;
class gm_dshkm_aatripod_base;
class gm_wheeled_base;
class gm_wheeled_car_base;
class gm_uaz469_base;
class gm_uaz469_cargo_base;
class gm_uaz469_armed_base;
class gm_uaz469_dshkm_base;
class gm_pl_army_uaz469_dshkm_base : gm_uaz469_dshkm_base
{
	class animationSources : animationSources
	{
		class antenna_01_unhide;
		class antenna_02_unhide;
		class cover_hide;
		class cover_hoops_unhide;
		class doors_unhide;
		class frontlight_01_cover_unhide;
		class frontlight_02_cover_unhide;
		class roadprioritysign_01_unhide;
		class windows_unhide;
		class windshield;
	};
};

class njt_dtfcw_gm_uaz469_dshkm_spetsnaz : gm_pl_army_uaz469_dshkm_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "UAZ 469 DShKM (Spetsnaz)";
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_rifleman";
	side = 0;
	gm_licenseplate = "gm_licenseplate_none";
	hiddenSelectionsTextures[] = { "", "\gm\gm_core\data\col\gm_core_ext_01_xb518_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_uaz469\gm_gc_army_uaz469\data\oli\gm_gc_army_uaz469_ext_02_oli_co.paa" };
	class animationSources : animationSources
	{
		class frontlight_01_cover_unhide : frontlight_01_cover_unhide
		{
			initPhase = 1;
		};
		class frontlight_02_cover_unhide : frontlight_02_cover_unhide
		{
			initPhase = 1;
		};
		class roadprioritysign_01_unhide : roadprioritysign_01_unhide
		{
			initPhase = 0;
		};
	};
	class TransportWeapons
	{
		class _xx_gm_rpg18_oli
		{
			count = 1;
			weapon = "gm_rpg18_oli";
		};
		class _xx_gm_9k32m_oli
		{
			count = 1;
			weapon = "gm_9k32m_oli";
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
		class _xx_gm_30Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 20;
			magazine = "gm_30Rnd_545x39mm_B_7N6_ak74_org";
		};
		class _xx_gm_30Rnd_545x39mm_B_T_7T3_ak74_org
		{
			count = 10;
			magazine = "gm_30Rnd_545x39mm_B_T_7T3_ak74_org";
		};
		class _xx_CSLA_F1
		{
			count = 6;
			magazine = "CSLA_F1";
		};
		class _xx_gm_1Rnd_64mm_heat_pg18
		{
			count = 1;
			magazine = "gm_1Rnd_64mm_heat_pg18";
		};
		class _xx_gm_1Rnd_72mm_he_9m32m
		{
			count = 1;
			magazine = "gm_1Rnd_72mm_he_9m32m";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_gm_45Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 10;
			magazine = "gm_45Rnd_545x39mm_B_7N6_ak74_org";
		};
	};
};

class gm_pl_army_uaz469_cargo_base : gm_uaz469_cargo_base
{
	class animationSources : animationSources
	{
		class antenna_01_unhide;
		class antenna_02_unhide;
		class cover_hide;
		class cover_hoops_unhide;
		class doors_unhide;
		class frontlight_01_cover_unhide;
		class frontlight_02_cover_unhide;
		class roadprioritysign_01_unhide;
		class windows_unhide;
		class windshield;
	};
};

class njt_dtfcw_gm_uaz469_cargo_spetsnaz : gm_pl_army_uaz469_cargo_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "UAZ 469 (Spetsnaz)";
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_rifleman";
	side = 0;
	gm_licenseplate = "gm_licenseplate_none";
	hiddenSelectionsTextures[] = { "", "\gm\gm_core\data\col\gm_core_ext_01_xb518_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_uaz469\gm_gc_army_uaz469\data\oli\gm_gc_army_uaz469_ext_02_oli_co.paa" };
	class animationSources : animationSources
	{
		class antenna_01_unhide : antenna_01_unhide
		{
			initPhase = 1;
		};
		class antenna_02_unhide : antenna_02_unhide
		{
			initPhase = 1;
		};
		class cover_hide : cover_hide
		{
			initPhase = 1;
		};
		class cover_hoops_unhide : cover_hoops_unhide
		{
			initPhase = 0;
		};
		class doors_unhide : doors_unhide
		{
			initPhase = 0;
		};
		class frontlight_01_cover_unhide : frontlight_01_cover_unhide
		{
			initPhase = 1;
		};
		class frontlight_02_cover_unhide : frontlight_02_cover_unhide
		{
			initPhase = 1;
		};
		class roadprioritysign_01_unhide : roadprioritysign_01_unhide
		{
			initPhase = 0;
		};
		class windows_unhide : windows_unhide
		{
			initPhase = 0;
		};
		class windshield : windshield
		{
			initPhase = 1;
		};
	};
	class TransportWeapons
	{
		class _xx_gm_rpg18_oli
		{
			count = 1;
			weapon = "gm_rpg18_oli";
		};
		class _xx_gm_9k32m_oli
		{
			count = 1;
			weapon = "gm_9k32m_oli";
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
		class _xx_gm_30Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 20;
			magazine = "gm_30Rnd_545x39mm_B_7N6_ak74_org";
		};
		class _xx_gm_30Rnd_545x39mm_B_T_7T3_ak74_org
		{
			count = 10;
			magazine = "gm_30Rnd_545x39mm_B_T_7T3_ak74_org";
		};
		class _xx_CSLA_F1
		{
			count = 6;
			magazine = "CSLA_F1";
		};
		class _xx_gm_1Rnd_64mm_heat_pg18
		{
			count = 1;
			magazine = "gm_1Rnd_64mm_heat_pg18";
		};
		class _xx_gm_1Rnd_72mm_he_9m32m
		{
			count = 1;
			magazine = "gm_1Rnd_72mm_he_9m32m";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_gm_45Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 10;
			magazine = "gm_45Rnd_545x39mm_B_7N6_ak74_org";
		};
	};
};

class njt_dtfcw_gm_dshkm_aatripod_spetsnaz : gm_dshkm_aatripod_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "DshKM - Tripod (Spetsnaz)";
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_rifleman";
	side = 0;
};

class njt_dtfcw_gm_fagot_launcher_tripod_spetsnaz : gm_fagot_launcher_tripod_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Fagot - Tripod (Spetsnaz)";
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_rifleman";
	side = 0;
};

lass njt_dtfcw_gm_spg9_tripod_spetsnaz : gm_spg9_tripod_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SPG-9 - Tripod (Spetsnaz)";
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_rifleman";
	side = 0;
};


// All this stuff works fine
class B_Kitbag_sgg;

class njt_dtfcw_b_kitbag_sgg_pkm : B_Kitbag_sgg
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

class njt_dtfcw_b_kitbag_sgg_rpg7 : B_Kitbag_sgg
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

class njt_dtfcw_b_kitbag_sgg_rpk74 : B_Kitbag_sgg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_gm_45Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 4;
			magazine = "gm_45Rnd_545x39mm_B_7N6_ak74_org";
		};
	};
};

class njt_dtfcw_spetsnaz_soldier_base : SoldierEB
{
	displayName = "Spetsnaz";
	faction = "gm_fc_ur";
	genericNames = "RussianMen";
	uniformClass = "gm_xx_uniform_soldier_bdu_80_oli";
	editorSubcategory = "EdSubCat_Personnel_SpecialForces";
	faceType = "Man_A3";
	icon = "iconMan";
	picture = "";
	portrait = "";
	scope = 0;
	hiddenSelections[] = {"tex_01","tex_02","cord_01","rank_01","armband_l","armband_r","clan","insignia","letter_01","letter_02","letter_03","letter_04","letter_05","letter_06","letter_07","letter_08","letter_09","letter_10"};
	hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_soldier_bdu_80_oli_co"};
	identityTypes[] = {
		"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian"
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

class njt_dtfcw_spetsnaz_rifleman : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Commando";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_antitank_rpg18 : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Commando (Light AT)";
	scope = 2;
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_rpg18_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_rpg18_oli
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_64mm_heat_pg18
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_64mm_heat_pg18
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_antitank_rpg7 : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Commando (AT)";
	scope = 2;
	backpack = "njt_dtfcw_b_kitbag_sgg_rpg7";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_rpg7_wud_pgo7v
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_rpg7_wud_pgo7v
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_medic : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Combat Medic";
	scope = 2;
	backpack = "B_Kitbag_sgg_medic";
	attendant = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_teamleader : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Team Leader";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		H_MilCap_grn,
		gm_ge_bgs_vest_type3a1_oli,
		G_Aviator
	};
	respawnLinkedItems[] += {
		H_MilCap_grn,
		gm_ge_bgs_vest_type3a1_oli,
		G_Aviator
	};
	
};

class njt_dtfcw_spetsnaz_squadleader : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Squad Leader";
	scope = 2;
	uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_oli";
	backpack = "CSLA_bpKnapsack";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		H_MilCap_grn,
		V_SmershVest_01_radio_F
	};
	respawnLinkedItems[] += {
		H_MilCap_grn,
		V_SmershVest_01_radio_F
	};
};

class njt_dtfcw_spetsnaz_marksman : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Marksman";
	scope = 2;
	weapons[] += {
		gm_svd_wud_pso1,
		gm_pm_blk
	};
	respawnWeapons[] += {
		gm_svd_wud_pso1,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_6(gm_10Rnd_762x54mmR_API_7bz3_svd_blk),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_6(gm_10Rnd_762x54mmR_API_7bz3_svd_blk),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		FIA_Usanka,
		gm_pl_army_vest_80_marksman_gry
	};
	respawnLinkedItems[] += {
		FIA_Usanka,
		gm_pl_army_vest_80_marksman_gry
	};
};

class njt_dtfcw_spetsnaz_machinegunner : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Light Machinegunner";
	scope = 2;
	backpack = "B_Kitbag_sgg_rpk74";
	uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_oli";
	weapons[] += {
		njt_dtfcw_gm_rpk74n_wud_pka_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_rpk74n_wud_pka_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		gm_xx_facewear_scarf_01_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		gm_xx_facewear_scarf_01_oli
	};
};

class njt_dtfcw_spetsnaz_jtac : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Forward Observer";
	scope = 2;
	backpack = "gm_gc_backpack_r105m_brn";
	uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_oli";
	weapons[] += {
		njt_dtfcw_gm_rpk74n_wud_pka_supp,
		gm_pm_blk,
		gm_lpr1_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_rpk74n_wud_pka_supp,
		gm_pm_blk,
		gm_lpr1_oli
	};
	magazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_ge_headgear_headset_crew_oli,
		V_SmershVest_01_radio_F,
		gm_xx_facewear_scarf_01_str
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_headset_crew_oli,
		V_SmershVest_01_radio_F,
		gm_xx_facewear_scarf_01_str
	};
};


class njt_dtfcw_spetsnaz_antitank_9k111 : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz ATGM Gunner";
	scope = 2;
	backpack = "gm_fagot_launcher_weaponBag";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_xx_facewear_scarf_01_oli
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_xx_facewear_scarf_01_oli
	};
};

class njt_dtfcw_spetsnaz_helicrew : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Helicrew";
	uniformClass = "gm_ge_uniform_pilot_commando_rolled_oli";
	scope = 2;
	weapons[] += {
		arifle_AKS_F,
		gm_pm_blk
	};
	respawnWeapons[] += {
		arifle_AKS_F,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_gc_headgear_zsh3_wht,
		gm_pl_army_vest_80_rifleman_smg_gry,
		gm_nsg66_oli
	};
	respawnLinkedItems[] += {
		gm_gc_headgear_zsh3_wht,
		gm_pl_army_vest_80_rifleman_smg_gry,
		gm_nsg66_oli
	};
};

class CSLA_Helicopter_Base_H;
class CSLA_Mi24_base : CSLA_Helicopter_Base_H
{
	class Attributes
	{
		class CSLA_attrEmblem;
		class CSLA_attrMark;
		class CSLA_attrNtlty;
		class CSLA_attrTacNum;
	};
	class Components;
};
class CSLA_Mi24V : CSLA_Mi24_base
{
	class Attributes : Attributes
	{
		class CSLA_attrEmblem : CSLA_attrEmblem {};
		class CSLA_attrMark : CSLA_attrMark {};
		class CSLA_attrNtlty : CSLA_attrNtlty {};
		class CSLA_attrTacNum : CSLA_attrTacNum {};
	};
	class Components : Components
	{
		class TransportPylons;
	};
	
};

class njt_dtfcw_spetsnaz_mi24v : CSLA_Mi24V
{
	faction = "gm_fc_ur";
	crew = "njt_dtfcw_spetsnaz_helicrew";
	displayName = "Mi-24V";
	displayNameShort = "Mi-24V";
	descriptionShort = "A heavy gunship used as transport by Spetsnaz teams.";
	hiddenSelectionsTextures[] = {"csla_air2\mi24\data\mi24v_body1_co.paa","csla_air2\mi24\data\mi24v_body2_co.paa","csla_air2\mi24\data\mi24v_body3_co.paa","csla_air2\mi24\data\mi24v_det_co.paa","CSLA_misc\signs\empty_ca.paa","CSLA_misc\signs\national\big\sov_star_red_ca.paa"};
	class Attributes : Attributes
	{
		class CSLA_attrEmblem : CSLA_attrEmblem {};
		class CSLA_attrMark : CSLA_attrMark {};
	};
	class Components : Components
	{
		class TransportPylons : TransportPylons
		{
			class Pylons : Pylons
			{
				class Pylons3 : Pylons3
				{
					hardpoints[] = {"CSLA_9K114_pod","gm_mi2_9m32_left"};
				};
				class Pylons6 : Pylons6
				{
					hardpoints[] = {"CSLA_9K114_pod","gm_mi2_9m32_right"};
				};
			};
		};
	};
	class TransportWeapons
	{
		class _xx_gm_rpg18_oli
		{
			count = 1;
			weapon = "gm_rpg18_oli";
		};
		class _xx_gm_9k32m_oli
		{
			count = 1;
			weapon = "gm_9k32m_oli";
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
		class _xx_gm_30Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 20;
			magazine = "gm_30Rnd_545x39mm_B_7N6_ak74_org";
		};
		class _xx_gm_30Rnd_545x39mm_B_T_7T3_ak74_org
		{
			count = 10;
			magazine = "gm_30Rnd_545x39mm_B_T_7T3_ak74_org";
		};
		class _xx_CSLA_F1
		{
			count = 6;
			magazine = "CSLA_F1";
		};
		class _xx_gm_1Rnd_64mm_heat_pg18
		{
			count = 1;
			magazine = "gm_1Rnd_64mm_heat_pg18";
		};
		class _xx_gm_1Rnd_72mm_he_9m32m
		{
			count = 1;
			magazine = "gm_1Rnd_72mm_he_9m32m";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_gm_45Rnd_545x39mm_B_7N6_ak74_org
		{
			count = 10;
			magazine = "gm_45Rnd_545x39mm_B_7N6_ak74_org";
		};
	};
	class TransportBackpacks
	{
		class _xx_B_kitbag_sgg
		{
			count = 2;
			backpack = "B_kitbag_sgg";
		};
	};
};

class njt_dtfcw_spetsnaz_gunner_mmg : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Machinegunner";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_pkm";
	weapons[] += {
		gm_hmgpkm_prp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		gm_hmgpkm_prp,
		gm_pm_blk
	};
	magazines[] += {
		gm_100Rnd_762x54mmR_B_T_7t2_pk_grn,
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		gm_100Rnd_762x54mmR_B_T_7t2_pk_grn,
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		gm_xx_facewear_scarf_01_pt3
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		gm_xx_facewear_scarf_01_pt3
	};
};

class njt_dtfcw_spetsnaz_assistant_mmg : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz MG Assistant";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_pkm";
	uniformClass = "gm_xx_uniform_soldier_bdu_rolled_80_oli";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		csla_glsplscspring
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_pl_army_vest_80_mg_gry,
		csla_glsplscspring
	};
};

class njt_dtfcw_spetsnaz_engineer : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Engineer";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_engineer";
	canDeactivateMines = 1;
	engineer = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
};

class njt_dtfcw_spetsnaz_demo : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Sapper";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_demo";
	canDeactivateMines = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_gc_army_facewear_dustglasses
	};
};

class njt_dtfcw_spetsnaz_rifleman_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Commando (Night)";
	scope = 2;
	uniformClass = "gm_xx_uniform_soldier_bdu_80_oli";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_spetsnaz_antitank_rpg7_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Commando (AT) (Night)";
	scope = 2;
	backpack = "njt_dtfcw_b_kitbag_sgg_rpg7";
	uniformClass = "gm_xx_uniform_soldier_bdu_80_oli";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk,
		gm_rpg7_wud_pgo7v
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk,
		gm_rpg7_wud_pgo7v
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_40mm_heat_pg7vl_rpg7
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_marksman_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Marksman (Night)";
	scope = 2;
	uniformClass = "gm_xx_uniform_soldier_bdu_80_oli";
	weapons[] += {
		njt_dtfcw_gm_svd_wud_nspu_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_svd_wud_nspu_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_6(gm_10Rnd_762x54mmR_API_7bz3_svd_blk),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_6(gm_10Rnd_762x54mmR_API_7bz3_svd_blk),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		FIA_Usanka,
		G_Balaclava_blk,
		gm_pl_army_vest_80_marksman_gry
	};
	respawnLinkedItems[] += {
		FIA_Usanka,
		G_Balaclava_blk,
		gm_pl_army_vest_80_marksman_gry
	};
};

class njt_dtfcw_spetsnaz_machinegunner_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Light Machinegunner (Night)";
	scope = 2;
	backpack = "B_Kitbag_sgg_rpk74";
	uniformClass = "gm_xx_uniform_soldier_bdu_80_oli";
	weapons[] += {
		njt_dtfcw_gm_rpk74n_wud_zln1k_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_rpk74n_wud_zln1k_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_2(gm_45Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_45Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_pl_army_vest_80_mg_gry,
		G_Balaclava_blk
	};
	respawnLinkedItems[] += {
		gm_pl_army_vest_80_mg_gry,
		G_Balaclava_blk
	};
};

class njt_dtfcw_spetsnaz_teamleader_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Team Leader (Night)";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_rpk74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_rpk74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	
};

class njt_dtfcw_spetsnaz_medic_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Combat Medic (Night)";
	scope = 2;
	backpack = "B_Kitbag_sgg_medic";
	attendant = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pm_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_spetsnaz_engineer_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Engineer (Night)";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_engineer";
	canDeactivateMines = 1;
	engineer = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_spetsnaz_demo_night : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Sapper (Night)";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_demo";
	canDeactivateMines = 1;
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_zln1k_supp,
		gm_pn3_gry,
		gm_df7x40_blk
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(SmokeShell),
		ITEM_4(Chemlight_red)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
	respawnLinkedItems[] += {
		G_Balaclava_blk,
		gm_ge_bgs_vest_type3a1_oli
	};
};

class njt_dtfcw_spetsnaz_antiair : njt_dtfcw_spetsnaz_soldier_base
{
	displayName = "Spetsnaz Anti-air";
	scope = 2;
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_9k32m_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_ak74n_wud_pka_supp,
		gm_pm_blk,
		gm_9k32m_oli
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_72mm_he_9m32m
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_545x39mm_B_7N6_ak74_org),
		ITEM_2(gm_30Rnd_545x39mm_B_T_7T3_ak74_org),
		ITEM_2(gm_8Rnd_9x18mm_B_pst_pm_blk),
		ITEM_2(CSLA_F1),
		ITEM_2(SmokeShell),
		gm_1Rnd_72mm_he_9m32m
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_xx_facewear_scarf_01_frog
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		gm_ge_bgs_vest_type3a1_oli,
		gm_xx_facewear_scarf_01_frog
	};
};