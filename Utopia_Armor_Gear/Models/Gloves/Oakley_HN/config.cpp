class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[]=
		{
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

	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Utopia_Oakley_HN_Base: Clothing
	{
		displayName="Oakley_HN Gloves";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Oakley_HN_G.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		weight=130;
		itemSize[]={2,2};
		varWetMax=0.49000001;
		heatIsolation=0.5;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
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
								"DZ\Characters\gloves\data\WorkingGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_destruct.rvmat"
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
						damage=0.2;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Oakley_HN_M.p3d";
			female="Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Oakley_HN_F.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_Oakley_HN: Utopia_Oakley_HN_Base
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Textures\Oakley_HN_co.paa",
			"Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Textures\Oakley_HN_co.paa",
			"Utopia_Armor_Gear\Models\Gloves\Oakley_HN\Textures\Oakley_HN_co.paa"
		};
	};
};