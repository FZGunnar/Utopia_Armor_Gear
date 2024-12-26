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
	class Utopia_Walkers_Razor_Base: Clothing
	{
		scope=0;
		displayName="Walkers_Razor";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Walkers_Razor_G.p3d";
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
		attachments[]=
		{
			"BatteryD"
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
								"Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Textures\Walkers_Razor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Textures\Walkers_Razor.rvmat"
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
			male="Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Walkers_Razor_M.p3d";
			female="Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Walkers_Razor_F.p3d";
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn = 1;
			autoSwitchOffWhenInCargo = 0;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
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
	class Utopia_Walkers_Razor: Utopia_Walkers_Razor_Base
	{
		scope = 2;
		displayName = "Walkers_Razor";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Textures\Walkers_Razor_co.paa",
			"Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Textures\Walkers_Razor_co.paa",
			"Utopia_Armor_Gear\Models\Headphones\Walkers_Razor\Textures\Walkers_Razor_co.paa"
		};
	};
};