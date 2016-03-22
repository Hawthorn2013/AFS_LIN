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
 * file                   : siu_init.h
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5604B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 23-Mar-2016 00:03:25
 *
 * Created on Date        : 23-Mar-2016 00:03:25
 *
 * Brief Description      : This File contains functions declaration of SIU code file
 *
 *
 *######################################################################
*/

#ifndef  _SIU_INIT_H
#define  _SIU_INIT_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

void siu_init_fnc(void);
void siu_portA_init_fnc(void);
void siu_portB_init_fnc(void);
void siu_portC_init_fnc(void);
void siu_portD_init_fnc(void);
void siu_portE_init_fnc(void);
void siu_portH_init_fnc(void);
void siu_general_init_fnc(void);
void siu_parallel_port_init_fnc(void);
void siu_unused_pins_init_fnc(void);
void siu_psmi_init_fnc(void);



#endif  /*_SIU_INIT_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

