/* Automation Studio generated header file */
/* Do not edit ! */
/* DriveLib  */

#ifndef _DRIVELIB_
#define _DRIVELIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define CMD_ENABLE 15U
 #define CMD_SWITCH_ON 7U
 #define CMD_SHUTDOWN 6U
 #define STATE_DISABLED 64U
 #define STATE_SWITCHED_ON 35U
 #define STATE_READY 33U
#else
 _GLOBAL_CONST unsigned char CMD_ENABLE;
 _GLOBAL_CONST unsigned char CMD_SWITCH_ON;
 _GLOBAL_CONST unsigned char CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned char STATE_DISABLED;
 _GLOBAL_CONST unsigned char STATE_SWITCHED_ON;
 _GLOBAL_CONST unsigned char STATE_READY;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum states_door
{	ST_INIT = 1,
	ST_UNKNOWN = 2,
	ST_OPEN = 3,
	ST_CLOSE = 4,
	ST_ACC_POS = 5,
	ST_ACC_NEG = 6,
	ST_POS = 7,
	ST_NEG = 8,
	ST_DEC_POS = 9,
	ST_DEC_NEG = 10
} states_door;

typedef struct DriveStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMashine_typ;

typedef struct DoorStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit sw4;
	plcbit direction;
} DoorStateMashine_typ;

typedef struct LedStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led1;
	plcbit led2;
	plcbit led3;
	plcbit led4;
} LedStateMashine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMashine(struct DriveStateMashine* inst);
_BUR_PUBLIC void DoorStateMashine(struct DoorStateMashine* inst);
_BUR_PUBLIC void LedStateMashine(struct LedStateMashine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _DRIVELIB_ */

