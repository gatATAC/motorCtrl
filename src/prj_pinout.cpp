#include "gttc_types.h"
#include "prj_cfg.h"
#include "prj_pinout.h"

#ifdef CFG_USE_TM1638
#include <TM1638.h>
extern TM1638 module;
const uint8_t ledPin[]={13,12,11,10};
const uint8_t buttonPin[]={2,3,4,5};
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

void pinoutInit(void){

uint8_t i;
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

#ifdef CFG_USE_TM1638
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
analogWriteFrequency(CFG_MOTORCTRL_PWM_FW_PIN, CFG_MOTORCTRL_FREQUENCY);
analogWriteFrequency(CFG_MOTORCTRL_PWM_BW_PIN, CFG_MOTORCTRL_FREQUENCY);
#else
// Set pin 6's PWM frequency to 61 Hz (31250/1024 = 61)
setPwmFrequency(CFG_MOTORCTRL_PWM_FW_PIN, CFG_MOTORCTRL_PWM_FW_DIV);
// Set pin 5's PWM frequency to 61 Hz (62500/1024 = 61)
setPwmFrequency(CFG_MOTORCTRL_PWM_BW_PIN, CFG_MOTORCTRL_PWM_BW_DIV);
#endif
pinMode (CFG_MOTORCTRL_PWM_FW_PIN, OUTPUT);
pinMode (CFG_MOTORCTRL_PWM_BW_PIN, OUTPUT);
pinMode (CFG_MOTORCTRL_IN3_PIN, OUTPUT);
pinMode (CFG_MOTORCTRL_IN4_PIN, OUTPUT);

#endif
}
