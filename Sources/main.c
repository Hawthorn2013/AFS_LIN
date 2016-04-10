#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/rappid_utils.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"
    int main(void) {
	volatile int i = 0;
	sys_init_fnc();
	INIT_33905();
	EnableExternalInterrupts();
	/* Loop forever */
	for (;;) {
		uint8_t data[8] = {0xAA, 0xAA, 0xAA, 0xAA, 0xFF, 0x55, 0x10, 0xFF};
		i++;
		Delay_ms(500);
		LED1 = ~LED1;
		LIN_TX(0x35, sizeof(data), data);

	}
}

