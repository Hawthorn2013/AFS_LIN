/*
 * bsp.c
 *
 *  Created on: Mar 27, 2016
 *      Author: JiaoJian
 */

#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"

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
	LINFLEX_0 .LINCR2.B.HTRQ = 1;
	return 0;
}
