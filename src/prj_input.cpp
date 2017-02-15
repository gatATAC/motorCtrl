#include "prj_cfg.h"
#include "prj_input.h"
#include "prj_pinout.h"
#include "prj_dre.h"
#include "Arduino.h"

#ifdef CFG_USE_TM1638
#include <TM1638.h>

extern TM1638 module;
#endif

void prjInputInit(void){

}

void prjInput(void){
  uint8_t i;

#ifdef CFG_USE_TM1638
  byte keys = module.getButtons();
  for (i=0;i<NUM_BUTTONS;i++){
    dre.buttonState[i] = (keys & (0x01<<i))>0;
  }
  module.setLEDs(((keys & 0xF0) << 8) | (keys & 0xF));
#endif



#ifdef CFG_USE_BCDPOT
  for (i=0;i<CFG_BCDPOT_PIN_NUMBER;i++){
    dre.potState[i] = !digitalRead(potPin[i]);
  }
#endif

#ifdef CFG_USE_SLIDER
  dre.sliderA=analogRead(CFG_SLIDER_DTA_PIN);
#ifdef CFG_USE_SLIDER_DTB
  dre.sliderB=analogRead(CFG_SLIDER_DTB_PIN);
#endif
#endif

#ifdef CFG_USE_ENDSWITCH_1
  dre.endswitch1=digitalRead(CFG_ENDSWITCH_1_PIN);
#endif
#ifdef CFG_USE_ENDSWITCH_2
  dre.endswitch2=digitalRead(CFG_ENDSWITCH_2_PIN);
#endif
}
