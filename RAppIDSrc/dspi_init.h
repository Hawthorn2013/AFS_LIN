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
 * file                   : dspi_init.h
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
 * Brief Description      : This File contains functions declaration of DSPI code file
 *
 *
 *######################################################################
*/

#ifndef  _DSPI_INIT_H
#define  _DSPI_INIT_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

/**********************  Function Prototype here *************************/

void dspi_init_fnc(void);
void dspi0_init_fnc(void);
void dspi1_init_fnc(void);
void dspi2_init_fnc(void);


#endif  /*_DSPI_INIT_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

