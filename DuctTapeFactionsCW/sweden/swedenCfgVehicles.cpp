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
		class _xx_njt_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_gm_g3a4a1_ris_blk_holo";
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		US85_M136
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		njt_nlaw_disposable
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		njt_nlaw_disposable
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
	backpack = "B_Kitbag_sgg";
	attendant = 1;
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
	items[] += {
		ITEM_6(FirstAidKit),
		Medikit_F
	};
	respawnItems[] += {
		ITEM_6(FirstAidKit),
		Medikit_F
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
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		launch_MRAWS_green_rail_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		launch_MRAWS_green_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(MRAWS_HEAT_F),
		MRAWS_HE_F
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(MRAWS_HEAT_F),
		MRAWS_HE_F
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
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F
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
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		Rangefinder
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo_laser,
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
		njt_gm_g3a4a1_ris_blk_z24_laser_bipod,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_z24_laser_bipod,
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
	backpack = "B_Kitbag_sgg";
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
		ITEM_4(US85_200Rnd_556x45),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed)
	};
	respawnMagazines[] += {
		ITEM_4(US85_200Rnd_556x45),
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed),
		ITEM_2(SmokeShellGreen)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_2(SmokeShellRed),
		ITEM_2(SmokeShellGreen)
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_2(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell),
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
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Laserdesignator_01_khk_F
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_4(SmokeShellRed),
		ITEM_2(SmokeShellGreen),
		Laserbatteries
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_4(SmokeShellRed),
		ITEM_2(SmokeShellGreen),
		Laserbatteries
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
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Rangefinder
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		Rangefinder
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(MRAWS_HEAT_F),
		ITEM_2(MRAWS_HE_F)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_3(MRAWS_HEAT_F),
		ITEM_2(MRAWS_HE_F)
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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

class US85_H60;
class US85_UH60;
class njt_dtfcw_sweden_uh60 : US85_UH60
{
	faction = "njt_fc_sweden";
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 16A (Unarmed)";
	displayNameShort = "Hkp 16";
	descriptionShort = "A Swedish import of the popular American UH-60A.";
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_gm_g3a4a1_ris_blk_holo";
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
class US85_UH60M240;
class njt_dtfcw_sweden_uh60m240 : US85_UH60M240
{
	faction = "njt_fc_sweden";
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 16A (M240)";
	displayNameShort = "Hkp 16";
	descriptionShort = "A Swedish import of the popular American UH-60A.";
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_gm_g3a4a1_ris_blk_holo";
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
	crew = "njt_dtfcw_sweden_helicrew";
	displayName = "Hkp 9A";
	displayNameShort = "Hkp 9";
	class TransportWeapons
	{
		class _xx_US85_M136
		{
			count = 1;
			weapon = "US85_M136";
		};
		class _xx_njt_gm_g3a4a1_ris_blk_holo
		{
			count = 2;
			weapon = "njt_gm_g3a4a1_ris_blk_holo";
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
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
	backpack = "B_kitbag_sgg";
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
		ITEM_4(130Rnd_338_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(130Rnd_338_Mag),
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
	backpack = "B_kitbag_sgg";
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_ferod16_oli
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_3(130Rnd_338_Mag),
		ITEM_3(SmokeShell)
	};
	respawnMagazines[] += {
		ITEM_4(130Rnd_338_Mag),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_3(130Rnd_338_Mag),
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