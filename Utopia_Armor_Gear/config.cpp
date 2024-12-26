class CfgPatches
{
	class Utopia_Armor_Gear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Utopia_Armor_Gear
	{	
		
		dir = "Utopia_Armor_Gear";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Utopia_Armor_Gear";
		author = "Genesis";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		inputs = "Utopia_Armor_Gear/GUI/Data/inputs.xml";
		dependencies[] = {"World", "Mission"};
		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"Utopia_Armor_Gear/Scripts/4_World"};
			};
			class missionScriptModule {
				value = "";
				files[] = {"Utopia_Armor_Gear/Scripts/5_Mission"};
			};
		};
	};
};