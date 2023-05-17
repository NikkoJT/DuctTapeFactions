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
	class B_HMG_02_weapon_F : Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class StaticWeapon;
	class StaticMGWeapon;
	class HMG_02_base_F;
	class B_HMG_02_F : HMG_02_base_F
	{
		class assembleInfo;
		class animationSources
		{
			class hide_rail;
			class hide_shield;
		};
	};
	
	class njt_dtfcw_hmg_02_f_base : B_HMG_02_F
	{
		scope = 0;
	}
	
	class njt_dtfcw_hmg_02_bare : njt_dtfcw_hmg_02_f_base
	{
		scope = 2;
		crew = "njt_dtfcw_sweden_rifleman";
		faction = "njt_fc_sweden";
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"njt_dtfcw_bag_tripodLow","njt_dtfcw_bag_hmg_02_bare"};
		};
		class animationSources : animationSources
		{
			class hide_rail : hide_rail
			{
				initPhase = 1;
			};
			class hide_shield : hide_shield
			{
				initPhase = 1;
			};
		};
		
	};
	
	class njt_dtfcw_HMG_02_support_f_base : B_HMG_02_support_F
	{
		scope = 0;
	};
	
	class njt_dtfcw_bag_tripodLow : njt_dtfcw_HMG_02_support_f_base
	{
		displayName = "Folded Tripod (Low, Green)";
		scope = 2;
		faction = "BLU_F";
		hiddenSelections[] = {
			"tex_01","tex_02","cord_01","rank_01","armband_l","armband_r","clan","insignia","letter_01","letter_02","letter_03","letter_04","letter_05","letter_06","letter_07","letter_08","letter_09","letter_10"
		};
		hiddenSelectionsTextures[] = {
			"#(argb,8,8,3)color(0.235294,0.25098,0.184314,1.0,CO)"
		};
		model = "\gm\gm_characters\gm_ge_characters\gm_ge_backpack_90";
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_army_backpack_90_oli_ca";
		dlc = "GM";
	};

	class njt_dtfcw_HMG_02_weapon_F_base : B_HMG_02_weapon_F
	{
		scope = 0;
	};

	class njt_dtfcw_bag_HMG_02_bare : njt_dtfcw_HMG_02_weapon_F_base
	{
		displayName = "M2 HMG .50 (Bare)";
		scope = 2;
		faction = "BLU_F";
		hiddenSelections[] = {
			"tex_01","tex_02","cord_01","rank_01","armband_l","armband_r","clan","insignia","letter_01","letter_02","letter_03","letter_04","letter_05","letter_06","letter_07","letter_08","letter_09","letter_10"
		};
		hiddenSelectionsTextures[] = {
			"#(argb,8,8,3)color(0.235294,0.25098,0.184314,1.0,CO)"
		};
		model = "\gm\gm_characters\gm_ge_characters\gm_ge_backpack_90";
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_army_backpack_90_oli_ca";
		dlc = "GM";
		class assembleInfo : assembleInfo
		{
			base[] = {
				"B_HMG_02_support_F","O_HMG_02_support_F","I_HMG_02_support_F","I_E_HMG_02_support_F","I_C_HMG_02_support_F","I_G_HMG_02_support_F","O_G_HMG_02_support_F","B_G_HMG_02_support_F"
			};
			assembleTo = "njt_dtfcw_hmg_02_bare";
		};
	};