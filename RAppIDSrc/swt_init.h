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
 * file                   : swt_init.h
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
 * Brief Description      : File contains declarations for Watchdog initialization function
 *                          and Service Routine.
 *
 *
 *######################################################################
*/

#ifndef  _SWT_INIT_H
#define  _SWT_INIT_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

/**********************  Function Prototype here *************************/

void swt_init_fnc (void);
void swt_srvc_seq_fnc (void);


#endif  /*_SWT_INIT_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

