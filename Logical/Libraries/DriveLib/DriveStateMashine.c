
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "DriveLib.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void DriveStateMashine(struct DriveStateMashine* inst)
{
	UINT mask = inst->state & 0x6f;
	if (inst->enable)
	{
		switch (mask)
		{
			case STATE_DISABLED:
				{
					inst->command = CMD_SHUTDOWN;
					break;
				}
			case STATE_READY:
				{
					inst->command = CMD_ENABLE;
					break;
				}
			case STATE_SWITCHED_ON:
				{
					inst->command = CMD_SWITCH_ON;
					break;
				}
		}
		
	}
	else
	{
		inst->state = STATE_DISABLED;
		inst->command = CMD_SHUTDOWN;
	}
	
	/*
	DoorSM(&());
	if (!(door->sw1))
	{
		DriveSM.state = STATE_SWITCHED_ON;
	}
	else
	{
		DriveSM.state = STATE_READY;
	}
	
	if (DriveSM.state == STATE_SWITCHED_ON)
	{
		DriveSM.command = CMD_SWITCH_ON;
	}
	else
	{
		DriveSM.command = CMD_ENABLE;
	}
	*/
}
