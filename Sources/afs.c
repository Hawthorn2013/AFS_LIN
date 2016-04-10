/*
 * afs.c
 *
 *  Created on: Apr 10, 2016
 *      Author: JiaoJian
 */

#include "stddef.h"
#include "bsp.h"
#include "afs.h"

static int *AFS_LIN_TX(int id, int len, const uint8_t *data) = NULL;
static int *AFS_LIN_RX(int id, int len, uint8_t *data) = NULL;

void AFS_Set_LIN_Interface(int LIN_TX(int id, int len, const uint8_t *data),
		int LIN_RX(int id, int len, uint8_t *data)) {
	AFS_LIN_TX = LIN_TX;
	AFS_LIN_RX = LIN_RX;
}
