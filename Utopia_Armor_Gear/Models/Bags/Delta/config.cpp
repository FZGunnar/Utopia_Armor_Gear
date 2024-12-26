class CfgPatches
{
	class Utopia_Armor_Gear
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Scripts",
			"DZ_Characters"
		};
		units[] ={};
		weapons[] = {};
	};
};
class cfgVehicles
{
	class Clothing;
	class Utopia_Delta_Base: Clothing
	{
		scope = 0;
		model = "Utopia_Armor_Gear\Models\Bags\Delta\Delta_G.p3d";
		simulation = "clothing";
		vehicleClass = "Clothing";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[] = 
        {
            "Clothing",
            "Back"
        };
		weight = 3000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {10,15};
		attachments[] = 
        {
            "Melee",
            "Shoulder"
        };
		hiddenSelections[] = 
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		repairableWithKits[] = {3,5,6};
		repairCosts[] = {20};
		class ClothingTypes
		{
			male = "Utopia_Armor_Gear\Models\Bags\Delta\Delta_M.p3d";
			female = "Utopia_Armor_Gear\Models\Bags\Delta\Delta_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
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
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Utopia_Delta_Black: Utopia_Delta_Base
	{
		scope = 2;
		displayName = "Black Delta Backpack";
		descriptionShort = "The MC Delta Backpack hold 2 gun and has 150 slots of storage";
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_Black_co.paa",
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_Black_co.paa",
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_Black_co.paa"
		};
	};
	class Utopia_Delta_MC: Utopia_Delta_Base
	{
		scope = 2;
		displayName = "MC Delta Backpack";
		descriptionShort = "The MC Delta Backpack hold 2 gun and has 150 slots of storage";
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_MC_co.paa",
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_MC_co.paa",
			"Utopia_Armor_Gear\Models\Bags\Delta\Textures\Delta_MC_co.paa"
		};
	};
};