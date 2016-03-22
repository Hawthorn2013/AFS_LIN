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
 * file                   : pcu_init.c
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
 * Brief Description      : This File contains PCU power domain # 2 initialization functions.
 *
 ******************************************************************************** 
 *
 * Detail Description     : The file contains function definition for controlling
 *                         PCU Power domain. By setting or clearing the bits
 *                         in PCU_CONF2 register in the function, it is possible
 *                         to switch ON all or only first 8KB of SRAM in that
 *                         respective mode. This function is provided as an option.
 *                         The user need to added this function manually in 
 *                         sys_init_fnc() function, after sysclk_module_init_fnc().
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "pcu_init.h"

/******************************************************************************
* External objects
******************************************************************************/


/******************************************************************************
* Global variables
******************************************************************************/


/******************************************************************************
* Constants and macros
******************************************************************************/


/******************************************************************************
* Local types
******************************************************************************/


/******************************************************************************
* Local function prototypes
******************************************************************************/


/******************************************************************************
* Local variables
******************************************************************************/


/******************************************************************************
* Local functions
******************************************************************************/


/******************************************************************************
* Global functions
******************************************************************************/





/********************* Initialization Function(s) *********************** */


void pcu_init_fnc(void)
{

/* ------------------------------------------------------------------------ */
/*              MC_PCU Power Domain #2 Configuration Register (PCU_PCONF2)            */
/* ------------------------------------------------------------------------ */


    PCU. PCONF[2].R  = 0x000005FF;
            /* Power domain control during TEST mode: ON    */
            /* Power domain control during SAFE mode: ON    */
            /* Power domain control during DRUN mode: ON    */
            /* Power domain control during RUN0 mode: ON    */
            /* Power domain control during RUN1 mode: ON    */
            /* Power domain control during RUN2 mode: ON    */
            /* Power domain control during RUN3 mode: ON    */
            /* Power domain control during HALT0 mode: ON    */
            /* Power domain control during STOP0 mode: ON    */
            /* Power domain control during STBY0 mode: OFF    */


/* ------------------------------------------------------------------------ */
/*          Note: Power Configuration will be effective only after            */
/*          the mode change is requested by MC_ME.            */
/* ------------------------------------------------------------------------ */
}
 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

