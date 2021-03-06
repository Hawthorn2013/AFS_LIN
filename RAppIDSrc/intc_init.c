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
 * file                   : intc_init.c
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
 * Brief Description      : This  file contains  the interrupt service routine  for the SIU
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file contains initialization function for
 *                         Interrupt. It sets the vector mode ,size and global
 *                         priority .It also defines the Interrupt enable Function.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "intc_init.h"
#include "rappid_utils.h"


extern uint32_t IntcIsrVectorTable [];
/*********************  Initialization Function(s) ************************/

void INTC_InitINTCInterrupts (void)
{
/*--------------------------------------------------------------------*/
/*                         INTC General Setup                            */
/*--------------------------------------------------------------------*/

/*--------------------------------------------------------------------*/
/*  			INTC Module Configuration Register (INTC_MCR) 	      */
/*--------------------------------------------------------------------*/
    INTC.MCR.R = 0x00000000;
    /* Module Control Register - MCR                   */
    /* Bit 18 - The vector table size for e200z0 Core is: 4 bytes     */
    /* Bit 23 - The module for e200z0 Core is in Software Vector Mode */

/*--------------------------------------------------------------------*/
/*    INTC Module Configuration Register For e200z0 Core (IACKR) 	   */
/*--------------------------------------------------------------------*/
    INTC.IACKR.R = (vuint32_t)&IntcIsrVectorTable;
    /* Interrupt Acknowledge Register for e200z0 Core - IACKR      */
    /* Bits 0-21 - The vector base address for e200z0 Core is: 0     */

/* -------------------------------------------------------------------*/
/*             INTC Module Configuration Register (INTC_PSR)         */
/* -------------------------------------------------------------------*/

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 0          */
/* -------------------------------------------------------------------*/
    INTC.PSR[0].R = 0x00;
    /* Software settable Clear flag 0 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 1          */
/* -------------------------------------------------------------------*/
    INTC.PSR[1].R = 0x00;
    /* Software settable Clear flag 1 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 2          */
/* -------------------------------------------------------------------*/
    INTC.PSR[2].R = 0x00;
    /* Software settable Clear flag 2 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 3          */
/* -------------------------------------------------------------------*/
    INTC.PSR[3].R = 0x00;
    /* Software settable Clear flag 3 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 4          */
/* -------------------------------------------------------------------*/
    INTC.PSR[4].R = 0x00;
    /* Software settable Clear flag 4 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 5          */
/* -------------------------------------------------------------------*/
    INTC.PSR[5].R = 0x00;
    /* Software settable Clear flag 5 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 6          */
/* -------------------------------------------------------------------*/
    INTC.PSR[6].R = 0x00;
    /* Software settable Clear flag 6 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 7          */
/* -------------------------------------------------------------------*/
    INTC.PSR[7].R = 0x00;
    /* Software settable Clear flag 7 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 9          */
/* -------------------------------------------------------------------*/
    INTC.PSR[9].R = 0x00;
    /* Platform Flash combined Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 28          */
/* -------------------------------------------------------------------*/
    INTC.PSR[28].R = 0x00;
    /* SWT Timeout Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 30          */
/* -------------------------------------------------------------------*/
    INTC.PSR[30].R = 0x00;
    /* STM Channel 0 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 31          */
/* -------------------------------------------------------------------*/
    INTC.PSR[31].R = 0x00;
    /* STM Channel 1 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 32          */
/* -------------------------------------------------------------------*/
    INTC.PSR[32].R = 0x00;
    /* STM Channel 2 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 33          */
/* -------------------------------------------------------------------*/
    INTC.PSR[33].R = 0x00;
    /* STM Channel 3 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 35          */
/* -------------------------------------------------------------------*/
    INTC.PSR[35].R = 0x00;
    /* ECC Double Bit Detection Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 36          */
/* -------------------------------------------------------------------*/
    INTC.PSR[36].R = 0x00;
    /* ECC Single Bit Correction Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 38          */
/* -------------------------------------------------------------------*/
    INTC.PSR[38].R = 0x00;
    /* RTC Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 39          */
/* -------------------------------------------------------------------*/
    INTC.PSR[39].R = 0x00;
    /* API Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 41          */
/* -------------------------------------------------------------------*/
    INTC.PSR[41].R = 0x00;
    /* SIU External IRQ 0-7 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 42          */
/* -------------------------------------------------------------------*/
    INTC.PSR[42].R = 0x00;
    /* SIU External IRQ 8-15 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 46          */
/* -------------------------------------------------------------------*/
    INTC.PSR[46].R = 0x00;
    /* WakeUp_IRQ_0 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 47          */
/* -------------------------------------------------------------------*/
    INTC.PSR[47].R = 0x00;
    /* WakeUp_IRQ_1 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 48          */
/* -------------------------------------------------------------------*/
    INTC.PSR[48].R = 0x00;
    /* WakeUp_IRQ_2 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 51          */
/* -------------------------------------------------------------------*/
    INTC.PSR[51].R = 0x00;
    /* ME Safe Mode Interrupt Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 52          */
/* -------------------------------------------------------------------*/
    INTC.PSR[52].R = 0x00;
    /* ME Mode Transition Interrupt Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 53          */
/* -------------------------------------------------------------------*/
    INTC.PSR[53].R = 0x00;
    /* ME Invalid Mode Interrupt Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 54          */
/* -------------------------------------------------------------------*/
    INTC.PSR[54].R = 0x00;
    /* ME Invalid Mode Config Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 56          */
/* -------------------------------------------------------------------*/
    INTC.PSR[56].R = 0x00;
    /* Functional and destructive reset alternate event interrupt (ipi_int) Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 57          */
/* -------------------------------------------------------------------*/
    INTC.PSR[57].R = 0x00;
    /* XOSC counter expired Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 59          */
/* -------------------------------------------------------------------*/
    INTC.PSR[59].R = 0x07;
    /* PIT Channel 0 Priority is: 7        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 60          */
/* -------------------------------------------------------------------*/
    INTC.PSR[60].R = 0x00;
    /* PIT Channel 1 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 61          */
/* -------------------------------------------------------------------*/
    INTC.PSR[61].R = 0x00;
    /* PIT Channel 2 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 62          */
/* -------------------------------------------------------------------*/
    INTC.PSR[62].R = 0x00;
    /* ADC_0_EOC Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 64          */
/* -------------------------------------------------------------------*/
    INTC.PSR[64].R = 0x00;
    /* ADC_0_WD Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 65          */
/* -------------------------------------------------------------------*/
    INTC.PSR[65].R = 0x00;
    /* FlexCAN_0_ESR[ERR_INT] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 66          */
/* -------------------------------------------------------------------*/
    INTC.PSR[66].R = 0x00;
    /* FlexCAN_0_ESR_BOFF | Tx_Warning | Rx_Warning Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 68          */
/* -------------------------------------------------------------------*/
    INTC.PSR[68].R = 0x00;
    /* FlexCAN_0_BUF_00_03 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 69          */
/* -------------------------------------------------------------------*/
    INTC.PSR[69].R = 0x00;
    /* FlexCAN_0_BUF_04_07 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 70          */
/* -------------------------------------------------------------------*/
    INTC.PSR[70].R = 0x00;
    /* FlexCAN_0_BUF_08_11 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 71          */
/* -------------------------------------------------------------------*/
    INTC.PSR[71].R = 0x00;
    /* FlexCAN_0_BUF_12_15 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 72          */
/* -------------------------------------------------------------------*/
    INTC.PSR[72].R = 0x00;
    /* FlexCAN_0_BUF_16_31 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 73          */
/* -------------------------------------------------------------------*/
    INTC.PSR[73].R = 0x00;
    /* FlexCAN_0_BUF_32_63 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 74          */
/* -------------------------------------------------------------------*/
    INTC.PSR[74].R = 0x00;
    /* DSPI_0_SR[TFUF] DSPI_SR[RFOF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 75          */
/* -------------------------------------------------------------------*/
    INTC.PSR[75].R = 0x00;
    /* DSPI_0_SR[EOQF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 76          */
/* -------------------------------------------------------------------*/
    INTC.PSR[76].R = 0x00;
    /* DSPI_0_SR[TFFF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 77          */
/* -------------------------------------------------------------------*/
    INTC.PSR[77].R = 0x00;
    /* DSPI_0_SR[TCF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 78          */
/* -------------------------------------------------------------------*/
    INTC.PSR[78].R = 0x00;
    /* DSPI_0_SR[RFDF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 79          */
/* -------------------------------------------------------------------*/
    INTC.PSR[79].R = 0x03;
    /* LINFlex_0_RXI Priority is: 3        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 80          */
/* -------------------------------------------------------------------*/
    INTC.PSR[80].R = 0x04;
    /* LINFlex_0_TXI Priority is: 4        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 81          */
/* -------------------------------------------------------------------*/
    INTC.PSR[81].R = 0x05;
    /* LINFlex_0_ERR Priority is: 5        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 85          */
/* -------------------------------------------------------------------*/
    INTC.PSR[85].R = 0x00;
    /* FlexCAN_1_ESR[ERR_INT] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 86          */
/* -------------------------------------------------------------------*/
    INTC.PSR[86].R = 0x00;
    /* FlexCAN_1_ESR_BOFF | Tx_Warning | Rx_Warning Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 88          */
/* -------------------------------------------------------------------*/
    INTC.PSR[88].R = 0x00;
    /* FlexCAN_1_BUF_00_03 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 89          */
/* -------------------------------------------------------------------*/
    INTC.PSR[89].R = 0x00;
    /* FlexCAN_1_BUF_04_07 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 90          */
/* -------------------------------------------------------------------*/
    INTC.PSR[90].R = 0x00;
    /* FlexCAN_1_BUF_08_11 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 91          */
/* -------------------------------------------------------------------*/
    INTC.PSR[91].R = 0x00;
    /* FlexCAN_1_BUF_12_15 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 92          */
/* -------------------------------------------------------------------*/
    INTC.PSR[92].R = 0x00;
    /* FlexCAN_1_BUF_16_31 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 93          */
/* -------------------------------------------------------------------*/
    INTC.PSR[93].R = 0x00;
    /* FlexCAN_1_BUF_32_63 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 94          */
/* -------------------------------------------------------------------*/
    INTC.PSR[94].R = 0x00;
    /* DSPI_1_SR[TFUF] DSPI_SR[RFOF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 95          */
/* -------------------------------------------------------------------*/
    INTC.PSR[95].R = 0x00;
    /* DSPI_1_SR[EOQF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 96          */
/* -------------------------------------------------------------------*/
    INTC.PSR[96].R = 0x00;
    /* DSPI_1_SR[TFFF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 97          */
/* -------------------------------------------------------------------*/
    INTC.PSR[97].R = 0x00;
    /* DSPI_1_SR[TCF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 98          */
/* -------------------------------------------------------------------*/
    INTC.PSR[98].R = 0x00;
    /* DSPI_1_SR[RFDF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 99          */
/* -------------------------------------------------------------------*/
    INTC.PSR[99].R = 0x00;
    /* LINFlex_1_RXI Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 100          */
/* -------------------------------------------------------------------*/
    INTC.PSR[100].R = 0x00;
    /* LINFlex_1_TXI Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 101          */
/* -------------------------------------------------------------------*/
    INTC.PSR[101].R = 0x00;
    /* LINFlex_1_ERR Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 105          */
/* -------------------------------------------------------------------*/
    INTC.PSR[105].R = 0x00;
    /* FlexCAN_2_[ERR_INT] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 106          */
/* -------------------------------------------------------------------*/
    INTC.PSR[106].R = 0x00;
    /* FlexCAN_2_ESR_BOFF | Tx_Warning | Rx_Warning Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 108          */
/* -------------------------------------------------------------------*/
    INTC.PSR[108].R = 0x00;
    /* FlexCAN_2_BUF_00_03 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 109          */
/* -------------------------------------------------------------------*/
    INTC.PSR[109].R = 0x00;
    /* FlexCAN_2_BUF_04_07 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 110          */
/* -------------------------------------------------------------------*/
    INTC.PSR[110].R = 0x00;
    /* FlexCAN_2_BUF_08_11 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 111          */
/* -------------------------------------------------------------------*/
    INTC.PSR[111].R = 0x00;
    /* FlexCAN_2_BUF_12_15 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 112          */
/* -------------------------------------------------------------------*/
    INTC.PSR[112].R = 0x00;
    /* FlexCAN_2_BUF_16_31 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 113          */
/* -------------------------------------------------------------------*/
    INTC.PSR[113].R = 0x00;
    /* FlexCAN_2_BUF_32_63 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 114          */
/* -------------------------------------------------------------------*/
    INTC.PSR[114].R = 0x00;
    /* DSPI_2_SR[TFUF] [DSPI_SR[RFOF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 115          */
/* -------------------------------------------------------------------*/
    INTC.PSR[115].R = 0x00;
    /* DSPI_2_SR[EOQF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 116          */
/* -------------------------------------------------------------------*/
    INTC.PSR[116].R = 0x00;
    /* DSPI_2_SR[TFFF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 117          */
/* -------------------------------------------------------------------*/
    INTC.PSR[117].R = 0x00;
    /* DSPI_2_SR[TCF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 118          */
/* -------------------------------------------------------------------*/
    INTC.PSR[118].R = 0x00;
    /* DSPI_2_SR[RFDF] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 119          */
/* -------------------------------------------------------------------*/
    INTC.PSR[119].R = 0x05;
    /* LINFlex_2_RXI Priority is: 5        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 120          */
/* -------------------------------------------------------------------*/
    INTC.PSR[120].R = 0x00;
    /* LINFlex_2_TXI Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 121          */
/* -------------------------------------------------------------------*/
    INTC.PSR[121].R = 0x00;
    /* LINFlex_2_ERR Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 122          */
/* -------------------------------------------------------------------*/
    INTC.PSR[122].R = 0x00;
    /* LINFlex_3_RXI Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 123          */
/* -------------------------------------------------------------------*/
    INTC.PSR[123].R = 0x00;
    /* LINFlex_3_TXI Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 124          */
/* -------------------------------------------------------------------*/
    INTC.PSR[124].R = 0x00;
    /* LINFlex_3_ERR Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 125          */
/* -------------------------------------------------------------------*/
    INTC.PSR[125].R = 0x00;
    /* I2C_SR[IBAL] I2C_SR[TCF] I2C_SR[IAAS] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 127          */
/* -------------------------------------------------------------------*/
    INTC.PSR[127].R = 0x00;
    /* PIT Channel 3 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 128          */
/* -------------------------------------------------------------------*/
    INTC.PSR[128].R = 0x00;
    /* PIT Channel 4 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 129          */
/* -------------------------------------------------------------------*/
    INTC.PSR[129].R = 0x00;
    /* PIT Channel 5 Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 141          */
/* -------------------------------------------------------------------*/
    INTC.PSR[141].R = 0x02;
    /* EMIOS_0_GFR[F0,F1] Priority is: 2        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 142          */
/* -------------------------------------------------------------------*/
    INTC.PSR[142].R = 0x00;
    /* EMIOS_0_GFR[F2,F3] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 143          */
/* -------------------------------------------------------------------*/
    INTC.PSR[143].R = 0x00;
    /* EMIOS_0_GFR[F4,F5] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 144          */
/* -------------------------------------------------------------------*/
    INTC.PSR[144].R = 0x00;
    /* EMIOS_0_GFR[F6,F7] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 145          */
/* -------------------------------------------------------------------*/
    INTC.PSR[145].R = 0x00;
    /* EMIOS_0_GFR[F8,F9] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 146          */
/* -------------------------------------------------------------------*/
    INTC.PSR[146].R = 0x00;
    /* EMIOS_0_GFR[F10,F11] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 147          */
/* -------------------------------------------------------------------*/
    INTC.PSR[147].R = 0x00;
    /* EMIOS_0_GFR[F12,F13] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 148          */
/* -------------------------------------------------------------------*/
    INTC.PSR[148].R = 0x00;
    /* EMIOS_0_GFR[F14,F15] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 149          */
/* -------------------------------------------------------------------*/
    INTC.PSR[149].R = 0x00;
    /* EMIOS_0_GFR[F16,F17] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 150          */
/* -------------------------------------------------------------------*/
    INTC.PSR[150].R = 0x00;
    /* EMIOS_0_GFR[F18,F19] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 151          */
/* -------------------------------------------------------------------*/
    INTC.PSR[151].R = 0x00;
    /* EMIOS_0_GFR[F20,F21] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 152          */
/* -------------------------------------------------------------------*/
    INTC.PSR[152].R = 0x00;
    /* EMIOS_0_GFR[F22,F23] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 153          */
/* -------------------------------------------------------------------*/
    INTC.PSR[153].R = 0x05;
    /* EMIOS_0_GFR[F24,F25] Priority is: 5        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 154          */
/* -------------------------------------------------------------------*/
    INTC.PSR[154].R = 0x07;
    /* EMIOS_0_GFR[F26,F27] Priority is: 7        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 157          */
/* -------------------------------------------------------------------*/
    INTC.PSR[157].R = 0x00;
    /* EMIOS_1_GFR[F0,F1] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 158          */
/* -------------------------------------------------------------------*/
    INTC.PSR[158].R = 0x00;
    /* EMIOS_1_GFR[F2,F3] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 159          */
/* -------------------------------------------------------------------*/
    INTC.PSR[159].R = 0x00;
    /* EMIOS_1_GFR[F4,F5] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 160          */
/* -------------------------------------------------------------------*/
    INTC.PSR[160].R = 0x00;
    /* EMIOS_1_GFR[F6,F7] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 161          */
/* -------------------------------------------------------------------*/
    INTC.PSR[161].R = 0x00;
    /* EMIOS_1_GFR[F8,F9] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 162          */
/* -------------------------------------------------------------------*/
    INTC.PSR[162].R = 0x00;
    /* EMIOS_1_GFR[F10,F11] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 163          */
/* -------------------------------------------------------------------*/
    INTC.PSR[163].R = 0x00;
    /* EMIOS_1_GFR[F12,F13] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 164          */
/* -------------------------------------------------------------------*/
    INTC.PSR[164].R = 0x00;
    /* EMIOS_1_GFR[F14,F15] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 165          */
/* -------------------------------------------------------------------*/
    INTC.PSR[165].R = 0x00;
    /* EMIOS_1_GFR[F16,F17] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 166          */
/* -------------------------------------------------------------------*/
    INTC.PSR[166].R = 0x00;
    /* EMIOS_1_GFR[F18,F19] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 167          */
/* -------------------------------------------------------------------*/
    INTC.PSR[167].R = 0x00;
    /* EMIOS_1_GFR[F20,F21] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 168          */
/* -------------------------------------------------------------------*/
    INTC.PSR[168].R = 0x00;
    /* EMIOS_1_GFR[F22,F23] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 169          */
/* -------------------------------------------------------------------*/
    INTC.PSR[169].R = 0x00;
    /* EMIOS_1_GFR[F24,F25] Priority is: 0        */

/* -------------------------------------------------------------------*/
/*	           Priority Set Register for interrupt vector 170          */
/* -------------------------------------------------------------------*/
    INTC.PSR[170].R = 0x00;
    /* EMIOS_1_GFR[F26,F27] Priority is: 0        */



    en_int_fnc(0);

}

/*********************  Interrupt Enable Function *************************/

void en_int_fnc (vuint32_t priority)
{
/* -------------------------------------------------------------------*/
/*	           Enable Routine - Priority equal 0-15                   */
/*	    (0 - Enable All interrupts, 15 - Disable All interrupts)      */
/* -------------------------------------------------------------------*/
/*--------------------------------------------------------------------*/
/*    INTC Current Priority Register  for Core e200z0 (INTC_CPR)     */
/*--------------------------------------------------------------------*/
    INTC.CPR.R = priority;
    /* Bits 4 ~ 0 - The Interrupt Prevention Limit for Core e200z0 is: 0*/


}


 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

