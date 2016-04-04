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
 * file                   : intc_emios.c
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
 * Brief Description      : This  file contains  the interrupt service routine  for the EMIOS
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file is generated when EMIOS function is
 *                         defined in INTC peripheral.This file contains the
 *                         Interrupt handlers routines for EMIOS. In Interrupt
 *                         handlers routine respective flags are cleared.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "intc_emios.h"


/************************* INTERRUPT HANDLERS ************************/

void INTC_eMIOS_0_F0_F1 (void)
{
    EMIOS_0.CH[0].CSR.B.FLAG = 1;
    EMIOS_0.CH[1].CSR.B.FLAG = 1;

}


void INTC_eMIOS_0_F24_F25 (void)
{
    EMIOS_0.CH[24].CSR.B.FLAG = 1;
    EMIOS_0.CH[25].CSR.B.FLAG = 1;

}


void INTC_eMIOS_0_F26_F27 (void)
{
    EMIOS_0.CH[26].CSR.B.FLAG = 1;
    EMIOS_0.CH[27].CSR.B.FLAG = 1;

}


 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

