#include "../RAppIDSrc/rappid_ref.h"
#include "../RAppIDSrc/sys_init.h"



int main(void) {
  volatile int i = 0;

  sys_init_fnc();
  


  /* Loop forever */
  for (;;) {
    i++;
  }
}



