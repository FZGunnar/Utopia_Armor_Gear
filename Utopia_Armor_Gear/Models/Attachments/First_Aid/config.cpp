class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[] = {"IFAK_Black","IFAK_Tan","IFAK_Green","IFAK_Woods"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Containers","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Utopia_IFAK_Base: Inventory_Base
	{
		scope = 0;
		inventorySlot[] = {"IFAK_1"};
		displayName = "IFAK";
		descriptionShort = "";
		model = "Utopia_Armor_Gear\Models\Attachments\First_Aid\IFAK.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1000;
				healthLevels[] = {{1,{"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK.rvmat"}},{0.610009,{"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_damage.rvmat"}},{0.5,{"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_damage.rvmat"}},{0.3,{"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_destruct.rvmat"}},{0,{"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_destruct.rvmat"}}};
			};
		};
	};
	class Utopia_IFAK_Black: Utopia_IFAK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_Black_co.paa"};
	};
	class Utopia_IFAK_Green: Utopia_IFAK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_Green_co.paa"};
	};
	class Utopia_IFAK_Tan: Utopia_IFAK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_Tan_co.paa"};
	};
	class Utopia_IFAK_Woods: Utopia_IFAK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_Woods_co.paa"};
	};
	class Utopia_IFAK_UCP: Utopia_IFAK_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Utopia_Armor_Gear\Models\Attachments\First_Aid\Textures\IFAK_UCP_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyIFAK_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "IFAK_1";
		model = "Utopia_Armor_Gear\Models\Attachments\First_Aid\IFAK.p3d";
	};
};
class CfgSlots
{
	class Slot_IFAK_1
	{
		name = "IFAK_1";
		displayName = "IFAK";
		ghostIcon = "set:IFAK_icons image:ifak";
	};
};
