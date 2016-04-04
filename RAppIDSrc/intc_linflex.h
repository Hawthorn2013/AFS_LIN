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
 * file                   : intc_linflex.h
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
 *
 *######################################################################
*/

#ifndef  _INTC_LINFLEX_H
#define  _INTC_LINFLEX_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

/**********************  Function Prototype here *************************/

void INTC_LINFLEX_0_RXI(void);
void INTC_LINFLEX_0_TXI(void);
void INTC_LINFLEX_0_ERR(void);
void INTC_UART2_RX(void);


#endif  /*_INTC_LINFLEX_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

