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
	LINFLEX_0 .BDRM.R = 0x2020206F; /* Load buffer data most significant bytes */
	LINFLEX_0 .BDRL.R = 0x6C6C6548; /* Load buffer data least significant bytes */
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
