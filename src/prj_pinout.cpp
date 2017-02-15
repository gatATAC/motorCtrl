#include "gttc_types.h"
#include "prj_cfg.h"
#include "prj_pinout.h"

#ifdef CFG_USE_TM1638
#include <TM1638.h>
extern TM1638 module;
#else
#ifdef CFG_USE_LEDS
const uint8_t ledPin[]={13,12,11,10};
#endif
#ifdef CFG_USE_BUTTONS
const uint8_t buttonPin[]={2,3,4,5};
#endif
#endif

#ifdef CFG_USE_RGB_LEDS
const uint8_t redLightPin = 3;
const uint8_t greenLightPin = 5;
const uint8_t blueLightPin = 6;
#endif

#ifdef CFG_USE_MOTORCTRL
#ifdef CFG_USE_TEENSY
#else
#include "pwmdriver.h"
#endif
#endif

#ifdef CFG_USE_BCDPOT
  const uint8_t potPin[]={CFG_BCDPOT_PIN1,CFG_BCDPOT_PIN2,CFG_BCDPOT_PIN3,CFG_BCDPOT_PIN4};
#endif

void pinoutInit(void){

uint8_t i;
#ifdef CFG_USE_BCDPOT
  for (i=0;i<CFG_BCDPOT_PIN_NUMBER;i++){
    // initialize the pushbutton pin as an input:
    pinMode(potPin[i], INPUT_PULLUP);
  }
#endif

#ifdef CFG_USE_ENDSWITCH_1
    pinMode(CFG_ENDSWITCH_1_PIN, INPUT_PULLUP);
#endif

#ifdef CFG_USE_ENDSWITCH_2
    pinMode(CFG_ENDSWITCH_2_PIN, INPUT_PULLUP);
#endif

#ifdef CFG_USE_SLIDER
  pinMode(CFG_SLIDER_DTA_PIN,INPUT);
#ifdef CFG_USE_SLIDER_DTB
  pinMode(CFG_SLIDER_DTB_PIN,INPUT);
#endif
#endif

#ifdef CFG_USE_BUTTONS
  for (i=0;i<NUM_BUTTONS;i++){
    // initialize the pushbutton pin as an input:
    pinMode(buttonPin[i], INPUT);
  }
#endif

#ifdef CFG_USE_RPI
  // set the digital pin as output:
  pinMode(LED_RPI_STATUS, OUTPUT);
#endif

#ifdef CFG_USE_TM16382
  module.setDisplayToDecNumber(101010, 0);
#else
#ifdef CFG_USE_LEDS
  for (i=0;i<NUM_LEDS;i++) {
    // set the digital pin as output:
    pinMode(ledPin[i], OUTPUT);
  }
#endif
#endif

#ifdef CFG_USE_RGB_LEDS
  pinMode(redLightPin,OUTPUT);
  pinMode(greenLightPin,OUTPUT);
  pinMode(blueLightPin,OUTPUT);
#endif

#ifdef CFG_USE_MOTORCTRL

#ifdef CFG_USE_TEENSY
//analogWriteFrequency(CFG_MOTORCTRL_PWM_PIN, CFG_MOTORCTRL_FREQUENCY);
#ifdef CFG_MOTORCTRL_DEBUGPWM_PIN
//analogWriteFrequency(CFG_MOTORCTRL_DEBUGPWM_PIN, CFG_MOTORCTRL_FREQUENCY);
#endif
#else
// Set pin 6's PWM frequency to 61 Hz (31250/1024 = 61)
setPwmFrequency(CFG_MOTORCTRL_PWM_PIN, CFG_MOTORCTRL_PWM_DIV);
// Set pin 5's PWM frequency to 61 Hz (62500/1024 = 61)
setPwmFrequency(CFG_MOTORCTRL_DEBUGPWM_PIN, CFG_MOTORCTRL_PWM_DIV);
#endif
pinMode (CFG_MOTORCTRL_PWM_PIN, OUTPUT);
#ifdef CFG_MOTORCTRL_DEBUGPWM_PIN
pinMode (CFG_MOTORCTRL_DEBUGPWM_PIN, OUTPUT);
#endif
pinMode (CFG_MOTORCTRL_IN3_PIN, OUTPUT);
pinMode (CFG_MOTORCTRL_IN4_PIN, OUTPUT);

#endif
}
