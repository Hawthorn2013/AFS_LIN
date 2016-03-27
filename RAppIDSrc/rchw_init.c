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
 * file                   : rchw_init.c
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
 * Brief Description      : File contains RCHW initialization
 *
 ******************************************************************************** 
 *
 * Detail Description     : File contains the Bootup Reset Config Half Word(RCHW)
 *                         initialization. This files pushed control on reset to
 *                         crt0.s start function.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
#pragma section code_type ".init"

extern __asm void __start();

typedef void (*resetfuncptr)(void);

#pragma push /* Save the current state */
#pragma section sconst_type ".__bam_bootarea"
extern const long int bam_rchw;
extern const resetfuncptr bam_resetvector;

const long int bam_rchw =  0x005A0000;             
    /* BOOTID: Boot Identifier is: 005A0000*/


const resetfuncptr bam_resetvector = __start;

#pragma pop

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

