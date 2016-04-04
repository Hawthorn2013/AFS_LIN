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
#include "bsp.h"

extern volatile int LINFLEX_0_INTC_TXI_triggered;
extern volatile int LINFLEX_0_INTC_RXI_triggered;
extern volatile int LINFLEX_0_INTC_ERR_triggered;
extern volatile uint32_t LINFLEX_0_SR;

/************************* INTERRUPT HANDLERS ************************/

void INTC_LINFLEX_0_RXI (void)
{
	LINFLEX_0_SR = LINFLEX_0.LINSR.R;
	LINFLEX_0_INTC_RXI_triggered = 1;
    LINFLEX_0.LINSR.R = 0xF2FF;
    LINFLEX_0.UARTSR.R = 0x00000004;

}


void INTC_LINFLEX_0_TXI (void)
{
	LINFLEX_0_SR = LINFLEX_0.LINSR.R;
	LINFLEX_0_INTC_TXI_triggered = 1;
    LINFLEX_0.LINSR.R = 0xF2FF;
    LINFLEX_0.UARTSR.R = 0x00000002;

}


void INTC_LINFLEX_0_ERR (void)
{
	LINFLEX_0_SR = LINFLEX_0.LINSR.R;
	LINFLEX_0_INTC_ERR_triggered = 1;
    LINFLEX_0.LINESR.R = 0xFF81;
    LINFLEX_0.UARTSR.R = 0xFFE7;

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

