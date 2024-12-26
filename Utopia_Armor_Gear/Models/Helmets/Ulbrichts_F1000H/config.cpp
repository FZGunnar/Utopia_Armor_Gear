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
class CfgVehicles
{
	class Clothing;
	class Utopia_Ulbrichts_F1000H_Base: Clothing
	{
		scope=0;
		displayName="Ulbrichts_F1000H";
		descriptionShort="";
		model="Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Ulbrichts_F1000H_G.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=1500;
		itemSize[]={4,3};
		varWetMax=0.249;
		heatIsolation=0.2;
		visibilityModifier=0.69999999;
		headSelectionsToHide[]=
		{
			"Clipping_Helmet"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=85;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55000001;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Ulbrichts_F1000H_M.p3d";
			female="Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Ulbrichts_F1000H_M.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_Ulbrichts_F1000H_Black: Utopia_Ulbrichts_F1000H_Base
	{
		scope = 2;
		displayName = "Ulbrichts_F1000H Black";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Textures\Ulbrichts_F1000H_Black_Helmet_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_Black_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_glass_co.paa"			
		};
	};
	class Utopia_Ulbrichts_F1000H_Green: Utopia_Ulbrichts_F1000H_Base
	{
		scope = 2;
		displayName = "Ulbrichts_F1000H Ranger";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Textures\Ulbrichts_F1000H_Green_Helmet_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_Green_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_glass_co.paa"			
		};
	};
	class Utopia_Ulbrichts_F1000H_Ranger: Utopia_Ulbrichts_F1000H_Base
	{
		scope = 2;
		displayName = "Ulbrichts_F1000H Tan1";
		descriptionShort = "";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"Utopia_Armor_Gear\Models\Helmets\Ulbrichts_F1000H\Textures\Ulbrichts_F1000H_Ranger_Helmet_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_Ranger_co.paa",
			"utopia_armor_gear\models\helmets\ulbrichts_f1000h\textures\ulbrichts_f1000h_visor_glass_co.paa"			
		};
	};
};