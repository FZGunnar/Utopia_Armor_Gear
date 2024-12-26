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
	class Utopia_Acteryx_base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Masks\Acteryx\Arcteryx_G.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,2};
		ragQuantity = 1;
		varWetMax = 1;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Masks\Acteryx\Arcteryx_M.p3d";
			female="Utopia_Armor_Gear\Models\Masks\Acteryx\Arcteryx_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Utopia_Armor_Gear\Models\Masks\Acteryx\Textures\Arcteryx_Balaclava.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Masks\Acteryx\Textures\Arcteryx_Balaclava.rvmat"
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
		};
		class Protection
		{
			biological=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_Acteryx: Utopia_Acteryx_base
	{
		scope = 2;
		displayName = "Acteryx";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Masks\Acteryx\Textures\Arcteryx_Balaclava_co.paa",
			"Utopia_Armor_Gear\Models\Masks\Acteryx\Textures\Arcteryx_Balaclava_co.paa",
			"Utopia_Armor_Gear\Models\Masks\Acteryx\Textures\Arcteryx_Balaclava_co.paa"
		};
	};
};