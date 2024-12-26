modded class MissionGameplay extends MissionBase
{
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		autoptr PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		autoptr Input arzzzheadphonesInput = Input.Cast(GetGame().GetInput());
		if (!player || !arzzzheadphonesInput)
			return;

		if (GetGame().GetUIManager().GetMenu() != null || GetGame().GetUIManager().IsCursorVisible())
		{
			return;
		}
		if (arzzzheadphonesInput.LocalPress("UAOnOffHeadphones")) 
		{			
           player.ChangeModeHeadphones();					
		}
		if (arzzzheadphonesInput.LocalPress("UAVolumeUp")) 
		{		
           player.Addvolume(0.1);					
		}
		if (arzzzheadphonesInput.LocalPress("UAVolumeDown")) 
		{			
           player.Addvolume(-0.1);					
		}
	}
}

modded class IngameHud
{
    PluginHeadPhones m_PluginHeadPhones;

    override void Init( Widget hud_panel_widget )
	{
        super.Init(hud_panel_widget);

        m_PluginHeadPhones = PluginHeadPhones.Cast( GetPlugin( PluginHeadPhones ) );
    }

    override void RefreshHudVisibility()
    {
        super.RefreshHudVisibility();
        if ( m_PluginHeadPhones )
        {
            if (m_HudInventory && m_HudState) 
            {
                m_PluginHeadPhones.CanshowHudC(false);
            }
            else if (m_HudHidePlayer && m_HudState) 
            {
                m_PluginHeadPhones.CanshowHudC(false);
            }
            else if (m_HudHideUI && m_HudState) 
            {
                m_PluginHeadPhones.CanshowHudC(false);
            }
            else if (!m_HudState) 
            {
                m_PluginHeadPhones.CanshowHudC(false);
            }
			else if(GetGame().GetUIManager().GetMenu() != null || GetGame().GetUIManager().IsCursorVisible())
			{
				 m_PluginHeadPhones.CanshowHudC(false);
			}
            else 
            {
                m_PluginHeadPhones.CanshowHudC(true);
            }
        } 
    }
}