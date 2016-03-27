/*
 * bsp.c
 *
 *  Created on: Mar 27, 2016
 *      Author: JiaoJian
 */

#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"

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
