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
 * file                   : rgm_init.c
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
 * Brief Description      : MC_RGM module initialization.
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains function definitions to initialize
 *                         RGM module. The module provides the register interface to
 *                         monitor and control the device reset sequence.
 *                         The configuration function will setup the RGM to enable/disable
 *                         different reset sources, generate interrupt/SAFE mode request 
 *                         and also control the reset state machine.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rgm_init.h"
#include "rappid_ref.h"

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




/*********************  Initialization Function(s) ************************/

void rgm_init_fnc (void)
{

    RGM.FES.R = 0x81FF;
        /* Clear all functional reset source */

/*----------------------------------------------------------------*/
/*  MC_RGM Functional Event Alternate Request Register (RGM_FEAR) */
/*----------------------------------------------------------------*/
    RGM.FEAR.R = 0x0000;
        /* Code or data flash fatal error: SAFE mode request to ME */
        /* 4.5V low-voltage detected: SAFE mode request to ME */
        /* CMU0 clock frequency higher/lower than reference: SAFE mode request to ME */
        /* Oscillator frequency lower than reference: SAFE mode request to ME */
        /* PLL0 fail: SAFE mode request to ME */
        /* Core reset: SAFE mode request to ME */
        /* JTAG initiated reset: SAFE mode request to ME */

/*----------------------------------------------------------------*/
/*  MC_RGM Functional Event Short Sequence Register (RGM_FESS)   */
/*----------------------------------------------------------------*/
    RGM.FESS.R = 0x0000;
        /* Code or data flash fatal error : Start reset sequence from Phase1*/
        /* 4.5V low-voltage detected : Start reset sequence from Phase1*/
        /* CMU0 clock frequency higher/lower than reference : Start reset sequence from Phase1*/
        /* Oscillator frequency lower than reference : Start reset sequence from Phase1*/
        /* PLL0 fail : Start reset sequence from Phase1*/
        /* Core reset : Start reset sequence from Phase1*/
        /* JTAG initiated reset : Start reset sequence from Phase1*/

/*----------------------------------------------------------------*/
/*  MC_RGM STANDBY0 Reset Sequence Register (RGM_STDBY)            */
/*----------------------------------------------------------------*/
    RGM.STDBY.R = 0x0000;
        /* System Boot Control :Boot from flash on STANDBY0 exit*/
        
/*----------------------------------------------------------------*/
/*  MC_RGM Functional Bidirectional Reset Enable Register (RGM_FBRE)   */
/*----------------------------------------------------------------*/
    RGM.FBRE.R = 0x0000;
        /* Code or data flash fatal error: External Reset asserted*/
        /* 4.5V low-voltage detected: External Reset asserted*/
        /* CMU0 clock frequency higher/lower than reference: External Reset asserted*/
        /* Oscillator frequency lower than reference: External Reset asserted*/
        /* PLL0 fail: External Reset asserted*/
        /* Core reset: External Reset asserted*/
        /* JTAG initiated reset: External Reset asserted*/

/*----------------------------------------------------------------*/
/*  MC_RGM Functional Event Reset Disable Register (RGM_FERD)   */
/*----------------------------------------------------------------*/
    RGM.FERD.R = 0x0000;
        /* Code or data flash fatal error: Enable reset sequence */
        /* 4.5V low-voltage detected: Enable reset sequence */
        /* CMU0 clock frequency higher/lower than reference: Enable reset sequence */
        /* Oscillator frequency lower than reference: Enable reset sequence */
        /* PLL0 fail: Enable reset sequence */
        /* Core reset: Enable reset sequence */
        /* JTAG initiated reset: Enable reset sequence */


}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

