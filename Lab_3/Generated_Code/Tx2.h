/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Tx2.h
**     Project     : Lab_3
**     Processor   : MK20DX128VLH5
**     Component   : RingBuffer
**     Version     : Component 01.039, Driver 01.00, CPU db: 3.00.000
**     Repository  : My Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-08-09, 08:29, # CodeGen: 1
**     Abstract    :
**         This component implements a ring buffer for different integer data type.
**     Settings    :
**          Component name                                 : Tx2
**          Reentrant                                      : yes
**          Critical Section                               : CS1
**          Buffer Size                                    : 4
**          Element Size                                   : 4 Bytes
**     Contents    :
**         Clear           - void Tx2_Clear(void);
**         Put             - uint8_t Tx2_Put(Tx2_ElementType elem);
**         Get             - uint8_t Tx2_Get(Tx2_ElementType *elemP);
**         Peek            - uint8_t Tx2_Peek(Tx2_BufSizeType index, Tx2_ElementType *elemP);
**         NofElements     - Tx2_BufSizeType Tx2_NofElements(void);
**         NofFreeElements - Tx2_BufSizeType Tx2_NofFreeElements(void);
**         Deinit          - void Tx2_Deinit(void);
**         Init            - void Tx2_Init(void);
**
**     License   :  Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2014, all rights reserved.
**     Web: http://www.mcuoneclipse.com
**     This an open source software of an embedded component for Processor Expert.
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file Tx2.h
** @version 01.00
** @brief
**         This component implements a ring buffer for different integer data type.
*/         
/*!
**  @addtogroup Tx2_module Tx2 module documentation
**  @{
*/         

#ifndef __Tx2_H
#define __Tx2_H

/* MODULE Tx2. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "CS1.h"

#include "Cpu.h"


#define Tx2_BUF_SIZE    4   /* number of elements in the buffer */
#define Tx2_ELEM_SIZE   4  /* size of a single element in bytes */
#define Tx2_IS_REENTRANT   1  /* 1: Critical section used for accessing shared data, 0 otherwise */
#if Tx2_ELEM_SIZE==1
  typedef uint8_t Tx2_ElementType; /* type of single element */
#elif Tx2_ELEM_SIZE==2
  typedef uint16_t Tx2_ElementType; /* type of single element */
#elif Tx2_ELEM_SIZE==4
  typedef uint32_t Tx2_ElementType; /* type of single element */
#else
  #error "illegal element type size in properties"
#endif
#if Tx2_BUF_SIZE<256
  typedef uint8_t Tx2_BufSizeType; /* up to 255 elements (index 0x00..0xff) */
#else
  typedef uint16_t Tx2_BufSizeType; /* more than 255 elements, up to 2^16 */
#endif

uint8_t Tx2_Put(Tx2_ElementType elem);
/*
** ===================================================================
**     Method      :  Tx2_Put (component RingBuffer)
**     Description :
**         Puts a new element into the buffer
**     Parameters  :
**         NAME            - DESCRIPTION
**         elem            - New element to be put into the buffer
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t Tx2_Get(Tx2_ElementType *elemP);
/*
** ===================================================================
**     Method      :  Tx2_Get (component RingBuffer)
**     Description :
**         Removes an element from the buffer
**     Parameters  :
**         NAME            - DESCRIPTION
**       * elemP           - Pointer to where to store the received
**                           element
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

Tx2_BufSizeType Tx2_NofElements(void);
/*
** ===================================================================
**     Method      :  Tx2_NofElements (component RingBuffer)
**     Description :
**         Returns the actual number of elements in the buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Number of elements in the buffer.
** ===================================================================
*/

void Tx2_Init(void);
/*
** ===================================================================
**     Method      :  Tx2_Init (component RingBuffer)
**     Description :
**         Initializes the data structure
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

Tx2_BufSizeType Tx2_NofFreeElements(void);
/*
** ===================================================================
**     Method      :  Tx2_NofFreeElements (component RingBuffer)
**     Description :
**         Returns the actual number of free elements/space in the
**         buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Number of elements in the buffer.
** ===================================================================
*/

void Tx2_Clear(void);
/*
** ===================================================================
**     Method      :  Tx2_Clear (component RingBuffer)
**     Description :
**         Clear (empty) the ring buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

uint8_t Tx2_Peek(Tx2_BufSizeType index, Tx2_ElementType *elemP);
/*
** ===================================================================
**     Method      :  Tx2_Peek (component RingBuffer)
**     Description :
**         Returns an element of the buffer without removiing it.
**     Parameters  :
**         NAME            - DESCRIPTION
**         index           - Index of element. 0 peeks the top
**                           element, 1 the next, and so on.
**       * elemP           - Pointer to where to store the received
**                           element
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

#define Tx2_Deinit() \
   /* nothing to deinitialize */
/*
** ===================================================================
**     Method      :  Tx2_Deinit (component RingBuffer)
**     Description :
**         Driver de-initialization
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END Tx2. */

#endif
/* ifndef __Tx2_H */
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
