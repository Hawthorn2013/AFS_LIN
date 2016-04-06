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
 * file                   : dspi_init.c
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
 * Brief Description      : This File contains configuration for DSPI 
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file contain functions for configuration of
 *                         DSPI module and done initialization for clock and
 *                         transfer attributes,Interrupt request select,
 *                         Transmit and Receive queue.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "dspi_init.h"
#include "dspi_var.h"




void dspi_init_fnc (void) 
{
    dspi0_init_fnc();
    dspi1_init_fnc();
    dspi2_init_fnc();
}

void dspi0_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_0 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_0 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_0 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_0.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_0 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_0.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_0.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_0 Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_0.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_0 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_0.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 5 inactive state : Low    */
            /* Peripheral Chip Select Line 4 inactive state : Low    */
            /* Peripheral Chip Select Line 3 inactive state : Low    */
            /* Peripheral Chip Select Line 2 inactive state : Low    */
            /* Peripheral Chip Select Line 1 inactive state : Low    */
            /* Peripheral Chip Select Line 0 inactive state : Low    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_0 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_0.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_0.MCR.B.MDIS= 1;
            /* Module : Disable*/

}


void dspi1_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_1 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


    DSPI1_TxQUE[0] = 0x00015A00;
            /* Continuous Peripheral Chip Select : Disable    */
            /* Clock and Transfer Attributes Select : DSPI_CTAR0    */
            /* End of Queue : No    */
            /* Clear SPI_TCNT : No    */
            /* Peripheral Chip Select Pin 5 : Negate    */
            /* Peripheral Chip Select Pin 4 : Negate    */
            /* Peripheral Chip Select Pin 3 : Negate    */
            /* Peripheral Chip Select Pin 2 : Negate    */
            /* Peripheral Chip Select Pin 1 : Negate    */
            /* Peripheral Chip Select Pin 0 : Assert    */
            /* Data (Decimal Values Only) : 23040    */

/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_1 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_1 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_1.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_1 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_1.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_1.CTAR[0].R = 0x7A0B7703;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Trailing    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 5    */
            /* Baud Rate Prescaler : 7    */
            /* PCS to SCK Delay Scalar : 256    */
            /* After SCK Delay Scalar : 256    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 8    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[1].R = 0x38087726;
            /* Frame Size : 8    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 5    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 256    */
            /* After SCK Delay Scalar : 256    */
            /* Delay After Transfer Scalar : 8    */
            /* Baud rate Scalar : 64    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[4].R = 0x3C087726;
            /* Frame Size : 8    */
            /* Clock Polarity : High    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 5    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 256    */
            /* After SCK Delay Scalar : 256    */
            /* Delay After Transfer Scalar : 8    */
            /* Baud rate Scalar : 64    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_1 Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_1.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_1 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_1.MCR.R = 0x803F0000;
            /* Master/Slave Mode : Master    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 5 inactive state : High    */
            /* Peripheral Chip Select Line 4 inactive state : High    */
            /* Peripheral Chip Select Line 3 inactive state : High    */
            /* Peripheral Chip Select Line 2 inactive state : High    */
            /* Peripheral Chip Select Line 1 inactive state : High    */
            /* Peripheral Chip Select Line 0 inactive state : High    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Disable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_1 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_1.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_1.MCR.B.MDIS= 0;
            /* Module : Enable*/

}


void dspi2_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_2 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_2 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_2 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_2.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_2 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_2.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_2.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_2 Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_2.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_2 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_2.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 5 inactive state : Low    */
            /* Peripheral Chip Select Line 4 inactive state : Low    */
            /* Peripheral Chip Select Line 3 inactive state : Low    */
            /* Peripheral Chip Select Line 2 inactive state : Low    */
            /* Peripheral Chip Select Line 1 inactive state : Low    */
            /* Peripheral Chip Select Line 0 inactive state : Low    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_2 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_2.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_2.MCR.B.MDIS= 1;
            /* Module : Disable*/

}



 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

