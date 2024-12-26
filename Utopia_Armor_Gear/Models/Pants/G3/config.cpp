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

class cfgVehicles
{
	class Clothing;
	class Utopia_G3_Pants_Base: Clothing
	{
		displayName="G3 Pants";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Pants\G3\G3_g.p3d";
		ContinuouActions[]=
		{
		};
		inventorySlot[]=
		{
			"Legs"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		rotationFlags=64;
		weight=530;
		itemSize[]={4,4};
		itemsCargoSize[]={10,35};
		quickBarBonus=1;
		varWetMax=0.39;
		heatIsolation=0.79;
		repairableWithKits[]={3,4};
		repairCosts[]={25};
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
								""
							}
						},
						
						{
							0.7,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat"
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
				class Infected
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
			male="Utopia_Armor_Gear\Models\Pants\G3\G3_m.p3d";
			female="Utopia_Armor_Gear\Models\Pants\G3\G3_f.p3d";
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
	class Utopia_G3_Pants_Black: Utopia_G3_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black"
		};
	};
	class Utopia_G3_Pants_Black_Camo: Utopia_G3_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black_Camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black_Camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Black_Camo"
		};
	};
	class Utopia_G3_Pants_Camo: Utopia_G3_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_camo"
		};
	};
	class Utopia_G3_Pants_Green: Utopia_G3_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green"
		};
	};
	class Utopia_G3_Pants_Green_Camo: Utopia_G3_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green_Camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green_Camo",
			"Utopia_Armor_Gear\Models\Pants\G3\Textures\cryeG3_Green_Camo"
		};
	};
};