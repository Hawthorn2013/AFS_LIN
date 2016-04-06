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
 * file                   : stm_init.c
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
 * Brief Description      : STM Initialization file
 *
 ******************************************************************************** 
 *
 * Detail Description     : File contains definition for System Timer Module
 *                         (STM) initialization function. The function
 *                         configures STM parameters such as STM module status,
 *                         Counter pre-scalar, Individual Channel status &
 *                         compare value.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "stm_init.h"




/********************* Initialization Function(s) *********************** */


void stm_init_fnc(void)
{

    STM.CR.B.TEN = 0x0 ;    
        /* Disable System Timer Module for initialization          */

/* ----------------------------------------------------------- */
/*                     Configure Counter Prescaler                */
/* ----------------------------------------------------------- */

    STM.CR.B.CPS = 0 ;    
        /* Counter Prescaler is 1        */

/* ----------------------------------------------------------- */
/*                     Configure System Timer Registers                */
/* ----------------------------------------------------------- */

    STM.CH[0].CMP.R =0x00000000 ;    
        /* System Timer Channel 0's Compare value is :0    */
    
    STM.CH[0].CCR.B.CEN =0x0 ;    
        /* System Timer Channel 0: Disabled    */
    
    STM.CH[1].CMP.R =0x00000000 ;    
        /* System Timer Channel 1's Compare value is :0    */
    
    STM.CH[1].CCR.B.CEN =0x0 ;    
        /* System Timer Channel 1: Disabled    */
    
    STM.CH[2].CMP.R =0x00000000 ;    
        /* System Timer Channel 2's Compare value is :0    */
    
    STM.CH[2].CCR.B.CEN =0x0 ;    
        /* System Timer Channel 2: Disabled    */
    
    STM.CH[3].CMP.R =0x00000000 ;    
        /* System Timer Channel 3's Compare value is :0    */
    
    STM.CH[3].CCR.B.CEN =0x0 ;    
        /* System Timer Channel 3: Disabled    */
    


    STM.CR.B.TEN = 0 ;    
        /* System Timer Module is:  Disabled        */

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

