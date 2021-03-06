class Truck_Tatra_Wheel extends CarWheel {
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "Truck_Tatra_Wheel":
				newWheel = "Truck_Tatra_Wheel_Ruined";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};

class Truck_Tatra_Wheel_Dual extends CarWheel {
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "Truck_Tatra_Wheel_Dual":
				newWheel = "Truck_Tatra_Wheel_Dual_Ruined";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};


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

class Truck_Tatra_Wheel_Ruined extends ItemBase {};

class Truck_Tatra_Wheel_Dual_Ruined extends ItemBase {};







