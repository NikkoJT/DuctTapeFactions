class CfgPatches
{
	class njt_dtfcw_sweden
	{
		units[] = { 
			"njt_dtfcw_sweden_apc_01_wheeled_cannon_f",
			"njt_dtfcw_sweden_rifleman",
			"njt_dtfcw_sweden_antitank_at4",
			"njt_dtfcw_sweden_antitank_nlaw",
			"njt_dtfcw_sweden_medic",
			"njt_dtfcw_sweden_antitank_maaws",
			"njt_dtfcw_sweden_teamleader",
			"njt_dtfcw_sweden_squadleader",
			"njt_dtfcw_sweden_marksman",
			"njt_dtfcw_sweden_machinegunner",
			"njt_dtfcw_sweden_rifleman_rto",
			"njt_dtfcw_sweden_crew",
			"njt_dtfcw_sweden_jtac",
			"njt_dtfcw_sweden_assistant_maaws",
			"njt_dtfcw_sweden_antitank_tow",
			"njt_dtfcw_bag_tow_sweden",
			"njt_dtfcw_sweden_tow",
			"njt_dtfcw_sweden_assistant_tow",
			"njt_dtfcw_sweden_helicrew",
			"njt_dtfcw_sweden_uh60",
			"njt_dtfcw_sweden_uh60m240",
			"njt_dtfcw_sweden_bo105",
			"njt_dtfcw_sweden_gunner_hmg",
			"njt_dtfcw_sweden_assistant_hmg",
			"njt_dtfcw_sweden_gunner_mmg",
			"njt_dtfcw_sweden_assistant_mmg",
			"njt_dtfcw_sweden_demo",
			"njt_dtfcw_sweden_engineer",
			"njt_dtfcw_sweden_sfsoldier",
			"njt_dtfcw_sweden_sfteamleader",
			"njt_dtfcw_sweden_sfantitank_nlaw",
			"njt_dtfcw_sweden_sfmarksman",
			"njt_dtfcw_sweden_sfbreacher",
			"njt_dtfcw_sweden_sfjtac",
			"njt_dtfcw_sweden_sfmachinegunner",
			"njt_dtfcw_sweden_sfmedic"
		};
		weapons[] = {
			"njt_dtfcw_nlaw_disposable",
			"njt_dtfcw_lmg_03_f"
		};
		requiredVersion = 0.2;
		requiredAddons[] = { "gm_weapons_attachments_side_surefire","CSLA", "A3_Weapons_F_Launchers_NLAW", "A3_Armor_F_Beta_APC_Wheeled_01","A3_Static_F_HMG_02","njt_dtfcw_assets"};
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
	
	#include "swedenCfgVehicles.cpp"
};

class cfgWorlds
{
	class genericNames
	{
		#include "swedenGenericNames.cpp"
	};
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
	
	#include "swedenCfgWeapons.cpp"
};

class cfgMagazines
{
	
	#include "swedenCfgMagazines.cpp"
	
};

class cfgFactionClasses
{
	class njt_fc_sweden
	{
		displayName = "Sweden 2000s";
		author = "NikkoJT";
		side = 1;
		priority = 1;
	};
};

class cfgGroups
{
	class West
	{
		class njt_dtfcw_sweden
		{
			name = "Sweden 2000s";
			#include "swedenCfgGroups.cpp"
		};
	};
};

class gm_VehicleInsignias_base;
class gm_vehicleInsignias_nations : gm_VehicleInsignias_base
{
	class njt_dtfcw_insignia_sweden
	{
		author = "NikkoJT";
		name = "Sweden";
		picture = "";
		texture = "\DuctTapeFactionsCW\assets\insignia_sweden_ca.paa";
		value = "njt_dtfcw_insignia_sweden";
	};
};