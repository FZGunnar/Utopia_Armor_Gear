class CfgPatches
{
	class Utopia_AEM_Jacket
	{
		units[]=
		{
			"Utopia_AEM_Jacket_gray",
			"Utopia_AEM_Jacket_MC",
			"Utopia_AEM_Jacket_tan"
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
	class Utopia_AEM_Jacket_ColorBase: Clothing
	{
		scope=0;
		displayName="AEM01 TACTICAL";
		descriptionShort="AEM01 TACTICAL. Press and hold L to put up your hood";
		model="\Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\AEM_Tactical_G.p3d";
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
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket.rvmat"
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
								"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket.rvmat"
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
			male="\Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\AEM_Hoodup_M.p3d";
			female="\Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\AEM_Hoodup_F.p3d";
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
	class Utopia_AEM_Jacket_gray: Utopia_AEM_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Gray_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Gray_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Gray_co.paa"
		};
	};
	class Utopia_AEM_Jacket_MC: Utopia_AEM_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_MC_co.paa"
		};
	};
	class Utopia_AEM_Jacket_tan: Utopia_AEM_Jacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Tan_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Tan_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\AEM01_Tactical\Textures\AEM_Jacket_Tan_co.paa"
		};
	};
};