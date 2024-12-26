class CfgPatches
{
	class Modular_Vests
	{
		units[]=
		{
			"AAC_Black"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Scripts"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Utopia_AAC_Base: Clothing
	{
		scope=0;
		model="Utopia_Armor_Gear\Models\Vests\AAC\AAC_g.p3d";
		descriptionShort="64% Health Protection 100% Shock Protection";
		hiddenSelections[]=
		{
			"camoGround",
			"camoFemale",
			"camoMale"
		};
		attachments[]=
		{
			"MagazinePouch_1",
			"MagazinePouch_2",
			"MagazinePouch_3",
			"MagazinePouch_4",
			"IFAK_1",
			"WalkieTalkie"
		};
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
			male="Utopia_Armor_Gear\Models\Vests\AAC\AAC_M.p3d";
			female="Utopia_Armor_Gear\Models\Vests\AAC\AAC_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_destruct.rvmat"
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
						damage=0.27;
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
						damage=0.60000002;
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
	class Utopia_AAC_NoPlate: Utopia_AAC_Base
	{
		descriptionShort = "Tier 0 AAC Vest";
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

	class Utopia_AAC_BaseTier1: Utopia_AAC_Base
	{
		descriptionShort = "Tier 1 AAC Vest";
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

	class Utopia_AAC_BaseTier2: Utopia_AAC_Base
	{
		descriptionShort = "Tier 2 AAC Vest";
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

	class Utopia_AAC_BaseTier3: Utopia_AAC_Base
	{
		descriptionShort = "Tier 3 AAC Vest";
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

	// Tiered Variants
	class Utopia_AAC_Green_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC Green Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa" };
	};

	class Utopia_AAC_Green_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC Green Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa" };
	};

	class Utopia_AAC_Green_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC Green Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa" };
	};

	class Utopia_AAC_Green_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC Green Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Green.paa" };
	};

	// Repeat similar structure for Grey, MC, Tan, UCP, and WD colors
	class Utopia_AAC_Grey_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC Grey Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa" };
	};

	class Utopia_AAC_MC_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC MC Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa" };
	};

	class Utopia_AAC_Tan_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC Tan Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa" };
	};
	class Utopia_AAC_Grey_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC Grey Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa" };
	};

	class Utopia_AAC_Grey_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC Grey Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa" };
	};

	class Utopia_AAC_Grey_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC Grey Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Grey.paa" };
	};

	// MC Variants
	class Utopia_AAC_MC_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC MC Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa" };
	};

	class Utopia_AAC_MC_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC MC Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa" };
	};

	class Utopia_AAC_MC_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC MC Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_MC.paa" };
	};

	// Tan Variants
	class Utopia_AAC_Tan_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC Tan Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa" };
	};

	class Utopia_AAC_Tan_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC Tan Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa" };
	};

	class Utopia_AAC_Tan_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC Tan Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_Tan.paa" };
	};

	// UCP Variants
	class Utopia_AAC_UCP_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC UCP Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa" };
	};

	class Utopia_AAC_UCP_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC UCP Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa" };
	};

	class Utopia_AAC_UCP_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC UCP Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa" };
	};

	class Utopia_AAC_UCP_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC UCP Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_UCP.paa" };
	};

	// WD Variants
	class Utopia_AAC_WD_Tier1: Utopia_AAC_BaseTier1
	{
		scope = 2;
		displayName = "AAC WD Vest - Tier 1";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa" };
	};

	class Utopia_AAC_WD_Tier2: Utopia_AAC_BaseTier2
	{
		scope = 2;
		displayName = "AAC WD Vest - Tier 2";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa" };
	};

	class Utopia_AAC_WD_Tier3: Utopia_AAC_BaseTier3
	{
		scope = 2;
		displayName = "AAC WD Vest - Tier 3";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa" };
	};

	class Utopia_AAC_WD_Tier0: Utopia_AAC_NoPlate
	{
		scope = 2;
		displayName = "AAC WD Vest - Tier 0";
		hiddenSelectionsTextures[] = { "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa", "Utopia_Armor_Gear\Models\Vests\AAC\Textures\AAC_WD.paa" };
	};
};