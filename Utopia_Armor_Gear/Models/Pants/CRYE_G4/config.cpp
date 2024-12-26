class CfgPatches
{
	class StarWars_AnakinSkywalker
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
	class Utopia_CRYE_G4_Pants_Base: Clothing
	{
		displayName="CRYE G4 Pants";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Pants\CRYE_G4\CRYE_G4_Pants_g.p3d";
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
			male="Utopia_Armor_Gear\Models\Pants\CRYE_G4\CRYE_G4_Pants_m.p3d";
			female="Utopia_Armor_Gear\Models\Pants\CRYE_G4\CRYE_G4_Pants_f.p3d";
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
	class Utopia_CRYE_G4_Pants_MC: Utopia_CRYE_G4_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_MC_co",
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_MC_co",
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_MC_co"
		};
	};
	class Utopia_CRYE_G4_Pants_Black: Utopia_CRYE_G4_Pants_Base
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_Black_co",
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_Black_co",
			"Utopia_Armor_Gear\Models\Pants\CRYE_G4\Textures\CRYE_G4_Pants_Black_co"
		};
	};
};