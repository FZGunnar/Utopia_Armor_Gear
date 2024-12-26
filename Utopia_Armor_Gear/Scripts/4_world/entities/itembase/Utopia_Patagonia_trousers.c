class Utopia_Patagonia_trousers_ColorBase : Clothing 
{
		
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
	
};
class Utopia_Patagonia_trousers_camo : Utopia_Patagonia_trousers_ColorBase{};