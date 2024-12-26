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
	class Utopia_TYR_Gunfighter_Base: Clothing
	{
		scope=0;
		displayName="TYR_Gunfighter Belt";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\TYR_Gunfighter_G.p3d";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing","Hips"
		};
		rotationFlags=64;
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={10,10};
		quickBarBonus=1;
		varWetMax=0.39;
		heatIsolation=0.79;
		repairableWithKits[]={3};
		repairCosts[]={25};
		visibilityModifier=0.85;
		soundAttType="LeatherJacket";
		hiddenSelections[]=
		{
			"camoMale",
			"camoGround",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
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
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_destruct.rvmat"
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
						damage=0.69;
					};
					class Blood
					{
						damage=0.69;
					};
					class Shock
					{
						damage=0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.71;
					};
					class Blood
					{
						damage=0.71;
					};
					class Shock
					{
						damage=0.85;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\TYR_Gunfighter_m.p3d";
			female="Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\TYR_Gunfighter_f.p3d";
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
	class Utopia_TYR_Gunfighter_Belt_Black: Utopia_TYR_Gunfighter_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_Black_co.paa",
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_Black_co.paa",
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_Black_co.paa"
		};
	};
	class Utopia_TYR_Gunfighter_Belt_OD: Utopia_TYR_Gunfighter_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_OD_co.paa",
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_OD_co.paa",
			"Utopia_Armor_Gear\Models\Belts\TYR_Gunfighter\Textures\Belt_TYR_OD_co.paa"
		};
	};
};