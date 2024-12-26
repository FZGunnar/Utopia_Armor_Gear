class CfgPatches
{
	class Custom_Proxies
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};

class CfgSlots
{
	class Slot_Armor_Plate
	{
		name = "Armor_Plate";
		displayName = "Armor Plate";
		ghostIcon = "set:magpouch_icons image:magpouch";
	};
	class Slot_MagazinePouch_1
	{
		name = "MagazinePouch_1";
		displayName = "Magazine Pouch";
		ghostIcon = "set:magpouch_icons image:magpouch";
	};
	class Slot_MagazinePouch_2
	{
		name = "MagazinePouch_2";
		displayName = "Magazine Pouch";
		ghostIcon = "set:magpouch_icons image:magpouch";
	};
	class Slot_MagazinePouch_3
	{
		name = "MagazinePouch_3";
		displayName = "Magazine Pouch";
		ghostIcon = "set:magpouch_icons image:magpouch";
	};
	class Slot_MagazinePouch_4
	{
		name = "MagazinePouch_4";
		displayName = "Magazine Pouch";
		ghostIcon = "set:magpouch_icons image:magpouch";
	};
	class Slot_Magazine_1
	{
		name = "Magazine_1";
		displayName = "Magazine";
		ghostIcon = "magazine";
	};
	class Slot_Magazine_2
	{
		name = "Magazine_2";
		displayName = "Magazine";
		ghostIcon = "magazine";
	};
	class Slot_Magazine_3
	{
		name = "Magazine_3";
		displayName = "Magazine";
		ghostIcon = "magazine";
	};
	class Slot_Magazine_4
	{
		name = "Magazine_4";
		displayName = "Magazine";
		ghostIcon = "magazine";
	};
};


class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyArmor_Plate: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Armor_Plate";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\Armor_Plate.p3d";
	};
	class ProxyMagazinePouch_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MagazinePouch_1";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\MagazinePouch_1.p3d";
	};
	class ProxyMagazinePouch_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MagazinePouch_2";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\MagazinePouch_2.p3d";
	};
	class ProxyMagazinePouch_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MagazinePouch_3";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\MagazinePouch_3.p3d";
	};
	class ProxyMagazinePouch_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MagazinePouch_4";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\MagazinePouch_4.p3d";
	};
	class ProxyMagazine_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Magazine_1";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\Magazine_1.p3d";
	};
	class ProxyMagazine_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Magazine_2";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\Magazine_2.p3d";
	};
	class ProxyMagazine_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Magazine_3";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\Magazine_3.p3d";
	};
	class ProxyMagazine_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Magazine_4";
		model = "Utopia_Armor_Gear\Models\Attachments\Proxies\Magazine_4.p3d";
	};
};

class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		scope = 0;
		inventorySlot[] = {"magazine","magazine2","magazine3","Magazine_1"};
	};
};