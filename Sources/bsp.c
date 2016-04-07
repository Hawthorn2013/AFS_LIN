/*
 * bsp.c
 *
 *  Created on: Mar 27, 2016
 *      Author: JiaoJian
 */

#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"
#include "dspi_var.h"

volatile int LINFLEX_0_INTC_TXI_triggered = 0;
volatile int LINFLEX_0_INTC_RXI_triggered = 0;
volatile int LINFLEX_0_INTC_ERR_triggered = 0;
volatile uint32_t LINFLEX_0_SR = 0x00000000;

void PIT_0_triggered(void);

void Test_LIN(void) {
	LINFLEX_0 .BDRM.R = 0xFF1055FF; /* Load buffer data most significant bytes */
	LINFLEX_0 .BDRL.R = 0xAAAAAAAA; /* Load buffer data least significant bytes */
	LINFLEX_0 .BIDR.R = 0x00001F35; /* Init header:  ID=0x35, 8 B, Tx, enh. cksum*/
	LINFLEX_0 .LINCR2.B.HTRQ = 1; /* Request header transmission */
}

void Delay_us(uint32_t us) {
	volatile int i = 0;
	for (i = 0; i < us; i++) {
		volatile int j = 8;
		while (j--)
			;
	}
}

void Delay_ms(uint32_t ms) {
	volatile int i = 0;
	for (i = 0; i < ms; i++) {
		Delay_us(1000);
	}
}

int LIN_TX(int id, int len, const uint8_t *data) {
	if (id < 0 || id > 0x3D) {
		return 1;
	}
	switch (len) {
	case 8:
		LINFLEX_0 .BDRM.B.DATA7 = data[7];
	case 7:
		LINFLEX_0 .BDRM.B.DATA6 = data[6];
	case 6:
		LINFLEX_0 .BDRM.B.DATA5 = data[5];
	case 5:
		LINFLEX_0 .BDRM.B.DATA4 = data[4];
	case 4:
		LINFLEX_0 .BDRL.B.DATA3 = data[3];
	case 3:
		LINFLEX_0 .BDRL.B.DATA2 = data[2];
	case 2:
		LINFLEX_0 .BDRL.B.DATA1 = data[1];
	case 1:
		LINFLEX_0 .BDRL.B.DATA0 = data[0];
		break;
	default:
		return 2;
		break;
	}
	LINFLEX_0 .BIDR.B.CCS = 1;
	LINFLEX_0 .BIDR.B.DFL = len - 1;
	LINFLEX_0 .BIDR.B.DIR = 1;
	LINFLEX_0 .BIDR.B.ID = id;
	LINFLEX_0_INTC_TXI_triggered = 0;
	LINFLEX_0_INTC_ERR_triggered = 0;
	LINFLEX_0 .LINCR2.B.HTRQ = 1;
	while (!(LINFLEX_0_INTC_TXI_triggered | LINFLEX_0_INTC_ERR_triggered))
		;
	if (LINFLEX_0_INTC_TXI_triggered) {
		LINFLEX_0_INTC_TXI_triggered = 0;
		LED2 = 0;
		LED3 = 1;
		return 0;
	} else if (LINFLEX_0_INTC_ERR_triggered) {
		LINFLEX_0_INTC_ERR_triggered = 0;
		LED2 = 1;
		LED3 = 0;
		return 3;
	}
}

int LIN_RX(int id, int len, uint8_t *data) {
	if (id < 0 || id > 0x3D) {
		return 1;
	} else if (len < 0 || len > 8) {
		return 2;
	}
	LINFLEX_0 .BIDR.B.CCS = 1;
	LINFLEX_0 .BIDR.B.DFL = len - 1;
	LINFLEX_0 .BIDR.B.DIR = 0;
	LINFLEX_0 .BIDR.B.ID = id;
	LINFLEX_0_INTC_RXI_triggered = 0;
	LINFLEX_0_INTC_ERR_triggered = 0;
	LINFLEX_0 .LINCR2.B.HTRQ = 1;
	while (!(LINFLEX_0_INTC_RXI_triggered | LINFLEX_0_INTC_ERR_triggered))
		;
	if (LINFLEX_0_INTC_RXI_triggered) {
		LINFLEX_0_INTC_RXI_triggered = 0;
		switch (len) {
		uint32_t bdrm = LINFLEX_0 .BDRM.R;
		uint32_t bdrl = LINFLEX_0 .BDRL.R;
	case 8:
		data[7] = (uint8_t) (bdrm >> 24);
	case 7:
		data[6] = (uint8_t) (bdrm >> 16);
	case 6:
		data[5] = (uint8_t) (bdrm >> 8);
	case 5:
		data[4] = (uint8_t) (bdrm >> 0);
	case 4:
		data[3] = (uint8_t) (bdrl >> 24);
	case 3:
		data[2] = (uint8_t) (bdrl >> 16);
	case 2:
		data[1] = (uint8_t) (bdrl >> 8);
	case 1:
		data[0] = (uint8_t) (bdrl >> 0);
		break;
		}
		return 0;
	} else if (LINFLEX_0_INTC_ERR_triggered) {
		LINFLEX_0_INTC_ERR_triggered = 0;
		return 3;
	}
}

void PIT_0_triggered(void) {
	static uint32_t cnt_33905 = 0;
	if (cnt_33905 >= 19) {
		volatile uint16_t rev_33905 = 0x0000;
		cnt_33905 = 0;
		rev_33905 = Swap_data_with_33905(0x5A00);
	}
	cnt_33905++;
}

uint16_t Swap_data_with_33905(uint16_t data) {
	uint16_t rev;
	DSPI_1 .PUSHR.R = (DSPI1_TxQUE[0] & 0xFFFF0000) | data;
	while (!DSPI_1 .SR.B.TCF)
		;
	DSPI_1 .SR.B.TCF = 1;
	rev = (uint16_t)DSPI_1.POPR.B.RXDATA;
	return rev;
}
