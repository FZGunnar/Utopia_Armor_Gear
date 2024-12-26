class CfgPatches
{
	class Modular_Vests
	{
		units[]=
		{
			"Cage_Black"
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
	class Utopia_Cage_Base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Vests\Cage\Cage_G.p3d";
		attachments[]=
		{
			"MagazinePouch_1",
			"MagazinePouch_2",
			"MagazinePouch_3",
			"MagazinePouch_4",
			"IFAK_1",
			"WalkieTalkie"
		};
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
			male="Utopia_Armor_Gear\Models\Vests\Cage\Cage_M.p3d";
			female="Utopia_Armor_Gear\Models\Vests\Cage\Cage_F.p3d";
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
								"Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_destruct.rvmat"
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
						damage=0.30000001;
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
						damage=0.69999999;
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
	class Utopia_Cage_NoPlate: Utopia_Cage_Base
	{
		descriptionShort = "Tier 0 Cage Vest";
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

	class Utopia_Cage_BaseTier1: Utopia_Cage_Base
	{
		descriptionShort = "Tier 1 Cage Vest";
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

	class Utopia_Cage_BaseTier2: Utopia_Cage_Base
	{
		descriptionShort = "Tier 2 Cage Vest";
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

	class Utopia_Cage_BaseTier3: Utopia_Cage_Base
	{
		descriptionShort = "Tier 3 Cage Vest";
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

	class Utopia_Cage_Black_Tier0: Utopia_Cage_NoPlate
	{
		scope = 2;
		displayName = "Cage Vest - Tier 0";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_Black_co.paa" };
	};

	class Utopia_Cage_Black_Tier1: Utopia_Cage_BaseTier1
	{
		scope = 2;
		displayName = "Cage Vest - Tier 1";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_Black_co.paa" };
	};

	class Utopia_Cage_Black_Tier2: Utopia_Cage_BaseTier2
	{
		scope = 2;
		displayName = "Cage Vest - Tier 2";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_Black_co.paa" };
	};

	class Utopia_Cage_Black_Tier3: Utopia_Cage_BaseTier3
	{
		scope = 2;
		displayName = "Cage Vest - Tier 3";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\Cage\Textures\Cage_Black_co.paa" };
	};
};