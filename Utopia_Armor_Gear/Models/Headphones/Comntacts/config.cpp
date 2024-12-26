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
	class Utopia_Peltor_Comtac_Base: Clothing
	{
		scope=0;
		displayName="Peltor_Comtac";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Headphones\Comntacts\Peltor_Comtac_G.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=1500;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.2;
		visibilityModifier=0.69999999;
		headSelectionsToHide[]=
		{
			"Clipping_Helmet"
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=85;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Utopia_Armor_Gear\Models\Headphones\Comntacts\Textures\comntacts.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Headphones\Comntacts\Textures\comntacts.rvmat"
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
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
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
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
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
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Headphones\Comntacts\Peltor_Comtac_M.p3d";
			female="Utopia_Armor_Gear\Models\Headphones\Comntacts\Peltor_Comtac_F.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_Peltor_Comtac_Camo: Utopia_Peltor_Comtac_Base
	{
		scope = 2;
		displayName = "Peltor_Comtac Camo";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Headphones\Comntacts\Textures\comntacts_co.paa",
			"Utopia_Armor_Gear\Models\Headphones\Comntacts\Textures\comntacts_co.paa",
			"Utopia_Armor_Gear\Models\Headphones\Comntacts\Textures\comntacts_co.paa"
		};
	};
};