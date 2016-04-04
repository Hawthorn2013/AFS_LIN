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
 * file                   : intc_emios.h
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
 *
 *######################################################################
*/

#ifndef  _INTC_EMIOS_H
#define  _INTC_EMIOS_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

/**********************  Function Prototype here *************************/

void INTC_eMIOS_0_F0_F1(void);
void INTC_eMIOS_0_F24_F25(void);
void INTC_eMIOS_0_F26_F27(void);


#endif  /*_INTC_EMIOS_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

