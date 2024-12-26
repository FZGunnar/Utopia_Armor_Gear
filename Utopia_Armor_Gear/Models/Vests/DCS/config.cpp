class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Utopia_WAS_DCS_Base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Vests\DCS\WAS_DCS_G.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		weight=9000;
		itemSize[]={4,3};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={3,8};
		repairCosts[]={75,50};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Vests\DCS\WAS_DCS.p3d";
			female="Utopia_Armor_Gear\Models\Vests\DCS\WAS_DCS.p3d";
		};
		attachments[]=
		{
			"Armor_Plate"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=325;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.16;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class Utopia_WAS_DCS_NoPlate: Utopia_WAS_DCS_Base
	{
		descriptionShort = "Tier 0 WAS DCS Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.90; 
					}; 
				};
			};
		};
	};

	class Utopia_WAS_DCS_BaseTier1: Utopia_WAS_DCS_Base
	{
		descriptionShort = "Tier 1 WAS DCS Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.70; 
					}; 
				};
			};
		};
	};

	class Utopia_WAS_DCS_BaseTier2: Utopia_WAS_DCS_Base
	{
		descriptionShort = "Tier 2 WAS DCS Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.50; 
					}; 
				};
			};
		};
	};

	class Utopia_WAS_DCS_BaseTier3: Utopia_WAS_DCS_Base
	{
		descriptionShort = "Tier 3 WAS DCS Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.30; 
					}; 
				};
			};
		};
	};

	// Tiered Variants
	class Utopia_WAS_DCS_Camo_Tier1: Utopia_WAS_DCS_BaseTier1
	{
		scope = 2;
		displayName = "WAS DCS Camo - Tier 1";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_co.paa" };
	};

	class Utopia_WAS_DCS_Camo_Tier2: Utopia_WAS_DCS_BaseTier2
	{
		scope = 2;
		displayName = "WAS DCS Camo - Tier 2";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_co.paa" };
	};

	class Utopia_WAS_DCS_Camo_Tier3: Utopia_WAS_DCS_BaseTier3
	{
		scope = 2;
		displayName = "WAS DCS Camo - Tier 3";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_co.paa" };
	};

	// Black Variants
	class Utopia_WAS_DCS_Black_Tier1: Utopia_WAS_DCS_BaseTier1
	{
		scope = 2;
		displayName = "WAS DCS Black - Tier 1";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_Black_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_Black_co.paa" };
	};

	class Utopia_WAS_DCS_Black_Tier2: Utopia_WAS_DCS_BaseTier2
	{
		scope = 2;
		displayName = "WAS DCS Black - Tier 2";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_Black_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_Black_co.paa" };
	};

	class Utopia_WAS_DCS_Black_Tier3: Utopia_WAS_DCS_BaseTier3
	{
		scope = 2;
		displayName = "WAS DCS Black - Tier 3";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_Black_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_Black_co.paa" };
	};

	// ATACS Variants
	class Utopia_WAS_DCS_ATACS_Tier1: Utopia_WAS_DCS_BaseTier1
	{
		scope = 2;
		displayName = "WAS DCS ATACS - Tier 1";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_ATACS_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_ATACS_co.paa" };
	};

	class Utopia_WAS_DCS_ATACS_Tier2: Utopia_WAS_DCS_BaseTier2
	{
		scope = 2;
		displayName = "WAS DCS ATACS - Tier 2";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_ATACS_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_ATACS_co.paa" };
	};

	class Utopia_WAS_DCS_ATACS_Tier3: Utopia_WAS_DCS_BaseTier3
	{
		scope = 2;
		displayName = "WAS DCS ATACS - Tier 3";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_ATACS_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_ATACS_co.paa" };
	};

	// OD Variants
	class Utopia_WAS_DCS_OD_Tier1: Utopia_WAS_DCS_BaseTier1
	{
		scope = 2;
		displayName = "WAS DCS OD - Tier 1";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_OD_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_OD_co.paa" };
	};

	class Utopia_WAS_DCS_OD_Tier2: Utopia_WAS_DCS_BaseTier2
	{
		scope = 2;
		displayName = "WAS DCS OD - Tier 2";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_OD_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_OD_co.paa" };
	};

	class Utopia_WAS_DCS_OD_Tier3: Utopia_WAS_DCS_BaseTier3
	{
		scope = 2;
		displayName = "WAS DCS OD - Tier 3";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_OD_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_OD_co.paa" };
	};

	class Utopia_WAS_DCS_Camo_Tier0: Utopia_WAS_DCS_NoPlate
	{
		scope = 2;
		displayName = "WAS DCS Camo - Tier 0";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_co.paa" };
	};

	class Utopia_WAS_DCS_OD_Tier0: Utopia_WAS_DCS_NoPlate
	{
		scope = 2;
		displayName = "WAS DCS OD - Tier 0";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_OD_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_OD_co.paa" };
	};

	class Utopia_WAS_DCS_ATACS_Tier0: Utopia_WAS_DCS_NoPlate
	{
		scope = 2;
		displayName = "WAS DCS ATACS - Tier 0";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_ATACS_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_ATACS_co.paa" };
	};

	class Utopia_WAS_DCS_Black_Tier0: Utopia_WAS_DCS_NoPlate
	{
		scope = 2;
		displayName = "WAS DCS Black - Tier 0";
		hiddenSelectionsTextures[] = { "utopia_armor_gear\models\vests\dcs\textures\wasPro_Black_co.paa", "utopia_armor_gear\models\vests\dcs\textures\wasPC_Black_co.paa" };
	};
	
};