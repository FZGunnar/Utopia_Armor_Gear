class CfgPatches
{
	class Modular_Vests
	{
		units[]=
		{
			"6B13_Black"
		};
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
	class Utopia_6B13_Base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Vests\6B13\6B13_g.p3d";
		descriptionShort="35% Health Protection 100% Shock Protection";
		inventorySlot[]=
		{
			"Vest"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		weight=9000;
		itemSize[]={4,3};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={3,8};
		repairCosts[]={75,50};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Vests\6B13\6B13_M.p3d";
			female="Utopia_Armor_Gear\Models\Vests\6B13\6B13_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
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
						damage=0.30;
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
						damage=100;
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
	class Utopia_6B13_NoPlate: Utopia_6B13_Base
	{
		descriptionShort = "Tier 0 6B13 Vest";
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

	class Utopia_6B13_BaseTier1: Utopia_6B13_Base
	{
		descriptionShort = "Tier 1 6B13 Vest";
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

	class Utopia_6B13_BaseTier2: Utopia_6B13_Base
	{
		descriptionShort = "Tier 2 6B13 Vest";
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

	class Utopia_6B13_BaseTier3: Utopia_6B13_Base
	{
		descriptionShort = "Tier 3 6B13 Vest";
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

	class Utopia_6B13_Flora_Tier1: Utopia_6B13_BaseTier1
	{
		scope = 2;
		displayName = "6B13 Flora Vest - Tier 1";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa"
		};
	};

	class Utopia_6B13_Flora_Tier2: Utopia_6B13_BaseTier2
	{
		scope = 2;
		displayName = "6B13 Flora Vest - Tier 2";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa"
		};
	};

	class Utopia_6B13_Flora_Tier3: Utopia_6B13_BaseTier3
	{
		scope = 2;
		displayName = "6B13 Flora Vest - Tier 3";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6B13_Flora_co.paa"
		};
	};

	class Utopia_6B13_Desert_Tier1: Utopia_6B13_BaseTier1
	{
		scope = 2;
		displayName = "6B13 Desert Vest - Tier 1";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa"
		};
	};

	class Utopia_6B13_Desert_Tier2: Utopia_6B13_BaseTier2
	{
		scope = 2;
		displayName = "6B13 Desert Vest - Tier 2";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa"
		};
	};

	class Utopia_6B13_Desert_Tier3: Utopia_6B13_BaseTier3
	{
		scope = 2;
		displayName = "6B13 Desert Vest - Tier 3";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Desert_co.paa"
		};
	};

	class Utopia_6B13_Pixel_Tier1: Utopia_6B13_BaseTier1
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 1";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};

	class Utopia_6B13_Pixel_Tier2: Utopia_6B13_BaseTier2
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 2";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};

	class Utopia_6B13_Pixel_Tier3: Utopia_6B13_BaseTier3
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 3";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};

	class Utopia_6B13_Flora_Tier0: Utopia_6B13_NoPlate
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 0";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};

	class Utopia_6B13_Desert_Tier0: Utopia_6B13_NoPlate
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 0";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};

	class Utopia_6B13_Pixel_Tier0: Utopia_6B13_NoPlate
	{
		scope = 2;
		displayName = "6B13 Pixel Vest - Tier 0";
		hiddenSelectionsTextures[] =
		{
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa",
			"Utopia_Armor_Gear\Models\Vests\6B13\Textures\6b13_Pixel_co.paa"
		};
	};
};