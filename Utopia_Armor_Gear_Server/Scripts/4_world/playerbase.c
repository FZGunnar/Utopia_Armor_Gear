modded class Utopia_Armor_Plate_Base
{    
    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        UtopiaArmorVestBase vest = UtopiaArmorVestBase.Cast(GetHierarchyParent());
        if (vest)
        {
            vest.SetVestToTier0();
        }       
    }
}

class UtopiaArmorVestBase extends Vest_Base
{
    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);

        if (item.IsKindOf("Utopia_Armor_Plate_Base") && !item.IsRuined())
        {
            UpdateVestType(item);  // Only update if the plate is not ruined
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
        // Schedule a check to update the vest type after detachment
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CheckVestDelay, 200, false);
    }
    
    void CheckVestDelay()
    {
        if (!FindAttachmentBySlotName("VestHolster"))  // No plate attached
        {
            SetVestToTier0();    
        }
    }

    void SetVestToTier0()
    {
        string vestType = GetType();
        // Remove any existing tier designation and reset to "Tier0"
        vestType.Replace("Tier1", "");
        vestType.Replace("Tier2", "");
        vestType.Replace("Tier3", "");
        vestType.Replace("Tier4", "");
        vestType.Replace("Tier5", "");
        vestType.Replace("NoPlate", "");
        vestType += "Tier0";
        ChangeVest(vestType);
    }

    void UpdateVestType(EntityAI item)
    {
        string newVestType = GetType();
        string plateType = "";

        // Determine the plate tier based on the item's type
        if (item.GetType().Contains("Tier1"))
        {
            plateType = "Tier1";                 
        }
        else if (item.GetType().Contains("Tier2"))
        {
            plateType = "Tier2";                 
        }
        else if (item.GetType().Contains("Tier3"))
        {
            plateType = "Tier3";                 
        }
        else if (item.GetType().Contains("Tier4"))
        {
            plateType = "Tier4";                 
        }
        else if (item.GetType().Contains("Tier5"))
        {
            plateType = "Tier5";                 
        }

        // Clear any previous tier designation and set the correct tier
        newVestType.Replace("Tier0", ""); // Ensure Tier0 is removed when a new plate is attached
        newVestType.Replace("NoPlate", "");
        newVestType.Replace("Tier1", "");
        newVestType.Replace("Tier2", "");
        newVestType.Replace("Tier3", "");
        newVestType.Replace("Tier4", "");
        newVestType.Replace("Tier5", "");
        newVestType += plateType;

        if (GetType() != newVestType && plateType != "")
        {
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ChangeVest, 200, false, newVestType);
        }
    }
    
    void ChangeVest(string newVestType)
    {       
        TurnItemIntoItemLambda lambdap = new TurnItemIntoItemLambda(this, newVestType, null);
        lambdap.SetTransferParams(true, true, true);
        InventoryLocation src = new InventoryLocation();        
        if (GetInventory().GetCurrentInventoryLocation(src))
        {
            lambdap.Execute();
        }
    }    
}




class Utopia_6B13_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

class Utopia_AAC_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

class Utopia_Cage_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

class Utopia_D3CRX_V1_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

class Utopia_D3CRX_V2_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

class Utopia_WAS_DCS_Base extends UtopiaArmorVestBase
{
    // Inherits all functionality from UtopiaArmorVestBase
}

