class Utopia_Armor_Plate_Base extends ItemBase
{	
	override bool CanPutAsAttachment(EntityAI parent)
	{
		if (IsHologram())
		{
			return false;
		}
		return true;
	}
};