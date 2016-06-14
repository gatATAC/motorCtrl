/* Data Runtime Environment is a pool of global variables that can be shared through all the application.  It acts as a centralized data base for the functionality */

#include "gttc_types.h"
#include "prj_cfg.h"
#include "prj_dre.h"

t_dre dre;

void dreInit(void){
#ifdef CFG_USE_RPI
  uint8_t i;
  for (i=0;i<NUM_LEDS;i++){
    dre.ledState[i] = LOW;             // ledState used to set the LED
  }
  dre.rpiStatus = RPI_STATUS_UNKNOWN;
#endif
#ifdef CFG_USE_MOTORCTRL
  dre.direction=CFG_MOTORCTRL_DIR_QUIET;
  dre.last_direction=dre.direction;
#endif
}