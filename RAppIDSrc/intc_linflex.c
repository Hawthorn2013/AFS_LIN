/*
 *######################################################################
 *                                RAppIDJDP
 *           Rapid Application Initialization and Documentation Tool
 *                         Freescale Semiconductor Inc.
 *
 *######################################################################
 *
 * Project Name           : RAppIDConfig_AFS_LIN
 *
 * Project File           : RAppIDConfig_AFS_LIN.rsp
 *
 * Revision Number        : 1.0
 *
 * Tool Version           : 1.4.1.6
 *
 * file                   : intc_linflex.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5604B
 *
 * Part Errata Fixes      : none
 *
 *
 *
 *
 *
 * Brief Description      : This  file contains  the interrupt service routine  for the Linflex
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file is generated when Linflex function is
 *                         defined in INTC peripheral.This file contains the
 *                         Interrupt handlers routines for Linflex. In Interrupt
 *                         handlers routine respective flags are cleared.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "intc_linflex.h"


/************************* INTERRUPT HANDLERS ************************/

void INTC_UART0_RX (void)
{
    LINFLEX_0.LINSR.R = 0xF2FF;
    LINFLEX_0.UARTSR.R = 0x00000004;

}


void INTC_UART2_RX (void)
{
    LINFLEX_2.LINSR.R = 0xF2FF;
    LINFLEX_2.UARTSR.R = 0x00000004;

}


 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

