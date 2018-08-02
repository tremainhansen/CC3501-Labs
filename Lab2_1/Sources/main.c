/* ###################################################################
**     Filename    : main.c
**     Project     : Lab2_1
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-08-02, 10:26, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Term1.h"
#include "Inhr1.h"
#include "ASerialLdd1.h"
#include "CI2C1.h"
#include "IntI2cLdd1.h"
#include "TU1.h"
#include "TU2.h"
#include "RED_PWM1.h"
#include "PwmLdd1.h"
#include "GREEN_PWM.h"
#include "PwmLdd2.h"
#include "BLUE_PWM.h"
#include "PwmLdd3.h"
#include "FC321.h"
#include "RealTimeLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/


  int count;
  int count1;
  signed short int motion_data[3];
  byte buf[2];

  word num = 0;
  buf[0] = 0x2A;
  buf[1] = 0b1;

  CI2C1_SelectSlave(0x1D);

  if (ERR_OK != CI2C1_SendBlock(&buf, 2, &num)){
 	  Term1_SendStr("ERROR");
 	  return 0;
  }
  else{
 	  Term1_SendStr("I2C working");
  }
  	  FC321_GetTimeMS(&count);
  	Term1_Cls();
    FC321_Reset();
    //set up terminal
    Term1_MoveTo(0,2);
    Term1_SendStr("X motion:");

    Term1_MoveTo(0,3);
    Term1_SendStr("Y motion:");

    Term1_MoveTo(0,4);
    Term1_SendStr("Z motion:");



  for(;;){

  if (ERR_OK != CI2C1_SendChar(0x01)){};

  // read motion
  if (ERR_OK != CI2C1_RecvBlock(&motion_data, 6, &num)){}

  	 if (count1 - count == 200)		// run every 200ms
  		  {
  		 	 	// add in update for acc in terminal
  		 		Term1_MoveTo(11,2);
  		 		Term1_SendStr("       ");
  		 		Term1_MoveTo(11,2);
  		 		Term1_SendNum(motion_data[0]);

  		 		Term1_MoveTo(11,3);
  		 		Term1_SendStr("       ");
  		 		Term1_MoveTo(11,3);
  		 		Term1_SendNum(motion_data[1]);

  		 		Term1_MoveTo(11,4);
  		 		Term1_SendStr("       ");
  		 		Term1_MoveTo(11,4);
  		 		Term1_SendNum(motion_data[2]);

  		 		// reset clock for next update
  		 		FC321_Reset();
  		 		FC321_GetTimeMS(&count);
  		  }


  		  FC321_GetTimeMS(&count1);
  		  // add in PMW

  		 RED_PWM1_SetRatio16(abs(motion_data[0]));
  		 GREEN_PWM_SetRatio16(abs(motion_data[1]));
  		 BLUE_PWM_SetRatio16(abs(motion_data[2]));

   }


  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
