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
 * file                   : flash_init.c
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
 * Brief Description      : This File contains FlashBIU configuration 
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains function which configures code
 *                         flash(Bank0) Register setup, Data Flash(Bank1)
 *                         Register setup and access control for masters
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "flash_init.h"
#include "rappid_ref.h"


/*********************  Initialization Function(s) ************************/

void flash_init_fnc (void)
{

/* ----------------------------------------------------------- */
/*	                  FLASH_BIU setup                          */
/* ----------------------------------------------------------- */
      while( 0 == CFLASH.MCR.B.DONE  )    
     {     
     ;     
     }     
        /* Registers cannot be written until MCR.DONE is high.    */



/* ----------------------------------------------------------- */
/*                    FLASH_PFAPR Register setup(0xFFFFFFFF)                      */
/* ----------------------------------------------------------- */

      CFLASH.FAPR.R = 0xFFFFFFFF;    

        /* Master 1 ( Nexus) Prefetch Enable : No prefetching    */
        /* Master 0 ( Core) Prefetch Enable : No prefetching    */

        /* Master 1 ( Nexus) Access Control : Read and Write    */
        /* Master 0 ( Core) Access Control : Read and Write    */


/* ----------------------------------------------------------- */
/*                    FLASH_PFCR0 Flash Bank0 Register setup(0x18C780ED)                      */
/* ----------------------------------------------------------- */

      CFLASH.PFCR0.R = 0x18C780ED;    
        /* Address Pipelining Control : 3 additional hold cycles    */

        /* Write Wait State Control :- 3 additional wait states    */

        /* Read Wait State Control :- 3 additional wait states    */

        /* Data Prefetch Enable :- No Prefetching    */

        /* Instruction Prefetch Enable :- Prefetching    */

        /* Prefetch Limit :- Prefetch on miss or hit    */

        /* Bank0, Port 0 Buffer Enable :- Enabled    */

        /* Page Configuration - 3 instruction + 1 data    */



/* ----------------------------------------------------------- */
/*                    FLASH_PFCR1 Flash Bank1 Register setup(0x18C78081)                      */
/* ----------------------------------------------------------- */

      CFLASH.PFCR1.R = 0x18C78081;    
        /* Address Pipelining Control : 3 additional hold cycles    */

        /* Write Wait State Control :- 3 additional wait states    */

        /* Read Wait State control :- 3 additional wait states    */

        /* Bank1, Port 0 Buffer Enable :- Enabled    */



}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

