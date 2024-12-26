class CfgPatches
{
	class Utopia_G4_Shirt
	{
		units[]=
		{
			"Utopia_G4_Shirt_gray",
			"Utopia_G4_Shirt_MC",
			"Utopia_G4_Shirt_tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Utopia_G4_Shirt_ColorBase: Clothing
	{
		scope=0;
		displayName="AEM01 TACTICAL";
		descriptionShort="AEM01 TACTICAL. Press and hold L to put up your hood";
		model="\Utopia_Armor_Gear\Models\Jackets\CRYE_G4\G4_Shirt_G.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=270;
		itemSize[]={5,4};
		itemsCargoSize[]={7,6};
		quickBarBonus=1;
		varWetMax=0.69999999;
		heatIsolation=0.5;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale"
		};
		simpleHiddenSelections[]=
		{
			"selection_Down",
			"selection_Up"
		};
		hiddenSelectionsMaterials[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\CRYE_G4\Textures\CRYE_G4_Shirt.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\CRYE_G4\Textures\CRYE_G4_Shirt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\CRYE_G4\Textures\CRYE_G4_Shirt.rvmat"
							}
						},
						
						{
							0.5,
							
							{}
						},
						
						{
							0.30000001,
							
							{}
						},
						
						{
							0,
							
							{}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\Utopia_Armor_Gear\Models\Jackets\CRYE_G4\G4_Shirt_M.p3d";
			female="\Utopia_Armor_Gear\Models\Jackets\CRYE_G4\G4_Shirt_F.p3d";
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
	class Utopia_G4_Shirt_Black: Utopia_G4_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\CRYE_G4\Textures\CRYE_G4_Shirt_Black_co.paa"
		};
	};
	class Utopia_G4_Shirt_MC: Utopia_G4_Shirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\CRYE_G4\Textures\CRYE_G4_Shirt_MC_co.paa"
		};
	};
};