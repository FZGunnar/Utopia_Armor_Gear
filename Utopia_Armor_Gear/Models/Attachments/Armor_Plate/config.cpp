class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[] = {"Armor_Plate_Black","Armor_Plate_Green"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Containers","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Utopia_Armor_Plate_Base: Inventory_Base
	{
		scope = 0;
		descriptionShort = "";
		inventorySlot[] = {"Armor_Plate"};
		model = "Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Armor_Plate.p3d";
		itemSize[]={3,3};
		weight=1200;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_destruct.rvmat"}}};
			};
		};
		soundImpactType="metal";
	};
	class Utopia_Armor_Plate_Black_Tier1: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier1";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Black_co.paa"};
	};
	class Utopia_Armor_Plate_Green_Tier1: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier1";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Green_co.paa"};
	};
	class Utopia_Armor_Plate_Black_Tier2: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Black_co.paa"};
	};
	class Utopia_Armor_Plate_Green_Tier2: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Green_co.paa"};
	};
	class Utopia_Armor_Plate_Black_Tier3: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Black_co.paa"};
	};
	class Utopia_Armor_Plate_Green_Tier3: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Green_co.paa"};
	};
	class Utopia_Armor_Plate_Black_Tier4: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier4";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Black_co.paa"};
	};
	class Utopia_Armor_Plate_Green_Tier4: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier4";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Green_co.paa"};
	};
	class Utopia_Armor_Plate_Black_Tier5: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier5";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Black_co.paa"};
	};
	class Utopia_Armor_Plate_Green_Tier5: Utopia_Armor_Plate_Base
	{
		scope = 2;
		displayName = "Armor Plate Tier5";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Textures\Armor_Plate_Green_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyArmor_Plate: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Armor_Plate";
		model = "Utopia_Armor_Gear\Models\Attachments\Armor_Plate\Armor_Plate.p3d";
	};
};
class CfgSlots
{
	class Slot_Armor_Plate
	{
		name = "Armor_Plate";
		displayName = "Armor_Plate";
		ghostIcon = "set:Armor_Plate_icons image:Armor_Plate";
	};
};
