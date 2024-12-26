class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Characters_Vests",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Headgear",
            "DZ_Scripts",
            "DZ_Characters",
            "DZ_Gear_Drinks",
            "DZ_Gear_Medical",
            "DZ_Gear_Containers",
            "DZ_Radio",
            "DZ_Gear_Optics",
            "DZ_Characters_Glasses"
        };
	};
};
class cfgVehicles
{
	class Clothing;
	class Utopia_NeckGaiter_base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Masks\NeckGaiter\NeckGaiter_G.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		descriptionShort = "";
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_NeckGaiter"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Masks\NeckGaiter\NeckGaiter_M.p3d";
			female="Utopia_Armor_Gear\Models\Masks\NeckGaiter\NeckGaiter_F.p3d";
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
								"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter_destruct.rvmat"
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
	class Utopia_NeckGaiter_Black: Utopia_NeckGaiter_base
	{
		scope = 2;
		displayName = "NeckGaiter Black";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Masks\NeckGaiter\Textures\NeckGaiter_Black_co.paa"
		};
	};
};