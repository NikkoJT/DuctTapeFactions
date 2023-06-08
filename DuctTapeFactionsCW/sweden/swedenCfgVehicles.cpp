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
class B_HMG_02_support_F;
class B_HMG_02_weapon_F;


class APC_Wheeled_01_base_F : Wheeled_APC_F
{
	class Turrets;
};
class B_APC_Wheeled_01_base_F : APC_Wheeled_01_base_F
{
	class Turrets : Turrets
	{
		class MainTurret;
	};
};
class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F
{
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class OpticsIn;
			class Turrets;
		};
	};
};
class njt_dtfcw_sweden_apc_01_wheeled_cannon_f_base : B_APC_Wheeled_01_cannon_F
{
	scope = 0;
	faction = "njt_fc_sweden";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class OpticsIn : OpticsIn
			{
				class Medium;
				class Narrow;
				class Wide;
			};
			class Turrets : Turrets
			{
				class CommanderOptics;
			};
		};
	};
};

class njt_dtfcw_sweden_apc_01_wheeled_cannon_f : njt_dtfcw_sweden_apc_01_wheeled_cannon_f_base
{
	displayName = "Patria AMV";
	scope = 2;
	hiddenSelectionsTextures[] = {
		"A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa"
	};
	crew = "njt_dtfcw_sweden_crew";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class OpticsIn : OpticsIn
			{
				class Wide : Wide
				{
					thermalResolution[] = {720};
				};
				class Medium : Medium
				{
					thermalResolution[] = {720};
				};
				class Narrow : Narrow
				{
					thermalResolution[] = {360};
				};
			};
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics
				{
					class OpticsIn : OpticsIn
					{
						class Wide : Wide
						{
							thermalResolution[] = {900};
						};
						class Medium : Medium
						{
							thermalResolution[] = {720};
						};
						class Narrow : Narrow
						{
							thermalResolution[] = {360};
						};
					};
				};
			};
		};
	};
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_dtfcw_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_dtfcw_gm_g3a4a1_ris_blk_holo";
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
		class _xx_gm_20Rnd_762x51mm_B_DM111_g3_blk
		{
			count = 20;
			magazine = "gm_20Rnd_762x51mm_B_DM111_g3_blk";
		};
		class _xx_gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk
		{
			count = 10;
			magazine = "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk";
		};
		class _xx_gm_handgrenade_frag_dm51a1
		{
			count = 6;
			magazine = "gm_handgrenade_frag_dm51a1";
		};
		class _xx_US85_M136_Mag
		{
			count = 1;
			magazine = "US85_M136_Mag";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_US85_200Rnd_556x45
		{
			count = 6;
			magazine = "US85_200Rnd_556x45";
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

// All this stuff works fine
class B_Kitbag_sgg;
class B_AssaultPack_sgg;

class njt_dtfcw_b_assaultpack_sgg_m249 : B_AssaultPack_sgg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_200Rnd_556x45_Box_F
		{
			count = 3;
			magazine = "200Rnd_556x45_Box_F";
		};
	};
};

class njt_dtfcw_b_assaultpack_sgg_medic : B_AssaultPack_sgg
{
	scope = 1;
	class TransportItems
	{
		class _xx_firstaidkit
		{
			count = 6;
			name = "FirstAidKit";
		};
		class _xx_medikit
		{
			count = 1;
			name = "Medikit";
		};
	};
};

class njt_dtfcw_b_kitbag_sgg_spmg : B_Kitbag_sgg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_130rnd_338_mag
		{
			count = 3;
			magazine = "130Rnd_338_Mag";
		};
	};
};

class njt_dtfcw_b_kitbag_sgg_m249 : B_Kitbag_sgg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_200Rnd_556x45_Box_F
		{
			count = 3;
			magazine = "200Rnd_556x45_Box_F";
		};
	};
};

class njt_dtfcw_b_kitbag_sgg_medic : B_Kitbag_sgg
{
	scope = 1;
	class TransportItems
	{
		class _xx_firstaidkit
		{
			count = 6;
			name = "FirstAidKit";
		};
		class _xx_medikit
		{
			count = 1;
			name = "Medikit";
		};
	};
};

