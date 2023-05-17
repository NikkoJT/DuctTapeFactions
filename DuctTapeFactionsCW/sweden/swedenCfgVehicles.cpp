class APC_Wheeled_01_base_F;
class B_APC_Wheeled_01_base_F;
{
	class Turrets
	{
		class MainTurret
		{
			class ViewOptics;
			class Turrets
			{
				class CommanderOptics
				{
					class viewOptics;
				};
			};
		};
	};
};
class B_APC_Wheeled_01_cannon_F;
class njt_dtfcw_sweden_apc_01_wheeled_cannon_f_base : B_APC_Wheeled_01_cannon_F
{
	scope = 0;
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class ViewOptics : ViewOptics;
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics
				{
					class ViewOptics : ViewOptics;
				};
			};
		};
	};
};

class njt_dtfcw_sweden_apc_01_wheeled_cannon_f : njt_dtfcw_sweden_apc_01_wheeled_cannon_f_base
{
	displayName = "Patria AMV";
	scope = 2;
	faction = "njt_fc_sweden";
	hiddenSelectionsTextures[] = {
		"A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa"
	};
	crew = "njt_dtfcw_sweden_crew";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class ViewOptics : ViewOptics
			{
				thermalResolution[] = {720};
			};
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics
				{
					class ViewOptics : ViewOptics
					{
						thermalResolution[] = {720};
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
	
};

class njt_dtfcw_sweden_base : SoldierWB
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

class njt_dtfcw_sweden_rifleman : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_antitank_at4 : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_antitank_nlaw : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_medic : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_antitank_pzf84 : njt_dtfcw_sweden_base
{
	displayName = "Soldier (Heavy AT)";
	scope = 2;
	backpack = "B_Kitbag_sgg";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_pzf84_oli_feroz2x17
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
		gm_pzf84_oli_feroz2x17
	};
	magazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_4(gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf)
	};
	respawnMagazines[] += {
		ITEM_4(gm_20Rnd_762x51mm_B_DM111_g3_blk),
		ITEM_2(gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk),
		ITEM_2(16Rnd_9x21_Mag),
		ITEM_2(gm_handgrenade_frag_dm51a1),
		ITEM_2(SmokeShell),
		ITEM_4(gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf)
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

class njt_dtfcw_sweden_teamleader : njt_dtfcw_sweden_base
{
	displayName = "Team Leader";
	scope = 2;
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F
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
		gm_xx_facewear_scarf_01_grn
	};
	respawnLinkedItems[] += {
		gm_dk_headgear_m96_oli,
		V_CarrierRigKBT_01_light_Olive_F,
		gm_xx_facewear_scarf_01_grn
	};
	
};

class njt_dtfcw_sweden_squadleader : njt_dtfcw_sweden_base
{
	displayName = "Squad Leader";
	scope = 2;
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo_laser,
		hgun_P07_blk_F
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
		gm_ge_headgear_hat_boonie_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
	respawnLinkedItems[] += {
		gm_ge_headgear_hat_boonie_oli,
		V_CarrierRigKBT_01_light_Olive_F
	};
};

class njt_dtfcw_sweden_marksman : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_machinegunner : njt_dtfcw_sweden_base
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

class njt_dtfcw_sweden_rifleman_rto : njt_dtfcw_sweden_base
{
	displayName = "RTO";
	scope = 2;
	backpack = "gm_ge_backpack_sem35_oli";
	uniformClass = "U_B_CTRG_Soldier_urb_1_F";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
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

class njt_dtfcw_sweden_crew : njt_dtfcw_sweden_base
{
	displayName = "Crew";
	scope = 2;
	uniformClass = "U_B_CTRG_Soldier_urb_3_F";
	weapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F
	};
	respawnWeapons[] += {
		njt_gm_g3a4a1_ris_blk_holo,
		hgun_P07_blk_F,
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