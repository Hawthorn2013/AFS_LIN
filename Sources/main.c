#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/rappid_utils.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"
    int main(void) {
	volatile int i = 0;
	sys_init_fnc();
	//Delay_ms(50000);
    Swap_data_with_33905(0x5E18);
    
   //Swap_data_with_33905(0x4E28);
	Swap_data_with_33905(0x66C0); /*write LIN1*/
	Swap_data_with_33905(0x68C0); /*write LIN2*/
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

