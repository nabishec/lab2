
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	//DoorSM.state = 1;
	//DriveSM.speed = 100;
	//LedSM.led1 = 1;
	//LedSM.led2 = 1;
	//DriveSM.state = 33;
	//DriveSM.command = 6;
	DoorSM.state = 1;
	DriveSM.enable = 1;
}
