class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[]={};
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
	class Utopia_G3_ColorBase: Clothing
	{
		scope=0;
		displayName="G3 Jacket";
		descriptionShort="G3. Press and hold L to put up your hood";
		model="\Utopia_Armor_Gear\Models\Jackets\G3\G3_G.p3d";
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
								"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt.rvmat"
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
			male="\Utopia_Armor_Gear\Models\Jackets\G3\G3_M.p3d";
			female="\Utopia_Armor_Gear\Models\Jackets\G3\G3_F.p3d";
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
	class Utopia_G3_Black: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black.paa"
		};
	};
	class Utopia_G3_Black2: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Black2.paa"
		};
	};
	class Utopia_G3_Camo: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo.paa"
		};
	};
	class Utopia_G3_Camo2: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_camo2.paa"
		};
	};
	class Utopia_G3_Green: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green.paa"
		};
	};
	class Utopia_G3_Green2: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green2.paa"
		};
	};
	class Utopia_G3_Green3: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green3.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green3.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_shirt_Green3.paa"
		};
	};
	class Utopia_G3_Grey: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey.paa"
		};
	};
	class Utopia_G3_Grey2: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey2.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_Grey2.paa"
		};
	};
	class Utopia_G3_MC: Utopia_G3_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_MC.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_MC.paa",
			"Utopia_Armor_Gear\Models\Jackets\G3\Textures\cryeG3_Shirt_MC.paa"
		};
	};
};