class CfgPatches
{
	class THE_ALLIANCE_tatra
	{
		units[]				= {};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]	= {"DZ_Scripts","DZ_Data","DZ_Gear_Containers","DZ_Sounds_Effects","DZ_Vehicles_Wheeled","DZ_Vehicles_Parts","DZ_Gear_Camping"};
	};
};
class CfgMods
{
	class THE_ALLIANCE_tatra
	{
		dir="THE_ALLIANCE_tatra";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Tatra";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"THE_ALLIANCE_tatra/tatra/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"THE_ALLIANCE_tatra/tatra/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"THE_ALLIANCE_tatra/tatra/Scripts/5_Mission"};
			};
		};
	}; 

};
	class cfgslots {

	class Slot_Truck_Tatra_Wheel_1_1
	{
		name = "Truck_Tatra_Wheel_1_1";
		displayName = "Front Left Wheel";
		selection = "wheel_1_1";
		ghostIcon = "wheel";
	};
	class Slot_Truck_Tatra_Wheel_1_2
	{
		name = "Truck_Tatra_Wheel_1_2";
		displayName = "Back Left Wheel";
		selection = "wheel_1_2";
		ghostIcon = "doublewheel";
	};
	class Slot_Truck_Tatra_Wheel_1_3
	{
		name = "Truck_Tatra_Wheel_1_3";
		displayName = "Middle Right Wheel";
		selection = "wheel_1_3";
		ghostIcon = "doublewheel";
	};
	class Slot_Truck_Tatra_Wheel_2_1
	{
		name = "Truck_Tatra_Wheel_2_1";
		displayName = "Front Right Wheel";
		selection = "wheel_2_1";
		ghostIcon = "wheel";
	};
	class Slot_Truck_Tatra_Wheel_2_2
	{
		name = "Truck_Tatra_Wheel_2_2";
		displayName = "Back Right Wheel";
		selection = "wheel_2_2";
		ghostIcon = "doublewheel";
	};
	class Slot_Truck_Tatra_Wheel_2_3
	{
		name = "Truck_Tatra_Wheel_2_3";
		displayName = "Middle Right Wheel";
		selection = "wheel_2_3";
		ghostIcon = "doublewheel";
	};
	// class Slot_Truck_Tatra_Wheel_Spare_1
	// {
	// 	name = "Truck_Tatra_Wheel_Spare_1";
	// 	displayName = "Spare Left Wheel";
	// 	selection = "wheel_spare_1";
	// 	ghostIcon = "wheel";
	// };
	// class Slot_Truck_Tatra_Wheel_Spare_2
	// {
	// 	name = "Truck_Tatra_Wheel_Spare_2";
	// 	displayName = "Spare Right Wheel";
	// 	selection = "wheel_spare_2";
	// 	ghostIcon = "wheel";
	// };
	class Slot_Truck_Tatra_Hood
	{
		name = "Truck_Tatra_Hood";
		displayName = "Hood";
		selection="doors_hood";
		ghostIcon = "hood";
	};
	class Slot_Truck_Tatra_Trunk
	{
		name = "Truck_Tatra_Trunk";
		displayName = "Trunk";
		selection="doors_trunk";
		ghostIcon = "trunk";
	};
	class Slot_Truck_Tatra_Door_1_1
	{
		name = "Truck_Tatra_Door_1_1";
		displayName = "Left Door";
		selection="Doors_driver";
		ghostIcon = "doorfront";
	};
	class Slot_Truck_Tatra_Doors_2_1
	{
		name = "Truck_Tatra_Door_2_1";
		displayName = "Right Door";
		selection="Doors_codriver";
		ghostIcon = "doorfront";
	};
	// class Slot_Truck_Tatra_WoodenLogs
	// {
	// 	name = "Truck_Tatra_WoodenLogs";
	// 	displayName = "Wooden logs";
	// 	ghostIcon = "woodenlog";
	// 	stackMax = 50;
	// };
	// class Slot_Truck_Tatra_WoodenPlanks
	// {
	// 	name = "Truck_Tatra_WoodenPlanks";
	// 	displayName = "Wooden planks";
	// 	ghostIcon = "planks";
	// 	stackMax = 100;
	// };
	// class Slot_Truck_Tatra_MetalSheets
	// {
	// 	name = "Truck_Tatra_MetalSheets";
	// 	displayName = "Metal sheets";
	// 	ghostIcon = "plates";
	// 	stackMax = 40;
	// };
	// class Slot_Truck_Tatra_Barrel1
	// {
	// 	name = "Truck_Tatra_Barrel1";
	// 	displayName = "Barrel";
	// 	ghostIcon = "barrel";
	// };
	// class Slot_Truck_Tatra_Barrel2
	// {
	// 	name = "Truck_Tatra_Barrel2";
	// 	displayName = "Barrel";
	// 	ghostIcon = "barrel";
	// };
	// class Slot_Truck_Tatra_Barrel3
	// {
	// 	name = "Truck_Tatra_Barrel3";
	// 	displayName = "Barrel";
	// 	ghostIcon = "barrel";
	// };
	// class Slot_Truck_Tatra_Barrel4
	// {
	// 	name = "Truck_Tatra_Barrel4";
	// 	displayName = "Barrel";
	// 	ghostIcon = "barrel";
	// };
	// class Slot_Truck_Tatra_WoodenCrate1
	// {
	// 	name = "Truck_Tatra_WoodenCrate1";
	// 	displayName = "WoodenCrate";
	// 	ghostIcon = "woodcrate";
	// };
	// class Slot_Truck_Tatra_WoodenCrate2
	// {
	// 	name = "Truck_Tatra_WoodenCrate2";
	// 	displayName = "WoodenCrate";
	// 	ghostIcon = "woodcrate";
	// };
	// class Slot_Truck_Tatra_WoodenCrate3
	// {
	// 	name = "Truck_Tatra_WoodenCrate3";
	// 	displayName = "WoodenCrate";
	// 	ghostIcon = "woodcrate";
	// };
	// class Slot_Truck_Tatra_WoodenCrate4
	// {
	// 	name = "Truck_Tatra_WoodenCrate4";
	// 	displayName = "WoodenCrate";
	// 	ghostIcon = "woodcrate";
	// };
	
	// class Slot_PowerGenerator
	// {
	// 	name="PowerGenerator";
	// 	displayName="Power Generator";
	// 	selection="PowerGenerator";
	// 	ghostIcon="cat_common_cargo";
	// };
	// class Slot_CamoNet
	// {
	// 	name = "CamoNet";
	// 	displayName = "CamoNet";
	// 	selection = "CamoNet";
	// 	ghostIcon = "camonet";
	// };	
	
	};


