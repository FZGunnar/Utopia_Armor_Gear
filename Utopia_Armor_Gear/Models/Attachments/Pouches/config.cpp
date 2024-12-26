class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Containers","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Canteen;
	class Inventory_Base;
	class Container_Base;
	class Utopia_sixPouches_Base: Container_Base
	{
		scope = 0;
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\sixPouches.p3d";
		itemSize[] = {1,2};
		hiddenSelections[] = {"camo"};
		attachments[] = {"Magazine_1"};
		inventorySlot[] = {"sixPouches_1","sixPouches_2","sixPouches_3","sixPouches_4","sixPouches4"};
		weight = 100;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		allowOwnedCargoManipulation = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
		};
	};
	class Utopia_Magazine_Pouch_Black: Utopia_sixPouches_Base
	{
		scope = 2;
		displayName = "Black Magazine Pouch";
		descriptionShort = "Fits all vanilla magazines inside of the magazine";
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\sixPouches_Black_co.paa"};
	};	
	class Utopia_Magazine_Pouch_ATACS: Utopia_sixPouches_Base
	{
		scope = 2;
		displayName = "ATACS Magazine Pouch";
		descriptionShort = "Fits all vanilla magazines inside of the magazine";
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\sixPouches_ATACS_co.paa"};
	};
	class Utopia_Magazine_Pouch_OD: Utopia_sixPouches_Base
	{
		scope = 2;
		displayName = "OD Magazine Pouch";
		descriptionShort = "Fits all vanilla magazines inside of the magazine";
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\sixPouches_OD_co.paa"};
	};
	class Utopia_Radio_pouch_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Radio_pouch_1"};
		displayName = "Radio_pouch";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Radio.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		stackedUnit = "uses";
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\radio_pouch_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\radio_pouch_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\radio_pouch_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\radio_pouch_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Radio_pouch_Black: Utopia_Radio_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch_Black_co.paa"};
	};
	class Utopia_Radio_pouch_Tan: Utopia_Radio_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch_Tan_co.paa"};
	};
	class Utopia_Radio_pouch_Green: Utopia_Radio_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch_Green_co.paa"};
	};
	class Utopia_Radio_pouch_Woods: Utopia_Radio_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch_Woods_co.paa"};
	};
	class Utopia_Radio_pouch_UCP: Utopia_Radio_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Radio_pouch_UCP_co.paa"};
	};
	class Utopia_Pistol_Pouch_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pistol_Pouch_1"};
		displayName = "Pistol_Pouch";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Pistol.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Pistol_mag_Pouch.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\pistol_mag_pouch_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\pistol_mag_pouch_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\pistol_mag_pouch_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\pistol_mag_pouch_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pistol_Pouch_Black: Utopia_Pistol_Pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Pistol_mag_Pouch_Black_co.paa"};
	};
	class Utopia_Pistol_Pouch_Tan: Utopia_Pistol_Pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Pistol_mag_Pouch_Tan_co.paa"};
	};
	class Utopia_Pistol_Pouch_Green: Utopia_Pistol_Pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Pistol_mag_Pouch_Green_co.paa"};
	};
	class Utopia_Pistol_Pouch_Woods: Utopia_Pistol_Pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Pistol_mag_Pouch_Woods_co.paa"};
	};
	class Utopia_Military_Bag_Pouch_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Military_Bag_Pouch_1"};
		displayName = "Military_Bag_Pouch";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Empty_Mags_Bag.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		hiddenSelections[] = {"camo"};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Military_Bag_Pouch_Black: Utopia_Military_Bag_Pouch_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_Black_co.paa"};
	};
	class Utopia_Military_Bag_Pouch_Tan: Utopia_Military_Bag_Pouch_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_Tan_co.paa"};
	};
	class Utopia_Military_Bag_Pouch_Green: Utopia_Military_Bag_Pouch_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_Green_co.paa"};
	};
	class Utopia_Military_Bag_Pouch_Camo: Utopia_Military_Bag_Pouch_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\EM_pouch_Camo_co.paa"};
	};
	class Utopia_Map_pouch_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Map_pouch_1"};
		displayName = "Map_pouch";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Map.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Map_pouch_Black: Utopia_Map_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_Black_co.paa"};
	};
	class Utopia_Map_pouch_Tan: Utopia_Map_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_Tan_co.paa"};
	};
	class Utopia_Map_pouch_Green: Utopia_Map_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_Green_co.paa"};
	};
	class Utopia_Map_pouch_Woods: Utopia_Map_pouch_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Map_pouch_Woods_co.paa"};
	};
	class Utopia_Pouch_04_AK_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_04_AK_1"};
		displayName = "Pouch_04_AK";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_04_AK.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_04_AK_Black: Utopia_Pouch_04_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Black_co.paa"};
	};
	class Utopia_Pouch_04_AK_Tan: Utopia_Pouch_04_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Tan_co.paa"};
	};
	class Utopia_Pouch_04_AK_Green: Utopia_Pouch_04_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Green_co.paa"};
	};
	class Utopia_Pouch_04_AK_Woods: Utopia_Pouch_04_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Woods_co.paa"};
	};
	class Utopia_Pouch_04_AK_UCP: Utopia_Pouch_04_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_UCP_co.paa"};
	};
	class Utopia_Pouch_04_AR_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_04_AR_1"};
		displayName = "Pouch_01_AR";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_04_AR.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_04_AR_Black: Utopia_Pouch_04_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Black_co.paa"};
	};
	class Utopia_Pouch_04_AR_Tan: Utopia_Pouch_04_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Tan_co.paa"};
	};
	class Utopia_Pouch_04_AR_Green: Utopia_Pouch_04_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Green_co.paa"};
	};
	class Utopia_Pouch_04_AR_Woods: Utopia_Pouch_04_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_Woods_co.paa"};
	};
	class Utopia_Pouch_04_AR_UCP: Utopia_Pouch_04_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_04_UCP_co.paa"};
	};
	class Utopia_Pouch_03_AK_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_01_AK_1"};
		displayName = "Pouch_01_AK";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_03_AK.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_03_AK_Black: Utopia_Pouch_03_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_Black_co.paa"};
	};
	class Utopia_Pouch_03_AK_Tan: Utopia_Pouch_03_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_Tan_co.paa"};
	};
	class Utopia_Pouch_03_AK_Green: Utopia_Pouch_03_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_Green_co.paa"};
	};
	class Utopia_Pouch_03_AK_Woods: Utopia_Pouch_03_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_Woods_co.paa"};
	};
	class Utopia_Pouch_03_AK_UCP: Utopia_Pouch_03_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_03_UCP_co.paa"};
	};
	class Utopia_Pouch_03_AR_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_03_AR_1"};
		displayName = "Pouch_03_AR";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_03_AR.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_03_AR_Black: Utopia_Pouch_03_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_Black_co.paa"};
	};
	class Utopia_Pouch_03_AR_Tan: Utopia_Pouch_03_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_Tan_co.paa"};
	};
	class Utopia_Pouch_03_AR_Green: Utopia_Pouch_03_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_Green_co.paa"};
	};
	class Utopia_Pouch_03_AR_Woods: Utopia_Pouch_03_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_03_Woods_co.paa"};
	};
	class Utopia_Mag_Pouch_02_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Mag_Pouch_02_1"};
		displayName = "Mag_Pouch_02";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_02.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_02.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\mag_pouch_02_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\mag_pouch_02_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\mag_pouch_02_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\mag_pouch_02_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Mag_Pouch_02_Black: Utopia_Mag_Pouch_02_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\MAG_pouch_02_Black_co.paa"};
	};
	class Utopia_Mag_Pouch_02_Tan: Utopia_Mag_Pouch_02_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\MAG_Pouch_02_Tan_co.paa"};
	};
	class Utopia_Mag_Pouch_02_Green: Utopia_Mag_Pouch_02_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\MAG_pouch_02_Green_co.paa"};
	};
	class Utopia_Mag_Pouch_02_Camo: Utopia_Mag_Pouch_02_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_Pouch_02_Camo_co.paa"};
	};
	class Utopia_Pouch_01_AK_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_01_AK_1"};
		displayName = "Pouch_01_AK";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_01_AK.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_01_AK_Black: Utopia_Pouch_01_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Black_co.paa"};
	};
	class Utopia_Pouch_01_AK_Tan: Utopia_Pouch_01_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Tan_co.paa"};
	};
	class Utopia_Pouch_01_AK_Green: Utopia_Pouch_01_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Green_co.paa"};
	};
	class Utopia_Pouch_01_AK_Woods: Utopia_Pouch_01_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Woods_co.paa"};
	};
	class Utopia_Pouch_01_AK_UCP: Utopia_Pouch_01_AK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_UCP_co.paa"};
	};
	class Utopia_Pouch_01_AR_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Pouch_01_AR_1"};
		displayName = "Pouch_01_AR";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Mag_01_AR.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Pouch_01_AR_Black: Utopia_Pouch_01_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Black_co.paa"};
	};
	class Utopia_Pouch_01_AR_Tan: Utopia_Pouch_01_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Tan_co.paa"};
	};
	class Utopia_Pouch_01_AR_Green: Utopia_Pouch_01_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Green_co.paa"};
	};
	class Utopia_Pouch_01_AR_Woods: Utopia_Pouch_01_AR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Mag_pouch_01_Woods_co.paa"};
	};
	class Utopia_Holster_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"Holster_1"};
		displayName = "Holster";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Holster.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = 
				{{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Holster_Black: Utopia_Holster_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_Black_co.paa"};
	};
	class Utopia_Holster_Tan: Utopia_Holster_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_Tan_co.paa"};
	};
	class Utopia_Holster_Green: Utopia_Holster_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_Green_co.paa"};
	};
	class Utopia_Holster_Wood: Utopia_Holster_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_Wood_co.paa"};
	};
	class Utopia_Holster_UCP: Utopia_Holster_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Holster_UCP_co.paa"};
	};
	class Utopia_GR_POUCH_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"GR_POUCH_1"};
		displayName = "Grenade Pouch";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Grenade.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		hiddenSelections[] = {"camo"};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_GR_POUCH_Black: Utopia_GR_POUCH_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_Black_co.paa"};
	};
	class Utopia_GR_POUCH_Tan: Utopia_GR_POUCH_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_Tan_co.paa"};
	};
	class Utopia_GR_POUCH_Green: Utopia_GR_POUCH_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Granade_pouch_Green_co.paa"};
	};
	class Utopia_Bottle_pouch_Base: Canteen
	{
		scope = 0;
		descriptionShort = "";
		inventorySlot[] = {"Bottle_pouch_1"};
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Bottle.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\bottle_01_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\bottle_01_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\bottle_01_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\bottle_01_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_Bottle_pouch_Black: Utopia_Bottle_pouch_Base
	{
		scope = 2;
		displayName = "Bottle_pouch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01_Black_co.paa"};
	};
	class Utopia_Bottle_pouch_Tan: Utopia_Bottle_pouch_Base
	{
		scope = 2;
		displayName = "Bottle_pouch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01_Tan_co.paa"};
	};
	class Utopia_Bottle_pouch_Green: Utopia_Bottle_pouch_Base
	{
		scope = 2;
		displayName = "Bottle_pouch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01_Green_co.paa"};
	};
	class Utopia_Bottle_pouch_Woodland: Utopia_Bottle_pouch_Base
	{
		scope = 2;
		displayName = "Bottle_pouch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01_Woodland_co.paa"};
	};
	class Utopia_Bottle_pouch_UCP: Utopia_Bottle_pouch_Base
	{
		scope = 2;
		displayName = "Bottle_pouch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Pouches\Textures\Bottle_01_UCP_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyRadio_pouch_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Radio_pouch_1";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Radio.p3d";
	};
	class ProxyPistol_Pouch_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pistol_Pouch_1";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Pistol.p3d";
	};
	class ProxyMilitary_Bag_Pouch_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Military_Bag_Pouch_1";
	};
	class ProxyMap_pouch_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Map_pouch_1";
	};
	class ProxyPouch_04_AK_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_04_AK_1";
	};
	class ProxyPouch_04_AR_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_04_AR_1";
	};
	class ProxyPouch_03_AK_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_03_AK_1";
	};
	class ProxyPouch_03_AR_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_03_AR_1";
	};
	class ProxyMag_Pouch_02_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Mag_Pouch_02_1";
	};
	class ProxyPouch_01_AK_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_01_AK_1";
	};
	class ProxyPouch_01_AR_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pouch_01_AR_1";
	};
	class ProxyHolster_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Holster_1";
	};
	class ProxyGrenade_POUCH_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Grenade_POUCH_1";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Grenade.p3d";
	};
	class ProxyBottle_pouch: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Bottle_pouch";
		model = "Utopia_Armor_Gear\Models\Attachments\Pouches\Bottle.p3d";
	};
};
class CfgSlots
{
	class Slot_Radio_pouch_1
	{
		name = "Radio_pouch_1";
		displayName = "Radio_pouch";
		ghostIcon = "set:Radio_pouch_icons image:Radio_pouch";
	};
	class Slot_Pistol_Pouch_1
	{
		name = "Pistol_Pouch_1";
		displayName = "Pistol_Pouch";
		ghostIcon = "set:Pistol_Pouch_icons image:Pistol_Pouch";
	};
	class Slot_Military_Bag_Pouch_1
	{
		name = "Military_Bag_Pouch_1";
		displayName = "Military_Bag_Pouch";
		ghostIcon = "set:Military_Bag_Pouch_icons image:Military_Bag_Pouch";
	};
	class Slot_Map_pouch_1
	{
		name = "Map_pouch_1";
		displayName = "Map_pouch";
		ghostIcon = "set:Map_pouch_icons image:Map_pouch";
	};
	class Slot_Pouch_04_AK_1
	{
		name = "Pouch_01_AK_4";
		displayName = "Pouch_04_AK";
		ghostIcon = "set:Pouch_04_AK_icons image:Pouch_04_AK";
	};
	class Slot_Pouch_04_AR_1
	{
		name = "Pouch_04_AR_1";
		displayName = "Pouch_04_AR";
		ghostIcon = "set:Pouch_04_AR_icons image:Pouch_04_AR";
	};
	class Slot_Pouch_03_AK_1
	{
		name = "Pouch_03_AK_1";
		displayName = "Pouch_03_AK";
		ghostIcon = "set:Pouch_01_AK_icons image:Pouch_03_AK";
	};
	class Slot_Pouch_03_AR_1
	{
		name = "Pouch_03_AR_1";
		displayName = "Pouch_03_AR";
		ghostIcon = "set:Pouch_03_AR_icons image:Pouch_03_AR";
	};
	class Slot_Bottle_pouch_1
	{
		name = "Bottle_pouch_1";
		displayName = "Bottle_pouch";
		ghostIcon = "set:Bottle_pouch_icons image:Bottle_pouch";
	};
	class Slot_GR_POUCH_1
	{
		name = "GR_POUCH_1";
		displayName = "GR_POUCH";
		ghostIcon = "set:GR_POUCH_icons image:gr_pouch";
	};
	class Slot_Holster_1
	{
		name = "Holster_1";
		displayName = "Holster";
		ghostIcon = "set:Holster_icons image:Holster";
	};
	class Slot_Pouch_01_AK_1
	{
		name = "Pouch_01_AK_1";
		displayName = "Pouch_01_AK";
		ghostIcon = "set:Pouch_01_AK_icons image:Pouch_01_AK";
	};
	class Slot_Pouch_01_AR_1
	{
		name = "Pouch_01_AR_1";
		displayName = "Pouch_01_AR";
		ghostIcon = "set:Pouch_01_AR_icons image:Pouch_01_AR";
	};
	class Slot_Mag_Pouch_02_1
	{
		name = "Mag_Pouch_02_1";
		displayName = "Mag_Pouch_02";
		ghostIcon = "set:Mag_Pouch_02_icons image:Mag_Pouch_02";
	};
};
