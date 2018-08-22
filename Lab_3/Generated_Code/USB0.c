/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : USB0.c
**     Project     : Lab_3
**     Processor   : MK20DX128VLH5
**     Component   : Init_USB_OTG
**     Version     : Component 01.004, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-08-09, 09:46, # CodeGen: 2
**     Abstract    :
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : USB0
**          Device                                         : USB0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Clock divider                              : 
**                Clock divider source                     : PLL/FLL clock
**                Clock divider input frequency            : 48 MHz
**                Clock divider fraction                   : multiply by 1
**                Clock divider divisor                    : divide by 1
**              Module clock source                        : Clock divider output
**              Module clock frequency                     : 48 MHz
**            Pull-up/pull-down settings                   : 
**              Weak pulldowns                             : Enabled
**              Pull-up/pull-down control                  : Mode dependent
**              D+ pull-up                                 : Disabled
**              D+ pull-down                               : Disabled
**              D- pull-down                               : Disabled
**              D+ pull-up for non-OTG mode                : Disabled
**            Endpoints                                    : 
**              EP0                                        : Disabled
**                Direct low speed                         : Disabled
**                Retry                                    : Enabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP1                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP2                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP3                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP4                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP5                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP6                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP7                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP8                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP9                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP10                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP11                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP12                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP13                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP14                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP15                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**            Buffer descriptor table                      : 
**              External object declaration                : extern uint8_t g_Mem[];
**              Address                                    : ((uint32_t)&g_Mem[0])
**            SOF threshold                                : 0
**          Pins                                           : 
**            Alternate clock source                       : Disabled
**            SOF output                                   : Disabled
**            Data plus                                    : Enabled
**              Pin                                        : USB0_DP
**              Pin signal                                 : 
**            Data minus                                   : Enabled
**              Pin                                        : USB0_DM
**              Pin signal                                 : 
**          Interrupts                                     : 
**            USB                                          : 
**              Interrupt                                  : INT_USB0
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR Name                                   : USB_ISR
**              Stall                                      : Enabled
**              Attach                                     : Enabled
**              Resume                                     : Enabled
**              Sleep                                      : Enabled
**              Token OK                                   : Enabled
**              Start of frame                             : Enabled
**              Error interrupt                            : Enabled
**              USB reset                                  : Enabled
**              Asynchronous Resume interrupt              : Enabled
**              Error interrupts                           : 
**                Bit stuff error                          : Disabled
**                DMA error                                : Disabled
**                Bus turnaround timeout                   : Disabled
**                Data length error                        : Disabled
**                CRC16 error                              : Disabled
**                CRC5 or EOF                              : Disabled
**                PID error                                : Disabled
**              OTG interrupts                             : 
**                ID pin changed                           : Disabled
**                1 ms interrupt                           : Disabled
**                Line stage change                        : Disabled
**                Session valid                            : Disabled
**                "B" session end                          : Disabled
**                "A" bus valid                            : Disabled
**          Initialization                                 : 
**            Mode                                         : Device
**            USB transceiver suspend state                : Enabled
**            Call Init method                             : yes
**     Contents    :
**         Init - void USB0_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file USB0.c
** @version 01.04
** @brief
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup USB0_module USB0 module documentation
**  @{
*/         

/* MODULE USB0. */

#include "USB0.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  USB0_Init (component Init_USB_OTG)
**     Description :
**         This method initializes registers of the USB_OTG module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
extern uint8_t g_Mem[];
void USB0_Init(void)
{
  /* SIM_CLKDIV2: USBDIV=0,USBFRAC=0 */
  SIM_CLKDIV2 &= (uint32_t)~(uint32_t)(
                  SIM_CLKDIV2_USBDIV(0x07) |
                  SIM_CLKDIV2_USBFRAC_MASK
                 );
  /* SIM_SOPT2: USBSRC=1 */
  SIM_SOPT2 |= SIM_SOPT2_USBSRC_MASK;
  /* SIM_SCGC4: USBOTG=1 */
  SIM_SCGC4 |= SIM_SCGC4_USBOTG_MASK;
  /* USB0_CTL: ODDRST=1 */
  USB0_CTL |= USB_CTL_ODDRST_MASK;
  /* USB0_USBCTRL: SUSP=1,PDE=1,??=0,??=0,??=0,??=0,??=0,??=0 */
  USB0_USBCTRL = (USB_USBCTRL_SUSP_MASK | USB_USBCTRL_PDE_MASK);
  /* USB0_OTGISTAT: IDCHG=1,ONEMSEC=1,LINE_STATE_CHG=1,??=1,SESSVLDCHG=1,B_SESS_CHG=1,??=1,AVBUSCHG=1 */
  USB0_OTGISTAT = USB_OTGISTAT_IDCHG_MASK |
                  USB_OTGISTAT_ONEMSEC_MASK |
                  USB_OTGISTAT_LINE_STATE_CHG_MASK |
                  USB_OTGISTAT_SESSVLDCHG_MASK |
                  USB_OTGISTAT_B_SESS_CHG_MASK |
                  USB_OTGISTAT_AVBUSCHG_MASK |
                  0x12U;
  /* USB0_ISTAT: STALL=1,ATTACH=1,RESUME=1,SLEEP=1,TOKDNE=1,SOFTOK=1,ERROR=1,USBRST=1 */
  USB0_ISTAT = USB_ISTAT_STALL_MASK |
               USB_ISTAT_ATTACH_MASK |
               USB_ISTAT_RESUME_MASK |
               USB_ISTAT_SLEEP_MASK |
               USB_ISTAT_TOKDNE_MASK |
               USB_ISTAT_SOFTOK_MASK |
               USB_ISTAT_ERROR_MASK |
               USB_ISTAT_USBRST_MASK;
  /* USB0_ERRSTAT: BTSERR=1,??=1,DMAERR=1,BTOERR=1,DFN8=1,CRC16=1,CRC5EOF=1,PIDERR=1 */
  USB0_ERRSTAT = USB_ERRSTAT_BTSERR_MASK |
                 USB_ERRSTAT_DMAERR_MASK |
                 USB_ERRSTAT_BTOERR_MASK |
                 USB_ERRSTAT_DFN8_MASK |
                 USB_ERRSTAT_CRC16_MASK |
                 USB_ERRSTAT_CRC5EOF_MASK |
                 USB_ERRSTAT_PIDERR_MASK |
                 0x40U;
  /* USB0_INTEN: STALLEN=1,ATTACHEN=1,RESUMEEN=1,SLEEPEN=1,TOKDNEEN=1,SOFTOKEN=1,ERROREN=1,USBRSTEN=1 */
  USB0_INTEN = USB_INTEN_STALLEN_MASK |
               USB_INTEN_ATTACHEN_MASK |
               USB_INTEN_RESUMEEN_MASK |
               USB_INTEN_SLEEPEN_MASK |
               USB_INTEN_TOKDNEEN_MASK |
               USB_INTEN_SOFTOKEN_MASK |
               USB_INTEN_ERROREN_MASK |
               USB_INTEN_USBRSTEN_MASK;
  /* USB0_ERREN: BTSERREN=0,??=0,DMAERREN=0,BTOERREN=0,DFN8EN=0,CRC16EN=0,CRC5EOFEN=0,PIDERREN=0 */
  USB0_ERREN = 0x00U;
  /* USB0_USBTRC0: USBRESET=0,??=1,USBRESMEN=1,??=0,??=0,??=0,SYNC_DET=0,USB_RESUME_INT=0 */
  USB0_USBTRC0 = (USB_USBTRC0_USBRESMEN_MASK | 0x40U);
  /* USB0_OTGICR: IDEN=0,ONEMSECEN=0,LINESTATEEN=0,??=0,SESSVLDEN=0,BSESSEN=0,??=0,AVBUSEN=0 */
  USB0_OTGICR = 0x00U;
  /* USB0_ADDR: LSEN=0,ADDR=0 */
  USB0_ADDR = USB_ADDR_ADDR(0x00);
  /* USB0_ENDPT0: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT0 = 0x00U;
  /* USB0_ENDPT1: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT1 = 0x00U;
  /* USB0_ENDPT2: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT2 = 0x00U;
  /* USB0_ENDPT3: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT3 = 0x00U;
  /* USB0_ENDPT4: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT4 = 0x00U;
  /* USB0_ENDPT5: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT5 = 0x00U;
  /* USB0_ENDPT6: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT6 = 0x00U;
  /* USB0_ENDPT7: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT7 = 0x00U;
  /* USB0_ENDPT8: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT8 = 0x00U;
  /* USB0_ENDPT9: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT9 = 0x00U;
  /* USB0_ENDPT10: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT10 = 0x00U;
  /* USB0_ENDPT11: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT11 = 0x00U;
  /* USB0_ENDPT12: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT12 = 0x00U;
  /* USB0_ENDPT13: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT13 = 0x00U;
  /* USB0_ENDPT14: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT14 = 0x00U;
  /* USB0_ENDPT15: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
  USB0_ENDPT15 = 0x00U;
  USB0_BDTPAGE1 = (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x08) & 0xFEU);
  USB0_BDTPAGE2 = (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x10) & 0xFFU);
  USB0_BDTPAGE3 = (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x18) & 0xFFU);
  /* USB0_SOFTHLD: CNT=0 */
  USB0_SOFTHLD = USB_SOFTHLD_CNT(0x00);
  /* USB0_OTGCTL: DPHIGH=0,??=0,DPLOW=0,DMLOW=0,??=0,OTGEN=0,??=0,??=0 */
  USB0_OTGCTL = 0x00U;
  /* USB0_CONTROL: ??=0,??=0,??=0,DPPULLUPNONOTG=0,??=0,??=0,??=0,??=0 */
  USB0_CONTROL = 0x00U;
  /* USB0_CTL: TXSUSPENDTOKENBUSY=0,HOSTMODEEN=0,ODDRST=0,USBENSOFEN=1 */
  USB0_CTL = (uint8_t)((USB0_CTL & (uint8_t)~(uint8_t)(
              USB_CTL_TXSUSPENDTOKENBUSY_MASK |
              USB_CTL_HOSTMODEEN_MASK |
              USB_CTL_ODDRST_MASK
             )) | (uint8_t)(
              USB_CTL_USBENSOFEN_MASK
             ));
}

/*
** ###################################################################
**
**  The interrupt service routine(s) must be implemented
**  by user in one of the following user modules.
**
**  If the "Generate ISR" option is enabled, Processor Expert generates
**  ISR templates in the CPU event module.
**
**  User modules:
**      main.c
**      Events.c
**
** ###################################################################
PE_ISR(USB_ISR)
{
// NOTE: The routine should include actions to clear the appropriate
//       interrupt flags.
//
}
*/


/* END USB0. */
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