class njt_dtfcw_b_kitbag_sgg_engineer : B_Kitbag_sgg
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

class njt_dtfcw_b_kitbag_sgg_demo : B_Kitbag_sgg
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

class njt_dtfcw_b_kitbag_sgg_maaws : B_Kitbag_sgg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_MRAWS_HEAT_F
		{
			count = 2;
			magazine = "MRAWS_HEAT_F";
		};
		class _xx_MRAWS_HE_F
		{
			count = 2;
			magazine = "MRAWS_HE_F";
		};
	};
};

class njt_dtfcw_sweden_soldier_base : SoldierWB
{
	displayName = "Swede";
	faction = "njt_fc_sweden";
	genericNames = "njt_names_sweden";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	editorSubcategory = "EdSubCat_Personnel";
	faceType = "Man_A3";
	icon = "iconMan";
	picture = "";
	portrait = "";
	scope = 0;
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
	identityTypes[] = {
		"LanguageEng_F","head_euro"
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
		ItemRadio,
		US85_ANPVS5_Goggles
	};
	respawnLinkedItems[] = {
		ItemMap,
		ItemCompass,
		ItemWatch,
		ItemRadio,
		US85_ANPVS5_Goggles
	};
};

class njt_dtfcw_sweden_rifleman : njt_dtfcw_sweden_soldier_base
{
	displayName = "Soldier";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	
};

class njt_dtfcw_sweden_antitank_at4 : njt_dtfcw_sweden_soldier_base
{
	displayName = "Soldier (Light AT)";
	scope = 2;
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		US85_M136
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		US85_M136
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		US85_M136_Mag
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		US85_M136_Mag
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	
};

class njt_dtfcw_sweden_antitank_nlaw : njt_dtfcw_sweden_soldier_base
{
	displayName = "Soldier (AT)";
	scope = 2;
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		njt_dtfcw_nlaw_disposable
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		njt_dtfcw_nlaw_disposable
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		NLAW_F
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		NLAW_F
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	
};

class njt_dtfcw_sweden_medic : njt_dtfcw_sweden_soldier_base
{
	displayName = "Combat Medic";
	scope = 2;
	backpack = "B_Kitbag_sgg_medic";
	attendant = 1;
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_4(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_4(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	
};

class njt_dtfcw_sweden_antitank_maaws : njt_dtfcw_sweden_soldier_base
{
	displayName = "Heavy AT";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_MAAWS";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		launch_MRAWS_green_rail_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		launch_MRAWS_green_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		MRAWS_HEAT_F
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		MRAWS_HEAT_F
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	
};

class njt_dtfcw_sweden_teamleader : njt_dtfcw_sweden_soldier_base
{
	displayName = "Team Leader";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_xx_facewear_scarf_01_grn,
		ItemGPS
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_xx_facewear_scarf_01_grn,
		ItemGPS
	};
	
};

class njt_dtfcw_sweden_squadleader : njt_dtfcw_sweden_soldier_base
{
	displayName = "Squad Leader";
	scope = 2;
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		Rangefinder
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		Rangefinder
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS
	};
};

class njt_dtfcw_sweden_marksman : njt_dtfcw_sweden_soldier_base
{
	displayName = "Marksman";
	scope = 2;
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_z24_laser_bipod,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_z24_laser_bipod,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_6(gm_20Rnd_762x51mm_AP_DM151_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_6(gm_20Rnd_762x51mm_AP_DM151_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_01
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_01
	};
};

class njt_dtfcw_sweden_machinegunner : njt_dtfcw_sweden_soldier_base
{
	displayName = "Machinegunner";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_m249";
	uniformClass = "U_B_CTRG_Soldier_urb_2_F";
	weapons[] += {
		US85_M249,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		US85_M249,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_2(200Rnd_556x45_Box_Red_F),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_2(200Rnd_556x45_Box_Red_F),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_04
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_04
	};
};

class njt_dtfcw_sweden_rifleman_rto : njt_dtfcw_sweden_soldier_base
{
	displayName = "RTO";
	scope = 2;
	backpack = "gm_ge_backpack_sem35_oli";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		V_CarrierRigKBT_01_light_Olive_F
	};
};

