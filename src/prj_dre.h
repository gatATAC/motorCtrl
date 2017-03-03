/* Data Runtime Environment is a pool of global variables that can be shared through all the application.  It acts as a centralized data base for the functionality */

#ifndef _PRJ_DRE_H
#define _PRJ_DRE_H

#include "gttc_types.h"
#include "prj_cfg.h"
#include "prj_input.h"
#include "prj_output.h"
#include "ProjectTypes.h"

#ifdef CFG_USE_RPI

#define RPI_STATUS_UNKNOWN 0
#define RPI_STATUS_INIT 1
#define RPI_STATUS_READY 2
#define RPI_STATUS_GOINGOFF 3
#define RPI_STATUS_OFF 4
#define RPI_STATUS_MAX RPI_STATUS_OFF
#define RPI_STATUS_MIN RPI_STATUS_UNKNOWN
#endif

typedef struct {

  /*** Input ***/
  /** Led statuses **/
  uint8_t ledState[NUM_LEDS];             // ledState used to set the LED
  /** Button statuses **/
  uint8_t buttonState[NUM_BUTTONS];         // variable for reading the pushbutton status

#ifdef CFG_USE_TM1638
  byte keys;
#endif

#ifdef CFG_USE_RPI
  uint8_t rpiStatus;
#endif

#ifdef CFG_USE_RGB_LEDS
  uint8_t redLight;
  uint8_t greenLight;
  uint8_t blueLight;
#endif

#ifdef CFG_USE_MOTORCTRL
uint8_t motorCtrlDuty;
bool pwm_step_done;
uint32_t pwm_wait_timer;
uint8_t direction;
uint8_t last_direction;
#endif

#ifdef CFG_USE_BCDPOT
  uint8_t potState[CFG_BCDPOT_PIN_NUMBER];         // variable for reading the pushbutton status
#endif

#ifdef CFG_USE_SLIDER
  uint16_t sliderA;
#ifdef CFG_USE_SLIDER_DTB
  uint16_t sliderB;
#endif  
#endif  

#ifdef CFG_USE_ACCELSTEPPER
  bool stepper1status;
  long currentTarget;
  float maxSpeed;
#endif  

#ifdef CFG_USE_ENDSWITCH_1
  bool endswitch1;
#endif
#ifdef CFG_USE_ENDSWITCH_2
  bool endswitch2;
#endif
}
t_dre;

extern t_dre dre;

#ifdef __cplusplus
extern "C"
#endif
void dreInit(void);

#endif // _PRJ_DRE_H
