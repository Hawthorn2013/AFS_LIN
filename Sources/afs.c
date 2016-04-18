/*
 * afs.c
 *
 *  Created on: Apr 10, 2016
 *      Author: JiaoJian
 */

#include "stddef.h"
#include "bsp.h"
#include "afs.h"

static int (*AFS_LIN_TX)(int id, int len, const uint8_t *data) = NULL;
static int (*AFS_LIN_RX)(int id, int len, uint8_t *data) = NULL;
static int afs_afl_status_feedback = 0;

void AFS_Set_LIN_Interface(int LIN_TX(int id, int len, const uint8_t *data),
		int LIN_RX(int id, int len, uint8_t *data)) {
	AFS_LIN_TX = LIN_TX;
	AFS_LIN_RX = LIN_RX;
}

void AFS_AFL_Init_Test(void) {
	uint8_t data_t[4] = {0x02, 0x46, 0x96, 0x77};
	uint8_t data_r[4];
	AFS_LIN_TX(0x20, 4, data_t);
	AFS_LIN_RX(0x24, 4, data_r);
	AFS_LIN_RX(0x24, 4, data_r);
}
