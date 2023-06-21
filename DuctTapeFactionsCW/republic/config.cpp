class CfgPatches
{
	class njt_dtfcw_republic
	{
		units[] = { 
			
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
	
	#include "republicCfgVehicles.cpp"
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
	
	#include "republicCfgWeapons.cpp"
};

class cfgGroups
{
	class Indep
	{
		class njt_dtfcw_republic
		{
			name = "Colonial Republic";
			#include "republicCfgGroups.cpp"
		};
	};
};