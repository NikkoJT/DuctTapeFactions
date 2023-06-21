class US85_weaponBase;
class US85_FAL_BASE;
class US85_FAL;
class gm_m16_base;
class gm_m16a2_base;
class gm_m16a2_blk;

class njt_dtfcw_gm_m16a2_blk_4x20 : gm_m16a2_blk
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "gm_colt4x20_ar15_blk";
			slot = "CowsSlot";
		};
	};
};

class njt_dtfcw_us85_fal_scope_bipod : US85_FAL
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "US85_scFAL";
			slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
			item = "US85_FALbpd";
			slot = "UnderBarrelSlot";
		};
	};
};