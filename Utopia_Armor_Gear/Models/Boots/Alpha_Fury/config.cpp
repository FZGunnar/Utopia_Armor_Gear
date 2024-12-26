class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[]=
		{
			"Alpha_Fury_Boots"
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
	class HikingBoots_ColorBase;
	class Utopia_Alpha_Fury_Boots_base: HikingBoots_ColorBase
	{
		displayName="Alpha Fury Boots";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Alpha_Fury_G.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={4,4};
		weight=400;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1.89999998;
		repairableWithKits[]={3,4};
		repairCosts[]={25};
		soundAttType="Boots";
		soundImpactType="default";
		visibilityModifier=0.80000001;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Alpha_Fury_M.p3d";
			female="Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Alpha_Fury_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
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
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0.5;
					};
					class Shock
					{
						damage=0.5;
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
						damage=0.5;
					};
					class Shock
					{
						damage=0.5;
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
					soundSet="AthleticBoots_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticBoots_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_Alpha_Fury_Boots_Clean: Utopia_Alpha_Fury_Boots_base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\New\Fury_co.paa",
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\New\Fury_co.paa",
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\New\Fury_co.paa"
		};
	};
	class Utopia_Alpha_Fury_Boots_Dirty: Utopia_Alpha_Fury_Boots_base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\Dirty\Fury_co.paa",
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\Dirty\Fury_co.paa",
			"Utopia_Armor_Gear\Models\Boots\Alpha_Fury\Textures\Dirty\Fury_co.paa"
		};
	};
};