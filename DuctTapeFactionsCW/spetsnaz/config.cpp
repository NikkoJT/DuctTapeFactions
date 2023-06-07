class CfgPatches
{
	class njt_dtfcw_spetsnaz
	{
		units[] = { 
			"njt_dtfcw_gm_uaz469_cargo_spetsnaz",
			"njt_dtfcw_gm_uaz469_dshkm_spetsnaz",
			"njt_dtfcw_spetsnaz_mi24v",
			"njt_dtfcw_spetsnaz_rifleman",
			"njt_dtfcw_spetsnaz_antitank_rpg18",
			"njt_dtfcw_spetsnaz_antitank_rpg7",
			"njt_dtfcw_spetsnaz_machinegunner",
			"njt_dtfcw_spetsnaz_teamleader",
			"njt_dtfcw_spetsnaz_squadleader",
			"njt_dtfcw_spetsnaz_medic",
			"njt_dtfcw_spetsnaz_marksman",
			"njt_dtfcw_spetsnaz_engineer",
			"njt_dtfcw_spetsnaz_jtac",
			"njt_dtfcw_spetsnaz_demo",
			"njt_dtfcw_spetsnaz_helicrew",
			"njt_dtfcw_spetsnaz_gunner_mmg",
			"njt_dtfcw_spetsnaz_assistant_mmg",
			"njt_dtfcw_spetsnaz_rifleman_night",
			"njt_dtfcw_spetsnaz_marksman_night",
			"njt_dtfcw_spetsnaz_teamleader_night",
			"njt_dtfcw_spetsnaz_machinegunner_night",
			"njt_dtfcw_spetsnaz_antitank_rpg7_night",
			"njt_dtfcw_spetsnaz_engineer_night",
			"njt_dtfcw_spetsnaz_demo_night",
			"njt_dtfcw_spetsnaz_antitank_9k111",
			"njt_dtfcw_spetsnaz_medic_night",
			"njt_dtfcw_spetsnaz_
		};
		weapons[] = {
		};
		requiredVersion = 0.2;
		requiredAddons[] = { "gm_weapons_attachments_side_surefire","CSLA", "A3_Weapons_F_Launchers_NLAW", "A3_Armor_F_Beta_APC_Wheeled_01","A3_Static_F_HMG_02","njt_dtfcw_assets","njt_dtfcw_sweden"};
		author = "NikkoJT";
	};
};

// Macros
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a


class cfgVehicles
{
	
	#include "spetsnazCfgVehicles.cpp"
};


class cfgWeapons
{
	class Default;
	class rifleCore;
	class rifle;
	class rifle_base_F;
	class gm_rifle_base;
	
	class LauncherCore;
	class Launcher;
	class Launcher_Base_F;
	
	#include "spetsnazCfgWeapons.cpp"
};

class cfgGroups
{
	class West
	{
		class gm_ur_army
		{
			name = "Soviet Union";
			#include "spetsnazCfgGroups.cpp"
		};
	};
};