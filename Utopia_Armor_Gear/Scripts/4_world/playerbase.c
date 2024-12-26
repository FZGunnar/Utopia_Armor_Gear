class Utopia_Walkers_Razor_Base extends HelmetBase
{	
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);
		 PlayerBase player = PlayerBase.Cast(parent);		    
		 if (player && !IsRuined())
		 {
		 	if(GetCompEM().CanWork())
			{
				GetCompEM().SwitchOn();
				player.SetPhonesState(true);
			}
		 }		
	}

	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent, slot_id);		
		GetCompEM().SwitchOff();
		PlayerBase player = PlayerBase.Cast(parent);		    
		if (player)
		{
			player.SetPhonesState(false);
		}
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);		
		PlayerBase player = PlayerBase.Cast(GetHierarchyParent());		    
		if (player && !IsRuined())
		{
			if(item && !item.IsRuined())
			{
				if(item.GetQuantity() > 0)
				{
					GetCompEM().SwitchOn();
                    player.SetPhonesState(true);
				}
			}
		}		
	}
	
	override void OnWorkStop()
	{
		PlayerBase player = PlayerBase.Cast(GetHierarchyParent());		    
		if (player)
		{
			player.SetPhonesState(false);
		}
	}
	
	override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		PlayerBase player = PlayerBase.Cast(GetHierarchyParent());		    
		if (player)
		{
			player.SetPhonesState(false);
			GetCompEM().SwitchOff();
		}
	}
	
	// override void EEItemDetached(EntityAI item, string slot_name)
	// {
		// super.EEItemDetached(item, slot_name);
	// }	
};

class Utopia_Walkers_Razor extends Utopia_Walkers_Razor_Base {};

modded class PlayerBase
{
	bool m_headphonesstate;
	bool m_headphonesmode;
	float m_currentvolume = g_Game.m_volume_sound;
	PluginHeadPhones m_PluginHeadPhones;
	
	override void Init()
	{
		super.Init();
		m_PluginHeadPhones = PluginHeadPhones.Cast( GetPlugin( PluginHeadPhones ) );
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CheckStartUtopia, 2000, false);	
	}
	
	void CheckStartUtopia()
	{
		ItemBase helmm = ItemBase.Cast(FindAttachmentBySlotName("Headgear"));
		if(helmm && helmm.IsKindOf("Utopia_Walkers_Razor_Base"))
		{
			if(!helmm.IsRuined())
			{
			     Print("Наушники инит"); 
			    if(helmm.GetCompEM().CanWork())
			    {
			    	helmm.GetCompEM().SwitchOn();
			    	SetPhonesState(true);
			    }
			}
		}		
	}
	
	void SetPhonesState(bool m_state)
	{
		m_headphonesstate = m_state;
        UpdateVolume();	
	}
	
	void UpdateVolume()
	{   
	     float m_currentvolumenew;
         if(m_headphonesstate && m_headphonesmode)
		 {
			 m_currentvolumenew = m_currentvolume;
		 }
		 else
		 {
			 m_currentvolumenew = g_Game.m_volume_sound; 
		 }
		 if(GetGame().IsClient())
		 {
		    GetGame().GetSoundScene().SetSoundVolume(m_currentvolumenew, 0.5);
		 }
	}   

    void Addvolume(float m_svalue)
	{
		m_currentvolume = Math.Clamp(m_currentvolume + m_svalue, 0, 1);
		m_PluginHeadPhones.SetVolumee(m_currentvolume);
		UpdateVolume();
	}

    void ChangeModeHeadphones()
	{
       m_headphonesmode = !m_headphonesmode;
	   UpdateVolume();
	}		
}

modded class PluginManager
{
	override void Init()
	{
		if (GetGame().IsClient())
		{
			RegisterPlugin("PluginHeadPhones", true, false);
		}
		super.Init();
	}
}

class PluginHeadPhones extends PluginBase
{   
   ref Widget m_phonespanel;	
   ref ProgressBarWidget m_soundvalue;
   
   bool m_phonespanelshow = false;
   float refreshtimer = 1.0;
   float checkedtime;
   float m_alpha= 255;
   
   override void OnInit()
   {
       Widget phoneshud = GetGame().GetWorkspace().CreateWidgets( "Utopia_Armor_Gear/GUI/imagesets/UtopiaPhones.layout" );
       if (phoneshud)
       {
		   m_phonespanel = phoneshud.FindAnyWidget( "HeadPhonesPanel" );			
		   m_soundvalue = ProgressBarWidget.Cast( phoneshud.FindAnyWidget("HeadPhonesValue"));
       }
   }

   override void OnUpdate( float delta_time )
   {	     
       checkedtime = checkedtime + delta_time;
       if ( checkedtime >= refreshtimer )
       {		   
           checkedtime = 0;		   
           PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer());
		   if(!player)
		   {
			   return;
		   }  
		   if(!m_phonespanel)
		   {
			   return;
		   }
           if(m_phonespanelshow && player.m_headphonesstate && player.m_headphonesmode)
		   {
               m_phonespanel.Show(true);
		   }
           else
		   {
                m_phonespanel.Show(false);
		   }
		   if(m_alpha > 0)
		   {
			   m_alpha = Math.Clamp(m_alpha - 30, 0, 255);
			   m_soundvalue.SetColor(ARGB(m_alpha, 255, 255, 255));
		   }
       }
   }
   
   void SetVolumee(float m_soundvolume)
   {
         m_alpha = 255;
         m_soundvalue.SetCurrent(m_soundvolume * 100);
         m_soundvalue.SetColor(ARGB(m_alpha, 255, 255, 255));	   
   }

   void CanshowHudC( bool show )
   {
       m_phonespanelshow = show;
   }
}

modded class PlateCarrierHolster
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
