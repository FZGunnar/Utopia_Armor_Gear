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
	class Utopia_D3CRX_V2_Base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Vests\D3CRX\D3CRX_V2\D3CRX_V2_G.p3d";
		descriptionShort="";
		inventorySlot[]=
		{
			"Vest"
		};
		weight=9000;
		itemSize[]={4,3};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={3,8};
		repairCosts[]={75,50};
		class ClothingTypes
		{
			male="Utopia_Armor_Gear\Models\Vests\D3CRX\D3CRX_V2\D3CRX_V2_M.p3d";
			female="Utopia_Armor_Gear\Models\Vests\D3CRX\D3CRX_V2\D3CRX_V2_F.p3d";
		};
		attachments[]={};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=325;
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
						damage=0.16;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
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
						damage=0;
					};
				};
				class Infected
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
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Utopia_D3CRX_V2_BaseNoPlate: Utopia_D3CRX_V2_Base
	{
		descriptionShort="Tier 0 D3CRX Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.90; 
					}; 
				};
			};
		};
	};

	class Utopia_D3CRX_V2_BaseTier1: Utopia_D3CRX_V2_Base
	{
		descriptionShort="Tier 1 D3CRX Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.70; 
					}; 
				};
			};
		};
	};

	class Utopia_D3CRX_V2_BaseTier2: Utopia_D3CRX_V2_Base
	{
		descriptionShort="Tier 2 D3CRX Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.50; 
					}; 
				};
			};
		};
	};

	class Utopia_D3CRX_V2_BaseTier3: Utopia_D3CRX_V2_Base
	{
		descriptionShort="Tier 3 D3CRX Vest";
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile 
				{ 
					class Health 
					{ 
						damage=0.30; 
					}; 
				};
			};
		};
	};

	class Utopia_D3CRX_V2_Black_Tier0: Utopia_D3CRX_V2_BaseNoPlate
	{
		scope=2;
		displayName="D3CRX V2 Black Vest - Tier 0";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa"
		};
	};

	class Utopia_D3CRX_V2_MC_Tier0: Utopia_D3CRX_V2_BaseNoPlate
	{
		scope=2;
		displayName="D3CRX V2 MC Vest - Tier 0";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa"
		};
	};
	class Utopia_D3CRX_V2_OD_Tier0: Utopia_D3CRX_V2_BaseNoPlate
	{
		scope=2;
		displayName="D3CRX V2 OD Vest - Tier 0";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa"
		};
	};
	class Utopia_D3CRX_V2_Black_Tier1: Utopia_D3CRX_V2_BaseTier1
	{
		scope=2;
		displayName="D3CRX V2 Black Vest - Tier 1";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa"
		};
	};
	class Utopia_D3CRX_V2_MC_Tier1: Utopia_D3CRX_V2_BaseTier1
	{
		scope=2;
		displayName="D3CRX V2 MC Vest - Tier 1";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa"
		};
	};
	class Utopia_D3CRX_V2_OD_Tier1: Utopia_D3CRX_V2_BaseTier1
	{
		scope=2;
		displayName="D3CRX V2 OD Vest - Tier 2";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa"
		};
	};
	class Utopia_D3CRX_V2_Black_Tier2: Utopia_D3CRX_V2_BaseTier2
	{
		scope=2;
		displayName="D3CRX V2 Black Vest - Tier 2";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa"
		};
	};
	class Utopia_D3CRX_V2_MC_Tier2: Utopia_D3CRX_V2_BaseTier2
	{
		scope=2;
		displayName="D3CRX V2 MC Vest - Tier 2";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa"
		};
	};
	class Utopia_D3CRX_V2_OD_Tier2: Utopia_D3CRX_V2_BaseTier2
	{
		scope=2;
		displayName="D3CRX V2 OD Vest - Tier 2";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa"
		};
	};
	class Utopia_D3CRX_V2_Black_Tier3: Utopia_D3CRX_V2_BaseTier3
	{
		scope=2;
		displayName="D3CRX V2 Black Vest - Tier 3";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_Black_co.paa"
		};
	};
	class Utopia_D3CRX_V2_MC_Tier3: Utopia_D3CRX_V2_BaseTier3
	{
		scope=2;
		displayName="D3CRX V2 MC Vest - Tier 3";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_MC_co.paa"
		};
	};
	class Utopia_D3CRX_V2_OD_Tier3: Utopia_D3CRX_V2_BaseTier3
	{
		scope=2;
		displayName="D3CRX V2 OD Vest - Tier 3";
		hiddenSelectionsTextures[]=
		{
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa",
			"Utopia_Armor_Gear\Models\Vests\D3CRX\textures\Rig_Haley_D3CRX_V2_OD_co.paa"
		};
	};
};