/*
 * afs.c
 *
 *  Created on: Apr 10, 2016
 *      Author: JiaoJian
 */

#include "stddef.h"
#include "bsp.h"
#include "afs.h"
#include <stdio.h>

static int (*AFS_LIN_TX)(int id, int len, const uint8_t *data) = NULL;
static int (*AFS_LIN_RX)(int id, int len, uint8_t *data) = NULL;
static int afs_afl_status_feedback = 0;

void AFS_Set_LIN_Interface(int LIN_TX(int id, int len, const uint8_t *data),
		int LIN_RX(int id, int len, uint8_t *data)) {
	AFS_LIN_TX = LIN_TX;
	AFS_LIN_RX = LIN_RX;
}

void AFS_AFL_Init_Test(void) {
	uint8_t data_r[4] = { 0x00, 0x00, 0x00, 0x00 };
	printf("Into AFS_AFL_Init_Test.\n");
	AFS_LIN_RX(0x24, 4, data_r);
	printf("data_r = 0x%2.2X%2.2X%2.2X%2.2X\n", data_r[0], data_r[1], data_r[2], data_r[3]);
	afs_afl_status_feedback = data_r[2];
	switch (afs_afl_status_feedback) {
	case 0x01:
	case 0x04:
		AFS_Send_AFL_Motor_CMD_Frame(0x03, 0x46, 0x96, 0x03, 0x03);
		break;
	case 0x02:
	case 0x05:
		AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x05, 0x05);
		break;
	case 0x06:
		AFS_Send_AFL_Motor_CMD_Frame(0x03, 0x46, 0x96, 0x03, 0x03);
		break;
	case 0x07:
		AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x05, 0x05);
		break;
	case 0x08:
		break;
	case 0x09:
		AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x04, 0x04);
		break;
	default:
		break;
	}
}

void AFS_Send_AFL_Motor_CMD_Frame(uint8_t status1, uint8_t pos_l, uint8_t pos_r,
		uint8_t status2_l, uint8_t status2_r) {
	uint8_t data_t[4];
	data_t[0] = status1;
	data_t[1] = pos_l;
	data_t[2] = pos_r;
	data_t[3] = (status2_l << 4) | status2_r;
	AFS_LIN_TX(0x20, 4, data_t);
}