class njt_dtfcw_sweden_crew : njt_dtfcw_sweden_soldier_base
{
	displayName = "Crew";
	scope = 2;
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_2(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_2(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		US85_helmetDH132G,
		V_CarrierRigKBT_01_Olive_F
	};
	respawnLinkedItems[] += {
		US85_helmetDH132G,
		V_CarrierRigKBT_01_Olive_F
	};
};

class njt_dtfcw_sweden_jtac : njt_dtfcw_sweden_soldier_base
{
	displayName = "JTAC";
	scope = 2;
	backpack = "gm_ge_backpack_sem35_oli";
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Laserdesignator_01_khk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		Laserbatteries,
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		Laserbatteries,
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		V_CarrierRigKBT_01_light_Olive_F,
		G_Aviator,
		ItemGPS
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_beret_crew_blk,
		V_CarrierRigKBT_01_light_Olive_F,
		G_Aviator,
		ItemGPS
	};
};

class njt_dtfcw_sweden_assistant_maaws : njt_dtfcw_sweden_soldier_base
{
	displayName = "Heavy AT Assistant";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_MAAWS";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Rangefinder
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Rangefinder
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_03
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_03
	};
};

class njt_dtfcw_sweden_antitank_tow : njt_dtfcw_sweden_soldier_base
{
	displayName = "ATGM Gunner";
	scope = 2;
	backpack = "njt_dtfcw_bag_tow_sweden";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_03
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_03
	};
};
class US85_bpWpTOW;
// My weaponbag base class
class njt_dtfcw_bag_tow_base : US85_bpWpTOW
{
	scope = 0;
	class assembleInfo;
};

// My weaponbag live class
class njt_dtfcw_bag_tow_sweden : njt_dtfcw_bag_tow_base
{
	displayName = "Rbs 55 (Packed)";
	scope = 2;
	faction = "njt_fc_sweden";
	dlc = "CSLA";	
	class assembleInfo : assembleInfo
	{
		assembleTo = "njt_dtfcw_sweden_tow";
		displayName = "Rbs 55";
		base[] = {
			"US85_bpWpMount"
		};
	};
};

class StaticATWeapon;
class US85_TOW_Stat : StaticATWeapon
{
	class assembleInfo;
};

// My assembled turret baseclass
class njt_dtfcw_sweden_tow_base : US85_TOW_Stat
{
	scope = 0;
}

// My assembled turret live class
class njt_dtfcw_sweden_tow : njt_dtfcw_sweden_tow_base
{
	scope = 2;
	displayName = "Rbs 55";
	descriptionShort = "152mm SACLOS ATGM Rbs 55"; 
	crew = "njt_dtfcw_sweden_rifleman";
	faction = "njt_fc_sweden";
	class assembleInfo : assembleInfo
	{
		dissasembleTo[] = {"US85_bpWpMount","njt_dtfcw_bag_tow_sweden"};
	};	
};

class njt_dtfcw_sweden_assistant_tow : njt_dtfcw_sweden_soldier_base
{
	displayName = "ATGM Assistant";
	scope = 2;
	backpack = "US85_bpWpMount";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
};

class njt_dtfcw_sweden_helicrew : njt_dtfcw_sweden_soldier_base
{
	displayName = "Helicrew";
	scope = 2;
	weapons[] += {
		gm_mp5n_surefire_blk,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		gm_mp5n_surefire_blk,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
		ItemGPS
	};
	respawnLinkedItems[] += {
		H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
		ItemGPS
	};
};

class US85_Helicopter_Base_H;
class US85_H60 : US85_Helicopter_Base_H
{
	class Attributes
	{
		class US85_attrEmblem;
		class US85_attrMark;
		class US85_attrNtlty;
	};
};
class US85_UH60 : US85_H60
{
	class Attributes : Attributes
	{
		class US85_attrEmblem : US85_attrEmblem {};
		class US85_attrMark : US85_attrMark {};
		class US85_attrNtlty : US85_attrNtlty {};
	};
};

