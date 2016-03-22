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
 * file                   : siu_init.c
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
 * Brief Description      : This File Contains Pads, external Interrupts and
 *                          Wakeups configuration
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains function for peripheral assignment
 *                         for each pads, External Interrupt configuration,
 *                         Wakeup configuration and Trigger configuration.
 *                         It also handles Port parallel masking.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "siu_init.h"




/* ----------------------------------------------------------- */
/*	                SIU Initialization                         */
/* ----------------------------------------------------------- */
void siu_init_fnc(void)
{
    siu_portA_init_fnc();
    siu_portB_init_fnc();
    siu_portC_init_fnc();
    siu_portD_init_fnc();
    siu_portE_init_fnc();
    siu_portH_init_fnc();
    siu_general_init_fnc();
    siu_parallel_port_init_fnc();
    siu_unused_pins_init_fnc();
    siu_psmi_init_fnc();
}


/* ----------------------------------------------------------- */
/*                 SIU PORT A PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portA_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[0]  eMIOS_0_0_CLKOUT_PA0 (12) */
    /* ----------------------------------------------------------- */
       SIU.PCR[0].R = 0x0001;
             /*	Selected Function : PA0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[1]  eMIOS_0_1_NMI_PA1 (7) */
    /* ----------------------------------------------------------- */
       SIU.PCR[1].R = 0x0501;
             /*	Selected Function : eMIOS_0_1 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[2]  eMIOS_0_2_PA2 (5) */
    /* ----------------------------------------------------------- */
       SIU.PCR[2].R = 0x0201;
             /*	Selected Function : PA2 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[3]  eMIOS_0_3_PA3 (68) */
    /* ----------------------------------------------------------- */
       SIU.PCR[3].R = 0x0001;
             /*	Selected Function : PA3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[4]  eMIOS_0_4_PA4 (29) */
    /* ----------------------------------------------------------- */
       SIU.PCR[4].R = 0x0001;
             /*	Selected Function : PA4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[5]  eMIOS_0_5_PA5 (79) */
    /* ----------------------------------------------------------- */
       SIU.PCR[5].R = 0x0001;
             /*	Selected Function : PA5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[6]  eMIOS_0_6_PA6 (80) */
    /* ----------------------------------------------------------- */
       SIU.PCR[6].R = 0x0001;
             /*	Selected Function : PA6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[7]  eMIOS_0_7_TXD_3_PA7 (71) */
    /* ----------------------------------------------------------- */
       SIU.PCR[7].R = 0x0001;
             /*	Selected Function : PA7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[8]  eMIOS_0_8_RXD_3_PA8 (72) */
    /* ----------------------------------------------------------- */
       SIU.PCR[8].R = 0x0003;
             /*	Selected Function : PA8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[9]  eMIOS_0_9_PA9 (73) */
    /* ----------------------------------------------------------- */
       SIU.PCR[9].R = 0x0002;
             /*	Selected Function : PA9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[10]  eMIOS_0_10_SDA_0_PA10 (74) */
    /* ----------------------------------------------------------- */
       SIU.PCR[10].R = 0x0601;
             /*	Selected Function : eMIOS_0_10 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[11]  eMIOS_0_11_SCL_0_PA11 (75) */
    /* ----------------------------------------------------------- */
       SIU.PCR[11].R = 0x0501;
             /*	Selected Function : eMIOS_0_11 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[12]  SIN_0_PA12 (31) */
    /* ----------------------------------------------------------- */
       SIU.PCR[12].R = 0x0201;
             /*	Selected Function : PA12 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[13]  SOUT_0_PA13 (30) */
    /* ----------------------------------------------------------- */
       SIU.PCR[13].R = 0x0201;
             /*	Selected Function : PA13 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[14]  SCK_0_PCS_0.0_PA14 (28) */
    /* ----------------------------------------------------------- */
       SIU.PCR[14].R = 0x0201;
             /*	Selected Function : PA14 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[15]  PCS_0.0_SCK_0_PA15 (27) */
    /* ----------------------------------------------------------- */
       SIU.PCR[15].R = 0x0201;
             /*	Selected Function : PA15 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT B PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portB_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[16]  CNTX_0_PB0 (23) */
    /* ----------------------------------------------------------- */
       SIU.PCR[16].R = 0x0001;
             /*	Selected Function : PB0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[17]  CNRX_0_PB1 (24) */
    /* ----------------------------------------------------------- */
       SIU.PCR[17].R = 0x0001;
             /*	Selected Function : PB1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[18]  TXD_0_SDA_0_PB2 (100) */
    /* ----------------------------------------------------------- */
       SIU.PCR[18].R = 0x0601;
             /*	Selected Function : TXD_0          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[19]  RXD_0_SCL_0_PB3 (1) */
    /* ----------------------------------------------------------- */
       SIU.PCR[19].R = 0x0101;
             /*	Selected Function : PB3 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[20]  ADC0_ANP0_PB4 (50) */
    /* ----------------------------------------------------------- */
       SIU.PCR[20].R = 0x0000;
             /*	Selected Function : PB4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[21]  ADC0_ANP1_PB5 (53) */
    /* ----------------------------------------------------------- */
       SIU.PCR[21].R = 0x0000;
             /*	Selected Function : PB5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[22]  ADC0_ANP2_PB6 (54) */
    /* ----------------------------------------------------------- */
       SIU.PCR[22].R = 0x0000;
             /*	Selected Function : PB6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[23]  ADC0_ANP3_PB7 (55) */
    /* ----------------------------------------------------------- */
       SIU.PCR[23].R = 0x0000;
             /*	Selected Function : PB7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[24]  XTAL32_ADC0_ANS0_PB8 (39) */
    /* ----------------------------------------------------------- */
       SIU.PCR[24].R = 0x0000;
             /*	Selected Function : PB8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[25]  EXTAL32_ADC0_ANS1_PB9 (38) */
    /* ----------------------------------------------------------- */
       SIU.PCR[25].R = 0x0000;
             /*	Selected Function : PB9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[26]  ADC0_ANS2_PB10 (40) */
    /* ----------------------------------------------------------- */
       SIU.PCR[26].R = 0x0001;
             /*	Selected Function : PB10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[27]  eMIOS_0_3_PCS_0.0_ADC0_ANS3_PB11 (59) */
    /* ----------------------------------------------------------- */
       SIU.PCR[27].R = 0x0001;
             /*	Selected Function : PB11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[28]  eMIOS_0_4_PCS_0.1_ADC0_ANX0_PB12 (61) */
    /* ----------------------------------------------------------- */
       SIU.PCR[28].R = 0x0001;
             /*	Selected Function : PB12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[29]  eMIOS_0_5_PCS_0.2_ADC0_ANX1_PB13 (63) */
    /* ----------------------------------------------------------- */
       SIU.PCR[29].R = 0x0001;
             /*	Selected Function : PB13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[30]  eMIOS_0_6_PCS_0.3_ADC0_ANX2_PB14 (65) */
    /* ----------------------------------------------------------- */
       SIU.PCR[30].R = 0x0001;
             /*	Selected Function : PB14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[31]  eMIOS_0_7_PCS_0.4_ADC0_ANX3_PB15 (67) */
    /* ----------------------------------------------------------- */
       SIU.PCR[31].R = 0x0001;
             /*	Selected Function : PB15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT C PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portC_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[32]  TDI_PC0 (87) */
    /* ----------------------------------------------------------- */
       SIU.PCR[32].R = 0x4903;
             /*	Selected Function : TDI          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[33]  TDO_PC1 (82) */
    /* ----------------------------------------------------------- */
       SIU.PCR[33].R = 0x4A01;
             /*	Selected Function : TDO          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[34]  SCK_1_PC2 (78) */
    /* ----------------------------------------------------------- */
       SIU.PCR[34].R = 0x0001;
             /*	Selected Function : PC2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[35]  PCS_1.0_ADC_MA0_CNRX_1_PC3 (77) */
    /* ----------------------------------------------------------- */
       SIU.PCR[35].R = 0x0601;
             /*	Selected Function : PCS_1.0 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[36]  SIN_1_PC4 (92) */
    /* ----------------------------------------------------------- */
       SIU.PCR[36].R = 0x0101;
             /*	Selected Function : PC4 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[37]  SOUT_1_PC5 (91) */
    /* ----------------------------------------------------------- */
       SIU.PCR[37].R = 0x0601;
             /*	Selected Function : SOUT_1          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[38]  TXD_1_PC6 (25) */
    /* ----------------------------------------------------------- */
       SIU.PCR[38].R = 0x0001;
             /*	Selected Function : PC6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[39]  RXD_1_PC7 (26) */
    /* ----------------------------------------------------------- */
       SIU.PCR[39].R = 0x0001;
             /*	Selected Function : PC7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[40]  TXD_2_PC8 (99) */
    /* ----------------------------------------------------------- */
       SIU.PCR[40].R = 0x0601;
             /*	Selected Function : TXD_2          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[41]  RXD_2_PC9 (2) */
    /* ----------------------------------------------------------- */
       SIU.PCR[41].R = 0x0101;
             /*	Selected Function : PC9 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[42]  CNTX_1_ADC_MA1_PC10 (22) */
    /* ----------------------------------------------------------- */
       SIU.PCR[42].R = 0x0001;
             /*	Selected Function : PC10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[43]  CNRX_1_PC11 (21) */
    /* ----------------------------------------------------------- */
       SIU.PCR[43].R = 0x0001;
             /*	Selected Function : PC11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[44]  eMIOS_0_12_SIN_2_PC12 (97) */
    /* ----------------------------------------------------------- */
       SIU.PCR[44].R = 0x0001;
             /*	Selected Function : PC12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[45]  eMIOS_0_13_SOUT_2_PC13 (98) */
    /* ----------------------------------------------------------- */
       SIU.PCR[45].R = 0x0001;
             /*	Selected Function : PC13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[46]  eMIOS_0_14_SCK_2_PC14 (3) */
    /* ----------------------------------------------------------- */
       SIU.PCR[46].R = 0x0001;
             /*	Selected Function : PC14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[47]  eMIOS_0_15_PCS_2.0_PC15 (4) */
    /* ----------------------------------------------------------- */
       SIU.PCR[47].R = 0x0001;
             /*	Selected Function : PC15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT D PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portD_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[48]  ADC0_ANP4_PD0 (41) */
    /* ----------------------------------------------------------- */
       SIU.PCR[48].R = 0x0000;
             /*	Selected Function : PD0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[49]  ADC0_ANP5_PD1 (42) */
    /* ----------------------------------------------------------- */
       SIU.PCR[49].R = 0x0000;
             /*	Selected Function : PD1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[50]  ADC0_ANP6_PD2 (43) */
    /* ----------------------------------------------------------- */
       SIU.PCR[50].R = 0x0000;
             /*	Selected Function : PD2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[51]  ADC0_ANP7_PD3 (44) */
    /* ----------------------------------------------------------- */
       SIU.PCR[51].R = 0x0000;
             /*	Selected Function : PD3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[52]  ADC0_ANP8_PD4 (45) */
    /* ----------------------------------------------------------- */
       SIU.PCR[52].R = 0x0000;
             /*	Selected Function : PD4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[53]  ADC0_ANP9_PD5 (46) */
    /* ----------------------------------------------------------- */
       SIU.PCR[53].R = 0x0000;
             /*	Selected Function : PD5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[54]  ADC0_ANP10_PD6 (47) */
    /* ----------------------------------------------------------- */
       SIU.PCR[54].R = 0x0000;
             /*	Selected Function : PD6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[55]  ADC0_ANP11_PD7 (48) */
    /* ----------------------------------------------------------- */
       SIU.PCR[55].R = 0x0000;
             /*	Selected Function : PD7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[56]  ADC0_ANP12_PD8 (49) */
    /* ----------------------------------------------------------- */
       SIU.PCR[56].R = 0x0000;
             /*	Selected Function : PD8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[57]  ADC0_ANP13_PD9 (56) */
    /* ----------------------------------------------------------- */
       SIU.PCR[57].R = 0x0000;
             /*	Selected Function : PD9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[58]  ADC0_ANP14_PD10 (57) */
    /* ----------------------------------------------------------- */
       SIU.PCR[58].R = 0x0000;
             /*	Selected Function : PD10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[59]  ADC0_ANP15_PD11 (58) */
    /* ----------------------------------------------------------- */
       SIU.PCR[59].R = 0x0000;
             /*	Selected Function : PD11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[60]  PCS_0.5_eMIOS_0_24_ADC0_ANS4_PD12 (60) */
    /* ----------------------------------------------------------- */
       SIU.PCR[60].R = 0x0901;
             /*	Selected Function : eMIOS_0_24 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[61]  PCS_1.0_eMIOS_0_25_ADC0_ANS5_PD13 (62) */
    /* ----------------------------------------------------------- */
       SIU.PCR[61].R = 0x0901;
             /*	Selected Function : eMIOS_0_25 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[62]  PCS_1.1_eMIOS_0_26_ADC0_ANS6_PD14 (64) */
    /* ----------------------------------------------------------- */
       SIU.PCR[62].R = 0x0901;
             /*	Selected Function : eMIOS_0_26 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[63]  PCS_1.2_eMIOS_0_27_ADC0_ANS7_PD15 (66) */
    /* ----------------------------------------------------------- */
       SIU.PCR[63].R = 0x0901;
             /*	Selected Function : eMIOS_0_27 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT E PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portE_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[64]  eMIOS_0_16_PE0 (6) */
    /* ----------------------------------------------------------- */
       SIU.PCR[64].R = 0x0001;
             /*	Selected Function : PE0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[65]  eMIOS_0_17_PE1 (8) */
    /* ----------------------------------------------------------- */
       SIU.PCR[65].R = 0x0001;
             /*	Selected Function : PE1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[66]  eMIOS_0_18_SIN_1_PE2 (89) */
    /* ----------------------------------------------------------- */
       SIU.PCR[66].R = 0x0201;
             /*	Selected Function : PE2 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[67]  eMIOS_0_19_SOUT_1_PE3 (90) */
    /* ----------------------------------------------------------- */
       SIU.PCR[67].R = 0x0201;
             /*	Selected Function : PE3 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[68]  eMIOS_0_20_SCK_1_PE4 (93) */
    /* ----------------------------------------------------------- */
       SIU.PCR[68].R = 0x0A01;
             /*	Selected Function : SCK_1 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[69]  eMIOS_0_21_PCS_1.0_ADC_MA2_PE5 (94) */
    /* ----------------------------------------------------------- */
       SIU.PCR[69].R = 0x0001;
             /*	Selected Function : PE5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[70]  eMIOS_0_22_PCS_0.3_ADC_MA1_PE6 (95) */
    /* ----------------------------------------------------------- */
       SIU.PCR[70].R = 0x0001;
             /*	Selected Function : PE6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[71]  eMIOS_0_23_PCS_0.2_ADC_MA0_PE7 (96) */
    /* ----------------------------------------------------------- */
       SIU.PCR[71].R = 0x0001;
             /*	Selected Function : PE7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[72]  CNTX_2_eMIOS_0_22_PE8 (9) */
    /* ----------------------------------------------------------- */
       SIU.PCR[72].R = 0x0A01;
             /*	Selected Function : eMIOS_0_22 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[73]  eMIOS_0_23_CNRX_2_PE9 (10) */
    /* ----------------------------------------------------------- */
       SIU.PCR[73].R = 0x0001;
             /*	Selected Function : PE9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[74]  TXD_3_PCS_1.3_PE10 (11) */
    /* ----------------------------------------------------------- */
       SIU.PCR[74].R = 0x0A01;
             /*	Selected Function : PCS_1.3          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[75]  RXD_3_PCS_1.4_PE11 (13) */
    /* ----------------------------------------------------------- */
       SIU.PCR[75].R = 0x0A01;
             /*	Selected Function : PCS_1.4          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[76]  SIN_2_PE12 (76) */
    /* ----------------------------------------------------------- */
       SIU.PCR[76].R = 0x0001;
             /*	Selected Function : PE12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT H PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portH_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[121]  TCK_PH9 (88) */
    /* ----------------------------------------------------------- */
       SIU.PCR[121].R = 0x4903;
             /*	Selected Function : TCK          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[122]  TMS_PH10 (81) */
    /* ----------------------------------------------------------- */
       SIU.PCR[122].R = 0x4903;
             /*	Selected Function : TMS          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

}


/* ----------------------------------------------------------- */
/*               SIU General PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_general_init_fnc(void)
{

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Clock Prescaler Register- IFCPR    */
    /* ----------------------------------------------------------- */
        SIU.IFCPR.R = 0x00000000;
 		    /* Filter Clock Prescalar:- 1     */

    /* ----------------------------------------------------------- */
    /*   Interrupt Request Enable Register- IRER    */
    /* ----------------------------------------------------------- */
        SIU.IRER.R = 0x00000000;
             /* Edge Trigger External Interrupt 0 Enable :-Disabled */
             /* Edge Trigger External Interrupt 1 Enable :-Disabled */
             /* Edge Trigger External Interrupt 2 Enable :-Disabled */
             /* Edge Trigger External Interrupt 3 Enable :-Disabled */
             /* Edge Trigger External Interrupt 4 Enable :-Disabled */
             /* Edge Trigger External Interrupt 5 Enable :-Disabled */
             /* Edge Trigger External Interrupt 6 Enable :-Disabled */
             /* Edge Trigger External Interrupt 7 Enable :-Disabled */
             /* Edge Trigger External Interrupt 8 Enable :-Disabled */
             /* Edge Trigger External Interrupt 9 Enable :-Disabled */
             /* Edge Trigger External Interrupt 10 Enable :-Disabled */
             /* Edge Trigger External Interrupt 11 Enable :-Disabled */

    /* ----------------------------------------------------------- */
    /*   External IRQ Rising-Edge Event Enable Register - IREER    */
    /* ----------------------------------------------------------- */
        SIU.IREER.R = 0x00000000;

             /* NMI Rising-Edge Event : Disabled */
             /* IRQ 0 Rising-Edge Event : Disabled */
             /* IRQ 1 Rising-Edge Event : Disabled */
             /* IRQ 2 Rising-Edge Event : Disabled */
             /* IRQ 3 Rising-Edge Event : Disabled */
             /* IRQ 4 Rising-Edge Event : Disabled */
             /* IRQ 5 Rising-Edge Event : Disabled */
             /* IRQ 6 Rising-Edge Event : Disabled */
             /* IRQ 7 Rising-Edge Event : Disabled */
             /* IRQ 8 Rising-Edge Event : Disabled */
             /* IRQ 9 Rising-Edge Event : Disabled */
             /* IRQ 10 Rising-Edge Event : Disabled */
             /* IRQ 11 Rising-Edge Event : Disabled */

    /* ----------------------------------------------------------- */
    /*   External IRQ Falling-Edge Event Enable Register - IFEER   */
    /* ----------------------------------------------------------- */
        SIU.IFEER.R = 0x00000000;

             /* NMI Falling-Edge Event : Disabled */
             /* IRQ 0 Falling-Edge Event : Disabled */
             /* IRQ 1 Falling-Edge Event : Disabled */
             /* IRQ 2 Falling-Edge Event : Disabled */
             /* IRQ 3 Falling-Edge Event : Disabled */
             /* IRQ 4 Falling-Edge Event : Disabled */
             /* IRQ 5 Falling-Edge Event : Disabled */
             /* IRQ 6 Falling-Edge Event : Disabled */
             /* IRQ 7 Falling-Edge Event : Disabled */
             /* IRQ 8 Falling-Edge Event : Disabled */
             /* IRQ 9 Falling-Edge Event : Disabled */
             /* IRQ 10 Falling-Edge Event : Disabled */
             /* IRQ 11 Falling-Edge Event : Disabled */

    /* ----------------------------------------------------------- */
    /*    Interrupt Filter Enable Register - IFER    */
    /* ----------------------------------------------------------- */
        SIU.IFER.R = 0x00000000;
             /* Analog glitch filter on External Input 0 Pad:- Disabled */
             /* Analog glitch filter on External Input 1 Pad:- Disabled */
             /* Analog glitch filter on External Input 2 Pad:- Disabled */
             /* Analog glitch filter on External Input 3 Pad:- Disabled */
             /* Analog glitch filter on External Input 4 Pad:- Disabled */
             /* Analog glitch filter on External Input 5 Pad:- Disabled */
             /* Analog glitch filter on External Input 6 Pad:- Disabled */
             /* Analog glitch filter on External Input 7 Pad:- Disabled */
             /* Analog glitch filter on External Input 8 Pad:- Disabled */
             /* Analog glitch filter on External Input 9 Pad:- Disabled */
             /* Analog glitch filter on External Input 10 Pad:- Disabled */
             /* Analog glitch filter on External Input 11 Pad:- Disabled */

    /* ----------------------------------------------------------- */
    /*          NMI Configuration Register - NCR       */
    /* ----------------------------------------------------------- */
        WKUP.NCR.R = 0x00000000;
             /* NMI Destination Source Select:- Non-maskable interrupt */
             /* NMI Rising Edge Trigger Event:- Disabled  */
             /* NMI Falling Edge Trigger Event:- Disabled  */
             /* Analog glitch filter on NMI Input pad:- Disabled    */

        WKUP.NCR.B.NLOCK = 0;
             /* NMI Configuration Lock:- Disabled */
    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register0- IFMC0    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[0].R = 0x00000000;
        /* External Interrupt 0 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register1- IFMC1    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[1].R = 0x00000000;
        /* External Interrupt 1 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register2- IFMC2    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[2].R = 0x00000000;
        /* External Interrupt 2 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register3- IFMC3    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[3].R = 0x00000000;
        /* External Interrupt 3 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register4- IFMC4    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[4].R = 0x00000000;
        /* External Interrupt 4 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register5- IFMC5    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[5].R = 0x00000000;
        /* External Interrupt 5 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register6- IFMC6    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[6].R = 0x00000000;
        /* External Interrupt 6 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register7- IFMC7    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[7].R = 0x00000000;
        /* External Interrupt 7 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register8- IFMC8    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[8].R = 0x00000000;
        /* External Interrupt 8 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register9- IFMC9    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[9].R = 0x00000000;
        /* External Interrupt 9 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register10- IFMC10    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[10].R = 0x00000000;
        /* External Interrupt 10 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register11- IFMC11    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[11].R = 0x00000000;
        /* External Interrupt 11 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Wakeup Request Enable Register - WRER    */
    /* ----------------------------------------------------------- */
        WKUP.WRER.R = 0x00000000;
             /* Edge Trigger External Wakeup 2 Enable :-Disabled */
             /* Edge Trigger External Wakeup 3 Enable :-Disabled */
             /* Edge Trigger External Wakeup 4 Enable :-Disabled */
             /* Edge Trigger External Wakeup 5 Enable :-Disabled */
             /* Edge Trigger External Wakeup 6 Enable :-Disabled */
             /* Edge Trigger External Wakeup 7 Enable :-Disabled */
             /* Edge Trigger External Wakeup 8 Enable :-Disabled */
             /* Edge Trigger External Wakeup 9 Enable :-Disabled */
             /* Edge Trigger External Wakeup 10 Enable :-Disabled */
             /* Edge Trigger External Wakeup 11 Enable :-Disabled */
             /* Edge Trigger External Wakeup 12 Enable :-Disabled */
             /* Edge Trigger External Wakeup 13 Enable :-Disabled */
             /* Edge Trigger External Wakeup 14 Enable :-Disabled */
             /* Edge Trigger External Wakeup 19 Enable :-Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Interrupt Request Enable Register - WIRER    */
    /* ----------------------------------------------------------- */
        WKUP.IRER.R = 0x00000000;
             /* Edge Trigger External Wakeup Interrupt 2 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 3 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 4 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 5 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 6 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 7 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 8 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 9 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 10 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 11 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 12 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 13 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 14 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 19 Enable :-Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Rising-Edge Event Enable Register - WIREER    */
    /* ----------------------------------------------------------- */
        WKUP.WIREER.R = 0x00000000;
             /* Wakeup 2 Rising-Edge Event :Disabled */
             /* Wakeup 3 Rising-Edge Event :Disabled */
             /* Wakeup 4 Rising-Edge Event :Disabled */
             /* Wakeup 5 Rising-Edge Event :Disabled */
             /* Wakeup 6 Rising-Edge Event :Disabled */
             /* Wakeup 7 Rising-Edge Event :Disabled */
             /* Wakeup 8 Rising-Edge Event :Disabled */
             /* Wakeup 9 Rising-Edge Event :Disabled */
             /* Wakeup 10 Rising-Edge Event :Disabled */
             /* Wakeup 11 Rising-Edge Event :Disabled */
             /* Wakeup 12 Rising-Edge Event :Disabled */
             /* Wakeup 13 Rising-Edge Event :Disabled */
             /* Wakeup 14 Rising-Edge Event :Disabled */
             /* Wakeup 19 Rising-Edge Event :Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Falling-Edge Event Enable Register - WIFEER    */
    /* ----------------------------------------------------------- */
        WKUP.WIFEER.R = 0x00000000;
             /* Wakeup 2 Falling-Edge Event :Disabled */
             /* Wakeup 3 Falling-Edge Event :Disabled */
             /* Wakeup 4 Falling-Edge Event :Disabled */
             /* Wakeup 5 Falling-Edge Event :Disabled */
             /* Wakeup 6 Falling-Edge Event :Disabled */
             /* Wakeup 7 Falling-Edge Event :Disabled */
             /* Wakeup 8 Falling-Edge Event :Disabled */
             /* Wakeup 9 Falling-Edge Event :Disabled */
             /* Wakeup 10 Falling-Edge Event :Disabled */
             /* Wakeup 11 Falling-Edge Event :Disabled */
             /* Wakeup 12 Falling-Edge Event :Disabled */
             /* Wakeup 13 Falling-Edge Event :Disabled */
             /* Wakeup 14 Falling-Edge Event :Disabled */
             /* Wakeup 19 Falling-Edge Event :Disabled */

    /* ----------------------------------------------------------- */
    /*    Wakeup/Interrupt Filter Enable Register - WIFER    */
    /* ----------------------------------------------------------- */
        WKUP.WIFER.R = 0x00000000;
             /* Analog glitch filter on External Input2 Pad:- Disabled */
             /* Analog glitch filter on External Input3 Pad:- Disabled */
             /* Analog glitch filter on External Input4 Pad:- Disabled */
             /* Analog glitch filter on External Input5 Pad:- Disabled */
             /* Analog glitch filter on External Input6 Pad:- Disabled */
             /* Analog glitch filter on External Input7 Pad:- Disabled */
             /* Analog glitch filter on External Input8 Pad:- Disabled */
             /* Analog glitch filter on External Input9 Pad:- Disabled */
             /* Analog glitch filter on External Input10 Pad:- Disabled */
             /* Analog glitch filter on External Input11 Pad:- Disabled */
             /* Analog glitch filter on External Input12 Pad:- Disabled */
             /* Analog glitch filter on External Input13 Pad:- Disabled */
             /* Analog glitch filter on External Input14 Pad:- Disabled */
             /* Analog glitch filter on External Input19 Pad:- Disabled */



    /* ----------------------------------------------------------- */
    /*    Wakeup/Interrupt Pull up Enable Register - WIPUER    */
    /* ----------------------------------------------------------- */
        WKUP.WIPUER.R = 0x00000000;
           /* Pullup an unconnected wakeup/interrupt 2
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 3
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 4
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 5
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 6
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 7
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 8
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 9
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 10
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 11
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 12
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 13
                               input to a value of ¡®1¡¯ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 14
                               input to a value of ¡®1¡¯ :-Disabled */
          /* Pullup an unconnected wakeup 19
                               input to a value of ¡®1¡¯ :-Disabled */
}


