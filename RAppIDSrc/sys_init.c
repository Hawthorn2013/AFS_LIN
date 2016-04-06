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
 *
 *
 *
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
/*	        Initialize the Interrupt Controller (INTC)             */
/* ----------------------------------------------------------- */
    INTC_InitINTCInterrupts();
    IVPRInitialize();

/* ----------------------------------------------------------- */
/*	        Initialize the Reset Generation Module (RGM)             */
/* ----------------------------------------------------------- */
    rgm_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Software Watchdog (SWT)             */
/* ----------------------------------------------------------- */
    swt_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Main Status Register (MSR)             */
/* ----------------------------------------------------------- */
    msr_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the System Clock, Mode Entry (ME) & CMU             */
/* ----------------------------------------------------------- */
    sysclk_module_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Real Time Clock (RTC)             */
/* ----------------------------------------------------------- */
    rtc_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the System Timer Module (STM)             */
/* ----------------------------------------------------------- */
    stm_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Periodic Interrupt Timer (PIT)             */
/* ----------------------------------------------------------- */
    pit_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Flash Bus Interface Unit (BIU)             */
/* ----------------------------------------------------------- */
    flash_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the Deserial Serial Peripheral Interface (DSPI)             */
/* ----------------------------------------------------------- */
    dspi_init_fnc();

/* ----------------------------------------------------------- */
/*	        Initialize the LINFlex             */
/* ----------------------------------------------------------- */
    linflex_init_fnc();

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