class CfgSoundShaders
{
	
};

class CfgSoundSets
{	

};


class cfgvehicles

{	
	class CarScript;
	class Crew;
	class Driver;
	class CoDriver;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class SimulationModule;
	class Axles;
	class Wheels;
	class DamageSystem;
	class GlobalHealth;
	class DamageZones;
	class Window;
	class Health;
	class Doors;
	class CarWheel;
	class Inventory_Base;
	class Container_Base;
	class Truck_01_Base;
	

	class HeadlightH7: Inventory_Base
	{
		inventorySlot[]=
	 	{			
			"Reflector_1_1",
			"Reflector_2_1"
	 	};		 
	};
	
	class Truck_01_Wheel: CarWheel
	{
		scope = 2;
		displayName = "$STR_V3SWheel0";
		descriptionShort = "$STR_V3SWheel1";
		model = "\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_Wheel.p3d";
		weight = 30000;
		itemSize[] = {10,10};
		itemBehaviour = 0;
		inventorySlot[] = {"Truck_01_Wheel_1_1","Truck_01_Wheel_2_1","Truck_01_Wheel_Spare_1","Truck_01_Wheel_Spare_2","Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_2_1","Truck_Tatra_Wheel_Spare_1","Truck_Tatra_Wheel_Spare_2"};
		rotationFlags = 12;
		physLayer = "item_large";
		tyreRollDrag = 10;
		tyreRollResistance = 0.07;
		tyreTread = 0.95;
		radiusByDamage[] = {0,0.465,0.3,0.38,0.9998,0.35,0.9999,0.28};
		radius = 0.465;
		width = 0.2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					//healthLevels[] = {{1.0,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire.rvmat","DZ\vehicles\wheeled\Truck_01\data\v3s_rim.rvmat"}},{0.7,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire.rvmat","DZ\vehicles\wheeled\Truck_01\data\v3s_rim.rvmat"}},{0.5,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_damage.rvmat","DZ\vehicles\wheeled\Truck_01\data\v3s_rim_damage.rvmat"}},{0.3,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_damage.rvmat","DZ\vehicles\wheeled\Truck_01\data\v3s_rim_damage.rvmat"}},{0.0,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_destruct.rvmat","DZ\vehicles\wheeled\Truck_01\data\v3s_rim_destruct.rvmat"}}};
				};
			};
		};
	};
	class Truck_01_Wheel_Ruined: Truck_01_Wheel
	{
		model = "\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_Wheel_ruined.p3d";
		weight = 25000;
		tyreRollResistance = 1;
		tyreRollDrag = 80;
		tyreRoughness = 1.35;
		tyreTread = 0.45;
		radius = 0.3;
		friction = -1.0;
		width = 0.2;
	};
	class Truck_01_WheelDouble: Truck_01_Wheel
	{
		displayName = "$STR_V3SWheelDouble0";
		descriptionShort = "$STR_V3SWheelDouble1";
		model = "\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble.p3d";
		weight = 50000;
		inventorySlot[] = {"Truck_01_Wheel_1_2","Truck_01_Wheel_1_3","Truck_01_Wheel_2_2","Truck_01_Wheel_2_3","Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_2_3"};
		width = 0.4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire.rvmat","DZ\vehicles\wheeled\Truck_01\data\Truck_01_rim.rvmat"}},{0.7,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire.rvmat","DZ\vehicles\wheeled\Truck_01\data\Truck_01_rim.rvmat"}},{0.5,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_damage.rvmat","DZ\vehicles\wheeled\Truck_01\data\Truck_01_rim_damage.rvmat"}},{0.3,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_damage.rvmat","DZ\vehicles\wheeled\Truck_01\data\Truck_01_rim_damage.rvmat"}},{0.0,{"DZ\vehicles\wheeled\Truck_01\data\Truck_01_tire_destruct.rvmat","DZ\vehicles\wheeled\Truck_01\data\Truck_01_rim_destruct.rvmat"}}};
				};
			};
		};
	};
	class Truck_01_WheelDouble_Ruined: Truck_01_WheelDouble
	{
		model = "\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble_ruined.p3d";
		tyreRollResistance = 1;
		tyreRollDrag = 80;
		tyreRoughness = 1.35;
		tyreTread = 0.45;
		radius = 0.3;
		friction = -1.0;
	};


	class Truck_Tatra_Door_1_1: CarDoor
	{
		scope = 2;	
		displayName = "Tatra Driver Door";
		descriptionShort = "Tatra Driver Door";
		model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Door_1_1.p3d";
		weight = 15000;
		itemSize[] = {10,10};
		inventorySlot[] = {"Truck_Tatra_Door_1_1"};
		rotationFlags = 8;
		hiddenSelections[] = {"dmgZone_doors","dmgZone_doors_inside"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\glass_i.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\glass_i_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\glass_i_destruct.rvmat"}},{0.0,"hidden"}};
					};
					componentNames[] = {"dmgZone_window"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Doors
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_door.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_door.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_door_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_door_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_door_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_doors"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
			};
		};
	};
	class Truck_Tatra_Door_2_1: Truck_Tatra_Door_1_1
	{
		displayName = "Tatra Passenger Door";
		descriptionShort = "Tatra Passenger Door";
		model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Door_2_1.p3d";
		inventorySlot[] = {"Truck_Tatra_Door_2_1"};
		rotationFlags = 4;
	};
	class Truck_Tatra_Hood: Truck_Tatra_Door_1_1
	{
		scope = 2;
		displayName = "Tatra Hood";
		descriptionShort = "Tatra Hood";
		model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Hood.p3d";
		inventorySlot[] = {"Truck_Tatra_Hood"};
		rotationFlags = 2;
		hiddenSelections[] = {"dmgZone_doors","camo_door"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_destruct.rvmat"}}};
				};
				componentNames[] = {"dmgZone_doors"};
			};
		};
	};

	class Truck_Tatra_Trunk: Truck_Tatra_Door_1_1
	{
		scope = 2;
		displayName = "Tatra Trunk";
		descriptionShort = "Tatra Trunk";
		model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Trunk.p3d";
		inventorySlot[] = {"Truck_Tatra_Trunk"};
		rotationFlags = 2;
		hiddenSelections[] = {"dmgZone_doors","camo_door"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_hood_destruct.rvmat"}}};
				};
				componentNames[] = {"dmgZone_doors"};
			};
		};
	};
	class Truck_Tatra_Base: Truck_01_Base
	{
		scope = 0;
		displayName = "Truck Tatra";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","Truck_Tatra_Door_1_1","Truck_Tatra_Door_2_1","Truck_Tatra_Hood","Truck_Tatra_Trunk","Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_2_1","Truck_Tatra_Wheel_Spare_1","Truck_Tatra_Wheel_Spare_2","Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_3"};
		//hiddenSelections[] = {"light_1_1","light_2_1","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","dmgZone_chassis","dmgZone_front","dmgZone_back","dmgZone_roof","dmgZone_fueltank","dmgZone_fender_1_1","dmgZone_fender_1_2","dmgZone_fender_2_1","dmgZone_fender_2_2","dmgZone_wood","cabine_interior"};
		//hiddenSelectionsTextures[] = {"","","","","","","","","","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)","#(argb,8,8,3)color(0.521569,0.427451,0.054902,1.0,co)"};
		dashboardMatOn = "dz\vehicles\wheeled\truck_01\data\truck_01_dashboard_light.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\truck_01\data\truck_01_dashboard.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\truck_01\data\truck_01_cab_e.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\truck_01\data\truck_01_cab.rvmat";
		brakeReflectorMatOn = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights_e.rvmat";
		brakeReflectorMatOff = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights.rvmat";
		ReverseReflectorMatOn = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights_e.rvmat";
		ReverseReflectorMatOff = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights.rvmat";
		TailReflectorMatOn = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights_e.rvmat";
		TailReflectorMatOff = "dz\vehicles\wheeled\truck_01\data\truck_01_taillights.rvmat";
		fuelCapacity = 120;
		fuelConsumption = 30;
		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_662";
			centralDiffRatio = 2.15;
			airDragFrontTotal = 0.8;
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.3,0.15,0.4,0.5,0.5,3,1};
			class Engine
			{
				inertia = 0.15;
				torqueMax = 114;
				torqueRpm = 3400;
				powerMax = 53.7;
				powerRpm = 5400;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1350;
				rpmRedline = 6000;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.45;
				maxClutchTorque = 260;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 35;
					finalRatio = 3.9;
					brakeBias = 0.4;
					brakeForce = 7000;
					wheelHubMass = 25;
					wheelHubRadius = 0.3;
					wheelHubRatio = 2.14;
					class Suspension
					{
						stiffness = 55000;
						compression = 3000;
						damping = 7000;
						travelMaxUp = 0.14;
						travelMaxDown = 0.15;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_1";
							inventorySlot = "Truck_Tatra_Wheel_1_1";
						};
						class Right: Right
						{
							animDamper = "damper_2_1";
							inventorySlot = "Truck_Tatra_Wheel_2_1";
						};
					};
				};
				class Middle: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 3.9;
					brakeBias = 0.3;
					brakeForce = 8000;
					wheelHubMass = 45;
					wheelHubRadius = 0.3;
					wheelHubRatio = 2.14;
					class Suspension
					{
						stiffness = 55000;
						compression = 2500;
						damping = 8000;
						travelMaxUp = 0.095;
						travelMaxDown = 0.125;
					};
					class Wheels: Wheels
					{
						class Left
						{
							inventorySlot = "Truck_Tatra_Wheel_1_2";
							animTurn = "turnmiddleleft";
							animRotation = "wheelmiddleleft";
							animDamper = "damper_1_2";
							wheelHub = "wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot = "Truck_Tatra_Wheel_2_2";
							animTurn = "turnmiddletright";
							animRotation = "wheelmiddleright";
							animDamper = "damper_2_2";
							wheelHub = "wheel_2_2_damper_land";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 3.9;
					brakeBias = 0.3;
					brakeForce = 8000;
					wheelHubMass = 45;
					wheelHubRadius = 0.3;
					wheelHubRatio = 2.14;
					class Suspension
					{
						stiffness = 55000;
						compression = 2500;
						damping = 8000;
						travelMaxUp = 0.095;
						travelMaxDown = 0.125;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_3";
							inventorySlot = "Truck_Tatra_Wheel_1_3";
							wheelHub = "wheel_1_3_damper_land";
						};
						class Right: Right
						{
							animDamper = "damper_2_3";
							inventorySlot = "Truck_Tatra_Wheel_2_3";
							wheelHub = "wheel_2_3_damper_land";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,40};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			// class WheelSidePlate1
			// {
			// 	source = "user";
			// 	initPhase = 0;
			// 	animPeriod = 1.3;
			// };
			// class WheelSidePlate2: WheelSidePlate1{};
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class Damper_1_1
			{
				source = "user";
				initPhase = 0.4828;
				animPeriod = 1;
			};
			class Damper_2_1: Damper_1_1{};
			class Damper_1_2
			{
				source = "user";
				initPhase = 0.4318;
				animPeriod = 1;
			};
			class Damper_2_2: Damper_1_2{};
			class Damper_1_3: Damper_1_2{};
			class Damper_2_3: Damper_1_2{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {};
					componentNames[] = {"dmgZone_roof"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgZone_engine"};
					componentNames[] = {"dmgZone_engine"};
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Front
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_front"};
					componentNames[] = {"dmgZone_front"};
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {"Engine"};
					transferToZonesCoefs[] = {0.2};
					inventorySlots[] = {"Truck_Tatra_Hood"};
					inventorySlotsCoefs[] = {0.1};
				};
				// class BackWood
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_wood"};
				// 	componentNames[] = {"dmgZone_wood"};
				// 	class Health
				// 	{
				// 		hitpoints = 3000;
				// 		transferToGlobalCoef = 0;
				// 		healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_destruct.rvmat"}}};
				// 	};
				// 	transferToZonesNames[] = {};
				// 	transferToZonesCoefs[] = {};
				// 	inventorySlots[] = {};
				// 	inventorySlotsCoefs[] = {};
				// };
				// class BackTarp
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_tarp"};
				// 	componentNames[] = {"dmgZone_tarp"};
				// 	class Health
				// 	{
				// 		hitpoints = 1000;
				// 		transferToGlobalCoef = 0;
				// 		healthLevels[] = {{1.0,{"dz\gear\camping\Data\tent_pristine_co.paa"}},{0.7,{"dz\gear\camping\data\tent_worn_co.paa"}},{0.5,{"dz\gear\camping\data\tent_damage_co.paa"}},{0.3,{"dz\gear\camping\data\tent_destruct_co.paa"}},{0.0,{"dz\gear\camping\data\tent_destruct_co.paa"}}};
				// 	};
				// 	transferToZonesNames[] = {};
				// 	transferToZonesCoefs[] = {};
				// 	inventorySlots[] = {};
				// 	inventorySlotsCoefs[] = {};
				// };
				class Roof
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_roof"};
					componentNames[] = {"dmgZone_roof"};
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cab.rvmat","dz\vehicles\wheeled\Truck_01\data\truck_01_cargo.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cab.rvmat","dz\vehicles\wheeled\Truck_01\data\truck_01_cargo.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_damage.rvmat","dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_damage.rvmat","dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_destruct.rvmat","dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				// class Fender_1_1
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_fender_1_1"};
				// 	componentNames[] = {"dmgZone_fender_1_1"};
				// 	class Health
				// 	{
				// 		hitpoints = 800;
				// 		transferToGlobalCoef = 0;
				// 		healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_destruct.rvmat"}}};
				// 	};
				// 	transferToZonesNames[] = {"Front","Engine","Roof"};
				// 	transferToZonesCoefs[] = {0.1,0.05,0.15};
				// 	inventorySlots[] = {"Truck_Tatra_Hood"};
				// 	inventorySlotsCoefs[] = {0.1};
				// };
				// class Fender_2_1: Fender_1_1
				// {
				// 	memoryPoints[] = {"dmgZone_fender_2_1"};
				// 	componentNames[] = {"dmgZone_fender_2_1"};
				// };
				// class WindowLeft
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_windowLeft"};
				// 	componentNames[] = {"dmgZone_windowLeft"};
				// 	class Health
				// 	{
				// 		hitpoints = 50;
				// 		transferToGlobalCoef = 0;
				// 		//healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\glass_i_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\glass_i_destruct.rvmat"}},{0.0,"hidden"}};
				// 	};
				// 	transferToZonesNames[] = {};
				// 	transferToZonesCoefs[] = {};
				// 	inventorySlots[] = {};
				// 	inventorySlotsCoefs[] = {};
				// };
				// class WindowRight: WindowLeft
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_windowRight"};
				// 	componentNames[] = {"dmgZone_windowRight"};
				// 	inventorySlots[] = {};
				// 	inventorySlotsCoefs[] = {};
				// };
				// class WindowBack: WindowLeft
				// {
				// 	fatalInjuryCoef = -1;
				// 	memoryPoints[] = {"dmgZone_windowBack"};
				// 	componentNames[] = {"dmgZone_windowBack"};
				// 	inventorySlots[] = {};
				// };
				class FuelTank
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_fuelTank"};
					componentNames[] = {"dmgZone_fuelTank"};
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis.rvmat"}},{0.7,{"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis.rvmat"}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Reflector_1_1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_lights_1_1"};
					componentNames[] = {"dmgZone_lights_1_1"};
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat"}},{0.3,{}},{0.0,{"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {"Front","Fender_1_1"};
					transferToZonesCoefs[] = {1.0,1.0};
					inventorySlots[] = {"Reflector_1_1"};
					inventorySlotsCoefs[] = {1.0};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[] = {"dmgZone_lights_2_1"};
					componentNames[] = {"dmgZone_lights_2_1"};
					transferToZonesNames[] = {"Front","Fender_2_1"};
					inventorySlots[] = {"Reflector_2_1"};
				};
			};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,1.5};
					};
					class Cyl2
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-1.5};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				icon = "cat_vehicle_engine";
				attachmentSlots[] = {"TruckBattery"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon = "cat_vehicle_body";
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1","Truck_Tatra_Door_1_1","Truck_Tatra_Door_2_1","Truck_Tatra_Hood","Truck_Tatra_Trunk"};
			};
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_2_1","Truck_Tatra_Wheel_Spare_1","Truck_Tatra_Wheel_Spare_2","Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_3"};
			};
		};
	};


		class Truck_Tatra: Truck_Tatra_Base
	{
		scope = 2;
		displayName = "Tatra";
		model = "THE_ALLIANCE_tatra\tatra\Truck_Tatra_Chassis.p3d";
		attachments[] = {"TruckBattery","Reflector_1_1","Reflector_2_1","Truck_Tatra_Door_1_1","Truck_Tatra_Door_2_1","Truck_Tatra_Hood","Truck_Tatra_Trunk","Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_1","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_2_3"};
		class Cargo
		{
			itemsCargoSize[] = {10,60};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				icon = "cat_vehicle_engine";
				attachmentSlots[] = {"TruckBattery"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon = "cat_vehicle_body";
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1","Truck_Tatra_Door_1_1","Truck_Tatra_Door_2_1","Truck_Tatra_Hood","Truck_Tatra_Trunk"};
			};
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_1","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_2_3"};
			};
			// class BaseBuildingAttachments
			// {
			// 	name = "$STR_cfgvehicles_fence_att_category_materials";
			// 	description = "";
			// 	icon = "cat_common_cargo";
			// 	attachmentSlots[] = {"Truck_01_WoodenLogs","Truck_01_WoodenPlanks","Truck_01_MetalSheets"};
			// };
			// class BaseBuildingContainers
			// {
			// 	name = "$STR_attachment_containers0";
			// 	description = "";
			// 	icon = "cat_common_cargo";
			// 	attachmentSlots[] = {"Truck_01_Barrel1","Truck_01_Barrel2","Truck_01_Barrel3","Truck_01_Barrel4","Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
			// };
		};
	};

	};
	
	
	class CfgNonAIVehicles
	{
		class ProxyAttachment;
		class ProxyVehiclePart: ProxyAttachment
		{
			scope = 2;
			simulation = "ProxyInventory";
			autocenter = 0;
			animated = 0;
			shadow = 1;
			reversed = 0;
		};
		class ProxyTruck_01_Wheel: ProxyVehiclePart
		{
			model = "DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_Wheel.p3d";
			inventorySlot[] = {"Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_2_1"};
		};
		class ProxyTruck_01_Wheel_ruined: ProxyVehiclePart
		{
			model = "DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_Wheel_ruined.p3d";
			inventorySlot[] = {"Truck_Tatra_Wheel_1_1","Truck_Tatra_Wheel_2_1"};
		};
		class ProxyTruck_01_WheelDouble: ProxyVehiclePart
		{
			model = "DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble.p3d";
			inventorySlot[] = {"Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_2_3"};
		};
		class ProxyTruck_01_WheelDouble_ruined: ProxyVehiclePart
		{
			model = "DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble_ruined.p3d";
			inventorySlot[] = {"Truck_Tatra_Wheel_1_2","Truck_Tatra_Wheel_1_3","Truck_Tatra_Wheel_2_2","Truck_Tatra_Wheel_2_3"};
		};
		class ProxyTruck_Tatra_Door_1_1: ProxyVehiclePart
		{
			model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Door_1_1.p3d";
			inventorySlot = "Truck_Tatra_Door_1_1";
		};
		class ProxyTruck_Tatra_Door_2_1: ProxyVehiclePart
		{
			model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Door_2_1.p3d";
			inventorySlot = "Truck_Tatra_Door_2_1";
		};
		class ProxyTruck_Tatra_Hood: ProxyVehiclePart
		{
			model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Hood.p3d";
			inventorySlot = "Truck_Tatra_Hood";
		};
		class ProxyTruck_Tatra_Trunk: ProxyVehiclePart
		{
			model = "THE_ALLIANCE_tatra\tatra\proxy\Truck_Tatra_Trunk.p3d";
			inventorySlot = "Truck_Tatra_Trunk";
		};




		// class Proxycamo_net_p: ProxyVehiclePart
		// {
		// 	model = "DZ\gear\camping\camo_net_p.p3d";
		// 	inventorySlot = "CamoNet";
		// };


	class Proxyreflector_replacement: ProxyVehiclePart
		{
			model="\DZ\vehicles\parts\Replacement_Headlight.p3d";
			inventorySlot[] = {"Reflector_1_1","Reflector_2_1"};
		};


};
