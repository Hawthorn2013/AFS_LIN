#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/rappid_utils.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"
#include "afs.h"
#include <stdio.h>

int main(void) {
	volatile int i = 0;
	sys_init_fnc();
	INIT_33905();
	EnableExternalInterrupts();
	AFS_Set_LIN_Interface(LIN_TX, LIN_RX);
	AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x07, 0x07);
	AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x04, 0x04);
	AFS_Send_AFL_Motor_CMD_Frame(0x02, 0x46, 0x96, 0x02, 0x02);
	/* Loop forever */
	for (;;) {
		i++;
		Delay_ms(500);
		LED1 = ~LED1;
		AFS_AFL_Init_Test();
	}
}

