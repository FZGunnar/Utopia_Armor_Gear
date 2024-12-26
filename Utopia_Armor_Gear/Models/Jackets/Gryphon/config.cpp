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
	class Utopia_Arcteryx_Gryphon_ColorBase: Clothing
	{
		scope=0;
		displayName="Arcteryx Gryphon";
		descriptionShort="Arcteryx Gryphon. Press and hold L to put up your hood";
		model="\Utopia_Armor_Gear\Models\Jackets\Gryphon\Arcteryx_Gryphon_G.p3d";
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
								"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon.rvmat"
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
			male="\Utopia_Armor_Gear\Models\Jackets\Gryphon\Arcteryx_Gryphon_M.p3d";
			female="\Utopia_Armor_Gear\Models\Jackets\Gryphon\Arcteryx_Gryphon_F.p3d";
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
	class Utopia_Arcteryx_Gryphon_Green: Utopia_Arcteryx_Gryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_co.paa"
		};
	};
	class Utopia_Arcteryx_Gryphon_MC: Utopia_Arcteryx_Gryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_MC_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_MC_co.paa"
		};
	};
	class Utopia_Arcteryx_Gryphon_Black: Utopia_Arcteryx_Gryphon_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_Black_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_Black_co.paa",
			"Utopia_Armor_Gear\Models\Jackets\Gryphon\Textures\Arcteryx_Gryphon_Black_co.paa"
		};
	};
};