// class vg7_wheel extends CarWheel {
// 	override void EEKilled(Object killer)
// 	{
// 		string newWheel = "";
// 		switch( GetType() )
// 		{
// 			case "vg7_wheel":
// 				newWheel = "vg7_wheel_destroyed";
// 			break;
// 		}
// 		if ( newWheel != "" )
// 		{
// 			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
// 			lambda.SetTransferParams(true, true, true);
// 			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
// 		}
// 	}

// 	override int GetMeleeTargetType()
// 	{
// 		return EMeleeTargetType.NONALIGNABLE;
// 	}
	
// 	override void SetActions()
// 	{
// 		super.SetActions();
// 		AddAction(ActionDetach);
// 		AddAction(ActionAttachOnSelection);
// 	}
// };


modded class HeadlightH7 extends Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
		
	}
};

class Truck_Tatra_Door_1_1 extends CarDoor
{

	
};

class Truck_Tatra_Door_2_1 extends CarDoor
{

	
};

class Truck_Tatra_Hood extends CarDoor
{

	
};

class Truck_Tatra_Trunk extends CarDoor
{

	
};


//class vg7_wheel_destroyed extends ItemBase {};







