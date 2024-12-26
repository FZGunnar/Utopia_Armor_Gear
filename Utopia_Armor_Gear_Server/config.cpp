class CfgPatches
{
	class Utopia_Armor_Gear_Server
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Scripts", "Utopia_Armor_Gear"
		};
	};
};
class CfgMods
{
	class Utopia_Armor_Gear_Server
	{			
		dir = "Utopia_Armor_Gear_Server";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Utopia_Armor_Gear_Server";
		author = "Genesis";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"Utopia_Armor_Gear_Server/Scripts/4_World"};
			};
		};
	};
};