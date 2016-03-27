#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"
#include "bsp.h"

int main(void) {
	volatile int i = 0;
	sys_init_fnc();
	/* Loop forever */
	for (;;) {
		i++;
		Delay_ms(500);
		SIU .GPDO[68].B.PDO = ~SIU .GPDO[68].B.PDO;
	}
}

