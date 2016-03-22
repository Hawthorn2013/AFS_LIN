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
 * file                   : sys_init.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5604B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 23-Mar-2016 00:09:42
 *
 * Created on Date        : 23-Mar-2016 00:09:42
 *
 * Brief Description      : This file contains system initialization code
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file contains function which calls respective
 *                         peripheral initialization functions
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "sys_init.h"


/*********************  Initialization Function(s) ************************/

void sys_init_fnc (void)
{

/* ----------------------------------------------------------- */
/*	               System Initialization Functions              */
/* ----------------------------------------------------------- */

/* ----------------------------------------------------------- */
/*                  Reset Determination Goes Here             */
/* ----------------------------------------------------------- */

/* ----------------------------------------------------------- */
/*	        Initialize the Reset Generation Module (RGM)             */
/* ----------------------------------------------------------- */
    rgm_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Main Status Register (MSR)             */
/* ----------------------------------------------------------- */
    msr_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the System Clock, Mode Entry (ME) & CMU             */
/* ----------------------------------------------------------- */
    sysclk_module_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Flash Bus Interface Unit (BIU)             */
/* ----------------------------------------------------------- */
    flash_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Mode Entry Post Configuration             */
/* ----------------------------------------------------------- */
    mode_entry_post_config_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the System Integration Unit (SIU)             */
/* ----------------------------------------------------------- */
    siu_init_fnc();


}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