class njt_dtfcw_sweden_uh60 : US85_UH60
{
	faction = "njt_fc_sweden";
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 16A (Unarmed)";
	displayNameShort = "Hkp 16";
	descriptionShort = "A Swedish import of the popular American UH-60A.";
	hiddenSelectionsTextures[] = {"csla_afmc_air\uh60\data\uh60a_engine_co.paa","csla_afmc_air\uh60\data\uh60a_fuselage_co.paa","csla_afmc_air\uh60\data\uh60a_interior_co.paa","csla_afmc_air\uh60\data\uh60a_navijak_co.paa","csla_afmc_air\uh60\data\esss_co.paa","","","","njt_dtfcw\assets\insignia_sweden_ca.paa","njt_dtfcw\assets\insignia_sweden_ca.paa"};
	class Attributes : Attributes
	{
		class US85_attrEmblem : US85_attrEmblem {};
		class US85_attrMark : US85_attrMark {};
	};
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_dtfcw_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_dtfcw_gm_g3a4a1_ris_blk_holo";
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
		class _xx_gm_20Rnd_762x51mm_B_DM111_g3_blk
		{
			count = 20;
			magazine = "gm_20Rnd_762x51mm_B_DM111_g3_blk";
		};
		class _xx_gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk
		{
			count = 10;
			magazine = "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk";
		};
		class _xx_gm_handgrenade_frag_dm51a1
		{
			count = 6;
			magazine = "gm_handgrenade_frag_dm51a1";
		};
		class _xx_US85_M136_Mag
		{
			count = 1;
			magazine = "US85_M136_Mag";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_US85_200Rnd_556x45
		{
			count = 6;
			magazine = "US85_200Rnd_556x45";
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
class US85_UH60M240 : US85_UH60
{
	class Attributes : Attributes
	{
		class US85_attrEmblem : US85_attrEmblem {};
		class US85_attrMark : US85_attrMark {};
		class US85_attrNtlty : US85_attrNtlty {};
	};
};
class njt_dtfcw_sweden_uh60m240 : US85_UH60M240
{
	faction = "njt_fc_sweden";
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 16A (M240)";
	displayNameShort = "Hkp 16";
	descriptionShort = "A Swedish import of the popular American UH-60A.";
	hiddenSelectionsTextures[] = {"csla_afmc_air\uh60\data\uh60a_engine_co.paa","csla_afmc_air\uh60\data\uh60a_fuselage_co.paa","csla_afmc_air\uh60\data\uh60a_interior_co.paa","csla_afmc_air\uh60\data\uh60a_navijak_co.paa","csla_afmc_air\uh60\data\esss_co.paa","","","","njt_dtfcw\assets\insignia_sweden_ca.paa","njt_dtfcw\assets\insignia_sweden_ca.paa"};
	class Attributes : Attributes
	{
		class US85_attrEmblem : US85_attrEmblem {};
		class US85_attrMark : US85_attrMark {};
	};
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_dtfcw_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_dtfcw_gm_g3a4a1_ris_blk_holo";
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
		class _xx_gm_20Rnd_762x51mm_B_DM111_g3_blk
		{
			count = 20;
			magazine = "gm_20Rnd_762x51mm_B_DM111_g3_blk";
		};
		class _xx_gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk
		{
			count = 10;
			magazine = "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk";
		};
		class _xx_gm_handgrenade_frag_dm51a1
		{
			count = 6;
			magazine = "gm_handgrenade_frag_dm51a1";
		};
		class _xx_US85_M136_Mag
		{
			count = 1;
			magazine = "US85_M136_Mag";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_US85_200Rnd_556x45
		{
			count = 6;
			magazine = "US85_200Rnd_556x45";
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

class gm_ge_army_bo105p1m_vbh_swooper_base;
class gm_ge_army_bo105p1m_vbh_swooper;

class njt_dtfcw_sweden_bo105 : gm_ge_army_bo105p1m_vbh_swooper
{
	faction = "njt_fc_sweden";
	gm_insigniasdefaultnation = "njt_dtfcw_insignia_sweden";
	gm_licenseplate = "gm_ge_civ_wht";
	gm_licensePlateDefaultDigits = "    ##";
	gm_insigniasdefaultflag = "gm_insignia_none";
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 9A";
	displayNameShort = "Hkp 9";
	hiddenSelectionsTextures[] = {
		"",
		"#(rgb,8,8,3)color(0.48,0.6,0.42,0.15)",
		"\gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\n84\gm_ge_army_bo105_ext_02_n84_co.paa"
	};
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_dtfcw_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_dtfcw_gm_g3a4a1_ris_blk_holo";
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
		class _xx_gm_20Rnd_762x51mm_B_DM111_g3_blk
		{
			count = 20;
			magazine = "gm_20Rnd_762x51mm_B_DM111_g3_blk";
		};
		class _xx_gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk
		{
			count = 10;
			magazine = "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk";
		};
		class _xx_gm_handgrenade_frag_dm51a1
		{
			count = 6;
			magazine = "gm_handgrenade_frag_dm51a1";
		};
		class _xx_US85_M136_Mag
		{
			count = 1;
			magazine = "US85_M136_Mag";
		};
		class _xx_SmokeShell
		{
			count = 6;
			magazine = "SmokeShell";
		};
		class _xx_US85_200Rnd_556x45
		{
			count = 6;
			magazine = "US85_200Rnd_556x45";
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

class njt_dtfcw_sweden_gunner_hmg : njt_dtfcw_sweden_soldier_base
{
	displayName = "HMG Gunner";
	scope = 2;
	backpack = "njt_dtfcw_bag_hmg_02_bare";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_ge_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_ge_facewear_dustglasses
	};
};

class njt_dtfcw_sweden_assistant_hmg : njt_dtfcw_sweden_soldier_base
{
	displayName = "HMG Assistant";
	scope = 2;
	backpack = "njt_dtfcw_bag_tripodlow";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_xx_facewear_scarf_01_oli
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_xx_facewear_scarf_01_oli
	};
};

class njt_dtfcw_sweden_gunner_mmg : njt_dtfcw_sweden_soldier_base
{
	displayName = "MMG Gunner";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_SPMG";
	uniformClass = "U_B_CTRG_Soldier_urb_2_F";
	weapons[] += {
		njt_dtfcw_mmg_02_black_f_c79_bipod,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_mmg_02_black_f_c79_bipod,
		hgun_P07_blk_F
	};
	magazines[] += {
		130Rnd_338_Mag,
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		130Rnd_338_Mag,
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_02
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_headgear_foliage_summer_forest_02
	};
};

class njt_dtfcw_sweden_assistant_mmg : njt_dtfcw_sweden_soldier_base
{
	displayName = "MMG Assistant";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_SPMG";
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_3(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(130Rnd_338_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_3(SmokeShell)
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		csla_glsplscspring
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		csla_glsplscspring
	};
};

class njt_dtfcw_sweden_engineer : njt_dtfcw_sweden_soldier_base
{
	displayName = "Engineer";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_engineer";
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	canDeactivateMines = 1;
	engineer = 1;
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(130Rnd_338_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(SmokeShell)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_heavy_Olive_F,
		gm_ge_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_heavy_Olive_F,
		gm_ge_facewear_dustglasses
	};
};

class njt_dtfcw_sweden_demo : njt_dtfcw_sweden_soldier_base
{
	displayName = "Sapper";
	scope = 2;
	backpack = "njt_dtfcw_B_Kitbag_sgg_demo";
	canDeactivateMines = 1;
	weapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(130Rnd_338_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(SmokeShell)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_heavy_Olive_F,
		gm_ge_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_heavy_Olive_F,
		gm_ge_facewear_dustglasses
	};
};

class njt_dtfcw_sweden_sfsoldier_base : njt_dtfcw_sweden_soldier_base
{
	displayName = "Special Swede";
	editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	scope = 0;
	
	linkedItems[] = {
		H_HelmetSpecB,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemCompass,
		ItemWatch,
		ItemMap,
		ItemRadio,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] = {
		H_HelmetSpecB,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemCompass,
		ItemWatch,
		ItemMap,
		ItemRadio,
		NVGoggles_INDEP
	};
};

class njt_dtfcw_sweden_sfrifleman : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};	
};

class njt_dtfcw_sweden_sfteamleader : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger Team Leader";
	scope = 2;
	weapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		Rangefinder
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		Rangefinder
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		G_Tactical_Clear,
		ItemGPS
	};
	respawnLinkedItems[] += {
		G_Tactical_Clear,
		ItemGPS
	};
};

class njt_dtfcw_sweden_sfantitank_nlaw : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger (AT)";
	scope = 2;
	backpack = "B_AssaultPack_sgg";
	weapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		njt_dtfcw_nlaw_disposable
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		njt_dtfcw_nlaw_disposable
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		NLAW_F
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		NLAW_F
	};
};

class njt_dtfcw_sweden_sfjtac : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger JTAC";
	scope = 2;
	backpack = "gm_ge_backpack_sem35_oli";
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn,
		Laserdesignator_01_khk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		Laserbatteries,
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		Laserbatteries,
		ITEM_3(SmokeShellRed),
		ITEM_3(SmokeShellGreen)
	};
	linkedItems[] += {
		G_Tactical_Clear,
		ItemGPS
	};
	respawnLinkedItems[] += {
		G_Tactical_Clear,
		ItemGPS
	};
};

