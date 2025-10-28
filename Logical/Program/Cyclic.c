
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	
	DoorStateMashine(&DoorSM);
	DriveSM.speed = DoorSM.speed;
	
	DriveStateMashine(&DriveSM);
	LedSM.state = DoorSM.state;
	
	LedStateMashine(&LedSM);
	
	/*
	if (!DoorSM.sw1)
	{
		DriveSM.state = 35;
	}
	else
	{
		DriveSM.state = 33;
	}
	
	if (DriveSM.state == 35)
	{
		DriveSM.command = 7;
	}
	else
	{
		DriveSM.command = 15;
	}
*/	
	
	
	
}
