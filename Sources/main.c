#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"



int main(void) {
  volatile int i = 0;

  sys_init_fnc();
  

  SIU.GPDO[68].B.PDO = 0;
  SIU.GPDO[69].B.PDO = 1;
  SIU.GPDO[70].B.PDO = 1;
  SIU.GPDO[71].B.PDO = 0;
  
  /* Loop forever */
  for (;;) {
    i++;
  }
}



