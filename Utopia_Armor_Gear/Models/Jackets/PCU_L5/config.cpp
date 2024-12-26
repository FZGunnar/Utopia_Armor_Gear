class CfgPatches
{
	class Utopia_PCU_L5_Jacket
	{
		units[]=
		{
			"Utopia_PCU_L5_Jacket_gray",
			"Utopia_PCU_L5_Jacket_MC",
			"Utopia_PCU_L5_Jacket_Black"
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
	class Utopia_PCU_L5_ColorBase: Clothing
	{
		scope=0;
		displayName="PCU L5 Jacket";
		descriptionShort="PCU L5. Press and hold L to put up your hood";
		model="\Utopia_Armor_Gear\Models\Jackets\PCU_L5\PCU_L5_G.p3d";
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
			"camoMale",
			"camoFemale"
		};
		simpleHiddenSelections[]=
		{
			"selection_Down",
			"selection_Up"
		};
		hiddenSelectionsMaterials[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU.rvmat"
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
								"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU.rvmat"
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
			male="\Utopia_Armor_Gear\Models\Jackets\PCU_L5\PCU_L5_M.p3d";
			female="\Utopia_Armor_Gear\Models\Jackets\PCU_L5\PCU_L5_F.p3d";
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
	class Utopia_PCU_L5_Jacket_Gray: Utopia_PCU_L5_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Grey_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Grey_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Grey_co.paa"
		};
	};
	class Utopia_PCU_L5_Jacket_MC: Utopia_PCU_L5_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_MC_co.paa"
		};
	};
	class Utopia_PCU_L5_Jacket_Black: Utopia_PCU_L5_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Black_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Black_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\PCU_L5\Textures\PCU_Black_co.paa"
		};
	};
};