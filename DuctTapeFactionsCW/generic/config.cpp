class CfgPatches
{
	class njt_dtfcw_generic
	{
		units[] = {
			"njt_dtfcw_bag_hmg_02_bare",
			"njt_dtfcw_bag_tripodlow",
			"njt_dtfcw_hmg_02_bare"
		};
		weapons[] = {};
		requiredVersion = 0.2;
		requiredAddons[] = { "gm_weapons_attachments_side_surefire","CSLA", "A3_Weapons_F_Launchers_NLAW", "A3_Armor_F_Beta_APC_Wheeled_01","A3_Static_F_HMG_02"};
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
	#include "genericCfgVehicles.cpp"
};