class njt_dtfcw_sweden_sfbreacher : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger Breacher";
	scope = 2;
	canDeactivateMines = 1;
	weapons[] += {
		gm_mp5sd3_blk,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	respawnWeapons[] += {
		gm_mp5sd3_blk,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	magazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk),
		ITEM_2(gm_60Rnd_9x19mm_B_DM11_mp5a3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk),
		ITEM_2(gm_60Rnd_9x19mm_B_DM11_mp5a3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_4(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	items[] += {
		MineDetector
	};
	respawnItems[] += {
		MineDetector
	};
	linkedItems[] += {
		gm_ge_facewear_dustglasses
	};
	respawnLinkedItems[] += {
		gm_ge_facewear_dustglasses
	};
};

class njt_dtfcw_sweden_sfmarksman : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger Marksman";
	scope = 2;
	weapons[] += {
		njt_dtfcw_arifle_spar_03_blk_f_ams_laser_supp,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	respawnWeapons[] += {
		njt_arifle_spar_03_blk_f_ams_laser_supp,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	magazines[] += {
		ITEM_6(20Rnd_762x51_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk),
		ITEM_2(gm_60Rnd_9x19mm_B_DM11_mp5a3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell)
	};
	linkedItems[] += {
		G_Tactical_Black
	};
	respawnLinkedItems[] += {
		G_Tactical_Black
	};
};

class njt_dtfcw_sweden_sfmachinegunner : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger Machinegunner";
	scope = 2;
	backpack = "njt_dtfcw_b_assaultpack_sgg_m249";
	weapons[] += {
		njt_dtfcw_lmg_03_f_arco_laser_supp,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_dtfcw_lmg_03_f_arco_laser_supp,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_2(200Rnd_556x45_Box_Red_F),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_2(200Rnd_556x45_Box_Red_F),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	linkedItems[] += {
		gm_xx_facewear_scarf_01_oli
	};
	respawnLinkedItems[] += {
		gm_xx_facewear_scarf_01_oli
	};
};

class njt_dtfcw_sweden_sfmedic : njt_dtfcw_sweden_sfsoldier_base
{
	displayName = "Ranger Medic";
	scope = 2;
	backpack = "njt_dtfcw_b_assaultpack_sgg_medic";
	attendant = 1;
	weapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	respawnWeapons[] += {
		njt_dtfcw_gm_g3ka4a1_ris_blk_arco_laser_a150,
		njt_dtfcw_hgun_p07_blk_f_kacn
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_4(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_4(SmokeShell),
		ITEM_2(SmokeShellGreen)
	};
	linkedItems[] += {
		gm_xx_facewear_scarf_01_blu
	};
	respawnLinkedItems[] += {
		gm_xx_facewear_scarf_01_blu
	};
	
};