/* ----------------------------------------------------------- */
/*                 SIU Parallel PORT PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_parallel_port_init_fnc(void)
{
  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 0        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[0].R = 0x00000000;
           /*   Port A Mask: 0x0000       */
           /*   Port A Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 1        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[1].R = 0x00000000;
           /*   Port B Mask: 0x0000       */
           /*   Port B Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 2        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[2].R = 0x00000000;
           /*   Port C Mask: 0x0000       */
           /*   Port C Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 3        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[3].R = 0x00000000;
           /*   Port D Mask: 0x0000       */
           /*   Port D Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 4        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[4].R = 0x00000000;
           /*   Port E Mask: 0x0000       */
           /*   Port E Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 7        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[7].R = 0x00000000;
           /*   Port H Mask: 0x0000       */
           /*   Port H Data: 0x0000       */


}


/* ----------------------------------------------------------- */
/*               SIU Unused Pins Configuration                 */
/* ----------------------------------------------------------- */
void siu_unused_pins_init_fnc(void)
{
}


/* ----------------------------------------------------------- */
/*               SIU PSMI PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_psmi_init_fnc(void)
{
/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[0]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[0].R = 0x00;
                /*Function Pad Selected CAN1_RXD :- PCR35*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[1]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[1].R = 0x00;
                /*Function Pad Selected CAN2_RXD :- PCR73*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[2]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[2].R = 0x00;
                /*Function Pad Selected CAN3_RXD :- PCR36*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[5]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[5].R = 0x00;
                /*Function Pad Selected DSPI0_SSCK :- PCR14*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[6]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[6].R = 0x00;
                /*Function Pad Selected DSPI0_SS :- PCR14*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[7]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[7].R = 0x01;
                /*Function Pad Selected DSPI1_SSCK :- PCR68*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[8]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[8].R = 0x00;
                /*Function Pad Selected DSPI1_SIN :- PCR36*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[9]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[9].R = 0x00;
                /*Function Pad Selected DSPI1_SS :- PCR35*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[10]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[10].R = 0x00;
                /*Function Pad Selected DSPI2_SSCK :- PCR46*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[11]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[11].R = 0x00;
                /*Function Pad Selected DSPI2_SIN :- PCR44*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[12]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[12].R = 0x00;
                /*Function Pad Selected DSPI2_SS :- PCR47*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[13]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[13].R = 0x00;
                /*Function Pad Selected EMIOS0_CH3 :- PCR3*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[14]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[14].R = 0x00;
                /*Function Pad Selected EMIOS0_CH4 :- PCR4*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[15]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[15].R = 0x00;
                /*Function Pad Selected EMIOS0_CH5 :- PCR5*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[16]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[16].R = 0x00;
                /*Function Pad Selected EMIOS0_CH6 :- PCR6*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[17]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[17].R = 0x00;
                /*Function Pad Selected EMIOS0_CH7 :- PCR7*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[18]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[18].R = 0x00;
                /*Function Pad Selected EMIOS0_CH10 :- PCR10*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[19]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[19].R = 0x00;
                /*Function Pad Selected EMIOS0_CH11 :- PCR11*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[20]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[20].R = 0x00;
                /*Function Pad Selected EMIOS0_CH12 :- PCR44*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[21]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[21].R = 0x00;
                /*Function Pad Selected EMIOS0_CH13 :- PCR45*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[22]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[22].R = 0x00;
                /*Function Pad Selected EMIOS0_CH14 :- PCR46*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[23]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[23].R = 0x01;
                /*Function Pad Selected EMIOS0_CH22 :- PCR72*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[24]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[24].R = 0x00;
                /*Function Pad Selected EMIOS0_CH23 :- PCR71*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[25]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[25].R = 0x00;
                /*Function Pad Selected EMIOS0_CH24 :- PCR60*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[26]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[26].R = 0x00;
                /*Function Pad Selected EMIOS0_CH25 :- PCR61*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[27]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[27].R = 0x00;
                /*Function Pad Selected EMIOS0_CH26 :- PCR62*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[28]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[28].R = 0x00;
                /*Function Pad Selected EMIOS0_CH27 :- PCR63*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[29]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[29].R = 0x00;
                /*Function Pad Selected I2C_SCL :- PCR11*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[30]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[30].R = 0x00;
                /*Function Pad Selected I2C_SDA :- PCR10*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[31]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[31].R = 0x00;
                /*Function Pad Selected LIN3_RX :- PCR8*/

}



 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

